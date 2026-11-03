#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class TimeSpeedControl : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "TimeSpeedControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(TimeSpeedControl, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x505d4
     * @note[short] MacOS (Intel): 0x56a80
     * @note[short] Windows: 0x47080
     * @note[short] Android: Rebinded
     */
    virtual  ~TimeSpeedControl();

    /**
     * @note[short] Windows: 0x66d6e0
     * @note[short] Android
     */
    static TimeSpeedControl* create(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x66d790
     * @note[short] Android
     */
    bool init(GJBaseGameLayer* p0);

    /**
     * @note[short] Windows: 0x66ddd0
     * @note[short] Android
     */
    void onAudioTimeSpeedToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x66dc50
     * @note[short] Android
     */
    TodoReturn timeSliderChanged(cocos2d::CCObject* p0);
};
