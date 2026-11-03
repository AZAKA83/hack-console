#include "Commands.hpp"

#include <Geode/modify/CCScheduler.hpp>
#include <Geode/modify/GameManager.hpp>
#include <Geode/modify/PlayLayer.hpp>

using namespace geode::prelude;

// Speedhack: scales every scheduler tick
class $modify(HCScheduler, CCScheduler) {
    void update(float dt) {
        CCScheduler::update(dt * hc::state().speed);
    }
};

class $modify(HCPlayLayer, PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects)) return false;
        auto& s = hc::state();
        s.safemode = Mod::get()->getSettingValue<bool>("safe-mode") || s.safemode;
        s.blocked = 0;
        s.cheated = s.noclip || s.speed != 1.f;
        return true;
    }

    // Noclip
    void destroyPlayer(PlayerObject* player, GameObject* object) {
        auto& s = hc::state();
        if (s.noclip && !s.forceKill) {
            s.blocked++;
            s.cheated = true;
            return;
        }
        PlayLayer::destroyPlayer(player, object);
    }

    // Safe mode: a run that used cheats cannot be completed or saved
    void levelComplete() {
        auto& s = hc::state();
        if (s.safemode && s.cheated) {
            FLAlertLayer::create(
                "Safe Mode",
                "This run used cheats, so completing it was blocked.\n"
                "Use <cy>/safemode off</c> in the console to allow it.",
                "OK"
            )->show();
            return;
        }
        PlayLayer::levelComplete();
    }
};

// Unlock all icons and colors
class $modify(HCGameManager, GameManager) {
    bool isIconUnlocked(int id, IconType type) {
        if (hc::state().unlockAll) return true;
        return GameManager::isIconUnlocked(id, type);
    }

    bool isColorUnlocked(int id, UnlockType type) {
        if (hc::state().unlockAll) return true;
        return GameManager::isColorUnlocked(id, type);
    }
};
