#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupGravityTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGravityTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGravityTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5be6f0
     * @note[short] iOS: 0x4a3c40
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupGravityTriggerPopup();

    /**
     * @note[short] Windows: 0x5be7c0
     * @note[short] Android
     */
    static SetupGravityTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x42321c
     * @note[short] MacOS (Intel): 0x4bf8a0
     * @note[short] Windows: 0x5bed60
     * @note[short] iOS: 0x4a4120
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x4fe6ec
     * @note[short] Windows: 0x5be8d0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
