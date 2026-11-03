#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRotateCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateCommandPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x3add00
     * @note[short] iOS: 0x4867e0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRotateCommandPopup();

    /**
     * @note[short] Windows: 0x3addd0
     * @note[short] Android
     */
    static SetupRotateCommandPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x263c
     * @note[short] MacOS (Intel): 0x2830
     * @note[short] Windows: 0x3af1d0
     * @note[short] iOS: 0x4876b4
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2640
     * @note[short] MacOS (Intel): 0x2840
     * @note[short] Windows: 0x3af1e0
     * @note[short] iOS: 0x4876b8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2614
     * @note[short] MacOS (Intel): 0x27e0
     * @note[short] Windows: 0x3af190
     * @note[short] iOS: 0x48768c
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2638
     * @note[short] MacOS (Intel): 0x2820
     * @note[short] Windows: 0x3af1c0
     * @note[short] iOS: 0x4876b0
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x28d0
     * @note[short] MacOS (Intel): 0x2b80
     * @note[short] Windows: 0x164f00
     * @note[short] iOS: 0x4877cc
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x15ec
     * @note[short] Windows: 0x3adee0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x2538
     * @note[short] MacOS (Intel): 0x26e0
     * @note[short] Windows: 0x3af540
     * @note[short] Android
     */
    void onInfiniteDuration(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2544
     * @note[short] MacOS (Intel): 0x2700
     * @note[short] Windows: 0x3af460
     * @note[short] Android
     */
    void updateControlVisibility();
};
