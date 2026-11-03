#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCContentLayer.hpp>
#include <Geode/mapping/CCTime.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCTouchClipper.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCScrollLayerExt : public cocos2d::CCLayer, public cocos2d::CCTouchClipper {
public:
    static constexpr auto CLASS_NAME = "CCScrollLayerExt";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCScrollLayerExt, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x392df4
     * @note[short] MacOS (Intel): 0x41aad0
     * @note[short] Windows: 0x4a880
     * @note[short] iOS: 0x39d1f4
     * @note[short] Android: Rebinded
     */
     CCScrollLayerExt(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x393638
     * @note[short] MacOS (Intel): 0x41b330
     * @note[short] Windows: 0x4aed0
     * @note[short] iOS: 0x39d990
     * @note[short] Android: Rebinded
     */
     ~CCScrollLayerExt();

    /**
     * @note[short] MacOS (ARM): 0x39429c
     * @note[short] MacOS (Intel): 0x41c130
     * @note[short] Windows: 0x4baf0
     * @note[short] iOS: 0x39e3a4
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x393b58
     * @note[short] MacOS (Intel): 0x41b960
     * @note[short] Windows: 0x4b410
     * @note[short] iOS: 0x39dc90
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x393f98
     * @note[short] MacOS (Intel): 0x41be10
     * @note[short] Windows: 0x4b820
     * @note[short] iOS: 0x39e0b8
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x393cf4
     * @note[short] MacOS (Intel): 0x41bb10
     * @note[short] Windows: 0x4b560
     * @note[short] iOS: 0x39de24
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x393f34
     * @note[short] MacOS (Intel): 0x41bdb0
     * @note[short] Windows: 0x4b7f0
     * @note[short] iOS: 0x39e054
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x393b20
     * @note[short] MacOS (Intel): 0x41b920
     * @note[short] Windows: 0x4b3b0
     * @note[short] iOS: 0x39dc58
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x394564
     * @note[short] MacOS (Intel): 0x41c3f0
     * @note[short] Windows: 0x4bcf0
     * @note[short] iOS: 0x39e520
     * @note[short] Android
     */
    virtual void preVisitWithClippingRect(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x3945f8
     * @note[short] MacOS (Intel): 0x41c470
     * @note[short] Windows: 0x4bda0
     * @note[short] iOS: 0x39e5b4
     * @note[short] Android
     */
    virtual void postVisit();

    /**
     * @note[short] MacOS (ARM): 0x39446c
     * @note[short] MacOS (Intel): 0x41c2e0
     * @note[short] Windows: 0x4bc20
     * @note[short] iOS: 0x39e4b8
     * @note[short] Android
     */
    virtual bool touchInsideClip(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x393894
     * @note[short] MacOS (Intel): 0x41b670
     * @note[short] Windows: 0x4af70
     * @note[short] Android
     */
    void constraintContent();

    /**
     * @note[short] MacOS (ARM): 0x39389c
     * @note[short] MacOS (Intel): 0x41b680
     * @note[short] Windows: 0x4af80
     * @note[short] Android
     */
    void doConstraintContent(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x39343c
     * @note[short] MacOS (Intel): 0x41b110
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMaxY();

    /**
     * @note[short] MacOS (ARM): 0x393444
     * @note[short] MacOS (Intel): 0x41b120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getMinY();

    /**
     * @note[short] MacOS (ARM): 0x393540
     * @note[short] MacOS (Intel): 0x41b210
     * @note[short] Windows: 0x4ae30
     * @note[short] iOS: 0x39d898
     * @note[short] Android
     */
    void moveToTop();

    /**
     * @note[short] MacOS (ARM): 0x393498
     * @note[short] MacOS (Intel): 0x41b170
     * @note[short] Windows: 0x4ad80
     * @note[short] iOS: 0x39d7f0
     * @note[short] Android
     */
    void moveToTopWithOffset(float offset);

    /**
     * @note[short] Android
     */
    cocos2d::CCRect scissorRect();

    /**
     * @note[short] MacOS (Intel): 0x41b820
     * @note[short] Windows: 0x4b140
     * @note[short] Android
     */
    void scrollingEnd();

    /**
     * @note[short] MacOS (ARM): 0x394110
     * @note[short] MacOS (Intel): 0x41bf90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39e21c
     * @note[short] Android
     */
    void scrollLayer(float offset);

    /**
     * @note[short] MacOS (ARM): 0x393a74
     * @note[short] MacOS (Intel): 0x41b870
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setContentLayerSize(cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x393a84
     * @note[short] MacOS (Intel): 0x41b890
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setContentOffset(cocos2d::CCPoint offset, bool animate);

    /**
     * @note[short] MacOS (ARM): 0x3931f0
     * @note[short] MacOS (Intel): 0x41aeb0
     * @note[short] Windows: 0x4b180
     * @note[short] Android
     */
    void updateIndicators(float dt);

    /**
     * @note[short] MacOS (ARM): 0x394174
     * @note[short] MacOS (Intel): 0x41bff0
     * @note[short] Windows: 0x4b9a0
     * @note[short] iOS: 0x39e280
     * @note[short] Android
     */
    void updateScrollDecay(float dt);
    cocos2d::CCTouch* m_touch;
    cocos2d::CCPoint m_touchPosition;
    cocos2d::CCPoint m_touchStartPosition;
    cocos2d::cc_timeval m_timeValue;
    bool m_touchDown;
    bool m_notAtEndOfScroll;
    cocos2d::CCLayerColor* m_verticalScrollbar;
    cocos2d::CCLayerColor* m_horizontalScrollbar;
    CCScrollLayerExtDelegate* m_delegate;
    CCContentLayer* m_contentLayer;
    bool m_cutContent;
    bool m_vScrollbarVisible;
    bool m_hScrollbarVisible;
    bool m_disableHorizontal;
    bool m_disableVertical;
    bool m_disableMovement;
    float m_scrollLimitTop;
    float m_scrollLimitBottom;
    float m_peekLimitTop;
    float m_peekLimitBottom;
    float m_scrollDecay;
    bool m_scrolling;
};
