#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ControlMenuTouch.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/unordered_map.hpp>

class GJScaleControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJScaleControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJScaleControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJScaleControl();

    /**
     * @note[short] Windows: 0x1a1f00
     * @note[short] iOS: 0x15c6ac
     * @note[short] Android: Rebinded
     */
    virtual  ~GJScaleControl();

    /**
     * @note[short] MacOS (Intel): 0x641840
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJScaleControl* create();

    /**
     * @note[short] MacOS (ARM): 0x57da70
     * @note[short] MacOS (Intel): 0x641990
     * @note[short] Windows: 0x1a2ef0
     * @note[short] iOS: 0x157c80
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x57ecbc
     * @note[short] MacOS (Intel): 0x642d30
     * @note[short] Windows: 0x1a3c90
     * @note[short] iOS: 0x158c78
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57efe0
     * @note[short] MacOS (Intel): 0x6430c0
     * @note[short] Windows: 0x1a3f70
     * @note[short] iOS: 0x158f0c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57f370
     * @note[short] MacOS (Intel): 0x6434c0
     * @note[short] Windows: 0x1a4370
     * @note[short] iOS: 0x159288
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57f514
     * @note[short] MacOS (Intel): 0x643670
     * @note[short] Windows: 0x1a44d0
     * @note[short] iOS: 0x1593b4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn applyFocusedInput();

    /**
     * @note[short] Android
     */
    TodoReturn createScaleInput(cocos2d::CCPoint p0, int p1, CCMenuItemSpriteExtra** p2);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] Android
     */
    TodoReturn hasActiveInput();

    /**
     * @note[short] MacOS (ARM): 0x57e40c
     * @note[short] MacOS (Intel): 0x642360
     * @note[short] Windows: 0x1a36f0
     * @note[short] Android
     */
    void loadValues(GameObject* object, cocos2d::CCArray* objects, std::unordered_map<int, GameObjectEditorState>& editorStates);

    /**
     * @note[short] Windows: 0x1a4990
     * @note[short] Android
     */
    void onApplyScale(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57ce54
     * @note[short] MacOS (Intel): 0x642000
     * @note[short] Windows: 0x1a5a30
     * @note[short] Android
     */
    void onToggleLockScale(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn releaseInputFocus();

    /**
     * @note[short] MacOS (ARM): 0x57ec40
     * @note[short] MacOS (Intel): 0x642c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float scaleFromValue(float value);

    /**
     * @note[short] MacOS (ARM): 0x57ec7c
     * @note[short] MacOS (Intel): 0x642ca0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float skewFromValue(float value);

    /**
     * @note[short] Windows: 0x1a3c80
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x57e8f8
     * @note[short] MacOS (Intel): 0x642930
     * @note[short] Windows: 0x1a4520
     * @note[short] Android
     */
    void updateLabelX(float value);

    /**
     * @note[short] MacOS (ARM): 0x57ea10
     * @note[short] MacOS (Intel): 0x642a40
     * @note[short] Windows: 0x1a4640
     * @note[short] Android
     */
    void updateLabelXY(float value);

    /**
     * @note[short] MacOS (ARM): 0x57eb28
     * @note[short] MacOS (Intel): 0x642b50
     * @note[short] Windows: 0x1a45b0
     * @note[short] Android
     */
    void updateLabelY(float value);

    /**
     * @note[short] MacOS (ARM): 0x57ec94
     * @note[short] MacOS (Intel): 0x642cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float valueFromScale(float scale);

    /**
     * @note[short] MacOS (Intel): 0x6428f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float valueFromSkew(float value);
    Slider* m_sliderX;
    Slider* m_sliderY;
    Slider* m_sliderXY;
    int m_touchID;
    float m_valueX;
    float m_valueY;
    int m_unkSize4;
    float m_changedValueX;
    float m_changedValueY;
    bool m_scale1Lock;
    ScaleButtonType m_scaleButtonType;
    cocos2d::CCLabelBMFont* m_scaleXLabel;
    cocos2d::CCLabelBMFont* m_scaleYLabel;
    cocos2d::CCLabelBMFont* m_scaleLabel;
    CCTextInputNode* m_scaleXInput;
    CCTextInputNode* m_scaleYInput;
    CCTextInputNode* m_scaleInput;
    CCMenuItemSpriteExtra* m_applyScaleXButton;
    CCMenuItemSpriteExtra* m_applyScaleYButton;
    CCMenuItemSpriteExtra* m_applyScaleButton;
    cocos2d::CCMenu* m_controlMenu;
    ControlMenuTouch m_controlMenuTouch;
    GJScaleControlDelegate* m_delegate;
    float m_upperBound;
    float m_lowerBound;
    int m_senderTag;
    CCMenuItemSpriteExtra* m_scaleLockButton;
    bool m_scaleLocked;
};
