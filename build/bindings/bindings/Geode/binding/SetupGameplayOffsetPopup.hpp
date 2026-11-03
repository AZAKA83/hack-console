#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupGameplayOffsetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGameplayOffsetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGameplayOffsetPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupGameplayOffsetPopup();

    /**
     * @note[short] Windows: 0x5d64d0
     * @note[short] iOS: 0x233cf0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupGameplayOffsetPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupGameplayOffsetPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x76f304
     * @note[short] MacOS (Intel): 0x8798c0
     * @note[short] Windows: 0x5d7a80
     * @note[short] iOS: 0x234518
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x76f2ec
     * @note[short] MacOS (Intel): 0x8798a0
     * @note[short] Windows: 0x5d7a60
     * @note[short] iOS: 0x234500
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x76f29c
     * @note[short] MacOS (Intel): 0x879850
     * @note[short] Windows: 0x5d7a10
     * @note[short] iOS: 0x2344b0
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x76f2d4
     * @note[short] MacOS (Intel): 0x879880
     * @note[short] Windows: 0x5d7a40
     * @note[short] iOS: 0x2344e8
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x76f208
     * @note[short] MacOS (Intel): 0x8797b0
     * @note[short] Windows: 0x5d7960
     * @note[short] iOS: 0x23442c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76eb10
     * @note[short] Windows: 0x5d7160
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x76f1c4
     * @note[short] MacOS (Intel): 0x879770
     * @note[short] Windows: 0x5d78b0
     * @note[short] Android
     */
    void onDefaultValues(cocos2d::CCObject* sender);
};
