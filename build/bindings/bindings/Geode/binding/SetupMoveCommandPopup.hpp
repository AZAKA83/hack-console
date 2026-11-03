#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupMoveCommandPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMoveCommandPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMoveCommandPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x38e300
     * @note[short] iOS: 0x311630
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupMoveCommandPopup();

    /**
     * @note[short] Android
     */
    static SetupMoveCommandPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5f5290
     * @note[short] MacOS (Intel): 0x6e0570
     * @note[short] Windows: 0x38fa30
     * @note[short] iOS: 0x312948
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x5f5268
     * @note[short] MacOS (Intel): 0x6e0540
     * @note[short] Windows: 0x38fa00
     * @note[short] iOS: 0x312920
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5f52c0
     * @note[short] MacOS (Intel): 0x6e05a0
     * @note[short] Windows: 0x38fa60
     * @note[short] iOS: 0x312978
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5f51b4
     * @note[short] MacOS (Intel): 0x6e0460
     * @note[short] Windows: 0x38f950
     * @note[short] iOS: 0x31286c
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5f51f8
     * @note[short] MacOS (Intel): 0x6e04b0
     * @note[short] Windows: 0x38f9a0
     * @note[short] iOS: 0x3128b0
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x5f5488
     * @note[short] MacOS (Intel): 0x6e07b0
     * @note[short] Windows: 0x3900d0
     * @note[short] iOS: 0x312b38
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5f3e54
     * @note[short] MacOS (Intel): 0x6dee20
     * @note[short] Windows: 0x38e4f0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5f5008
     * @note[short] MacOS (Intel): 0x6e02b0
     * @note[short] Windows: 0x38ff10
     * @note[short] Android
     */
    void updateControlVisibility();
    bool m_smallStep;
};
