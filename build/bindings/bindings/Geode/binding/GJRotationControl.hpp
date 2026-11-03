#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ControlMenuTouch.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJRotationControl : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "GJRotationControl";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJRotationControl, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJRotationControl();

    /**
     * @note[short] Windows: 0x1a1ea0
     * @note[short] iOS: 0x15c52c
     * @note[short] Android: Rebinded
     */
    virtual  ~GJRotationControl();

    /**
     * @note[short] MacOS (Intel): 0x640750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJRotationControl* create();

    /**
     * @note[short] MacOS (ARM): 0x57ca10
     * @note[short] MacOS (Intel): 0x640880
     * @note[short] Windows: 0x1a2140
     * @note[short] iOS: 0x156f94
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x57d914
     * @note[short] MacOS (Intel): 0x6417d0
     * @note[short] Windows: 0x1a2e70
     * @note[short] iOS: 0x157ba4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x57d46c
     * @note[short] MacOS (Intel): 0x6412f0
     * @note[short] Windows: 0x1a2a60
     * @note[short] iOS: 0x1578b4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57d624
     * @note[short] MacOS (Intel): 0x6414f0
     * @note[short] Windows: 0x1a2bd0
     * @note[short] iOS: 0x157a10
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57d73c
     * @note[short] MacOS (Intel): 0x641600
     * @note[short] Windows: 0x1a2dc0
     * @note[short] iOS: 0x157aac
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57d87c
     * @note[short] MacOS (Intel): 0x641730
     * @note[short] Windows: 0x1a2e20
     * @note[short] iOS: 0x157b0c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn applyFocusedInput();

    /**
     * @note[short] Windows: 0x1a29b0
     * @note[short] Android
     */
    void finishTouch();

    /**
     * @note[short] Android
     */
    TodoReturn hasActiveInput();

    /**
     * @note[short] Android
     */
    void onApplyAngle(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleLockRotation(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn releaseInputFocus();

    /**
     * @note[short] MacOS (ARM): 0x57d0d8
     * @note[short] MacOS (Intel): 0x640f20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setAngle(float angle);

    /**
     * @note[short] Android
     */
    TodoReturn updateAngleInput(float p0);

    /**
     * @note[short] MacOS (ARM): 0x57d2dc
     * @note[short] MacOS (Intel): 0x641140
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSliderPosition(cocos2d::CCPoint position);
    cocos2d::CCPoint m_cursorDifference;
    cocos2d::CCPoint m_controlPosition;
    cocos2d::CCSprite* m_controlSprite;
    float m_startingRotation;
    float m_currentRotation;
    int m_touchID;
    CCMenuItemSpriteExtra* m_lockRotationButton;
    bool m_rotationLocked;
    CCTextInputNode* m_angleInput;
    CCMenuItemSpriteExtra* m_applyAngleButton;
    ControlMenuTouch m_controlMenuTouch;
    GJRotationControlDelegate* m_delegate;
};
