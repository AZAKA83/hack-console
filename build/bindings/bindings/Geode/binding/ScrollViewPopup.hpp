#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ScrollViewPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ScrollViewPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ScrollViewPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x6218d0
     * @note[short] Android: Rebinded
     */
    virtual  ~ScrollViewPopup();

    /**
     * @note[short] MacOS (ARM): 0x84b6a4
     * @note[short] MacOS (Intel): 0x96f4b0
     * @note[short] Windows: 0x6221d0
     * @note[short] iOS: 0x527540
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x84b730
     * @note[short] MacOS (Intel): 0x96f550
     * @note[short] Windows: 0x622220
     * @note[short] iOS: 0x527590
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x84b7fc
     * @note[short] MacOS (Intel): 0x96f620
     * @note[short] Windows: 0x6222d0
     * @note[short] iOS: 0x527608
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x84b888
     * @note[short] MacOS (Intel): 0x96f6c0
     * @note[short] Windows: 0x622320
     * @note[short] iOS: 0x527658
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x84b628
     * @note[short] MacOS (Intel): 0x96f440
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x5274c4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x621f10
     * @note[short] Android
     */
    TodoReturn addVersionHeader(cocos2d::CCNode* p0, int p1, int p2, float p3, float p4);

    /**
     * @note[short] Windows: 0x621980
     * @note[short] Android
     */
    TodoReturn initPopup(cocos2d::CCArray* p0, char const* p1, char const* p2, float p3, float p4);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);
};
