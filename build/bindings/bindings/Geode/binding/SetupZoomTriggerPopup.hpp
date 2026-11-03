#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupZoomTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupZoomTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupZoomTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x615c40
     * @note[short] iOS: 0x24df8c
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupZoomTriggerPopup();

    /**
     * @note[short] Windows: 0x615d10
     * @note[short] Android
     */
    static SetupZoomTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x29fa68
     * @note[short] MacOS (Intel): 0x30c9c0
     * @note[short] Windows: 0x39a380
     * @note[short] iOS: 0x24e3b4
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x29fa6c
     * @note[short] MacOS (Intel): 0x30c9d0
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x24e3b8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29f6cc
     * @note[short] Windows: 0x615e20
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
