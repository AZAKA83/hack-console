#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GameRateDelegate.hpp>
#include <Geode/binding/ListButtonBarDelegate.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/CharacterColorDelegate.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>
#include <Geode/mapping/map.hpp>

class GJGarageLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public GameRateDelegate, public ListButtonBarDelegate, public DialogDelegate, public CharacterColorDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GJGarageLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJGarageLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJGarageLayer();

    /**
     * @note[short] MacOS (ARM): 0x60fb20
     * @note[short] MacOS (Intel): 0x352320
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x39e748
     * @note[short] Android: Rebinded
     */
     ~GJGarageLayer();

    /**
     * @note[short] MacOS (ARM): 0x2e8190
     * @note[short] MacOS (Intel): 0x358d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static std::string achievementForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e7ffc
     * @note[short] MacOS (Intel): 0x358c00
     * @note[short] Windows: 0x380c20
     * @note[short] Android
     */
    static std::string descriptionForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e1dfc
     * @note[short] MacOS (Intel): 0x352520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJGarageLayer* node();

    /**
     * @note[short] MacOS (ARM): 0x2e1db8
     * @note[short] MacOS (Intel): 0x3524e0
     * @note[short] Windows: 0x37b600
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x2e7e70
     * @note[short] MacOS (Intel): 0x358a90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static std::string titleForUnlock(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e1efc
     * @note[short] MacOS (Intel): 0x352690
     * @note[short] Windows: 0x37b7c0
     * @note[short] iOS: 0x39e838
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x2e8714
     * @note[short] MacOS (Intel): 0x359340
     * @note[short] Windows: 0x381b60
     * @note[short] iOS: 0x3a3c98
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2e52b0
     * @note[short] MacOS (Intel): 0x355b50
     * @note[short] Windows: 0x37d4a0
     * @note[short] iOS: 0x3a13fc
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2e5414
     * @note[short] MacOS (Intel): 0x355c80
     * @note[short] Windows: 0x37d6a0
     * @note[short] iOS: 0x3a152c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2e55f4
     * @note[short] MacOS (Intel): 0x355e40
     * @note[short] Windows: 0x164e40
     * @note[short] iOS: 0x3a1694
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x2e76f4
     * @note[short] MacOS (Intel): 0x358250
     * @note[short] Windows: 0x164f00
     * @note[short] iOS: 0x3a31c4
     * @note[short] Android
     */
    virtual void listButtonBarSwitchedPage(ListButtonBar* bar, int page);

    /**
     * @note[short] MacOS (ARM): 0x2e78c0
     * @note[short] MacOS (Intel): 0x358490
     * @note[short] Windows: 0x380600
     * @note[short] iOS: 0x3a32b4
     * @note[short] Android
     */
    virtual void showUnlockPopup(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e84f8
     * @note[short] MacOS (Intel): 0x3590f0
     * @note[short] Windows: 0x381220
     * @note[short] iOS: 0x3a3b08
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS (ARM): 0x2e82c0
     * @note[short] MacOS (Intel): 0x358e80
     * @note[short] Windows: 0x380dc0
     * @note[short] iOS: 0x3a38d0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2e83bc
     * @note[short] MacOS (Intel): 0x358f90
     * @note[short] Windows: 0x380fe0
     * @note[short] iOS: 0x3a39cc
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2e7610
     * @note[short] MacOS (Intel): 0x358150
     * @note[short] Windows: 0x380450
     * @note[short] iOS: 0x3a312c
     * @note[short] Android
     */
    virtual void playerColorChanged();

    /**
     * @note[short] MacOS (ARM): 0x2e52a0
     * @note[short] MacOS (Intel): 0x355b30
     * @note[short] Windows: 0x37d490
     * @note[short] iOS: 0x3a13ec
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x2e6940
     * @note[short] MacOS (Intel): 0x357220
     * @note[short] Windows: 0x37f090
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e65d0
     * @note[short] MacOS (Intel): 0x356ea0
     * @note[short] Windows: 0x37f150
     * @note[short] Android
     */
    cocos2d::CCArray* getItems(int count, int page, IconType type, int current);

    /**
     * @note[short] MacOS (ARM): 0x2e7578
     * @note[short] MacOS (Intel): 0x3580b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::string getLockFrame(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x2e56a8
     * @note[short] MacOS (Intel): 0x355ed0
     * @note[short] Windows: 0x37e740
     * @note[short] Android
     */
    void onArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4ac4
     * @note[short] MacOS (Intel): 0x355330
     * @note[short] Windows: 0x3819a0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4d08
     * @note[short] MacOS (Intel): 0x355590
     * @note[short] Windows: 0x37d290
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e5f30
     * @note[short] MacOS (Intel): 0x3567b0
     * @note[short] Windows: 0x37e850
     * @note[short] Android
     */
    void onNavigate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4cb0
     * @note[short] MacOS (Intel): 0x355530
     * @note[short] Windows: 0x3817c0
     * @note[short] Android
     */
    void onPaint(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4f18
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e69d8
     * @note[short] MacOS (Intel): 0x3572d0
     * @note[short] Windows: 0x37fb60
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e5674
     * @note[short] MacOS (Intel): 0x355ea0
     * @note[short] Windows: 0x37e880
     * @note[short] Android
     */
    void onSelectTab(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4c84
     * @note[short] MacOS (Intel): 0x355500
     * @note[short] Windows: 0x381670
     * @note[short] Android
     */
    void onShards(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e4c24
     * @note[short] MacOS (Intel): 0x3554a0
     * @note[short] Windows: 0x381940
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e6924
     * @note[short] MacOS (Intel): 0x357200
     * @note[short] Windows: 0x380400
     * @note[short] Android
     */
    void onSpecial(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e7044
     * @note[short] MacOS (Intel): 0x357b30
     * @note[short] Windows: 0x380210
     * @note[short] Android
     */
    void onToggleItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2e73dc
     * @note[short] MacOS (Intel): 0x357f10
     * @note[short] Windows: 0x381480
     * @note[short] Android
     */
    void playRainbowEffect();

    /**
     * @note[short] MacOS (ARM): 0x2e8688
     * @note[short] MacOS (Intel): 0x3592b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playShadowEffect();

    /**
     * @note[short] MacOS (ARM): 0x2e57e0
     * @note[short] MacOS (Intel): 0x25e120
     * @note[short] Windows: 0x37e8b0
     * @note[short] Android
     */
    void selectTab(IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e3fc4
     * @note[short] MacOS (Intel): 0x354840
     * @note[short] Windows: 0x37da80
     * @note[short] Android
     */
    void setupIconSelect();

    /**
     * @note[short] MacOS (ARM): 0x2e590c
     * @note[short] MacOS (Intel): 0x356160
     * @note[short] Windows: 0x37e970
     * @note[short] Android
     */
    void setupPage(int page, IconType type);

    /**
     * @note[short] MacOS (ARM): 0x2e5f68
     * @note[short] MacOS (Intel): 0x3567e0
     * @note[short] Windows: 0x37f420
     * @note[short] Android
     */
    void setupSpecialPage();

    /**
     * @note[short] MacOS (ARM): 0x2e7714
     * @note[short] MacOS (Intel): 0x358270
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showUnlockPopupNew(int id, UnlockType type);

    /**
     * @note[short] MacOS (Intel): 0x3580e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGlow();

    /**
     * @note[short] MacOS (ARM): 0x2e3948
     * @note[short] MacOS (Intel): 0x354230
     * @note[short] Windows: 0x380480
     * @note[short] Android
     */
    void updatePlayerColors();

    /**
     * @note[short] MacOS (ARM): 0x2e540c
     * @note[short] MacOS (Intel): 0x355c60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerName(char const* name);
    CCTextInputNode* m_usernameInput;
    SimplePlayer* m_playerObject;
    cocos2d::CCArray* m_tabButtons;
    cocos2d::CCArray* m_pageButtons;
    cocos2d::CCNode* m_unknown;
    cocos2d::CCSprite* m_supporter;
    bool m_hasClosed;
    IconType m_iconType;
    std::map<IconType, int> m_iconPages;
    cocos2d::CCSprite* m_cursor1;
    cocos2d::CCSprite* m_cursor2;
    CCMenuItemSpriteExtra* m_currentIcon;
    ListButtonBar* m_iconSelection;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_rightArrow;
    cocos2d::CCMenu* m_navDotMenu;
    int m_iconID;
    IconType m_selectedIconType;
    bool m_videoPlaying;
};
