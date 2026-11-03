#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/LevelDownloadDelegate.hpp>
#include <Geode/binding/LevelUpdateDelegate.hpp>
#include <Geode/binding/RateLevelDelegate.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/LevelDeleteDelegate.hpp>
#include <Geode/binding/NumberInputDelegate.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/vector.hpp>

class LevelInfoLayer : public cocos2d::CCLayer, public LevelDownloadDelegate, public LevelUpdateDelegate, public RateLevelDelegate, public LikeItemDelegate, public FLAlertLayerProtocol, public LevelDeleteDelegate, public NumberInputDelegate, public SetIDPopupDelegate, public TableViewCellDelegate, public AdminActionConfirmDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelInfoLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x24b1d0
     * @note[short] MacOS (Intel): 0x2a99f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x27808
     * @note[short] Android: Rebinded
     */
     ~LevelInfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x201718
     * @note[short] MacOS (Intel): 0x2a9ca0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelInfoLayer* create(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x24b34c
     * @note[short] MacOS (Intel): 0x2a9c50
     * @note[short] Windows: 0x41bc20
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x252f18
     * @note[short] MacOS (Intel): 0x2b1c10
     * @note[short] Windows: 0x4265c0
     * @note[short] iOS: 0x2e720
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x252f24
     * @note[short] MacOS (Intel): 0x2b1c40
     * @note[short] Windows: 0x4265d0
     * @note[short] iOS: 0x2e72c
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x252508
     * @note[short] MacOS (Intel): 0x2b1240
     * @note[short] Windows: 0x422840
     * @note[short] iOS: 0x2e03c
     * @note[short] Android
     */
    virtual void numberInputClosed(NumberInputLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x25075c
     * @note[short] MacOS (Intel): 0x2af3e0
     * @note[short] Windows: 0x41e850
     * @note[short] iOS: 0x2c75c
     * @note[short] Android
     */
    virtual bool cellPerformedAction(TableViewCell* cell, int listType, CellAction action, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0x2516b0
     * @note[short] MacOS (Intel): 0x2b0380
     * @note[short] Windows: 0x420980
     * @note[short] iOS: 0x2d580
     * @note[short] Android
     */
    virtual void levelDownloadFinished(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x251970
     * @note[short] MacOS (Intel): 0x2b0670
     * @note[short] Windows: 0x420d00
     * @note[short] iOS: 0x2d7fc
     * @note[short] Android
     */
    virtual void levelDownloadFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x251a60
     * @note[short] MacOS (Intel): 0x2b0770
     * @note[short] Windows: 0x420e40
     * @note[short] iOS: 0x2d8c8
     * @note[short] Android
     */
    virtual void levelUpdateFinished(GJGameLevel* level, UpdateResponse response);

    /**
     * @note[short] MacOS (ARM): 0x251c68
     * @note[short] MacOS (Intel): 0x2b0960
     * @note[short] Windows: 0x420fa0
     * @note[short] iOS: 0x2d9e8
     * @note[short] Android
     */
    virtual void levelUpdateFailed(int response);

    /**
     * @note[short] MacOS (ARM): 0x251d6c
     * @note[short] MacOS (Intel): 0x2b0a70
     * @note[short] Windows: 0x4210e0
     * @note[short] iOS: 0x2dac8
     * @note[short] Android
     */
    virtual void levelDeleteFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x251e64
     * @note[short] MacOS (Intel): 0x2b0b80
     * @note[short] Windows: 0x421220
     * @note[short] iOS: 0x2db98
     * @note[short] Android
     */
    virtual void levelDeleteFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x252bf8
     * @note[short] MacOS (Intel): 0x2b1920
     * @note[short] Windows: 0x423df0
     * @note[short] iOS: 0x2e51c
     * @note[short] Android
     */
    virtual void rateLevelClosed();

    /**
     * @note[short] MacOS (ARM): 0x252c04
     * @note[short] MacOS (Intel): 0x2b1950
     * @note[short] Windows: 0x424080
     * @note[short] iOS: 0x2e528
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType type, int id, bool liked);

    /**
     * @note[short] MacOS (ARM): 0x252d28
     * @note[short] MacOS (Intel): 0x2b1a60
     * @note[short] Windows: 0x425f80
     * @note[short] iOS: 0x2e598
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x2508b4
     * @note[short] MacOS (Intel): 0x2af500
     * @note[short] Windows: 0x41ea30
     * @note[short] iOS: 0x2c884
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x252054
     * @note[short] MacOS (Intel): 0x2b0d60
     * @note[short] Windows: 0x421350
     * @note[short] iOS: 0x2dd1c
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0x2529c0
     * @note[short] MacOS (Intel): 0x2b16f0
     * @note[short] Windows: 0x423300
     * @note[short] iOS: 0x2e3ec
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn addProgressBar(cocos2d::CCPoint p0, int p1, cocos2d::ccColor3B p2, char const* p3, char const* p4);

    /**
     * @note[short] MacOS (ARM): 0x24ffec
     * @note[short] MacOS (Intel): 0x2aec90
     * @note[short] Windows: 0x422bd0
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f690
     * @note[short] MacOS (Intel): 0x2ae340
     * @note[short] Windows: 0x422d50
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2504ac
     * @note[short] MacOS (Intel): 0x2af140
     * @note[short] Windows: 0x424810
     * @note[short] Android
     */
    void confirmMoveToBottom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22418c
     * @note[short] MacOS (Intel): 0x27e950
     * @note[short] Windows: 0x4246d0
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x3fdda0
     * @note[short] Windows: 0x422e90
     * @note[short] Android
     */
    void confirmOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24e340
     * @note[short] MacOS (Intel): 0x2acf30
     * @note[short] Windows: 0x41f070
     * @note[short] Android
     */
    void downloadLevel();

    /**
     * @note[short] MacOS (ARM): 0x252c8c
     * @note[short] MacOS (Intel): 0x2b19d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementDislikes();

    /**
     * @note[short] MacOS (ARM): 0x252c78
     * @note[short] MacOS (Intel): 0x2b19b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void incrementLikes();

    /**
     * @note[short] MacOS (ARM): 0x24b504
     * @note[short] MacOS (Intel): 0x2a9ea0
     * @note[short] Windows: 0x41be90
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool challenge);

    /**
     * @note[short] MacOS (ARM): 0x252288
     * @note[short] MacOS (Intel): 0x2b0fa0
     * @note[short] Windows: 0x4224c0
     * @note[short] Android
     */
    void loadLevelStep();

    /**
     * @note[short] Android
     */
    TodoReturn loadReplay();

    /**
     * @note[short] MacOS (ARM): 0x250704
     * @note[short] MacOS (Intel): 0x2af380
     * @note[short] Windows: 0x41e800
     * @note[short] Android
     */
    void onAddToList(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x250258
     * @note[short] MacOS (Intel): 0x2aeee0
     * @note[short] Windows: 0x4264d0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2526d4
     * @note[short] MacOS (Intel): 0x2b13d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onClone(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x423320
     * @note[short] Android
     */
    void onCreatorSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x41edc0
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x252818
     * @note[short] MacOS (Intel): 0x2b1540
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24e1a8
     * @note[short] MacOS (Intel): 0x2acd90
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x250354
     * @note[short] MacOS (Intel): 0x2aefe0
     * @note[short] Windows: 0x41eab0
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x250308
     * @note[short] MacOS (Intel): 0x2aef90
     * @note[short] Windows: 0x41ee90
     * @note[short] Android
     */
    void onGarage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x2ae540
     * @note[short] Windows: 0x422640
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x424690
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f8d8
     * @note[short] MacOS (Intel): 0x2ae570
     * @note[short] Windows: 0x41eb50
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x250590
     * @note[short] MacOS (Intel): 0x2af220
     * @note[short] Windows: 0x424530
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f93c
     * @note[short] MacOS (Intel): 0x2ae5e0
     * @note[short] Windows: 0x423f90
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onOwnerDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24d880
     * @note[short] MacOS (Intel): 0x2ac4a0
     * @note[short] Windows: 0x421450
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onPlayReplay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x252ab8
     * @note[short] MacOS (Intel): 0x2b17f0
     * @note[short] Windows: 0x423360
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24fafc
     * @note[short] MacOS (Intel): 0x2ae7c0
     * @note[short] Windows: 0x423e00
     * @note[short] Android
     */
    void onRateDemon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f9ac
     * @note[short] MacOS (Intel): 0x2ae660
     * @note[short] Windows: 0x423650
     * @note[short] Android
     */
    void onRateStars(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onRateStarsMod(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x250650
     * @note[short] MacOS (Intel): 0x2af2e0
     * @note[short] Windows: 0x41e990
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24f77c
     * @note[short] MacOS (Intel): 0x2ae420
     * @note[short] Windows: 0x4243c0
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x24d810
     * @note[short] MacOS (Intel): 0x92c0
     * @note[short] Windows: 0x4245e0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25213c
     * @note[short] MacOS (Intel): 0x1e0650
     * @note[short] Windows: 0x422310
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] MacOS (ARM): 0x252200
     * @note[short] MacOS (Intel): 0x1e0710
     * @note[short] Windows: 0x4223f0
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x252364
     * @note[short] MacOS (Intel): 0x2b1070
     * @note[short] Windows: 0x422590
     * @note[short] Android
     */
    void playStep4();

    /**
     * @note[short] MacOS (ARM): 0x3f2a94
     * @note[short] Windows: 0x41fd50
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x24ef24
     * @note[short] MacOS (Intel): 0x2adc20
     * @note[short] Windows: 0x41f3a0
     * @note[short] Android
     */
    void setupPlatformerStats();

    /**
     * @note[short] MacOS (ARM): 0x24f350
     * @note[short] MacOS (Intel): 0x2ae000
     * @note[short] Windows: 0x41f820
     * @note[short] Android
     */
    void setupProgressBars();

    /**
     * @note[short] MacOS (ARM): 0x250a14
     * @note[short] MacOS (Intel): 0x2af660
     * @note[short] Windows: 0x41ef20
     * @note[short] Android
     */
    bool shouldDownloadLevel();

    /**
     * @note[short] MacOS (ARM): 0x251f5c
     * @note[short] MacOS (Intel): 0x2b0c90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showSongWarning();

    /**
     * @note[short] MacOS (ARM): 0x251ad0
     * @note[short] MacOS (Intel): 0x2b07d0
     * @note[short] Windows: 0x420eb0
     * @note[short] Android
     */
    void showUpdateAlert(UpdateResponse type);

    /**
     * @note[short] Windows: 0x423240
     * @note[short] Android
     */
    void startServerDelete(std::string const& p0, std::vector<int> const& p1);

    /**
     * @note[short] MacOS (ARM): 0x25011c
     * @note[short] MacOS (Intel): 0x2aedc0
     * @note[short] Windows: 0x422680
     * @note[short] Android
     */
    void tryCloneLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25073c
     * @note[short] MacOS (Intel): 0x2af3c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] MacOS (ARM): 0x250c20
     * @note[short] MacOS (Intel): 0x2af830
     * @note[short] Windows: 0x424940
     * @note[short] Android
     */
    void updateLabelValues();

    /**
     * @note[short] MacOS (ARM): 0x24fb4c
     * @note[short] MacOS (Intel): 0x2ae820
     * @note[short] Windows: 0x4240f0
     * @note[short] Android
     */
    void updateSideButtons();
    bool m_isBusy;
    cocos2d::CCMenu* m_playBtnMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_coins;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_starRateBtn;
    CCMenuItemSpriteExtra* m_demonRateBtn;
    void* m_unk2;
    CCMenuItemSpriteExtra* m_editBtn;
    cocos2d::CCLabelBMFont* m_lengthLabel;
    cocos2d::CCLabelBMFont* m_exactLengthLabel;
    cocos2d::CCLabelBMFont* m_downloadsLabel;
    cocos2d::CCLabelBMFont* m_likesLabel;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_folderLabel;
    CCMenuItemSpriteExtra* m_cloneBtn;
    void* m_unk3;
    cocos2d::CCSprite* m_likesIcon;
    cocos2d::CCSprite* m_orbsIcon;
    GJLevelType m_levelType;
    bool m_noUpdateAlert;
    bool m_enterTransitionFinished;
    LoadingCircle* m_circle;
    GJDifficultySprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsIcon;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCArray* m_icons;
    float m_iconOffset;
    cocos2d::CCPoint m_basePosition;
    float m_baseStarsY;
    bool m_challenge;
    cocos2d::CCScene* m_playScene;
    cocos2d::CCSprite* m_playSprite;
    cocos2d::CCProgressTimer* m_progressTimer;
    CustomSongWidget* m_songWidget;
    bool m_loadPlatformerSave;
};
