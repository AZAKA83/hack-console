#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupObjectTogglePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectTogglePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectTogglePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5beea0
     * @note[short] iOS: 0x2379a8
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupObjectTogglePopup();

    /**
     * @note[short] Windows: 0x5bef70
     * @note[short] Android
     */
    static SetupObjectTogglePopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x2ee8c4
     * @note[short] MacOS (Intel): 0x35fbb0
     * @note[short] Windows: 0x5b9920
     * @note[short] iOS: 0x2382c4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ee84c
     * @note[short] MacOS (Intel): 0x35fb30
     * @note[short] Windows: 0x5bfa60
     * @note[short] iOS: 0x238254
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2edf18
     * @note[short] Windows: 0x5bf090
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);
};
