#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class UISaveLoadLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UISaveLoadLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UISaveLoadLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UISaveLoadLayer();

    /**
     * @note[short] Android
     */
    static UISaveLoadLayer* create(UIOptionsLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x245cbc
     * @note[short] MacOS (Intel): 0x2a2fc0
     * @note[short] Android
     */
    bool init(UIOptionsLayer* layer);

    /**
     * @note[short] Android
     */
    void onLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);
    UIOptionsLayer* m_optionsLayer;
};
