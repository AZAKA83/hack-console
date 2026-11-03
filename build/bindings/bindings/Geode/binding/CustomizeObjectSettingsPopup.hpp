#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class CustomizeObjectSettingsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomizeObjectSettingsPopup();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomizeObjectSettingsPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CustomizeObjectSettingsPopup* create(GameObject* object, cocos2d::CCArray* objects, CustomizeObjectLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x190160
     * @note[short] MacOS (Intel): 0x1dc090
     * @note[short] Windows: 0x144700
     * @note[short] iOS: 0x59888
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1900e0
     * @note[short] MacOS (Intel): 0x1dc020
     * @note[short] Windows: 0x144650
     * @note[short] iOS: 0x59808
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18fd0c
     * @note[short] MacOS (Intel): 0x1dbc00
     * @note[short] Windows: 0x144290
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects, CustomizeObjectLayer* layer);
    CustomizeObjectLayer* m_customizeLayer;
    bool m_settingsChanged;
};
