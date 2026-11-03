#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAreaMoveTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaMoveTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaMoveTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5a21f0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaMoveTriggerPopup();

    /**
     * @note[short] Windows: 0x5a2a50
     * @note[short] iOS: 0x37b8c
     * @note[short] Android: Rebinded
     */
     ~SetupAreaMoveTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaMoveTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4325f0
     * @note[short] MacOS (Intel): 0x4d0640
     * @note[short] Windows: 0x5a56c0
     * @note[short] iOS: 0x39ce8
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x432184
     * @note[short] MacOS (Intel): 0x4d01d0
     * @note[short] Windows: 0x5a5040
     * @note[short] iOS: 0x39990
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x4325bc
     * @note[short] MacOS (Intel): 0x4d0610
     * @note[short] Windows: 0x5a5690
     * @note[short] iOS: 0x39cb4
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x432498
     * @note[short] MacOS (Intel): 0x4d04e0
     * @note[short] Windows: 0x5a5510
     * @note[short] iOS: 0x39ba4
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x432534
     * @note[short] MacOS (Intel): 0x4d05a0
     * @note[short] Windows: 0x5a5630
     * @note[short] iOS: 0x39c2c
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x432588
     * @note[short] MacOS (Intel): 0x4d05e0
     * @note[short] Windows: 0x5a5660
     * @note[short] iOS: 0x39c80
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (Intel): 0x4ceac0
     * @note[short] Windows: 0x5a39c0
     * @note[short] Android
     */
    void addAreaDefaultControls(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x431f74
     * @note[short] MacOS (Intel): 0x4cffe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void getModeValues(int mode, int& direction, bool& inbound, bool& twoDirections);

    /**
     * @note[short] MacOS (ARM): 0x42ff7c
     * @note[short] Windows: 0x5a2b20
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x431fc8
     * @note[short] MacOS (Intel): 0x4d0040
     * @note[short] Windows: 0x5a53b0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x431ea4
     * @note[short] MacOS (Intel): 0x4cff10
     * @note[short] Windows: 0x5a5090
     * @note[short] Android
     */
    void onSpecialTarget(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4321d8
     * @note[short] MacOS (Intel): 0x4d0220
     * @note[short] Windows: 0x5a5130
     * @note[short] Android
     */
    void updateEnterTargetIDState();
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCArray* m_targetButtons;
};
