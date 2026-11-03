#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCTouchClipper.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class BoomScrollLayer : public cocos2d::CCLayer, public cocos2d::CCTouchClipper {
public:
    static constexpr auto CLASS_NAME = "BoomScrollLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BoomScrollLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     BoomScrollLayer();

    /**
     * @note[short] MacOS (ARM): 0x319a50
     * @note[short] MacOS (Intel): 0x38f590
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x155780
     * @note[short] Android: Rebinded
     */
     ~BoomScrollLayer();

    /**
     * @note[short] MacOS (ARM): 0x318adc
     * @note[short] MacOS (Intel): 0x38e580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int offset, bool looped);

    /**
     * @note[short] MacOS (ARM): 0x318710
     * @note[short] MacOS (Intel): 0x38e1a0
     * @note[short] Windows: 0x40960
     * @note[short] Android
     */
    static BoomScrollLayer* create(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x319e18
     * @note[short] MacOS (Intel): 0x38fa60
     * @note[short] Windows: 0x41490
     * @note[short] iOS: 0x155984
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x31a9ec
     * @note[short] MacOS (Intel): 0x390660
     * @note[short] Windows: 0x420b0
     * @note[short] iOS: 0x155fe4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x31aac4
     * @note[short] MacOS (Intel): 0x390750
     * @note[short] Windows: 0x421b0
     * @note[short] iOS: 0x1560ac
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x31ad90
     * @note[short] MacOS (Intel): 0x390a70
     * @note[short] Windows: 0x424f0
     * @note[short] iOS: 0x1562d4
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x31a830
     * @note[short] MacOS (Intel): 0x390490
     * @note[short] Windows: 0x41fd0
     * @note[short] iOS: 0x155f94
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x31a6b8
     * @note[short] MacOS (Intel): 0x390300
     * @note[short] Windows: 0x41f30
     * @note[short] iOS: 0x155e5c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x319e9c
     * @note[short] MacOS (Intel): 0x38fac0
     * @note[short] Windows: 0x414f0
     * @note[short] iOS: 0x1559e4
     * @note[short] Android
     */
    virtual bool touchInsideClip(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x31a484
     * @note[short] MacOS (Intel): 0x3900c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* page);

    /**
     * @note[short] MacOS (ARM): 0x31a4f4
     * @note[short] MacOS (Intel): 0x390140
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPage(cocos2d::CCLayer* page, int index);

    /**
     * @note[short] MacOS (Intel): 0x3903b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void cancelAndStoleTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void claimTouch(cocos2d::CCTouch* touch);

    /**
     * @note[short] MacOS (ARM): 0x319968
     * @note[short] MacOS (Intel): 0x38f450
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCLayer* getPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x319d44
     * @note[short] MacOS (Intel): 0x38f990
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getRelativePageForNum(int page);

    /**
     * @note[short] MacOS (ARM): 0x319918
     * @note[short] MacOS (Intel): 0x38f400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativePosForPage(int page);

    /**
     * @note[short] MacOS (Intel): 0x38f0d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getTotalPages();

    /**
     * @note[short] MacOS (ARM): 0x3187c8
     * @note[short] MacOS (Intel): 0x38e230
     * @note[short] Windows: 0x40b60
     * @note[short] Android
     */
    bool init(cocos2d::CCArray* pages, int offset, bool looped, cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x31a0f8
     * @note[short] MacOS (Intel): 0x22a290
     * @note[short] Windows: 0x41750
     * @note[short] Android
     */
    void instantMoveToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x31a1d0
     * @note[short] MacOS (Intel): 0x38fe00
     * @note[short] Windows: 0x41830
     * @note[short] Android
     */
    void moveToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x319f68
     * @note[short] MacOS (Intel): 0x38fb90
     * @note[short] Windows: 0x415c0
     * @note[short] Android
     */
    void moveToPageEnded();

    /**
     * @note[short] MacOS (ARM): 0x319c6c
     * @note[short] MacOS (Intel): 0x38f8c0
     * @note[short] Windows: 0x41650
     * @note[short] Android
     */
    int pageNumberForPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x31a0a4
     * @note[short] MacOS (Intel): 0x38fcd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint positionForPageWithNumber(int page);

    /**
     * @note[short] MacOS (Intel): 0x390060
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void quickUpdate();

    /**
     * @note[short] MacOS (ARM): 0x31a55c
     * @note[short] MacOS (Intel): 0x3901b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removePage(cocos2d::CCLayer* page);

    /**
     * @note[short] MacOS (ARM): 0x31a5f0
     * @note[short] MacOS (Intel): 0x390240
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removePageWithNumber(int page);

    /**
     * @note[short] MacOS (ARM): 0x318d70
     * @note[short] MacOS (Intel): 0x38e810
     * @note[short] Windows: 0x419f0
     * @note[short] Android
     */
    void repositionPagesLooped();

    /**
     * @note[short] MacOS (ARM): 0x31a374
     * @note[short] MacOS (Intel): 0x38ffb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void selectPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x3198b0
     * @note[short] MacOS (Intel): 0x38f390
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setDotScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x318c28
     * @note[short] MacOS (Intel): 0x38e6c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setPagesIndicatorPosition(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0x3193c0
     * @note[short] MacOS (Intel): 0x38ee80
     * @note[short] Windows: 0x40ec0
     * @note[short] Android
     */
    void setupDynamicScrolling(cocos2d::CCArray* dynamicObjects, DynamicScrollDelegate* delegate);

    /**
     * @note[short] MacOS (ARM): 0x319dac
     * @note[short] MacOS (Intel): 0x38f9f0
     * @note[short] Android
     */
    void togglePageIndicators(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x319624
     * @note[short] MacOS (Intel): 0x38f0f0
     * @note[short] Windows: 0x41290
     * @note[short] Android
     */
    void updateDots(float dt);

    /**
     * @note[short] MacOS (ARM): 0x318c50
     * @note[short] MacOS (Intel): 0x38e6f0
     * @note[short] Windows: 0x41170
     * @note[short] Android
     */
    void updatePages();
    cocos2d::CCArray* m_dots;
    int m_slowPage;
    float m_touchX;
    float m_touchQuotient;
    bool m_looped;
    DynamicScrollDelegate* m_dynamicDelegate;
    cocos2d::CCArray* m_dynamicObjects;
    bool m_dynamic;
    int m_touchType;
    bool m_ignoreTouchCancel;
    cocos2d::CCTouch* m_touch;
    cocos2d::CCArray* m_pages;
    double m_touchTime;
    cocos2d::CCPoint m_position;
    ExtendedLayer* m_extendedLayer;
    cocos2d::CCRect m_rect;
    float m_unkFloat1;
    float m_maxSpeed;
    float m_minSpeed;
    float m_unkFloat2;
    BoomScrollLayerDelegate* m_delegate;
    bool m_pageMoving;
    bool m_pagesInvisible;
    float m_minimumTouchLengthToSlide;
    float m_minimumTouchLengthToChangePage;
    float m_width;
    bool m_cancelAndStealTouch;
    bool m_dotsVisible;
    cocos2d::CCPoint m_dotPosition;
    cocos2d::ccColor4B m_selectedPageColor;
    cocos2d::ccColor4B m_normalPageColor;
    int m_page;
    float m_pageOffset;
    void* m_unkPtr;
    bool m_doVisit;
    cocos2d::CCRect m_clippingRect;
    bool m_touchDisabled;
};
