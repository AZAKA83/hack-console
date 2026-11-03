#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ColorSelectLiveOverlay : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ColorSelectLiveOverlay";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ColorSelectLiveOverlay, FLAlertLayer)

    /**
     * @note[short] Windows: 0x124ba0
     * @note[short] iOS: 0x1197a4
     * @note[short] Android: Rebinded
     */
    virtual  ~ColorSelectLiveOverlay();

    /**
     * @note[short] Windows: 0x124cc0
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* create(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x651f4c
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* createWithActions(ColorAction* baseAction, ColorAction* detailAction);

    /**
     * @note[short] MacOS (ARM): 0x704140
     * @note[short] MacOS (Intel): 0x803c30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ColorSelectLiveOverlay* createWithObject(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4e6d78
     * @note[short] MacOS (Intel): 0x5972d0
     * @note[short] Windows: 0x1262a0
     * @note[short] iOS: 0x11acb4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4e6e30
     * @note[short] MacOS (Intel): 0x597380
     * @note[short] Windows: 0x1262f0
     * @note[short] iOS: 0x11acc8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (Intel): 0x596a30
     * @note[short] Windows: 0x126100
     * @note[short] Android
     */
    void closeColorSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e6d74
     * @note[short] MacOS (Intel): 0x5972c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorValueChanged(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x4e6adc
     * @note[short] MacOS (Intel): 0x597020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (Intel): 0x596630
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue();

    /**
     * @note[short] MacOS (ARM): 0x4e558c
     * @note[short] MacOS (Intel): 0x5957d0
     * @note[short] Windows: 0x124e20
     * @note[short] Android
     */
    bool init(ColorAction* baseAction, ColorAction* detailAction, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x4e6794
     * @note[short] MacOS (Intel): 0x596d10
     * @note[short] Windows: 0x126150
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e65d0
     * @note[short] MacOS (Intel): 0x596a80
     * @note[short] Windows: 0x126340
     * @note[short] Android
     */
    void selectColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x4e6324
     * @note[short] MacOS (Intel): 0x5966e0
     * @note[short] Windows: 0x125e00
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e6ea0
     * @note[short] MacOS (Intel): 0x597430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4e6ea4
     * @note[short] MacOS (Intel): 0x597440
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4e6ea8
     * @note[short] Windows: 0x126790
     * @note[short] Android
     */
    void toggleControls(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x4e68e0
     * @note[short] MacOS (Intel): 0x596e40
     * @note[short] Windows: 0x1265e0
     * @note[short] Android
     */
    void updateColorLabel();

    /**
     * @note[short] MacOS (ARM): 0x4e6d1c
     * @note[short] MacOS (Intel): 0x597250
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateColorValue();

    /**
     * @note[short] MacOS (ARM): 0x4e6cdc
     * @note[short] MacOS (Intel): 0x5971f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateOpacity();
    EffectGameObject* m_effectGameObject;
    cocos2d::CCArray* m_barSprites;
    cocos2d::CCArray* m_12buttons;
    ColorAction* m_baseColorAction;
    ColorAction* m_detailColorAction;
    cocos2d::ccColor3B m_mainColor;
    cocos2d::ccColor3B m_detailColor;
    cocos2d::ccColor3B m_targetColor;
    float m_unk2ac;
    int m_unk2b0;
    int m_unk2b4;
    float m_opacity;
    ColorSelectDelegate* m_delegate;
    bool m_disableTextDelegate;
    bool m_unk2c9;
    bool m_updateColor;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_valueSlider;
    Slider* m_opacitySlider;
    cocos2d::CCSprite* m_colorSprite;
    cocos2d::CCSprite* m_oldColorSprite;
    cocos2d::CCSprite* m_saturationSprite;
    cocos2d::CCSprite* m_valueSprite;
    cocos2d::CCSprite* m_opacitySprite;
    double m_hue;
    double m_saturation;
    double m_value;
    cocos2d::CCLabelBMFont* m_colorLabel;
    bool m_detailColorSelected;
    bool m_closeButtonPressed;
};
