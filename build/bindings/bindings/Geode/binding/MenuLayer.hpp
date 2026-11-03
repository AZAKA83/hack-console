#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GooglePlayDelegate.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class MenuLayer : public cocos2d::CCLayer, public FLAlertLayerProtocol, public GooglePlayDelegate, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "MenuLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(MenuLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x3063fc
     * @note[short] MacOS (Intel): 0x37a980
     * @note[short] Windows: 0x471dc0
     * @note[short] iOS: 0x30370c
     * @note[short] Android: Rebinded
     */
    virtual  ~MenuLayer();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static MenuLayer* get();

    /**
     * @note[short] MacOS (ARM): 0x306524
     * @note[short] MacOS (Intel): 0x37ab40
     * @note[short] Windows: 0x471f10
     * @note[short] iOS: 0x303744
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool isVideoOptionsOpen);

    /**
     * @note[short] MacOS (ARM): 0x3066e0
     * @note[short] MacOS (Intel): 0x37ad10
     * @note[short] Windows: 0x4720c0
     * @note[short] iOS: 0x3038ac
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3088c8
     * @note[short] MacOS (Intel): 0x37cfe0
     * @note[short] Windows: 0x475150
     * @note[short] iOS: 0x30566c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x308b44
     * @note[short] MacOS (Intel): 0x37d2b0
     * @note[short] Windows: 0x475550
     * @note[short] iOS: 0x3058f4
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x30867c
     * @note[short] MacOS (Intel): 0x37cd50
     * @note[short] Windows: 0x474b30
     * @note[short] iOS: 0x3054d0
     * @note[short] Android
     */
    virtual void googlePlaySignedIn();

    /**
     * @note[short] MacOS (ARM): 0x3088d4
     * @note[short] MacOS (Intel): 0x37d010
     * @note[short] Windows: 0x475320
     * @note[short] iOS: 0x30572c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3084f0
     * @note[short] MacOS (Intel): 0x37cb80
     * @note[short] Windows: 0x4749b0
     * @note[short] iOS: 0x3053a4
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x474180
     * @note[short] Android
     */
    TodoReturn checkParentalPending();

    /**
     * @note[short] MacOS (ARM): 0x308b38
     * @note[short] MacOS (Intel): 0x37d280
     * @note[short] Windows: 0x4755c0
     * @note[short] Android
     */
    void endGame();

    /**
     * @note[short] MacOS (ARM): 0x308314
     * @note[short] MacOS (Intel): 0x37c970
     * @note[short] Windows: 0x473fa0
     * @note[short] Android
     */
    void firstNetworkTest();

    /**
     * @note[short] MacOS (ARM): 0x307d1c
     * @note[short] MacOS (Intel): 0x37c3a0
     * @note[short] Windows: 0x4749d0
     * @note[short] Android
     */
    void onAchievements(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307ca8
     * @note[short] MacOS (Intel): 0x37c320
     * @note[short] Windows: 0x474f00
     * @note[short] iOS: 0x304d64
     * @note[short] Android
     */
    void onCreator(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37c910
     * @note[short] Windows: 0x473b70
     * @note[short] Android
     */
    void onDaily(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307f8c
     * @note[short] MacOS (Intel): 0x3837d0
     * @note[short] Windows: 0x474450
     * @note[short] Android
     */
    void onDiscord(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x308774
     * @note[short] MacOS (Intel): 0x37ce60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onEveryplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307efc
     * @note[short] Windows: 0x474390
     * @note[short] Android
     */
    void onFacebook(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30881c
     * @note[short] MacOS (Intel): 0x37cf30
     * @note[short] Android
     */
    void onFreeLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30883c
     * @note[short] MacOS (Intel): 0x37cf50
     * @note[short] Android
     */
    void onFullVersion(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x308514
     * @note[short] MacOS (Intel): 0x37cbc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onGameCenter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x37c2a0
     * @note[short] Windows: 0x474f90
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x308654
     * @note[short] MacOS (Intel): 0x37cd20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onGooglePlayGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30846c
     * @note[short] MacOS (Intel): 0x37cb00
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3080d0
     * @note[short] MacOS (Intel): 0x37c710
     * @note[short] Windows: 0x4742c0
     * @note[short] Android
     */
    void onMyProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307e00
     * @note[short] MacOS (Intel): 0x37c460
     * @note[short] Windows: 0x475020
     * @note[short] iOS: 0x304e98
     * @note[short] Android
     */
    void onNewgrounds(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x474480
     * @note[short] Android
     */
    void onNews(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307d68
     * @note[short] MacOS (Intel): 0x37c3e0
     * @note[short] Windows: 0x474c20
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x306678
     * @note[short] MacOS (Intel): 0x37acb0
     * @note[short] Windows: 0x474c30
     * @note[short] iOS: 0x3038a4
     * @note[short] Android
     */
    void onOptionsInstant();

    /**
     * @note[short] MacOS (Intel): 0x37c210
     * @note[short] Windows: 0x474b80
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307ff8
     * @note[short] MacOS (Intel): 0x37c640
     * @note[short] Windows: 0x475160
     * @note[short] Android
     */
    void onQuit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x473cd0
     * @note[short] Android
     */
    void onReportQueue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307ed8
     * @note[short] MacOS (Intel): 0x37c530
     * @note[short] Windows: 0x474360
     * @note[short] Android
     */
    void onRobTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307db4
     * @note[short] MacOS (Intel): 0x37c420
     * @note[short] Windows: 0x474de0
     * @note[short] Android
     */
    void onStats(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x308888
     * @note[short] MacOS (Intel): 0x37cfa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onTrailer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307f68
     * @note[short] MacOS (Intel): 0x3837b0
     * @note[short] Windows: 0x474420
     * @note[short] Android
     */
    void onTwitch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307f20
     * @note[short] Windows: 0x4743c0
     * @note[short] Android
     */
    void onTwitter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x307f44
     * @note[short] Windows: 0x4743f0
     * @note[short] Android
     */
    void onYouTube(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x308778
     * @note[short] MacOS (Intel): 0x37ce70
     * @note[short] Windows: 0x474c40
     * @note[short] iOS: 0x3055c8
     * @note[short] Android
     */
    void openOptions(bool videoOptions);

    /**
     * @note[short] MacOS (ARM): 0x30855c
     * @note[short] MacOS (Intel): 0x37cc10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showGCQuestion();

    /**
     * @note[short] MacOS (ARM): 0x308410
     * @note[short] MacOS (Intel): 0x37ca90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showMeltdownPromo();

    /**
     * @note[short] MacOS (Intel): 0x37c930
     * @note[short] Windows: 0x474190
     * @note[short] Android
     */
    void showTOS();

    /**
     * @note[short] MacOS (ARM): 0x308748
     * @note[short] MacOS (Intel): 0x37ce20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3b42c0
     * @note[short] Android
     */
    void syncPlatformAchievements(float dt);

    /**
     * @note[short] MacOS (ARM): 0x72a8
     * @note[short] MacOS (Intel): 0x37caa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd(float dt);

    /**
     * @note[short] MacOS (ARM): 0x308328
     * @note[short] MacOS (Intel): 0x37c990
     * @note[short] Windows: 0x474840
     * @note[short] Android
     */
    void updateNewsBadge();

    /**
     * @note[short] MacOS (ARM): 0x30814c
     * @note[short] MacOS (Intel): 0x37c790
     * @note[short] Windows: 0x473e20
     * @note[short] Android
     */
    void updateUserProfileButton();

    /**
     * @note[short] MacOS (ARM): 0x308810
     * @note[short] MacOS (Intel): 0x37cf10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void videoOptionsClosed();

    /**
     * @note[short] MacOS (ARM): 0x308800
     * @note[short] MacOS (Intel): 0x37cef0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void videoOptionsOpened();

    /**
     * @note[short] MacOS (ARM): 0x306498
     * @note[short] MacOS (Intel): 0x37aa70
     * @note[short] Windows: 0x475280
     * @note[short] Android
     */
    void willClose();
    bool m_showingTOS;
    cocos2d::CCSprite* m_gpSprite;
    cocos2d::CCSprite* m_viewProfileSprite;
    cocos2d::CCLabelBMFont* m_profileLabel;
    CCMenuItemSpriteExtra* m_profileButton;
    CCMenuItemSpriteExtra* m_reportQueueButton;
    cocos2d::CCSprite* m_characterSelectSprite;
    cocos2d::CCSprite* m_newsButton;
    void* m_unknown;
    MenuGameLayer* m_menuGameLayer;
};
