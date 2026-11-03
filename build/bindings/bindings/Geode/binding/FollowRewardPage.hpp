#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GameRateDelegate.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>

class FollowRewardPage : public FLAlertLayer, public FLAlertLayerProtocol, public GameRateDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "FollowRewardPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FollowRewardPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x20ace0
     * @note[short] iOS: 0x4a6b24
     * @note[short] Android: Rebinded
     */
    virtual  ~FollowRewardPage();

    /**
     * @note[short] Android
     */
    static FollowRewardPage* create();

    /**
     * @note[short] MacOS (ARM): 0x385460
     * @note[short] MacOS (Intel): 0x40c310
     * @note[short] Windows: 0x20af80
     * @note[short] iOS: 0x4a6c2c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3875fc
     * @note[short] MacOS (Intel): 0x40e6f0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x4a87b0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x387580
     * @note[short] MacOS (Intel): 0x40e680
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x4a8734
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x387334
     * @note[short] MacOS (Intel): 0x40e440
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x4a84f8
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x3874bc
     * @note[short] MacOS (Intel): 0x40e5c0
     * @note[short] Windows: 0x20ec70
     * @note[short] iOS: 0x4a8670
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x387324
     * @note[short] MacOS (Intel): 0x40e420
     * @note[short] Windows: 0x20d710
     * @note[short] iOS: 0x4a84e8
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x386be0
     * @note[short] MacOS (Intel): 0x40dcb0
     * @note[short] Windows: 0x20d0f0
     * @note[short] iOS: 0x4a8114
     * @note[short] Android
     */
    virtual void updateRate();

    /**
     * @note[short] MacOS (ARM): 0x386498
     * @note[short] MacOS (Intel): 0x40d550
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRewardedVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3864d4
     * @note[short] MacOS (Intel): 0x40d580
     * @note[short] Windows: 0x20d720
     * @note[short] Android
     */
    void onSpecialItem(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x386afc
     * @note[short] MacOS (Intel): 0x40dbe0
     * @note[short] Windows: 0x20eb90
     * @note[short] Android
     */
    void switchToOpenedState(CCMenuItemSpriteExtra* button);
    cocos2d::CCArray* m_chests;
    bool m_videoPlaying;
};
