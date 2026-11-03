#include "Commands.hpp"

#include <Geode/ui/GeodeUI.hpp>
#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <map>
#include <optional>
#include <random>

using namespace geode::prelude;

namespace hc {
namespace {

#define CMD [](Args const& a) -> std::string
#define NEED_PL                                  \
    auto* pl = PlayLayer::get();                 \
    if (!pl) return "Not in a level.";

std::string num(double v) {
    char buf[48];
    std::snprintf(buf, sizeof buf, "%g", v);
    return buf;
}

bool toNum(std::string const& s, double& out) {
    if (s.empty()) return false;
    char* end = nullptr;
    out = std::strtod(s.c_str(), &end);
    return end && *end == '\0' && std::isfinite(out);
}

// no argument flips the current value; otherwise on/off/1/0/true/false/yes/no
std::optional<bool> parseToggle(Args const& a, bool current) {
    if (a.empty()) return !current;
    auto const& v = a[0];
    if (v == "on" || v == "1" || v == "true" || v == "yes") return true;
    if (v == "off" || v == "0" || v == "false" || v == "no") return false;
    return std::nullopt;
}

std::string onOff(bool b) { return b ? "ON" : "OFF"; }

std::mt19937& rng() {
    static std::mt19937 g{std::random_device{}()};
    return g;
}

enum class Mode { Cube, Ship, Ball, Ufo, Wave, Robot, Spider, Swing };

std::string setMode(Mode m, char const* name) {
    NEED_PL
    auto* p = pl->m_player1;
    if (!p) return "No player.";
    p->toggleFlyMode(false, false);
    p->toggleRollMode(false, false);
    p->toggleBirdMode(false, false);
    p->toggleDartMode(false, false);
    p->toggleRobotMode(false, false);
    p->toggleSpiderMode(false, false);
    p->toggleSwingMode(false, false);
    switch (m) {
        case Mode::Cube: break;
        case Mode::Ship: p->toggleFlyMode(true, true); break;
        case Mode::Ball: p->toggleRollMode(true, true); break;
        case Mode::Ufo: p->toggleBirdMode(true, true); break;
        case Mode::Wave: p->toggleDartMode(true, true); break;
        case Mode::Robot: p->toggleRobotMode(true, true); break;
        case Mode::Spider: p->toggleSpiderMode(true, true); break;
        case Mode::Swing: p->toggleSwingMode(true, true); break;
    }
    state().cheated = true;
    return std::string("Gamemode: ") + name;
}

std::vector<Command> build() {
    std::vector<Command> v;
    auto add = [&](char const* cat, char const* name, char const* usage, char const* desc,
                   std::function<std::string(Args const&)> fn) {
        v.push_back(Command{name, usage, desc, cat, std::move(fn)});
    };

    // ---------------------------------------------------------------- Cheats (10)
    add("Cheats", "noclip", "/noclip [on|off]", "Survive hazards", CMD {
        auto& s = state();
        auto t = parseToggle(a, s.noclip);
        if (!t) return "Usage: /noclip [on|off]";
        s.noclip = *t;
        if (s.noclip) s.cheated = true;
        return "Noclip " + onOff(s.noclip);
    });
    add("Cheats", "speed", "/speed <0.05-20>", "Game speed multiplier (speedhack)", CMD {
        if (a.empty()) return "Speed is " + num(state().speed);
        double x;
        if (!toNum(a[0], x)) return "Usage: /speed <0.05-20>";
        x = std::clamp(x, 0.05, 20.0);
        state().speed = static_cast<float>(x);
        if (x != 1.0) state().cheated = true;
        return "Speed set to " + num(x);
    });
    add("Cheats", "fps", "/fps <10-1000>", "Set the frame rate cap", CMD {
        double x;
        if (a.empty() || !toNum(a[0], x)) return "Usage: /fps <10-1000>";
        x = std::clamp(x, 10.0, 1000.0);
        CCDirector::sharedDirector()->setAnimationInterval(1.0 / x);
        return "FPS cap set to " + num(x);
    });
    add("Cheats", "safemode", "/safemode [on|off]", "Block completing runs that used cheats", CMD {
        auto& s = state();
        auto t = parseToggle(a, s.safemode);
        if (!t) return "Usage: /safemode [on|off]";
        s.safemode = *t;
        return "Safe mode " + onOff(s.safemode);
    });
    add("Cheats", "practice", "/practice [on|off]", "Toggle practice mode", CMD {
        NEED_PL
        bool cur = pl->m_isPracticeMode;
        auto t = parseToggle(a, cur);
        if (!t) return "Usage: /practice [on|off]";
        pl->togglePracticeMode(*t);
        return "Practice mode " + onOff(*t);
    });
    add("Cheats", "complete", "/complete", "Finish the level instantly", CMD {
        NEED_PL
        auto& s = state();

        if (s.safemode && s.cheated) {
            return "Blocked by safe mode. This run used cheats.";
        }

        pl->levelComplete();
        return "Level completed.";
    });
    add("Cheats", "reset", "/reset", "Restart the attempt", CMD {
        NEED_PL
        pl->resetLevel();
        return "Level reset.";
    });
    add("Cheats", "pause", "/pause", "Open the pause menu", CMD {
        NEED_PL
        pl->pauseGame(true);
        return "Paused.";
    });
    add("Cheats", "unlockall", "/unlockall [on|off]", "Unlock every icon and color", CMD {
        auto& s = state();
        auto t = parseToggle(a, s.unlockAll);
        if (!t) return "Usage: /unlockall [on|off]";
        s.unlockAll = *t;
        return "Unlock all " + onOff(s.unlockAll) + " (reopen the garage to see it)";
    });
    add("Cheats", "deaths", "/deaths", "Deaths blocked by noclip this attempt run", CMD {
        return "Blocked deaths: " + std::to_string(state().blocked);
    });

    // ---------------------------------------------------------------- Gamemode (8)
    add("Gamemode", "cube", "/cube", "Switch to cube", CMD { return setMode(Mode::Cube, "cube"); });
    add("Gamemode", "ship", "/ship", "Switch to ship", CMD { return setMode(Mode::Ship, "ship"); });
    add("Gamemode", "ball", "/ball", "Switch to ball", CMD { return setMode(Mode::Ball, "ball"); });
    add("Gamemode", "ufo", "/ufo", "Switch to UFO", CMD { return setMode(Mode::Ufo, "ufo"); });
    add("Gamemode", "wave", "/wave", "Switch to wave", CMD { return setMode(Mode::Wave, "wave"); });
    add("Gamemode", "robot", "/robot", "Switch to robot", CMD { return setMode(Mode::Robot, "robot"); });
    add("Gamemode", "spider", "/spider", "Switch to spider", CMD { return setMode(Mode::Spider, "spider"); });
    add("Gamemode", "swing", "/swing", "Switch to swing copter", CMD { return setMode(Mode::Swing, "swing"); });

    // ---------------------------------------------------------------- Player (10)
    add("Player", "mini", "/mini [on|off]", "Mini or normal size", CMD {
        NEED_PL
        static bool mini = false;
        auto t = parseToggle(a, mini);
        if (!t) return "Usage: /mini [on|off]";
        mini = *t;
        pl->m_player1->togglePlayerScale(mini, true);
        state().cheated = true;
        return "Mini " + onOff(mini);
    });
    add("Player", "flip", "/flip", "Flip gravity", CMD {
        NEED_PL
        pl->m_player1->flipGravity(!pl->m_player1->m_isUpsideDown, true);
        return "Gravity flipped.";
    });
    add("Player", "scale", "/scale <0.1-5>", "Set the player's visual scale", CMD {
        NEED_PL
        double x;
        if (a.empty() || !toNum(a[0], x)) return "Usage: /scale <0.1-5>";
        x = std::clamp(x, 0.1, 5.0);
        pl->m_player1->setScale(static_cast<float>(x));
        state().cheated = true;
        return "Scale set to " + num(x);
    });
    add("Player", "opacity", "/opacity <0-255>", "Set the player's opacity", CMD {
        NEED_PL
        double x;
        if (a.empty() || !toNum(a[0], x)) return "Usage: /opacity <0-255>";
        x = std::clamp(x, 0.0, 255.0);
        pl->m_player1->setOpacity(static_cast<GLubyte>(x));
        return "Opacity set to " + num(x);
    });
    add("Player", "hideplayer", "/hideplayer", "Make the player invisible", CMD {
        NEED_PL
        pl->m_player1->setVisible(false);
        return "Player hidden.";
    });
    add("Player", "showplayer", "/showplayer", "Make the player visible again", CMD {
        NEED_PL
        pl->m_player1->setVisible(true);
        return "Player shown.";
    });
    add("Player", "jump", "/jump", "Make the player jump once", CMD {
        NEED_PL
        pl->m_player1->pushButton(PlayerButton::Jump);
        pl->m_player1->releaseButton(PlayerButton::Jump);
        return "Jumped.";
    });
    add("Player", "tp", "/tp <x> <y>", "Teleport the player", CMD {
        NEED_PL
        double x, y;
        if (a.size() < 2 || !toNum(a[0], x) || !toNum(a[1], y)) return "Usage: /tp <x> <y>";
        pl->m_player1->setPosition({static_cast<float>(x), static_cast<float>(y)});
        state().cheated = true;
        return "Teleported to " + num(x) + ", " + num(y);
    });
    add("Player", "pos", "/pos", "Show the player's position", CMD {
        NEED_PL
        return "Position: " + num(pl->m_player1->getPositionX()) + ", " +
               num(pl->m_player1->getPositionY());
    });
    add("Player", "kill", "/kill", "Kill the player (ignores noclip)", CMD {
        NEED_PL
        auto& s = state();
        s.forceKill = true;
        pl->destroyPlayer(pl->m_player1, pl->m_anticheatSpike);
        s.forceKill = false;
        return "Player killed.";
    });

    // ---------------------------------------------------------------- Audio (4)
    add("Audio", "music", "/music <0-1>", "Music volume", CMD {
        double x;
        if (a.empty() || !toNum(a[0], x)) return "Usage: /music <0-1>";
        x = std::clamp(x, 0.0, 1.0);
        FMODAudioEngine::sharedEngine()->setBackgroundMusicVolume(static_cast<float>(x));
        return "Music volume " + num(x);
    });
    add("Audio", "sfx", "/sfx <0-1>", "Sound effects volume", CMD {
        double x;
        if (a.empty() || !toNum(a[0], x)) return "Usage: /sfx <0-1>";
        x = std::clamp(x, 0.0, 1.0);
        FMODAudioEngine::sharedEngine()->setEffectsVolume(static_cast<float>(x));
        return "SFX volume " + num(x);
    });
    add("Audio", "mute", "/mute", "Mute music and effects", CMD {
        FMODAudioEngine::sharedEngine()->setBackgroundMusicVolume(0.f);
        FMODAudioEngine::sharedEngine()->setEffectsVolume(0.f);
        return "Muted.";
    });
    add("Audio", "unmute", "/unmute", "Restore full volume", CMD {
        FMODAudioEngine::sharedEngine()->setBackgroundMusicVolume(1.f);
        FMODAudioEngine::sharedEngine()->setEffectsVolume(1.f);
        return "Unmuted.";
    });

    // ---------------------------------------------------------------- Display (3)
    add("Display", "hideui", "/hideui", "Hide the in-level UI", CMD {
        NEED_PL
        if (pl->m_uiLayer) pl->m_uiLayer->setVisible(false);
        return "UI hidden.";
    });
    add("Display", "showui", "/showui", "Show the in-level UI", CMD {
        NEED_PL
        if (pl->m_uiLayer) pl->m_uiLayer->setVisible(true);
        return "UI shown.";
    });
    add("Display", "showfps", "/showfps [on|off]", "Show the FPS counter", CMD {
        static bool shown = false;
        auto t = parseToggle(a, shown);
        if (!t) return "Usage: /showfps [on|off]";
        shown = *t;
        CCDirector::sharedDirector()->setDisplayStats(shown);
        return "FPS counter " + onOff(shown);
    });

    // ---------------------------------------------------------------- Level (5)
    add("Level", "info", "/info", "Current level summary", CMD {
        NEED_PL
        auto* lvl = pl->m_level;
        return std::string("Level: ") + std::string(lvl->m_levelName) + "\nBy: " +
               std::string(lvl->m_creatorName) + "\nID: " + std::to_string(lvl->m_levelID.value()) +
               "\nProgress: " + num(pl->getCurrentPercent()) + "%";
    });
    add("Level", "id", "/id", "Current level ID", CMD {
        NEED_PL
        return "Level ID: " + std::to_string(pl->m_level->m_levelID.value());
    });
    add("Level", "percent", "/percent", "Current progress", CMD {
        NEED_PL
        return "Progress: " + num(pl->getCurrentPercent()) + "%";
    });
    add("Level", "attempts", "/attempts", "Attempt count this session", CMD {
        NEED_PL
        return "Attempt: " + std::to_string(pl->m_attempts);
    });
    add("Level", "author", "/author", "Level creator", CMD {
        NEED_PL
        return "Creator: " + std::string(pl->m_level->m_creatorName);
    });

    // ---------------------------------------------------------------- Navigation (7)
    add("Navigation", "menu", "/menu", "Go to the main menu", CMD {
        CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.5f, MenuLayer::scene(false)));
        return "Going to the main menu...";
    });
    add("Navigation", "quit", "/quit", "Leave the current level", CMD {
        NEED_PL
        pl->onQuit();
        return "Left the level.";
    });
    add("Navigation", "garage", "/garage", "Open the icon garage", CMD {
        CCDirector::sharedDirector()->pushScene(CCTransitionFade::create(0.5f, GJGarageLayer::scene()));
        return "Opening the garage...";
    });
    add("Navigation", "creator", "/creator", "Open the Creator menu", CMD {
        CCDirector::sharedDirector()->pushScene(CCTransitionFade::create(0.5f, CreatorLayer::scene()));
        return "Opening the Creator menu...";
    });
    add("Navigation", "mods", "/mods", "Open the Geode mods list", CMD {
        geode::openModsList();
        return "Opening the mods list...";
    });
    add("Navigation", "settings", "/settings", "Open game options", CMD {
        OptionsLayer::addToCurrentScene(false);
        return "Opening options...";
    });
    add("Navigation", "exit", "/exit", "Close Geometry Dash", CMD {
        geode::utils::game::exit();
        return "Closing...";
    });

