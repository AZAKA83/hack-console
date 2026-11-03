#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJNotification : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJNotification";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJNotification, cocos2d::CCObject)

    /**
     * @note[short] Windows: 0x218d80
     * @note[short] Android: Rebinded
     */
    virtual  ~GJNotification();

    /**
     * @note[short] Android
     */
    static GJNotification* create();

    /**
     * @note[short] Android
     */
    TodoReturn rewardKey();
};
