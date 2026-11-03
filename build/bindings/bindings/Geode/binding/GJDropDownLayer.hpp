#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>

class GJDropDownLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "GJDropDownLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDropDownLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x928d0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJDropDownLayer();

    /**
     * @note[short] MacOS (ARM): 0x5d42e8
     * @note[short] MacOS (Intel): 0x6bb180
     * @note[short] Windows: 0x35f8b0
     * @note[short] iOS: 0x4591ec
     * @note[short] Android: Rebinded
     */
     ~GJDropDownLayer();

    /**
     * @note[short] MacOS (ARM): 0x5d4a6c
     * @note[short] MacOS (Intel): 0x6bb970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title);

    /**
     * @note[short] MacOS (ARM): 0x5d4548
     * @note[short] MacOS (Intel): 0x6bb430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static GJDropDownLayer* create(const char* title, float height, bool noBack);

    /**
     * @note[short] MacOS (ARM): 0x5d4e08
     * @note[short] MacOS (Intel): 0x6bbd60
     * @note[short] Windows: 0x463c0
     * @note[short] iOS: 0x4599ac
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5d4e44
     * @note[short] MacOS (Intel): 0x6bbd90
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4599e8
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5d4e64
     * @note[short] MacOS (Intel): 0x6bbdf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x459a08
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5d4e54
     * @note[short] MacOS (Intel): 0x6bbdb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4599f8
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5d4e5c
     * @note[short] MacOS (Intel): 0x6bbdd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x459a00
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x5d4af0
     * @note[short] MacOS (Intel): 0x6bba30
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x459694
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x5d4b28
     * @note[short] MacOS (Intel): 0x6bba70
     * @note[short] Windows: 0x35fde0
     * @note[short] iOS: 0x4596cc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5d4a8c
     * @note[short] MacOS (Intel): 0x6bb9b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x459630
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x5d4ab8
     * @note[short] MacOS (Intel): 0x6bba00
     * @note[short] Windows: 0x46260
     * @note[short] iOS: 0x45965c
     * @note[short] Android
     */
    virtual void enterLayer();

    /**
     * @note[short] MacOS (ARM): 0x5d4b4c
     * @note[short] MacOS (Intel): 0x6bbab0
     * @note[short] Windows: 0x35fe00
     * @note[short] iOS: 0x4596f0
     * @note[short] Android
     */
    virtual void exitLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d4b98
     * @note[short] MacOS (Intel): 0x6bbaf0
     * @note[short] Windows: 0x35fe40
     * @note[short] iOS: 0x45973c
     * @note[short] Android
     */
    virtual void showLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x5d4c9c
     * @note[short] MacOS (Intel): 0x6bbbf0
     * @note[short] Windows: 0x35ff90
     * @note[short] iOS: 0x459840
     * @note[short] Android
     */
    virtual void hideLayer(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x5d4da4
     * @note[short] MacOS (Intel): 0x6bbd00
     * @note[short] Windows: 0x46370
     * @note[short] iOS: 0x459948
     * @note[short] Android
     */
    virtual void layerVisible();

    /**
     * @note[short] MacOS (ARM): 0x5d4db4
     * @note[short] MacOS (Intel): 0x6bbd20
     * @note[short] Windows: 0x3600e0
     * @note[short] iOS: 0x459958
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x5d4da0
     * @note[short] MacOS (Intel): 0x6bbcf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x459944
     * @note[short] Android
     */
    virtual void enterAnimFinished();

    /**
     * @note[short] MacOS (ARM): 0x5d4a90
     * @note[short] MacOS (Intel): 0x6bb9c0
     * @note[short] Windows: 0x35fda0
     * @note[short] iOS: 0x459634
     * @note[short] Android
     */
    virtual void disableUI();

    /**
     * @note[short] MacOS (ARM): 0x5d4aa4
     * @note[short] MacOS (Intel): 0x6bb9e0
     * @note[short] Windows: 0x35fdc0
     * @note[short] iOS: 0x459648
     * @note[short] Android
     */
    virtual void enableUI();

    /**
     * @note[short] MacOS (ARM): 0x5d4a7c
     * @note[short] MacOS (Intel): 0x6bb990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x459620
     * @note[short] Android
     */
    bool init(char const* title);

    /**
     * @note[short] MacOS (ARM): 0x5d466c
     * @note[short] MacOS (Intel): 0x6bb570
     * @note[short] Windows: 0x35f960
     * @note[short] iOS: 0x459224
     * @note[short] Android
     */
    bool init(char const* title, float height, bool noBack);
    cocos2d::CCPoint m_endPosition;
    cocos2d::CCPoint m_startPosition;
    cocos2d::CCMenu* m_buttonMenu;
    GJListLayer* m_listLayer;
    cocos2d::CCLayer* m_mainLayer;
    bool m_closeOnHide;
    GJDropDownLayerDelegate* m_delegate;
    bool m_fastMenu;
};
