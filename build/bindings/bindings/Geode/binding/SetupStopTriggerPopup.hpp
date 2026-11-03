#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupStopTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStopTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStopTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupStopTriggerPopup();

    /**
     * @note[short] Windows: 0x608f60
     * @note[short] Android
     */
    static SetupStopTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x50027c
     * @note[short] MacOS (Intel): 0x5b28f0
     * @note[short] Windows: 0x6098d0
     * @note[short] iOS: 0x4924e0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5001b8
     * @note[short] MacOS (Intel): 0x5b2820
     * @note[short] Windows: 0x6097c0
     * @note[short] iOS: 0x49241c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x500230
     * @note[short] MacOS (Intel): 0x5b2890
     * @note[short] Windows: 0x609870
     * @note[short] iOS: 0x492494
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (Intel): 0x3c4630
     * @note[short] Windows: 0x609070
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
