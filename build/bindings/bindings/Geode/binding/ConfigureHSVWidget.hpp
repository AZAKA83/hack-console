#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class ConfigureHSVWidget : public cocos2d::CCNode, public TextInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ConfigureHSVWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ConfigureHSVWidget, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x12f4a0
     * @note[short] iOS: 0x123ccc
     * @note[short] Android: Rebinded
     */
    virtual  ~ConfigureHSVWidget();

    /**
     * @note[short] MacOS (Intel): 0x41cc10
     * @note[short] Windows: 0x12fad0
     * @note[short] Android
     */
    static ConfigureHSVWidget* create(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs);

    /**
     * @note[short] MacOS (ARM): 0x396b88
     * @note[short] MacOS (Intel): 0x41ece0
     * @note[short] Windows: 0x1313d0
     * @note[short] Android
     */
    static cocos2d::ccHSVValue getHSV(GameObject* object, cocos2d::CCArray* objects, int mode);

    /**
     * @note[short] MacOS (ARM): 0x3965d4
     * @note[short] MacOS (Intel): 0x41e6e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x124e28
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3965dc
     * @note[short] MacOS (Intel): 0x41e700
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x124e30
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3968ec
     * @note[short] MacOS (Intel): 0x41ea10
     * @note[short] Windows: 0x1307e0
     * @note[short] iOS: 0x124fe0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3965f8
     * @note[short] MacOS (Intel): 0x41e740
     * @note[short] Windows: 0x1306f0
     * @note[short] iOS: 0x124e4c
     * @note[short] Android
     */
    virtual void textInputShouldOffset(CCTextInputNode* p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x3967c0
     * @note[short] MacOS (Intel): 0x41e900
     * @note[short] Windows: 0x130730
     * @note[short] iOS: 0x124f64
     * @note[short] Android
     */
    virtual void textInputReturn(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x395a5c
     * @note[short] MacOS (Intel): 0x41dae0
     * @note[short] Windows: 0x1304a0
     * @note[short] Android
     */
    void createTextInputNode(cocos2d::CCPoint position, int tag);

    /**
     * @note[short] Android
     */
    TodoReturn hostPopup();

    /**
     * @note[short] MacOS (ARM): 0x395198
     * @note[short] MacOS (Intel): 0x41d1c0
     * @note[short] Windows: 0x12fbb0
     * @note[short] Android
     */
    bool init(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs);

    /**
     * @note[short] MacOS (ARM): 0x394f1c
     * @note[short] MacOS (Intel): 0x41cee0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onClose();

    /**
     * @note[short] MacOS (Intel): 0x41df70
     * @note[short] Windows: 0x130de0
     * @note[short] Android
     */
    void onResetHSV(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x395e3c
     * @note[short] MacOS (Intel): 0x41de90
     * @note[short] Windows: 0x130ce0
     * @note[short] Android
     */
    void onToggleSConst(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x395eb0
     * @note[short] MacOS (Intel): 0x41df00
     * @note[short] Windows: 0x130d60
     * @note[short] Android
     */
    void onToggleVConst(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void setBaseColor(cocos2d::ccColor3B p0);

    /**
     * @note[short] MacOS (ARM): 0x395cb8
     * @note[short] MacOS (Intel): 0x41dd10
     * @note[short] Windows: 0x130bc0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateColorPreview();

    /**
     * @note[short] MacOS (ARM): 0x395fdc
     * @note[short] MacOS (Intel): 0x41e040
     * @note[short] Windows: 0x130e70
     * @note[short] Android
     */
    void updateLabels();

    /**
     * @note[short] MacOS (ARM): 0x396518
     * @note[short] MacOS (Intel): 0x41e600
     * @note[short] Windows: 0x130ae0
     * @note[short] Android
     */
    void updateSliders();
    cocos2d::CCLabelBMFont* m_hueLabel;
    cocos2d::CCLabelBMFont* m_saturationLabel;
    cocos2d::CCLabelBMFont* m_brightnessLabel;
    Slider* m_hueSlider;
    Slider* m_saturationSlider;
    Slider* m_brightnessSlider;
    cocos2d::ccHSVValue m_hsv;
    bool m_mixed;
    HSVWidgetDelegate* m_delegate;
    bool m_addInputs;
    bool m_updating;
    cocos2d::CCDictionary* m_inputs;
    cocos2d::ccColor3B m_baseColor;
    cocos2d::CCSprite* m_basePreview;
    cocos2d::CCSprite* m_hsvPreview;
    bool m_hasHSVPreview;
};
