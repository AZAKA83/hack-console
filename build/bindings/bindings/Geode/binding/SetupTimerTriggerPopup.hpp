#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTimerTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimerTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimerTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTimerTriggerPopup();

    /**
     * @note[short] Windows: 0x5f7d30
     * @note[short] Android
     */
    static SetupTimerTriggerPopup* create(TimerTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    bool init(TimerTriggerGameObject* object, cocos2d::CCArray* objects);
};
