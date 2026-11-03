#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class AchievementNotifier : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "AchievementNotifier";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(AchievementNotifier, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x3d4d0
     * @note[short] iOS: 0x2b3394
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementNotifier();

    /**
     * @note[short] MacOS (ARM): 0x79cbc0
     * @note[short] MacOS (Intel): 0x8aa3f0
     * @note[short] Windows: 0x3d560
     * @note[short] iOS: 0x2b3068
     * @note[short] Android
     */
    static AchievementNotifier* sharedState();

    /**
     * @note[short] MacOS (ARM): 0x79cc3c
     * @note[short] MacOS (Intel): 0x8aa480
     * @note[short] Windows: 0x3d610
     * @note[short] iOS: 0x2b30d8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x79cdd4
     * @note[short] MacOS (Intel): 0x8aa610
     * @note[short] Windows: 0x3d880
     * @note[short] Android
     */
    void achievementDisplayFinished();

    /**
     * @note[short] MacOS (ARM): 0x79cc68
     * @note[short] MacOS (Intel): 0x8aa4b0
     * @note[short] Windows: 0x3d640
     * @note[short] Android
     */
    void notifyAchievement(char const* title, char const* desc, char const* icon, bool quest);

    /**
     * @note[short] MacOS (ARM): 0x79ccbc
     * @note[short] MacOS (Intel): 0x8aa500
     * @note[short] Windows: 0x3d720
     * @note[short] Android
     */
    void showNextAchievement();

    /**
     * @note[short] MacOS (ARM): 0x79ce18
     * @note[short] MacOS (Intel): 0x8aa660
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2b329c
     * @note[short] Android
     */
    void willSwitchToScene(cocos2d::CCScene* scene);
    cocos2d::CCScene* m_nextScene;
    cocos2d::CCArray* m_achievementBarArray;
    AchievementBar* m_activeAchievementBar;
};
