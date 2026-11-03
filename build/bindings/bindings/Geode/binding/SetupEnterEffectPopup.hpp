#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SetupEnterEffectPopup : public SetupTriggerPopup, public HSVWidgetDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupEnterEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupEnterEffectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupEnterEffectPopup();

    /**
     * @note[short] Windows: 0x5b3310
     * @note[short] iOS: 0x47fd04
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupEnterEffectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupEnterEffectPopup* create(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x35ed74
     * @note[short] MacOS (Intel): 0x3e06f0
     * @note[short] Windows: 0x5b56a0
     * @note[short] iOS: 0x481b90
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x35f148
     * @note[short] MacOS (Intel): 0x3e0b20
     * @note[short] Windows: 0x5b5dd0
     * @note[short] iOS: 0x481de4
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35f2d0
     * @note[short] MacOS (Intel): 0x3e0cc0
     * @note[short] Windows: 0x5a56c0
     * @note[short] iOS: 0x481f48
     * @note[short] Android
     */
    virtual void updateInputValue(int tag, float& value);

    /**
     * @note[short] MacOS (ARM): 0x35f29c
     * @note[short] MacOS (Intel): 0x3e0c90
     * @note[short] Windows: 0x5a5690
     * @note[short] iOS: 0x481f14
     * @note[short] Android
     */
    virtual void updateInputNode(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x35eee4
     * @note[short] MacOS (Intel): 0x3e08e0
     * @note[short] Windows: 0x5b5870
     * @note[short] iOS: 0x481cfc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x35f214
     * @note[short] MacOS (Intel): 0x3e0c20
     * @note[short] Windows: 0x5a5630
     * @note[short] iOS: 0x481e8c
     * @note[short] Android
     */
    virtual float triggerValueFromSliderValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x35f268
     * @note[short] MacOS (Intel): 0x3e0c60
     * @note[short] Windows: 0x5a5660
     * @note[short] iOS: 0x481ee0
     * @note[short] Android
     */
    virtual float triggerSliderValueFromValue(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x35ef9c
     * @note[short] MacOS (Intel): 0x3e09a0
     * @note[short] Windows: 0x5b5cd0
     * @note[short] iOS: 0x481db8
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] Windows: 0x5b33f0
     * @note[short] Android
     */
    bool init(EnterEffectObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x35eca0
     * @note[short] MacOS (Intel): 0x3e0620
     * @note[short] Windows: 0x5b5b40
     * @note[short] Android
     */
    void onEnterType(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5b5c30
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35ec04
     * @note[short] MacOS (Intel): 0x3067e0
     * @note[short] Android
     */
    void onNextFreeEnterEffectID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x35eb3c
     * @note[short] MacOS (Intel): 0x3e04b0
     * @note[short] Windows: 0x5b5cf0
     * @note[short] Android
     */
    void updateHSVButton();
    int m_objectID;
    CCMenuItemToggler* m_enterOnlyToggler;
    CCMenuItemToggler* m_exitOnlyToggler;
    int m_enterType;
    CCMenuItemSpriteExtra* m_hsvButton;
    cocos2d::ccHSVValue m_hsvValue;
    bool m_hsvChanged;
};