    // ---------------------------------------------------------------- Utility (13)
    add("Utility", "help", "/help [command]", "Show help", CMD {
        if (!a.empty()) {
            for (auto const& c : commands()) {
                if (c.name == a[0]) return c.usage + "\n" + c.desc;
            }
            return "No such command: " + a[0];
        }
        std::map<std::string, int> counts;
        for (auto const& c : commands()) counts[c.category]++;
        std::string out = std::to_string(commands().size()) + " commands:";
        for (auto const& [cat, n] : counts) out += "\n" + cat + ": " + std::to_string(n);
        return out + "\n/list shows every name, /help <cmd> shows details.";
    });
    add("Utility", "list", "/list", "List all commands", CMD {
        std::vector<std::string> order;
        std::map<std::string, std::string> byCat;
        for (auto const& c : commands()) {
            if (!byCat.count(c.category)) order.push_back(c.category);
            auto& line = byCat[c.category];
            line += (line.empty() ? "" : ", ") + c.name;
        }
        std::string out;
        for (auto const& cat : order) out += "[" + cat + "] " + byCat[cat] + "\n";
        return out;
    });
    add("Utility", "clear", "/clear", "Clear the console log", CMD { return "\x01" "clear"; });
    add("Utility", "echo", "/echo <text>", "Print text", CMD {
        std::string out;
        for (auto const& w : a) out += (out.empty() ? "" : " ") + w;
        return out;
    });
    add("Utility", "about", "/about", "About this mod", CMD {
        return "Hack Console " + Mod::get()->getVersion().toVString() + " by turki\n" +
               std::to_string(commands().size()) + " commands. Safe mode keeps hacked runs from being completed.";
    });
    add("Utility", "version", "/version", "Mod version", CMD {
        return Mod::get()->getVersion().toVString();
    });
    add("Utility", "open", "/open <url>", "Open an http(s) link in the browser", CMD {
        if (a.empty()) return "Usage: /open <url>";
        if (a[0].rfind("https://", 0) != 0 && a[0].rfind("http://", 0) != 0)
            return "Only http:// and https:// links are allowed.";
        geode::utils::web::openLinkInBrowser(a[0]);
        return "Opening " + a[0];
    });
    add("Utility", "copy", "/copy <text>", "Copy text to the clipboard", CMD {
        std::string out;
        for (auto const& w : a) out += (out.empty() ? "" : " ") + w;
        geode::utils::clipboard::write(out);
        return "Copied.";
    });
    add("Utility", "time", "/time", "Current local time", CMD {
        std::time_t t = std::time(nullptr);
        char buf[32];
        std::strftime(buf, sizeof buf, "%Y-%m-%d %H:%M:%S", std::localtime(&t));
        return std::string(buf);
    });
    add("Utility", "rand", "/rand <min> <max>", "Random integer", CMD {
        double lo = 0, hi = 100;
        if (a.size() >= 2) {
            if (!toNum(a[0], lo) || !toNum(a[1], hi)) return "Usage: /rand <min> <max>";
        }
        if (lo > hi) std::swap(lo, hi);
        std::uniform_int_distribution<long long> d(static_cast<long long>(lo), static_cast<long long>(hi));
        return std::to_string(d(rng()));
    });
    add("Utility", "coin", "/coin", "Flip a coin", CMD {
        return (rng()() & 1) ? "Heads" : "Tails";
    });
    add("Utility", "dice", "/dice [sides]", "Roll a die", CMD {
        double s = 6;
        if (!a.empty() && (!toNum(a[0], s) || s < 2)) return "Usage: /dice [sides>=2]";
        std::uniform_int_distribution<int> d(1, static_cast<int>(s));
        return "Rolled " + std::to_string(d(rng()));
    });
    add("Utility", "calc", "/calc <a> <+|-|*|/|%|^> <b>", "Tiny calculator", CMD {
        double x, y;
        if (a.size() < 3 || !toNum(a[0], x) || !toNum(a[2], y)) return "Usage: /calc <a> <+|-|*|/|%|^> <b>";
        auto const& op = a[1];
        if (op == "+") return num(x + y);
        if (op == "-") return num(x - y);
        if (op == "*") return num(x * y);
        if (op == "/") return y == 0 ? "Cannot divide by zero." : num(x / y);
        if (op == "%") return y == 0 ? "Cannot divide by zero." : num(std::fmod(x, y));
        if (op == "^") return num(std::pow(x, y));
        return "Unknown operator: " + op;
    });

    return v;
}

} // namespace

std::vector<Command> const& commands() {
    static std::vector<Command> const cmds = build();
    return cmds;
}

std::string execute(std::string const& line) {
    std::string text = line;
    while (!text.empty() && (text.front() == ' ' || text.front() == '/')) text.erase(text.begin());
    if (text.empty()) return "";

    Args parts;
    {
        std::string cur;
        for (char ch : text) {
            if (ch == ' ' || ch == '\t') {
                if (!cur.empty()) parts.push_back(std::move(cur)), cur.clear();
            } else {
                cur += ch;
            }
        }
        if (!cur.empty()) parts.push_back(std::move(cur));
    }

    std::string name = parts.front();
    std::transform(name.begin(), name.end(), name.begin(), [](unsigned char c) { return std::tolower(c); });
    Args args(parts.begin() + 1, parts.end());

    for (auto const& c : commands()) {
        if (c.name == name) return c.run(args);
    }
    return "Unknown command: " + name + " (try /list)";
}

} // namespace hc
