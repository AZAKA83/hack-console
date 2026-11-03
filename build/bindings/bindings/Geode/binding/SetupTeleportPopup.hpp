#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTeleportPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTeleportPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTeleportPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f65f0
     * @note[short] iOS: 0xb25c
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTeleportPopup();

    /**
     * @note[short] Windows: 0x5f66e0
     * @note[short] Android
     */
    static SetupTeleportPopup* create(TeleportPortalObject* object, cocos2d::CCArray* objects, int id, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2d64c8
     * @note[short] MacOS (Intel): 0x3458a0
     * @note[short] Windows: 0x39a380
     * @note[short] iOS: 0xc204
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x2d64cc
     * @note[short] MacOS (Intel): 0x3458b0
     * @note[short] Windows: 0x5f7ad0
     * @note[short] iOS: 0xc208
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x2d65d8
     * @note[short] MacOS (Intel): 0x3459b0
     * @note[short] Windows: 0x5f7b00
     * @note[short] iOS: 0xc2bc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (Intel): 0x344320
     * @note[short] Windows: 0x5f6820
     * @note[short] Android
     */
    bool init(TeleportPortalObject* object, cocos2d::CCArray* objects, int id, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2d63b0
     * @note[short] MacOS (Intel): 0x345780
     * @note[short] Windows: 0x5f7c00
     * @note[short] Android
     */
    void onTeleportGravity(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2d6560
     * @note[short] MacOS (Intel): 0x345940
     * @note[short] Windows: 0x5f7ca0
     * @note[short] Android
     */
    void updateTeleportGravityState(int state);
    cocos2d::CCArray* m_teleportGravityToggles;
};
