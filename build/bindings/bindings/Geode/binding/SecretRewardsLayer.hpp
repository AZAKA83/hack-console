#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class SecretRewardsLayer : public cocos2d::CCLayer, public DialogDelegate, public BoomScrollLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretRewardsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretRewardsLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretRewardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x61d4fc
     * @note[short] MacOS (Intel): 0x70c8d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x383048
     * @note[short] Android: Rebinded
     */
     ~SecretRewardsLayer();

    /**
     * @note[short] MacOS (ARM): 0x61d6f0
     * @note[short] MacOS (Intel): 0x70cba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretRewardsLayer* create(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x61d6a4
     * @note[short] MacOS (Intel): 0x70cb60
     * @note[short] Windows: 0x567ee0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x626870
     * @note[short] MacOS (Intel): 0x717060
     * @note[short] Windows: 0x56d8f0
     * @note[short] iOS: 0x389c84
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x6267a4
     * @note[short] MacOS (Intel): 0x716f90
     * @note[short] Windows: 0x56d8e0
     * @note[short] iOS: 0x389c70
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x626594
     * @note[short] MacOS (Intel): 0x716da0
     * @note[short] Windows: 0x56c350
     * @note[short] iOS: 0x389adc
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x620070
     * @note[short] MacOS (Intel): 0x70f660
     * @note[short] Windows: 0x56a7d0
     * @note[short] iOS: 0x385338
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x620c60
     * @note[short] MacOS (Intel): 0x710250
     * @note[short] Windows: 0x56ad10
     * @note[short] Android
     */
    void createSecondaryLayer(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x6266f8
     * @note[short] MacOS (Intel): 0x716ef0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void fadeInMusic();

    /**
     * @note[short] MacOS (ARM): 0x626778
     * @note[short] MacOS (Intel): 0x716f60
     * @note[short] Windows: 0x56d520
     * @note[short] Android
     */
    void fadeInOutMusic();

    /**
     * @note[short] MacOS (ARM): 0x621094
     * @note[short] MacOS (Intel): 0x7106d0
     * @note[short] Windows: 0x56b170
     * @note[short] Android
     */
    cocos2d::CCArray* generateChestItems(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x620238
     * @note[short] MacOS (Intel): 0x70f830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getPageColor(int page);

    /**
     * @note[short] MacOS (ARM): 0x62001c
     * @note[short] MacOS (Intel): 0x70f620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x61d7dc
     * @note[short] MacOS (Intel): 0x70ccd0
     * @note[short] Windows: 0x568040
     * @note[short] Android
     */
    bool init(bool fromShop);

    /**
     * @note[short] MacOS (ARM): 0x620b40
     * @note[short] MacOS (Intel): 0x710100
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void moveToMainLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x620668
     * @note[short] MacOS (Intel): 0x70fc80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void moveToSecondaryLayer(int page);

    /**
     * @note[short] MacOS (ARM): 0x61f6a4
     * @note[short] MacOS (Intel): 0x70ed20
     * @note[short] Windows: 0x56d700
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61f704
     * @note[short] MacOS (Intel): 0x70ed80
     * @note[short] Windows: 0x56aa80
     * @note[short] Android
     */
    void onChestType(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61fa64
     * @note[short] MacOS (Intel): 0x707f20
     * @note[short] Windows: 0x56ce20
     * @note[short] Android
     */
    void onGoldChest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x621bb0
     * @note[short] MacOS (Intel): 0x711450
     * @note[short] Windows: 0x56bb80
     * @note[short] Android
     */
    void onSelectItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4fd128
     * @note[short] MacOS (Intel): 0x70f460
     * @note[short] Windows: 0x56c130
     * @note[short] Android
     */
    void onShop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x620278
     * @note[short] MacOS (Intel): 0x70f880
     * @note[short] Windows: 0x56c540
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x61ff90
     * @note[short] MacOS (Intel): 0x70f5b0
     * @note[short] Windows: 0x56a710
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x621f4c
     * @note[short] MacOS (Intel): 0x7117b0
     * @note[short] Windows: 0x56d930
     * @note[short] Android
     */
    void showDialog01();

    /**
     * @note[short] MacOS (ARM): 0x623728
     * @note[short] MacOS (Intel): 0x7134c0
     * @note[short] Windows: 0x56f230
     * @note[short] Android
     */
    void showDialog03();

    /**
     * @note[short] MacOS (ARM): 0x625a30
     * @note[short] MacOS (Intel): 0x716000
     * @note[short] Windows: 0x571740
     * @note[short] Android
     */
    void showDialogDiamond();

    /**
     * @note[short] MacOS (ARM): 0x6248c4
     * @note[short] MacOS (Intel): 0x714a60
     * @note[short] Windows: 0x5704d0
     * @note[short] Android
     */
    void showDialogMechanic();

    /**
     * @note[short] MacOS (ARM): 0x620764
     * @note[short] MacOS (Intel): 0x70fd90
     * @note[short] Android
     */
    void showLockedChest();

    /**
     * @note[short] MacOS (ARM): 0x626524
     * @note[short] MacOS (Intel): 0x716d30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showShop(int shop);

    /**
     * @note[short] MacOS (ARM): 0x61f758
     * @note[short] MacOS (Intel): 0x70edc0
     * @note[short] Windows: 0x56c960
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* button);

    /**
     * @note[short] MacOS (ARM): 0x620a14
     * @note[short] MacOS (Intel): 0x70ffd0
     * @note[short] Windows: 0x56abd0
     * @note[short] Android
     */
    void updateBackButton();

    /**
     * @note[short] MacOS (ARM): 0x61fd70
     * @note[short] MacOS (Intel): 0x70f3a0
     * @note[short] Windows: 0x56d590
     * @note[short] Android
     */
    void updateUnlockedGoldLabel();

    /**
     * @note[short] MacOS (ARM): 0x61f838
     * @note[short] MacOS (Intel): 0x70ee80
     * @note[short] Windows: 0x56ca40
     * @note[short] Android
     */
    void updateUnlockedLabel();
    cocos2d::CCLayer* m_mainLayer;
    cocos2d::CCLayer* m_secondaryLayer;
    cocos2d::CCLabelBMFont* m_chestLabel;
    cocos2d::CCLabelBMFont* m_chestCounter;
    cocos2d::CCSprite* m_goldPriceSprite;
    cocos2d::CCDictionary* m_chestCounters;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_goldKeysLabel;
    cocos2d::CCSprite* m_keySprite;
    cocos2d::CCSprite* m_goldKeySprite;
    void* m_unknown;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    cocos2d::CCSprite* m_backSprite;
    int m_unkSize4_1;
    int m_unkSize4_2;
    BoomScrollLayer* m_mainScrollLayer;
    BoomScrollLayer* m_secondaryScrollLayer;
    cocos2d::CCSprite* m_backgroundSprite;
    int m_scratchDialogIndex;
    int m_potborDialogIndex;
    int m_diamondDialogIndex;
    int m_mechanicDialogIndex;
    bool m_inMainLayer;
    GJRewardType m_rewardType;
    int m_lockedDialogIndex;
};
