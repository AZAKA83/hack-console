#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/HSVWidgetDelegate.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/ColorSetupDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CustomizeObjectLayer : public FLAlertLayer, public HSVWidgetDelegate, public ColorSelectDelegate, public ColorSetupDelegate {
public:
    static constexpr auto CLASS_NAME = "CustomizeObjectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomizeObjectLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x18b844
     * @note[short] MacOS (Intel): 0x1d7290
     * @note[short] Windows: 0x13f100
     * @note[short] iOS: 0x55c60
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomizeObjectLayer();

    /**
     * @note[short] MacOS (ARM): 0x1fe080
     * @note[short] MacOS (Intel): 0x1d7430
     * @note[short] Windows: 0x13f280
     * @note[short] Android
     */
    static CustomizeObjectLayer* create(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x18fbe0
     * @note[short] MacOS (Intel): 0x1dbab0
     * @note[short] Windows: 0x144280
     * @note[short] iOS: 0x594ac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x18f834
     * @note[short] MacOS (Intel): 0x1db700
     * @note[short] Windows: 0x1437b0
     * @note[short] iOS: 0x591c8
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x18f958
     * @note[short] MacOS (Intel): 0x1db810
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x59320
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x18f974
     * @note[short] MacOS (Intel): 0x1db850
     * @note[short] Windows: 0x143960
     * @note[short] iOS: 0x5933c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x18f634
     * @note[short] MacOS (Intel): 0x1db4b0
     * @note[short] Windows: 0x142eb0
     * @note[short] iOS: 0x58fd0
     * @note[short] Android
     */
    virtual void hsvPopupClosed(HSVWidgetPopup* popup, cocos2d::ccHSVValue value);

    /**
     * @note[short] MacOS (ARM): 0x18f3f8
     * @note[short] MacOS (Intel): 0x1db250
     * @note[short] Windows: 0x1427f0
     * @note[short] iOS: 0x58fc4
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x18efe8
     * @note[short] MacOS (Intel): 0x1dade0
     * @note[short] Windows: 0x142450
     * @note[short] iOS: 0x58ca0
     * @note[short] Android
     */
    virtual void colorSetupClosed(int id);

    /**
     * @note[short] MacOS (ARM): 0x18f404
     * @note[short] MacOS (Intel): 0x1db280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fd9d0
     * @note[short] MacOS (Intel): 0x1d9720
     * @note[short] Windows: 0x142800
     * @note[short] Android
     */
    void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x18eab0
     * @note[short] MacOS (Intel): 0x1da870
     * @note[short] Windows: 0x1434e0
     * @note[short] Android
     */
    int getActiveMode(bool ignoreDefault);

    /**
     * @note[short] MacOS (ARM): 0x18f360
     * @note[short] MacOS (Intel): 0x1db1b0
     * @note[short] Windows: 0x143db0
     * @note[short] Android
     */
    ButtonSprite* getButtonByTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x18f620
     * @note[short] MacOS (Intel): 0x1db480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccHSVValue getHSV();

    /**
     * @note[short] MacOS (ARM): 0x18f244
     * @note[short] MacOS (Intel): 0x1db080
     * @note[short] Windows: 0x144070
     * @note[short] Android
     */
    void highlightSelected(ButtonSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x18b9cc
     * @note[short] MacOS (Intel): 0x1d74a0
     * @note[short] Windows: 0x13f420
     * @note[short] Android
     */
    bool init(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x18e714
     * @note[short] MacOS (Intel): 0x1da4a0
     * @note[short] Windows: 0x143ca0
     * @note[short] Android
     */
    void onBreakApart(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18ea6c
     * @note[short] MacOS (Intel): 0x1da820
     * @note[short] Windows: 0x1423c0
     * @note[short] Android
     */
    void onBrowse(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e7c4
     * @note[short] MacOS (Intel): 0x1da570
     * @note[short] Windows: 0x143c10
     * @note[short] Android
     */
    void onClear(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18d950
     * @note[short] MacOS (Intel): 0x1d9680
     * @note[short] Windows: 0x1441a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e9a0
     * @note[short] MacOS (Intel): 0x1da750
     * @note[short] Windows: 0x1420b0
     * @note[short] Android
     */
    void onCopy(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e44c
     * @note[short] MacOS (Intel): 0x1da1b0
     * @note[short] Windows: 0x142530
     * @note[short] Android
     */
    void onEditColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5133c0
     * @note[short] MacOS (Intel): 0x3c1590
     * @note[short] Windows: 0x142c20
     * @note[short] Android
     */
    void onHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e4a0
     * @note[short] MacOS (Intel): 0x1da210
     * @note[short] Windows: 0x141fa0
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e878
     * @note[short] MacOS (Intel): 0x1da620
     * @note[short] Windows: 0x142ff0
     * @note[short] Android
     */
    void onNextColorChannel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e9c8
     * @note[short] MacOS (Intel): 0x1da780
     * @note[short] Windows: 0x142110
     * @note[short] Android
     */
    void onPaste(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18e190
     * @note[short] MacOS (Intel): 0x1d9f20
     * @note[short] Windows: 0x143e40
     * @note[short] Android
     */
    void onSelectColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18daf0
     * @note[short] MacOS (Intel): 0x1d9850
     * @note[short] Windows: 0x143110
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x142270
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x1d9fd0
     * @note[short] Windows: 0x1436e0
     * @note[short] Android
     */
    void onUpdateCustomColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18ee94
     * @note[short] MacOS (Intel): 0x1dac70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void recreateLayer();

    /**
     * @note[short] MacOS (ARM): 0x18e554
     * @note[short] MacOS (Intel): 0x1da2e0
     * @note[short] Windows: 0x141f50
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x18f6f4
     * @note[short] MacOS (Intel): 0x1db5a0
     * @note[short] Windows: 0x143320
     * @note[short] Android
     */
    void toggleVisible();

    /**
     * @note[short] MacOS (ARM): 0x18ed2c
     * @note[short] MacOS (Intel): 0x1daaf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateChannelLabel(int channel);

    /**
     * @note[short] MacOS (ARM): 0x18ec5c
     * @note[short] MacOS (Intel): 0x1daa20
     * @note[short] Windows: 0x1425e0
     * @note[short] Android
     */
    void updateColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x18eb94
     * @note[short] MacOS (Intel): 0x1da960
     * @note[short] Windows: 0x143680
     * @note[short] Android
     */
    void updateCurrentSelection();

    /**
     * @note[short] MacOS (ARM): 0x18e32c
     * @note[short] MacOS (Intel): 0x1da0a0
     * @note[short] Windows: 0x143d20
     * @note[short] Android
     */
    void updateCustomColorLabels();

    /**
     * @note[short] MacOS (ARM): 0x18dffc
     * @note[short] MacOS (Intel): 0x1d9d80
     * @note[short] Windows: 0x142a30
     * @note[short] Android
     */
    void updateHSVButtons();

    /**
     * @note[short] MacOS (ARM): 0xa7d6c
     * @note[short] MacOS (Intel): 0x1da350
     * @note[short] Windows: 0x141d80
     * @note[short] Android
     */
    void updateKerningLabel();

    /**
     * @note[short] MacOS (ARM): 0x18f0fc
     * @note[short] MacOS (Intel): 0x1daef0
     * @note[short] Windows: 0x143f00
     * @note[short] Android
     */
    void updateSelected(int id);
    GameObject* m_targetObject;
    cocos2d::CCArray* m_targetObjects;
    cocos2d::CCArray* m_colorButtons;
    cocos2d::CCArray* m_colorTabNodes;
    cocos2d::CCArray* m_textTabNodes;
    cocos2d::CCArray* m_unkArray;
    cocos2d::CCArray* m_detailTabNodes;
    int m_selectedMode;
    int m_customColorChannel;
    bool m_hasBaseColor;
    bool m_hasDetailColor;
    bool m_glowDisabled;
    CCMenuItemSpriteExtra* m_baseButton;
    CCMenuItemSpriteExtra* m_detailButton;
    CCMenuItemSpriteExtra* m_textButton;
    CCMenuItemSpriteExtra* m_baseColorHSV;
    CCMenuItemSpriteExtra* m_detailColorHSV;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_selectedColorLabel;
    CCTextInputNode* m_customColorInput;
    CCTextInputNode* m_textInput;
    int m_kerningAmount;
    cocos2d::CCLabelBMFont* m_kerningLabel;
    Slider* m_kerningSlider;
    ButtonSprite* m_customColorButtonSprite;
    CCMenuItemSpriteExtra* m_customColorButton;
    CCMenuItemSpriteExtra* m_arrowDown;
    CCMenuItemSpriteExtra* m_arrowUp;
    cocos2d::extension::CCScale9Sprite* m_customColorInputBG;
    ColorChannelSprite* m_colorSprite;
    CCMenuItemSpriteExtra* m_colorSpriteButton;
    CCMenuItemSpriteExtra* m_liveSelectButton;
    bool m_showTextInput;
    bool m_customColorSelected;
    bool m_disableTextDelegate;
};
