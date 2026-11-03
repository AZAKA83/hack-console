#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAnimSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAnimSettingsPopup();

    /**
     * @note[short] Windows: 0x5a17c0
     * @note[short] Android
     */
    static SetupAnimSettingsPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5ba80
     * @note[short] MacOS (Intel): 0x627e0
     * @note[short] Windows: 0x5a2160
     * @note[short] iOS: 0x382db8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5b2a0
     * @note[short] Windows: 0x5a18d0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5ba1c
     * @note[short] MacOS (Intel): 0x62770
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateAnimSettings();
};
