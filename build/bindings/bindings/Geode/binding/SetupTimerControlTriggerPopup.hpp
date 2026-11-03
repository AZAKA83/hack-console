#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTimerControlTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimerControlTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimerControlTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTimerControlTriggerPopup();

    /**
     * @note[short] Windows: 0x5f8e00
     * @note[short] Android
     */
    static SetupTimerControlTriggerPopup* create(TimerTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x316240
     * @note[short] MacOS (Intel): 0x38ba00
     * @note[short] Windows: 0x5f9350
     * @note[short] iOS: 0x31bdc
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5f8f10
     * @note[short] Android
     */
    bool init(TimerTriggerGameObject* object, cocos2d::CCArray* objects);
};
