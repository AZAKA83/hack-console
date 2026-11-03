#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>

class LoadingCircle : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "LoadingCircle";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircle, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LoadingCircle();

    /**
     * @note[short] MacOS (ARM): 0x4116c4
     * @note[short] MacOS (Intel): 0x4b80f0
     * @note[short] Windows: 0x78680
     * @note[short] iOS: 0x441554
     * @note[short] Android: Rebinded
     */
    virtual  ~LoadingCircle();

    /**
     * @note[short] MacOS (ARM): 0x41c688
     * @note[short] MacOS (Intel): 0x4b8000
     * @note[short] Windows: 0x78790
     * @note[short] Android
     */
    static LoadingCircle* create();

    /**
     * @note[short] MacOS (ARM): 0x41c784
     * @note[short] MacOS (Intel): 0x4b8170
     * @note[short] Windows: 0x78890
     * @note[short] iOS: 0x44158c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x41c9f0
     * @note[short] MacOS (Intel): 0x4b83c0
     * @note[short] Windows: 0x78b20
     * @note[short] iOS: 0x4417f8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x41ca04
     * @note[short] MacOS (Intel): 0x4b83e0
     * @note[short] Windows: 0x78b40
     * @note[short] iOS: 0x44180c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x41c93c
     * @note[short] MacOS (Intel): 0x4b8330
     * @note[short] Windows: 0x78a80
     * @note[short] Android
     */
    void fadeAndRemove();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setFade(bool fade);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setParentLayer(cocos2d::CCLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x41c840
     * @note[short] MacOS (Intel): 0x4b8240
     * @note[short] Windows: 0x78970
     * @note[short] Android
     */
    void show();
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCLayer* m_parentLayer;
    bool m_fade;
};
