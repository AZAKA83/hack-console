#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupInstantCollisionTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupInstantCollisionTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupInstantCollisionTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5af860
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupInstantCollisionTriggerPopup();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupInstantCollisionTriggerPopup();

    /**
     * @note[short] Windows: 0x5b04f0
     * @note[short] Android
     */
    static SetupInstantCollisionTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x30ccf0
     * @note[short] MacOS (Intel): 0x381810
     * @note[short] Windows: 0x5b0f90
     * @note[short] iOS: 0x2cd4c8
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x30c9f4
     * @note[short] MacOS (Intel): 0x381500
     * @note[short] Windows: 0x5b0d60
     * @note[short] iOS: 0x2cd1e0
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x5b0580
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x30c024
     * @note[short] MacOS (Intel): 0x380aa0
     * @note[short] Windows: 0x5b0280
     * @note[short] Android
     */
    void updateSpecialNodes();
};
