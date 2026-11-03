#include "Commands.hpp"

#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/PauseLayer.hpp>
#include <deque>

using namespace geode::prelude;

class ConsolePopup : public geode::Popup<> {
protected:
    TextInput* m_input = nullptr;
    SimpleTextArea* m_logArea = nullptr;

    static std::deque<std::string>& log() {
        static std::deque<std::string> lines;
        return lines;
    }

    bool setup() override {
        this->setTitle("Hack Console");

        auto size = m_mainLayer->getContentSize();

        m_logArea = SimpleTextArea::create(joinLog(), "chatFont.fnt", 0.6f, size.width - 40.f);
        m_logArea->setAnchorPoint({0.f, 1.f});
        m_logArea->setPosition({20.f, size.height - 40.f});
        m_mainLayer->addChild(m_logArea);

        m_input = TextInput::create(size.width - 120.f, "/command  (try /help or /list)", "chatFont.fnt");
        m_input->setPosition({size.width / 2.f - 40.f, 50.f});
        m_input->setMaxCharCount(120);
        m_mainLayer->addChild(m_input);

        auto runBtn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("Run"), this, menu_selector(ConsolePopup::onRun)
        );
        runBtn->setPosition({size.width - 50.f, 50.f});
        m_buttonMenu->addChild(runBtn);

        auto helpBtn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("Help"), this, menu_selector(ConsolePopup::onHelp)
        );
        helpBtn->setPosition({60.f, 18.f});
        m_buttonMenu->addChild(helpBtn);

        auto listBtn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("List"), this, menu_selector(ConsolePopup::onList)
        );
        listBtn->setPosition({140.f, 18.f});
        m_buttonMenu->addChild(listBtn);

        auto clearBtn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("Clear"), this, menu_selector(ConsolePopup::onClear)
        );
        clearBtn->setPosition({220.f, 18.f});
        m_buttonMenu->addChild(clearBtn);

        if (log().empty()) {
            push(std::to_string(hc::commands().size()) + " commands loaded. Type /help to start.");
        }
        refresh();
        return true;
    }

    static std::string joinLog() {
        std::string out;
        for (auto const& l : log()) out += l + "\n";
        return out.empty() ? " " : out;
    }

    static void push(std::string const& text) {
        std::string line;
        for (char c : text) {
            if (c == '\n') {
                log().push_back(line);
                line.clear();
            } else {
                line += c;
            }
        }
        log().push_back(line);
        while (log().size() > 14) log().pop_front();
    }

    void refresh() {
        if (m_logArea) m_logArea->setText(joinLog());
    }

    void runLine(std::string const& line) {
        if (line.empty()) return;
        push("> " + line);
        auto result = hc::execute(line);
        if (result == "\x01" "clear") {
            log().clear();
        } else if (!result.empty()) {
            push(result);
        }
        refresh();
    }

    void onRun(CCObject*) {
        runLine(m_input->getString());
        m_input->setString("");
    }

    void onHelp(CCObject*) { runLine("/help"); }
    void onList(CCObject*) { runLine("/list"); }
    void onClear(CCObject*) { runLine("/clear"); }

public:
    static ConsolePopup* create() {
        auto ret = new ConsolePopup();
        if (ret->initAnchored(420.f, 270.f)) {
            ret->autorelease();
            return ret;
        }
        delete ret;
        return nullptr;
    }
};

// Console button on the main menu
class $modify(HCMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) return false;
        auto spr = CircleButtonSprite::create(CCLabelBMFont::create("HC", "bigFont.fnt"));
        auto btn = CCMenuItemSpriteExtra::create(spr, this, menu_selector(HCMenuLayer::onConsole));
        btn->setID("console-button"_spr);
        if (auto menu = this->getChildByID("bottom-menu")) {
            menu->addChild(btn);
            menu->updateLayout();
        }
        return true;
    }

    void onConsole(CCObject*) {
        if (auto p = ConsolePopup::create()) p->show();
    }
};

// Console button on the pause menu
class $modify(HCPauseLayer, PauseLayer) {
    void customSetup() {
        PauseLayer::customSetup();
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        auto btn = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("Console"), this, menu_selector(HCPauseLayer::onConsole)
        );
        btn->setID("console-button"_spr);
        auto menu = CCMenu::create();
        menu->setPosition({70.f, winSize.height - 25.f});
        menu->addChild(btn);
        this->addChild(menu);
    }

    void onConsole(CCObject*) {
        if (auto p = ConsolePopup::create()) p->show();
    }
};
