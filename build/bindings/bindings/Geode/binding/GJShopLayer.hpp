#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/GJPurchaseDelegate.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>

class GJShopLayer : public cocos2d::CCLayer, public GJPurchaseDelegate, public DialogDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJShopLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJShopLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJShopLayer();

    /**
     * @note[short] MacOS (Intel): 0x30e2b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1c8e04
     * @note[short] Android: Rebinded
     */
     ~GJShopLayer();

    /**
     * @note[short] MacOS (ARM): 0x2a1348
     * @note[short] MacOS (Intel): 0x30e580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJShopLayer* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a1244
     * @note[short] MacOS (Intel): 0x30e440
     * @note[short] Windows: 0x3af830
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a3000
     * @note[short] MacOS (Intel): 0x310300
     * @note[short] Windows: 0x3b1b70
     * @note[short] iOS: 0x1ca714
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x2a51d4
     * @note[short] MacOS (Intel): 0x312980
     * @note[short] Windows: 0x3b4d00
     * @note[short] iOS: 0x1cc07c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2a5584
     * @note[short] MacOS (Intel): 0x312d10
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cc374
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2a558c
     * @note[short] MacOS (Intel): 0x312d30
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1cc37c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2a5594
     * @note[short] MacOS (Intel): 0x312d50
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x1cc384
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x2a55b0
     * @note[short] MacOS (Intel): 0x312d90
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x1cc3a0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x2a3f28
     * @note[short] MacOS (Intel): 0x3113a0
     * @note[short] Windows: 0x3b32f0
     * @note[short] iOS: 0x1cb240
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2a38bc
     * @note[short] MacOS (Intel): 0x310ca0
     * @note[short] Windows: 0x3b28d0
     * @note[short] iOS: 0x1cad40
     * @note[short] Android
     */
    virtual void didPurchaseItem(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2a32d8
     * @note[short] MacOS (Intel): 0x310610
     * @note[short] Windows: 0x3b1f70
     * @note[short] iOS: 0x1ca8b0
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2a4ff0
     * @note[short] MacOS (Intel): 0x3127c0
     * @note[short] Windows: 0x3b49c0
     * @note[short] iOS: 0x1cbebc
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2a3210
     * @note[short] MacOS (Intel): 0x310540
     * @note[short] Android
     */
    void exitVideoAdItems();

    /**
     * @note[short] MacOS (Intel): 0x30e690
     * @note[short] Windows: 0x3af9b0
     * @note[short] Android
     */
    bool init(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a2d18
     * @note[short] MacOS (Intel): 0x310030
     * @note[short] Windows: 0x3b30c0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a2ca0
     * @note[short] MacOS (Intel): 0x30ffb0
     * @note[short] Windows: 0x3b1e20
     * @note[short] Android
     */
    void onCommunityCredits(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a2c9c
     * @note[short] MacOS (Intel): 0x30ffa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onPlushies(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a2ecc
     * @note[short] MacOS (Intel): 0x3101f0
     * @note[short] Windows: 0x3b2040
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2a2ccc
     * @note[short] MacOS (Intel): 0x30ffe0
     * @note[short] Android
     */
    void onVideoAd(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3b2280
     * @note[short] Android
     */
    void showCantAffordMessage(GJStoreItem* item);

    /**
     * @note[short] MacOS (ARM): 0x2a3f34
     * @note[short] MacOS (Intel): 0x3113d0
     * @note[short] Windows: 0x3b3300
     * @note[short] Android
     */
    void showReactMessage();

    /**
     * @note[short] MacOS (ARM): 0x2a3334
     * @note[short] MacOS (Intel): 0x310660
     * @note[short] Windows: 0x3b1fd0
     * @note[short] Android
     */
    void updateCurrencyCounter();
    bool m_closing;
    CCCounterLabel* m_currencyLabel;
    cocos2d::CCDictionary* m_shopItems;
    ShopType m_type;
    std::string m_sheetName;
    cocos2d::CCNode* m_unkNode1;
    cocos2d::CCNode* m_unkNode2;
    bool m_videoPlaying;
    bool m_unkBool;
    AnimatedShopKeeper* m_shopKeeper;
    int m_zolgurothDialogIndex;
    int m_affordDialogIndex;
};
