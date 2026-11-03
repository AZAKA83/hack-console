#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>

class CCBlockLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCBlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCBlockLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x46020
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCBlockLayer();

    /**
     * @note[short] MacOS (ARM): 0x473954
     * @note[short] MacOS (Intel): 0x518b40
     * @note[short] Windows: 0x460f0
     * @note[short] iOS: 0x8f678
     * @note[short] Android: Rebinded
     */
     ~CCBlockLayer();

    /**
     * @note[short] MacOS (Intel): 0x518e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCBlockLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x473ca8
     * @note[short] MacOS (Intel): 0x518ee0
     * @note[short] Windows: 0x461a0
     * @note[short] iOS: 0x8f6b0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x473f30
     * @note[short] MacOS (Intel): 0x519190
     * @note[short] Windows: 0x463c0
     * @note[short] iOS: 0x8f910
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x473f6c
     * @note[short] MacOS (Intel): 0x5191c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f94c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x473f8c
     * @note[short] MacOS (Intel): 0x519220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f96c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x473f7c
     * @note[short] MacOS (Intel): 0x5191e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f95c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x473f84
     * @note[short] MacOS (Intel): 0x519200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f964
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x473e10
     * @note[short] MacOS (Intel): 0x519050
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x8f7f0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x473e48
     * @note[short] MacOS (Intel): 0x519090
     * @note[short] Windows: 0x462f0
     * @note[short] iOS: 0x8f828
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x473dcc
     * @note[short] MacOS (Intel): 0x518ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f7ac
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x473dd8
     * @note[short] MacOS (Intel): 0x519020
     * @note[short] Windows: 0x46260
     * @note[short] iOS: 0x8f7b8
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x473e64
     * @note[short] MacOS (Intel): 0x5190c0
     * @note[short] Windows: 0x46310
     * @note[short] iOS: 0x8f844
     * @note[short] Android
     */
    virtual void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x473eb0
     * @note[short] MacOS (Intel): 0x519100
     * @note[short] Windows: 0x46350
     * @note[short] iOS: 0x8f890
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x473ebc
     * @note[short] MacOS (Intel): 0x519110
     * @note[short] Windows: 0x46360
     * @note[short] iOS: 0x8f89c
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x473ecc
     * @note[short] MacOS (Intel): 0x519130
     * @note[short] Windows: 0x46370
     * @note[short] iOS: 0x8f8ac
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x473edc
     * @note[short] MacOS (Intel): 0x519150
     * @note[short] Windows: 0x46380
     * @note[short] iOS: 0x8f8bc
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x473ec8
     * @note[short] MacOS (Intel): 0x519120
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f8a8
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x473dd0
     * @note[short] MacOS (Intel): 0x519000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f7b0
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x473dd4
     * @note[short] MacOS (Intel): 0x519010
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8f7b4
     * @note[short] Android
     */
    virtual void enableUI();

    /**
     * @note[short] MacOS (ARM): 0x473f94
     * @note[short] MacOS (Intel): 0x519240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void decrementForcePrio();

    /**
     * @note[short] MacOS (ARM): 0x34f028
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementForcePrio();
    bool m_closeOnHide;
    bool m_forcePrioRegistered;
};
