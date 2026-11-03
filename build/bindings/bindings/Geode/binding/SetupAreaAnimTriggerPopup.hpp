#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAreaTintTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>

class SetupAreaAnimTriggerPopup : public SetupAreaTintTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAreaAnimTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaAnimTriggerPopup, SetupAreaTintTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaAnimTriggerPopup();

    /**
     * @note[short] Windows: 0x5a2740
     * @note[short] iOS: 0x3c5bc
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaAnimTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaAnimTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x4380b0
     * @note[short] MacOS (Intel): 0x4d72d0
     * @note[short] Windows: 0x5a9f30
     * @note[short] iOS: 0x3e04c
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x43826c
     * @note[short] MacOS (Intel): 0x4d7470
     * @note[short] Windows: 0x5aa100
     * @note[short] iOS: 0x3e1b8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x437e04
     * @note[short] MacOS (Intel): 0x4d7070
     * @note[short] Windows: 0x5a9d20
     * @note[short] Android
     */
    void createValueControlAdvancedAnim(int property, std::string label, cocos2d::CCPoint position, float scale, bool noSlider, InputValueType valueType, int length, bool arrows, float min, float max, int page, int group, GJInputStyle inputStyle);

    /**
     * @note[short] MacOS (ARM): 0x436684
     * @note[short] MacOS (Intel): 0x4d55f0
     * @note[short] Windows: 0x5a8500
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x438004
     * @note[short] MacOS (Intel): 0x4d7250
     * @note[short] Windows: 0x5aa090
     * @note[short] Android
     */
    void onDeactivateAnimValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4381f8
     * @note[short] MacOS (Intel): 0x4d7400
     * @note[short] Windows: 0x5aa010
     * @note[short] Android
     */
    void updateTargetIDLabel();
};
