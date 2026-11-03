#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ScrollingLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ScrollingLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ScrollingLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): 0x700854
     * @note[short] MacOS (Intel): 0x7ffd70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ScrollingLayer();

    /**
     * @note[short] MacOS (ARM): 0x1181f0
     * @note[short] MacOS (Intel): 0x144eb0
     * @note[short] Windows: 0x83870
     * @note[short] Android: Rebinded
     */
    virtual  ~ScrollingLayer();

    /**
     * @note[short] MacOS (ARM): 0x700174
     * @note[short] MacOS (Intel): 0x7ff550
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ScrollingLayer* create(cocos2d::CCSize size, cocos2d::CCPoint position, float factor);

    /**
     * @note[short] MacOS (ARM): 0x700400
     * @note[short] MacOS (Intel): 0x7ff810
     * @note[short] Windows: 0x83bc0
     * @note[short] iOS: 0x24e64c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x7004a4
     * @note[short] MacOS (Intel): 0x7ff8e0
     * @note[short] Windows: 0x83c80
     * @note[short] iOS: 0x24e6f0
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x7005b8
     * @note[short] MacOS (Intel): 0x7ffa30
     * @note[short] Windows: 0x83cd0
     * @note[short] iOS: 0x24e778
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x700710
     * @note[short] MacOS (Intel): 0x7ffbd0
     * @note[short] Windows: 0x83dc0
     * @note[short] iOS: 0x24e834
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x700800
     * @note[short] MacOS (Intel): 0x7ffcf0
     * @note[short] Windows: 0x83ed0
     * @note[short] iOS: 0x24e924
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x700838
     * @note[short] MacOS (Intel): 0x7ffd30
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x24e95c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x700344
     * @note[short] MacOS (Intel): 0x7ff720
     * @note[short] Windows: 0x83ad0
     * @note[short] Android
     */
    cocos2d::CCRect getViewRect();

    /**
     * @note[short] MacOS (ARM): 0x700288
     * @note[short] MacOS (Intel): 0x7ff660
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCSize size, cocos2d::CCPoint position, float factor);

    /**
     * @note[short] MacOS (ARM): 0x700580
     * @note[short] MacOS (Intel): 0x7ff9f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setStartOffset(cocos2d::CCPoint offset);
    cocos2d::CCPoint m_position;
    cocos2d::CCSize m_size;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_startOffset;
    float m_scrollFactor;
    int m_touchID;
    cocos2d::CCLayer* m_contentLayer;
    cocos2d::CCLayer* m_parentLayer;
};
