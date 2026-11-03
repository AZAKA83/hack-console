#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/ColorPickerDelegate.hpp>
#include <Geode/binding/GJSpecialColorSelectDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ColorSelectPopup : public SetupTriggerPopup, public cocos2d::extension::ColorPickerDelegate, public GJSpecialColorSelectDelegate {
public:
    static constexpr auto CLASS_NAME = "ColorSelectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ColorSelectPopup();

    /**
     * @note[short] MacOS (Intel): 0x8038d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x49e35c
     * @note[short] Android: Rebinded
     */
     ~ColorSelectPopup();

    /**
     * @note[short] MacOS (ARM): 0x708490
     * @note[short] MacOS (Intel): 0x808730
     * @note[short] Windows: 0x12b670
     * @note[short] Android
     */
    static std::string colorToHex(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x704140
     * @note[short] MacOS (Intel): 0x803c30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ColorSelectPopup* create(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x704150
     * @note[short] MacOS (Intel): 0x803c50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ColorSelectPopup* create(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x703fdc
     * @note[short] MacOS (Intel): 0x803a60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* effect, cocos2d::CCArray* array);

    /**
     * @note[short] Windows: 0x126950
     * @note[short] Android
     */
    static ColorSelectPopup* create(EffectGameObject* effect, cocos2d::CCArray* array, ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x4a140c
     * @note[short] MacOS (Intel): 0x808c80
     * @note[short] Windows: 0x12aa40
     * @note[short] Android
     */
    static cocos2d::ccColor3B hexToColor(std::string hex);

    /**
     * @note[short] MacOS (ARM): 0x709a14
     * @note[short] MacOS (Intel): 0x809b50
     * @note[short] Windows: 0x12bb70
     * @note[short] iOS: 0x4a240c
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x7078ac
     * @note[short] MacOS (Intel): 0x8078a0
     * @note[short] Windows: 0x129380
     * @note[short] iOS: 0x4a1400
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x709ae0
     * @note[short] MacOS (Intel): 0x809c40
     * @note[short] Windows: 0x12bc60
     * @note[short] iOS: 0x4a24d8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x707f70
     * @note[short] MacOS (Intel): 0x808110
     * @note[short] Windows: 0x12a730
     * @note[short] iOS: 0x4a1a1c
     * @note[short] Android
     */
    virtual void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x709fc4
     * @note[short] MacOS (Intel): 0x80a1e0
     * @note[short] Windows: 0x12c670
     * @note[short] iOS: 0x4a28e4
     * @note[short] Android
     */
    virtual void colorSelectClosed(GJSpecialColorSelect* select, int id);

    /**
     * @note[short] MacOS (ARM): 0x707f64
     * @note[short] MacOS (Intel): 0x8080e0
     * @note[short] Windows: 0x12a720
     * @note[short] iOS: 0x4a1a10
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (Intel): 0x806370
     * @note[short] Windows: 0x12a480
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x707db4
     * @note[short] MacOS (Intel): 0x807eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x70418c
     * @note[short] MacOS (Intel): 0x803c80
     * @note[short] Windows: 0x126b40
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, ColorAction* action);

    /**
     * @note[short] MacOS (Intel): 0x806980
     * @note[short] Windows: 0x129d50
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8070c0
     * @note[short] Windows: 0x129af0
     * @note[short] Android
     */
    void onCopyOpacity(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x706b4c
     * @note[short] MacOS (Intel): 0x806a00
     * @note[short] Windows: 0x129e50
     * @note[short] Android
     */
    void onDefault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x807160
     * @note[short] Windows: 0x129a60
     * @note[short] Android
     */
    void onHSVLegacyMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x706b00
     * @note[short] MacOS (Intel): 0x8069c0
     * @note[short] Windows: 0x129dd0
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x706e64
     * @note[short] MacOS (Intel): 0x806dc0
     * @note[short] Windows: 0x129b90
     * @note[short] Android
     */
    void onPlayerColor1(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x706f18
     * @note[short] MacOS (Intel): 0x806e80
     * @note[short] Windows: 0x129c70
     * @note[short] Android
     */
    void onPlayerColor2(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8071f0
     * @note[short] Windows: 0x12c470
     * @note[short] Android
     */
    void onSelectSpecialColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x298c18
     * @note[short] MacOS (Intel): 0x806f40
     * @note[short] Windows: 0x129910
     * @note[short] Android
     */
    void onTintGround(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7108
     * @note[short] MacOS (Intel): 0x807080
     * @note[short] Windows: 0x12c4e0
     * @note[short] Android
     */
    void onToggleHSVMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x707048
     * @note[short] MacOS (Intel): 0x806fd0
     * @note[short] Windows: 0x1299a0
     * @note[short] Android
     */
    void onToggleTintMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x707298
     * @note[short] MacOS (Intel): 0x807240
     * @note[short] Windows: 0x12c400
     * @note[short] Android
     */
    void onUpdateCopyColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x70753c
     * @note[short] MacOS (Intel): 0x807510
     * @note[short] Windows: 0x12bbe0
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x706a30
     * @note[short] MacOS (Intel): 0x8068f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x706708
     * @note[short] MacOS (Intel): 0x806580
     * @note[short] Windows: 0x12a120
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x12a860
     * @note[short] Android
     */
    void updateColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x70806c
     * @note[short] MacOS (Intel): 0x808240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x709efc
     * @note[short] MacOS (Intel): 0x80a0e0
     * @note[short] Windows: 0x12c810
     * @note[short] Android
     */
    void updateCopyColor();

    /**
     * @note[short] Windows: 0x12ca80
     * @note[short] Android
     */
    void updateCopyColorTextInputLabel();

    /**
     * @note[short] MacOS (ARM): 0x709a68
     * @note[short] MacOS (Intel): 0x809bb0
     * @note[short] Windows: 0x12c250
     * @note[short] Android
     */
    void updateCustomColorIdx();

    /**
     * @note[short] Windows: 0x12a210
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] MacOS (Intel): 0x8067a0
     * @note[short] Windows: 0x5eb880
     * @note[short] Android
     */
    void updateDurLabel();

    /**
     * @note[short] MacOS (ARM): 0x7075a8
     * @note[short] MacOS (Intel): 0x807580
     * @note[short] Windows: 0x12c520
     * @note[short] Android
     */
    void updateHSVMode();

    /**
     * @note[short] MacOS (Intel): 0x808010
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateHSVValue();

    /**
     * @note[short] MacOS (ARM): 0x707dc8
     * @note[short] MacOS (Intel): 0x807ed0
     * @note[short] Windows: 0x12a2a0
     * @note[short] Android
     */
    void updateOpacity();

    /**
     * @note[short] MacOS (ARM): 0x706a68
     * @note[short] MacOS (Intel): 0x806920
     * @note[short] Windows: 0x12a420
     * @note[short] Android
     */
    void updateOpacityLabel();

    /**
     * @note[short] Windows: 0x12c2f0
     * @note[short] Android
     */
    void updateTextInputLabel();
    cocos2d::extension::CCControlColourPicker* m_colorPicker;
    bool m_unk3c0;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    Slider* m_fadeTimeSlider;
    Slider* m_opacitySlider;
    CCMenuItemToggler* m_playerColor1Toggle;
    CCMenuItemToggler* m_playerColor2Toggle;
    cocos2d::ccColor3B m_originalColor;
    cocos2d::CCSprite* m_currentColorSprite;
    cocos2d::CCSprite* m_originalColorSprite;
    cocos2d::ccColor3B m_currentColor;
    ColorSelectDelegate* m_delegate;
    float m_fadeTime;
    int m_playerColor;
    int m_blending;
    float m_opacity;
    ColorAction* m_colorAction;
    CCTextInputNode* m_colorInput;
    bool m_backgroundTrigger;
    bool m_tintGround;
    bool m_legacyHSV;
    bool m_colorTrigger;
    bool m_noChannel;
    bool m_newColorTrigger;
    int m_colorID;
    bool m_initializing;
    int m_copyColorID;
    bool m_copyOpacity;
    ConfigureHSVWidget* m_hsvWidget;
    cocos2d::ccHSVValue m_hsv;
    cocos2d::CCArray* m_colorObjects;
    cocos2d::CCArray* m_copyObjects;
    CCTextInputNode* m_copyColorInput;
    CCTextInputNode* m_fadeTimeInput;
    void* m_unk488;
    void* m_unk490;
    bool m_showCopyObjects;
    CCTextInputNode* m_rInput;
    CCTextInputNode* m_gInput;
    CCTextInputNode* m_bInput;
    CCTextInputNode* m_hexInput;
};
