#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/mapping/CCPoint.hpp>

class UIPOptionsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "UIPOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(UIPOptionsLayer, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     UIPOptionsLayer();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~UIPOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static UIPOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x247d44
     * @note[short] MacOS (Intel): 0x2a5170
     * @note[short] Windows: 0x3ab900
     * @note[short] iOS: 0x380b28
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x24843c
     * @note[short] MacOS (Intel): 0x2a58c0
     * @note[short] Windows: 0x3ac290
     * @note[short] iOS: 0x381204
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x248558
     * @note[short] MacOS (Intel): 0x2a59e0
     * @note[short] Windows: 0x3ac3a0
     * @note[short] iOS: 0x3812cc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2486b4
     * @note[short] MacOS (Intel): 0x2a5b50
     * @note[short] Windows: 0x3ac450
     * @note[short] iOS: 0x381380
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2486ec
     * @note[short] MacOS (Intel): 0x2a5b90
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x3813b8
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x248708
     * @note[short] MacOS (Intel): 0x2a5bd0
     * @note[short] Windows: 0x134dc0
     * @note[short] iOS: 0x3813d4
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x248284
     * @note[short] MacOS (Intel): 0x2a56e0
     * @note[short] Windows: 0x3abf20
     * @note[short] iOS: 0x38104c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2482f4
     * @note[short] MacOS (Intel): 0x2a5760
     * @note[short] Windows: 0x3ac130
     * @note[short] iOS: 0x3810bc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x2483a8
     * @note[short] MacOS (Intel): 0x2a5830
     * @note[short] Windows: 0x3ac230
     * @note[short] iOS: 0x381170
     * @note[short] Android
     */
    virtual float getValue(int tag);

    /**
     * @note[short] MacOS (ARM): 0x2483cc
     * @note[short] MacOS (Intel): 0x2a5850
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getTouchRect();

    /**
     * @note[short] MacOS (ARM): 0x2481dc
     * @note[short] MacOS (Intel): 0x2a5630
     * @note[short] Windows: 0x3ac010
     * @note[short] Android
     */
    void onReset(cocos2d::CCObject* sender);
    int m_touchID;
    cocos2d::CCNode* m_practiceNode;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchDelta;
};
