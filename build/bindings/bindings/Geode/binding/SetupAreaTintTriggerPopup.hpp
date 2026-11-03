#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAreaMoveTriggerPopup.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SetupAreaTintTriggerPopup : public SetupAreaMoveTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAreaTintTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAreaTintTriggerPopup, SetupAreaMoveTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5a2560
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAreaTintTriggerPopup();

    /**
     * @note[short] Windows: 0x5a6e80
     * @note[short] iOS: 0x3b2dc
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAreaTintTriggerPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAreaTintTriggerPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x435640
     * @note[short] MacOS (Intel): 0x4d4160
     * @note[short] Windows: 0x5a7b60
     * @note[short] iOS: 0x3be18
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x435930
     * @note[short] MacOS (Intel): 0x4d4490
     * @note[short] Windows: 0x5a7ea0
     * @note[short] iOS: 0x3bf84
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x435560
     * @note[short] MacOS (Intel): 0x4d4080
     * @note[short] Windows: 0x5a79a0
     * @note[short] iOS: 0x3bd50
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x435784
     * @note[short] MacOS (Intel): 0x4d4310
     * @note[short] Windows: 0x5a7da0
     * @note[short] iOS: 0x3bf58
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] MacOS (ARM): 0x434a24
     * @note[short] Windows: 0x5a6f30
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x5a7d00
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x435498
     * @note[short] MacOS (Intel): 0x4d3fc0
     * @note[short] Windows: 0x5a7dc0
     * @note[short] Android
     */
    void updateHSVButton();
    CCMenuItemSpriteExtra* m_hsvButton;
    cocos2d::ccHSVValue m_hsvValue;
    bool m_hsvChanged;
};
