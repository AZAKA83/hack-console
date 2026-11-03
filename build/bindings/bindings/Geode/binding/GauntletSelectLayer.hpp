#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>
#include <Geode/binding/RewardedVideoDelegate.hpp>

class GauntletSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public LevelManagerDelegate, public RewardedVideoDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x22701c
     * @note[short] MacOS (Intel): 0x59e390
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x254008
     * @note[short] Android: Rebinded
     */
     ~GauntletSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x2273f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletSelectLayer* create(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4ed710
     * @note[short] MacOS (Intel): 0x59e520
     * @note[short] Windows: 0x2fd8c0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4efbfc
     * @note[short] MacOS (Intel): 0x5a0b90
     * @note[short] Windows: 0x2fff60
     * @note[short] iOS: 0x256068
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x4ef4f4
     * @note[short] MacOS (Intel): 0x5a04f0
     * @note[short] Windows: 0x2ff660
     * @note[short] iOS: 0x255b38
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4ef620
     * @note[short] MacOS (Intel): 0x5a0620
     * @note[short] Windows: 0x2ffef0
     * @note[short] iOS: 0x255b84
     * @note[short] Android
     */
    virtual void rewardedVideoFinished();

    /**
     * @note[short] MacOS (ARM): 0x4ef454
     * @note[short] MacOS (Intel): 0x5a0450
     * @note[short] Windows: 0x2ff560
     * @note[short] iOS: 0x255a98
     * @note[short] Android
     */
    virtual void scrollLayerWillScrollToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x4ef3b4
     * @note[short] MacOS (Intel): 0x5a03b0
     * @note[short] Windows: 0x2ff560
     * @note[short] iOS: 0x2559f8
     * @note[short] Android
     */
    virtual void scrollLayerScrolledToPage(BoomScrollLayer* layer, int page);

    /**
     * @note[short] MacOS (ARM): 0x4ee950
     * @note[short] MacOS (Intel): 0x59f8d0
     * @note[short] Windows: 0x2fe830
     * @note[short] iOS: 0x2551cc
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* gauntlets, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x4eeaf8
     * @note[short] MacOS (Intel): 0x59faa0
     * @note[short] Windows: 0x2fea00
     * @note[short] iOS: 0x2552e4
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x4ef2b8
     * @note[short] MacOS (Intel): 0x5a02b0
     * @note[short] Windows: 0x2ff3f0
     * @note[short] Android
     */
    void goToPage(int page, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x4ed844
     * @note[short] MacOS (Intel): 0x59e680
     * @note[short] Windows: 0x2fda30
     * @note[short] Android
     */
    bool init(int unused);

    /**
     * @note[short] MacOS (ARM): 0x4ee280
     * @note[short] MacOS (Intel): 0x59f190
     * @note[short] Windows: 0x2ff5a0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ee2f4
     * @note[short] MacOS (Intel): 0x1fb430
     * @note[short] Windows: 0x2fe5c0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ee26c
     * @note[short] MacOS (Intel): 0x59f170
     * @note[short] Windows: 0x2ff3b0
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4eed48
     * @note[short] MacOS (Intel): 0x59fcf0
     * @note[short] Windows: 0x2ff670
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ee258
     * @note[short] MacOS (Intel): 0x59f150
     * @note[short] Windows: 0x2ff3d0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4ee3b0
     * @note[short] MacOS (Intel): 0x59f2b0
     * @note[short] Windows: 0x2fe700
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x63f6c
     * @note[short] MacOS (Intel): 0x5a0680
     * @note[short] Windows: 0x2fffb0
     * @note[short] Android
     */
    void playUnlockAnimation();

    /**
     * @note[short] MacOS (ARM): 0x4ee458
     * @note[short] MacOS (Intel): 0x59f370
     * @note[short] Windows: 0x2feba0
     * @note[short] Android
     */
    void setupGauntlets();

    /**
     * @note[short] MacOS (ARM): 0x4efac4
     * @note[short] MacOS (Intel): 0x5a0a50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showUnlockGauntlet();

    /**
     * @note[short] MacOS (ARM): 0x4ef3ac
     * @note[short] MacOS (Intel): 0x5a03a0
     * @note[short] Windows: 0x2ff550
     * @note[short] Android
     */
    void unblockPlay();

    /**
     * @note[short] MacOS (Intel): 0x5a0f60
     * @note[short] Windows: 0x3010b0
     * @note[short] Android
     */
    void unlockAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x4efd3c
     * @note[short] MacOS (Intel): 0x5a0cd0
     * @note[short] Windows: 0x3005e0
     * @note[short] Android
     */
    void unlockAnimationStep2();

    /**
     * @note[short] MacOS (ARM): 0x4f005c
     * @note[short] MacOS (Intel): 0x23a990
     * @note[short] Windows: 0x3009b0
     * @note[short] Android
     */
    void unlockAnimationStep3();

    /**
     * @note[short] MacOS (ARM): 0x4ee900
     * @note[short] MacOS (Intel): 0x59f880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateArrows();
    cocos2d::CCSprite* m_backgroundSprite;
    BoomScrollLayer* m_scrollLayer;
    CCMenuItemSpriteExtra* m_leftButton;
    CCMenuItemSpriteExtra* m_rightButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    bool m_exiting;
    bool m_playing;
    TextArea* m_tryAgainText;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCDictionary* m_gauntlets;
    bool m_playBlocked;
    int m_gauntletID;
    bool m_videoPlaying;
    bool m_locked;
};
