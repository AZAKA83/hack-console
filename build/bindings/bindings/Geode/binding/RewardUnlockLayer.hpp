#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class RewardUnlockLayer : public FLAlertLayer, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardUnlockLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardUnlockLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x561b40
     * @note[short] iOS: 0x25ab2c
     * @note[short] Android: Rebinded
     */
    virtual  ~RewardUnlockLayer();

    /**
     * @note[short] MacOS (ARM): 0x1afddc
     * @note[short] MacOS (Intel): 0x1fe9e0
     * @note[short] Windows: 0x563580
     * @note[short] Android
     */
    static RewardUnlockLayer* create(int type, RewardsPage* page);

    /**
     * @note[short] MacOS (ARM): 0x1b3e7c
     * @note[short] MacOS (Intel): 0x202f00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25dcac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1b3e54
     * @note[short] MacOS (Intel): 0x202ec0
     * @note[short] Windows: 0x566ef0
     * @note[short] iOS: 0x25dc84
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1b175c
     * @note[short] MacOS (Intel): 0x2005f0
     * @note[short] Windows: 0x5644d0
     * @note[short] Android
     */
    void connectionTimeout();

    /**
     * @note[short] MacOS (ARM): 0x1b07d0
     * @note[short] MacOS (Intel): 0x1ff5d0
     * @note[short] Windows: 0x5636c0
     * @note[short] Android
     */
    bool init(int type, RewardsPage* page);

    /**
     * @note[short] MacOS (ARM): 0x1b3e50
     * @note[short] MacOS (Intel): 0x202eb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void labelEnterFinishedO(cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1b1704
     * @note[short] MacOS (Intel): 0x200590
     * @note[short] Windows: 0x566f00
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1b15a8
     * @note[short] MacOS (Intel): 0x200450
     * @note[short] Windows: 0x564530
     * @note[short] Android
     */
    void playDropSound();

    /**
     * @note[short] MacOS (ARM): 0x1b370c
     * @note[short] MacOS (Intel): 0x202760
     * @note[short] Windows: 0x565e60
     * @note[short] Android
     */
    void playLabelEffect(int count, int type, cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float delay);

    /**
     * @note[short] MacOS (ARM): 0x1b17c0
     * @note[short] MacOS (Intel): 0x200650
     * @note[short] Windows: 0x5646f0
     * @note[short] Android
     */
    void playRewardEffect();

    /**
     * @note[short] MacOS (ARM): 0x1b00f8
     * @note[short] MacOS (Intel): 0x1fedb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool readyToCollect(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x1b3dd8
     * @note[short] MacOS (Intel): 0x202e30
     * @note[short] Windows: 0x565de0
     * @note[short] Android
     */
    void showCloseButton();

    /**
     * @note[short] MacOS (ARM): 0x1b0118
     * @note[short] MacOS (Intel): 0x1fedd0
     * @note[short] Windows: 0x564410
     * @note[short] Android
     */
    bool showCollectReward(GJRewardItem* item);

    /**
     * @note[short] MacOS (ARM): 0x1b1634
     * @note[short] MacOS (Intel): 0x2004c0
     * @note[short] Windows: 0x5645d0
     * @note[short] Android
     */
    void step2();

    /**
     * @note[short] MacOS (ARM): 0x1b36f0
     * @note[short] MacOS (Intel): 0x657f0
     * @note[short] Windows: 0x5646d0
     * @note[short] Android
     */
    void step3();
    cocos2d::CCArray* m_backgroundObjects;
    RewardsPage* m_rewardsPage;
    GJChestSprite* m_chestSprite;
    int m_chestType;
    bool m_rewardCollected;
    bool m_animationPlayed;
    GJRewardItem* m_rewardItem;
    cocos2d::CCLabelBMFont* m_wrongLabel;
    CCMenuItemSpriteExtra* m_closeBtn;
    CCMenuItemSpriteExtra* m_rewardBtn;
    float m_unkFloat;
};
