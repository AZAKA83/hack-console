#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupStaticCameraPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupStaticCameraPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupStaticCameraPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupStaticCameraPopup();

    /**
     * @note[short] Windows: 0x5f5a00
     * @note[short] Android
     */
    static SetupStaticCameraPopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x310814
     * @note[short] MacOS (Intel): 0x385820
     * @note[short] Windows: 0x5f6550
     * @note[short] iOS: 0x2692b0
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x31089c
     * @note[short] MacOS (Intel): 0x3858b0
     * @note[short] Windows: 0x5d7960
     * @note[short] iOS: 0x2692c8
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5f5b10
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x3107a0
     * @note[short] MacOS (Intel): 0x3857a0
     * @note[short] Windows: 0x5f6570
     * @note[short] Android
     */
    void updateState();
};
