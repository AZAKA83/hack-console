#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GJRewardDelegate.hpp>

class RewardsPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "RewardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RewardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RewardsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2594d4
     * @note[short] Android: Rebinded
     */
     ~RewardsPage();

    /**
     * @note[short] MacOS (ARM): 0x1aea8c
     * @note[short] MacOS (Intel): 0x1fd580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RewardsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x1af938
     * @note[short] MacOS (Intel): 0x1fe5d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static char const* getRewardFrame(int type, int state);

    /**
     * @note[short] MacOS (ARM): 0x1aec10
     * @note[short] MacOS (Intel): 0x1fd7a0
     * @note[short] Windows: 0x561c90
     * @note[short] iOS: 0x2595e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1b04c8
     * @note[short] MacOS (Intel): 0x1ff160
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x25aa6c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x1b044c
     * @note[short] MacOS (Intel): 0x1ff0f0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x25a9f0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1b02f0
     * @note[short] MacOS (Intel): 0x1fef90
     * @note[short] Windows: 0x559380
     * @note[short] iOS: 0x25a8ac
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x1b0444
     * @note[short] MacOS (Intel): 0x1ff0d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x25a9e8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x1aff7c
     * @note[short] MacOS (Intel): 0x1fec10
     * @note[short] Windows: 0x562d20
     * @note[short] iOS: 0x25a650
     * @note[short] Android
     */
    virtual void rewardsStatusFinished(int type);

    /**
     * @note[short] MacOS (ARM): 0x1b01ec
     * @note[short] MacOS (Intel): 0x1feea0
     * @note[short] Windows: 0x562f80
     * @note[short] iOS: 0x25a818
     * @note[short] Android
     */
    virtual void rewardsStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x1af8d0
     * @note[short] MacOS (Intel): 0x1fe570
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1af90c
     * @note[short] MacOS (Intel): 0x1fe5a0
     * @note[short] Windows: 0x563550
     * @note[short] Android
     */
    void onFreeStuff(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1af960
     * @note[short] MacOS (Intel): 0x1fe5f0
     * @note[short] Windows: 0x562be0
     * @note[short] Android
     */
    void onReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1b0260
     * @note[short] MacOS (Intel): 0x1fef00
     * @note[short] Windows: 0x563040
     * @note[short] Android
     */
    void tryGetRewards();

    /**
     * @note[short] MacOS (ARM): 0x1b0500
     * @note[short] MacOS (Intel): 0x1ff1a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlockLayerClosed(RewardUnlockLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1afa80
     * @note[short] Windows: 0x563090
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCLabelBMFont* m_leftLabel;
    cocos2d::CCLabelBMFont* m_rightLabel;
    CCMenuItemSpriteExtra* m_leftChest;
    CCMenuItemSpriteExtra* m_rightChest;
    bool m_leftOpen;
    bool m_rightOpen;
    RewardUnlockLayer* m_openLayer;
};
