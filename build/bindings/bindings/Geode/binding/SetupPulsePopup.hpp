#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/ColorPickerDelegate.hpp>
#include <Geode/binding/GJSpecialColorSelectDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SetupPulsePopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupPulsePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupPulsePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5ccc30
     * @note[short] iOS: 0x45a2c0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupPulsePopup();

    /**
     * @note[short] MacOS (ARM): 0x83d078
     * @note[short] Windows: 0x5ccd40
     * @note[short] Android
     */
    static SetupPulsePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x322278
     * @note[short] MacOS (Intel): 0x3992b0
     * @note[short] Windows: 0x5d19d0
     * @note[short] iOS: 0x45e4b8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x3211f4
     * @note[short] MacOS (Intel): 0x397eb0
     * @note[short] Windows: 0x5d0920
     * @note[short] iOS: 0x45d85c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x321c24
     * @note[short] MacOS (Intel): 0x398b10
     * @note[short] Windows: 0x5d16e0
     * @note[short] iOS: 0x45e0c0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3222d4
     * @note[short] MacOS (Intel): 0x399330
     * @note[short] Windows: 0x5d1ab0
     * @note[short] iOS: 0x45e514
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x321d9c
     * @note[short] MacOS (Intel): 0x398cf0
     * @note[short] Windows: 0x5d18c0
     * @note[short] iOS: 0x45e1e0
     * @note[short] Android
     */
    virtual void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x3222cc
     * @note[short] MacOS (Intel): 0x399310
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x45e50c
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3216a8
     * @note[short] MacOS (Intel): 0x398460
     * @note[short] Windows: 0x5d1150
     * @note[short] iOS: 0x45dcb4
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x321a48
     * @note[short] MacOS (Intel): 0x398890
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x31d450
     * @note[short] Windows: 0x5ccf20
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (Intel): 0x397780
     * @note[short] Windows: 0x129d50
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x397400
     * @note[short] Windows: 0x5d0db0
     * @note[short] Android
     */
    void onExclusive(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5d0e40
     * @note[short] Android
     */
    void onGroupMainOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5d0f30
     * @note[short] Android
     */
    void onGroupSecondaryOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3976f0
     * @note[short] Windows: 0x5d0f90
     * @note[short] Android
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320b48
     * @note[short] MacOS (Intel): 0x3977c0
     * @note[short] Windows: 0x129dd0
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320678
     * @note[short] MacOS (Intel): 0x3971e0
     * @note[short] Windows: 0x5d04a0
     * @note[short] Android
     */
    void onSelectPulseMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320c7c
     * @note[short] MacOS (Intel): 0x397900
     * @note[short] Windows: 0x5d10b0
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x32062c
     * @note[short] MacOS (Intel): 0x3971a0
     * @note[short] Windows: 0x5d1100
     * @note[short] Android
     */
    void onSelectSpecialTargetID(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3203cc
     * @note[short] MacOS (Intel): 0x396ef0
     * @note[short] Windows: 0x5d06d0
     * @note[short] Android
     */
    void onSelectTargetMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320bcc
     * @note[short] MacOS (Intel): 0x397830
     * @note[short] Windows: 0x5d1a40
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x320b94
     * @note[short] MacOS (Intel): 0x397800
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x31fdd8
     * @note[short] MacOS (Intel): 0x3968d0
     * @note[short] Windows: 0x5d12f0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5d22c0
     * @note[short] Android
     */
    void updateColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x321e70
     * @note[short] MacOS (Intel): 0x398df0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x3219d4
     * @note[short] MacOS (Intel): 0x3987f0
     * @note[short] Windows: 0x5d2560
     * @note[short] Android
     */
    void updateCopyColor();

    /**
     * @note[short] Windows: 0x5d2710
     * @note[short] Android
     */
    void updateCopyColorTextInputLabel();

    /**
     * @note[short] Windows: 0x5d0230
     * @note[short] Android
     */
    void updateFadeInLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x321a5c
     * @note[short] Windows: 0x5d1530
     * @note[short] Android
     */
    void updateFadeInTime();

    /**
     * @note[short] Windows: 0x5d03d0
     * @note[short] Android
     */
    void updateFadeOutLabel(bool decimals);

    /**
     * @note[short] Windows: 0x5d1650
     * @note[short] Android
     */
    void updateFadeOutTime();

    /**
     * @note[short] MacOS (ARM): 0x32163c
     * @note[short] MacOS (Intel): 0x3983e0
     * @note[short] Windows: 0x5d0ea0
     * @note[short] Android
     */
    void updateGroupMainOnly();

    /**
     * @note[short] MacOS (ARM): 0x3215d0
     * @note[short] MacOS (Intel): 0x398360
     * @note[short] Windows: 0x5d1020
     * @note[short] Android
     */
    void updateGroupSecondaryOnly();

    /**
     * @note[short] Windows: 0x5d0300
     * @note[short] Android
     */
    void updateHoldLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x321a5c
     * @note[short] Windows: 0x5d15c0
     * @note[short] Android
     */
    void updateHoldTime();

    /**
     * @note[short] MacOS (Intel): 0x398a60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateHSVValue();

    /**
     * @note[short] MacOS (ARM): 0x3210ac
     * @note[short] MacOS (Intel): 0x397d30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePulseMode();

    /**
     * @note[short] MacOS (ARM): 0x321188
     * @note[short] MacOS (Intel): 0x397e30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePulseTargetType();

    /**
     * @note[short] MacOS (ARM): 0x321118
     * @note[short] MacOS (Intel): 0x397db0
     * @note[short] Windows: 0x5d24a0
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x320cc8
     * @note[short] MacOS (Intel): 0x397940
     * @note[short] Windows: 0x5d25f0
     * @note[short] Android
     */
    void updateTextInputLabel();
    cocos2d::extension::CCControlColourPicker* m_colorPicker;
    bool m_unk3c0;
    cocos2d::CCArray* m_colorObjects;
    cocos2d::CCArray* m_hsvObjects;
    Slider* m_fadeInSlider;
    Slider* m_holdSlider;
    Slider* m_fadeOutSlider;
    CCMenuItemSpriteExtra* m_channelButton;
    CCMenuItemSpriteExtra* m_groupButton;
    cocos2d::CCLabelBMFont* m_idLabel;
    cocos2d::ccColor3B m_originalColor;
    cocos2d::CCSprite* m_currentColorSprite;
    cocos2d::CCSprite* m_originalColorSprite;
    cocos2d::ccColor3B m_currentColor;
    CCMenuItemSpriteExtra* m_colorButton;
    CCMenuItemSpriteExtra* m_hsvButton;
    ConfigureHSVWidget* m_hsvWidget;
    CCMenuItemSpriteExtra* m_specialColorButton;
    CCTextInputNode* m_fadeInInput;
    CCTextInputNode* m_holdInput;
    CCTextInputNode* m_fadeOutInput;
    CCTextInputNode* m_idInput;
    CCTextInputNode* m_colorIDInput;
    CCMenuItemToggler* m_mainOnlyToggler;
    CCMenuItemToggler* m_secondaryOnlyToggler;
    CCMenuItemToggler* m_staticHSVToggler;
    cocos2d::CCLabelBMFont* m_mainOnlyLabel;
    cocos2d::CCLabelBMFont* m_secondaryOnlyLabel;
    cocos2d::CCLabelBMFont* m_staticHSVLabel;
    bool m_groupMainOnly;
    bool m_groupSecondaryOnly;
    bool m_staticHSV;
    int m_targetGroupID;
    int m_copyColorID;
    bool m_colorInitializing;
    float m_fadeInTime;
    float m_holdTime;
    float m_fadeOutTime;
    int m_pulseMode;
    int m_pulseTargetType;
    bool m_modesInitializing;
    bool m_pulseExclusive;
    cocos2d::ccHSVValue m_hsv;
    CCTextInputNode* m_rInput;
    CCTextInputNode* m_gInput;
    CCTextInputNode* m_bInput;
    CCTextInputNode* m_hexInput;
};
