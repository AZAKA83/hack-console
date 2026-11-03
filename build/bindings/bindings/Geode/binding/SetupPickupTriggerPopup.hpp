#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupPickupTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupPickupTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPickupTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPickupTriggerPopup();

    /**
     * @note[short] Windows: 0x5cc300
     * @note[short] Android
     */
    static SetupPickupTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1a324
     * @note[short] MacOS (Intel): 0x1e650
     * @note[short] Windows: 0x5ccb70
     * @note[short] iOS: 0x477a4
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5cc410
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1a2c4
     * @note[short] MacOS (Intel): 0x1e5e0
     * @note[short] Windows: 0x5ccb00
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateState();
};
