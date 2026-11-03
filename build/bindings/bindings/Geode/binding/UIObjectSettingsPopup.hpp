#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class UIObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~UIObjectSettingsPopup();

    /**
     * @note[short] Windows: 0x5ffc10
     * @note[short] Android
     */
    static UIObjectSettingsPopup* create(UISettingsGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4f8824
     * @note[short] MacOS (Intel): 0x5aa6d0
     * @note[short] Windows: 0x6008f0
     * @note[short] iOS: 0x48be4c
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4f7e0c
     * @note[short] Windows: 0x5ffd20
     * @note[short] Android
     */
    bool init(UISettingsGameObject* object, cocos2d::CCArray* objects);
};
