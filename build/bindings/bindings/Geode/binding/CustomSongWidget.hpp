#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJAssetDownloadAction.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/vector.hpp>

class CustomSongWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSongWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSongWidget, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomSongWidget();

    /**
     * @note[short] MacOS (ARM): 0x1ad4cc
     * @note[short] MacOS (Intel): 0x6f70a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x11e384
     * @note[short] Android: Rebinded
     */
     ~CustomSongWidget();

    /**
     * @note[short] MacOS (ARM): 0x6091d4
     * @note[short] MacOS (Intel): 0x6f7190
     * @note[short] Windows: 0x169060
     * @note[short] Android
     */
    static CustomSongWidget* create(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10);

    /**
     * @note[short] MacOS (ARM): 0x60e4ec
     * @note[short] MacOS (Intel): 0x6fc980
     * @note[short] Windows: 0x16dee0
     * @note[short] iOS: 0x122894
     * @note[short] Android
     */
    virtual void loadSongInfoFinished(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x60e790
     * @note[short] MacOS (Intel): 0x6fcc60
     * @note[short] Windows: 0x16e090
     * @note[short] iOS: 0x122980
     * @note[short] Android
     */
    virtual void loadSongInfoFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x60ea8c
     * @note[short] MacOS (Intel): 0x6fcf60
     * @note[short] Windows: 0x16e170
     * @note[short] iOS: 0x122af4
     * @note[short] Android
     */
    virtual void downloadSongStarted(int id);

    /**
     * @note[short] MacOS (ARM): 0x60ec20
     * @note[short] MacOS (Intel): 0x6fd100
     * @note[short] Windows: 0x16e190
     * @note[short] iOS: 0x122b28
     * @note[short] Android
     */
    virtual void downloadSongFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x60eefc
     * @note[short] MacOS (Intel): 0x6fd3f0
     * @note[short] Windows: 0x16e250
     * @note[short] iOS: 0x122d0c
     * @note[short] Android
     */
    virtual void downloadSongFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x60f128
     * @note[short] MacOS (Intel): 0x6fd620
     * @note[short] Windows: 0x16e2d0
     * @note[short] iOS: 0x122e00
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x60f13c
     * @note[short] MacOS (Intel): 0x6fd650
     * @note[short] Windows: 0x16e2f0
     * @note[short] iOS: 0x122e14
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x60f510
     * @note[short] MacOS (Intel): 0x6fda90
     * @note[short] Windows: 0x16e970
     * @note[short] iOS: 0x123054
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x60f558
     * @note[short] MacOS (Intel): 0x6fdaf0
     * @note[short] Windows: 0x16e9a0
     * @note[short] iOS: 0x12309c
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction action);

    /**
     * @note[short] MacOS (ARM): 0x60d4e0
     * @note[short] MacOS (Intel): 0x6fb8c0
     * @note[short] Windows: 0x16c350
     * @note[short] iOS: 0x121dd0
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x60f614
     * @note[short] MacOS (Intel): 0x6fdba0
     * @note[short] Windows: 0x16ed20
     * @note[short] iOS: 0x1230c0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x60c984
     * @note[short] MacOS (Intel): 0x6fac80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addExtraVisuals(bool newMusic, bool newLibraryMusic);

    /**
     * @note[short] MacOS (ARM): 0x1e8dec
     * @note[short] MacOS (Intel): 0x63b120
     * @note[short] Windows: 0x16b270
     * @note[short] Android
     */
    void deleteSong();

    /**
     * @note[short] MacOS (ARM): 0x60f094
     * @note[short] MacOS (Intel): 0x6fd5a0
     * @note[short] Windows: 0x16e8a0
     * @note[short] Android
     */
    void downloadAssetFailed(int id, GJAssetType type, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x60ece4
     * @note[short] MacOS (Intel): 0x6fd1c0
     * @note[short] Windows: 0x16e7e0
     * @note[short] Android
     */
    void downloadAssetFinished(int id, GJAssetType type);

    /**
     * @note[short] MacOS (ARM): 0x60d494
     * @note[short] MacOS (Intel): 0x6fb870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] MacOS (ARM): 0x60cf10
     * @note[short] MacOS (Intel): 0x6fb220
     * @note[short] Windows: 0x16b590
     * @note[short] Android
     */
    void getSongInfoIfUnloaded();

    /**
     * @note[short] MacOS (ARM): 0x609350
     * @note[short] MacOS (Intel): 0x6f7380
     * @note[short] Windows: 0x1692e0
     * @note[short] Android
     */
    bool init(SongInfoObject* p0, CustomSongDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, int p8, bool p9, bool p10);

    /**
     * @note[short] MacOS (ARM): 0x60a7a4
     * @note[short] Windows: 0x16b650
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x60a7e0
     * @note[short] MacOS (Intel): 0x6f8910
     * @note[short] Windows: 0x16b140
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x60a554
     * @note[short] MacOS (Intel): 0x6f8640
     * @note[short] Windows: 0x16b890
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x60a920
     * @note[short] MacOS (Intel): 0x6f8a50
     * @note[short] Windows: 0x16b710
     * @note[short] Android
     */
    void onGetSongInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x60acb4
     * @note[short] MacOS (Intel): 0x6f8de0
     * @note[short] Windows: 0x16ae60
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x16b4f0
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x60a9ac
     * @note[short] MacOS (Intel): 0x6f8ae0
     * @note[short] Windows: 0x16bcd0
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x60a8c0
     * @note[short] MacOS (Intel): 0x6f89f0
     * @note[short] Windows: 0x16bc40
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x16b7e0
     * @note[short] Android
     */
    void onToggleFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x16adb0
     * @note[short] Android
     */
    void onUsage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x60b184
     * @note[short] MacOS (Intel): 0x6f9380
     * @note[short] Windows: 0x16a6f0
     * @note[short] Android
     */
    void positionInfoObjects();

    /**
     * @note[short] MacOS (ARM): 0x60f24c
     * @note[short] MacOS (Intel): 0x6fd7e0
     * @note[short] Windows: 0x16e4d0
     * @note[short] Android
     */
    void processNextMultiAsset();

    /**
     * @note[short] Android
     */
    void setMultiAssetFilesize(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x60cd10
     * @note[short] MacOS (Intel): 0x6fafe0
     * @note[short] Windows: 0x16ead0
     * @note[short] Android
     */
    void showError(bool fast);

    /**
     * @note[short] MacOS (ARM): 0x5d1a30
     * @note[short] MacOS (Intel): 0x6fb6d0
     * @note[short] Windows: 0x16bb10
     * @note[short] Android
     */
    void startDownload();

    /**
     * @note[short] MacOS (Intel): 0x6faaf0
     * @note[short] Windows: 0x16bb80
     * @note[short] Android
     */
    void startMonitorDownload();

    /**
     * @note[short] MacOS (ARM): 0x60d074
     * @note[short] MacOS (Intel): 0x6fb370
     * @note[short] Windows: 0x16e310
     * @note[short] Android
     */
    void startMultiAssetDownload();

    /**
     * @note[short] MacOS (ARM): 0x60d01c
     * @note[short] MacOS (Intel): 0x6fb320
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleUpdateButton(bool enabled);

    /**
     * @note[short] MacOS (ARM): 0x60d3d0
     * @note[short] MacOS (Intel): 0x6fb7a0
     * @note[short] Windows: 0x16c280
     * @note[short] Android
     */
    void updateDownloadProgress(float dt);

    /**
     * @note[short] MacOS (ARM): 0x60e9a8
     * @note[short] MacOS (Intel): 0x6fce80
     * @note[short] Windows: 0x16ea00
     * @note[short] Android
     */
    void updateError(GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x60d52c
     * @note[short] MacOS (Intel): 0x6fb910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLengthMod(float lengthMod);

    /**
     * @note[short] MacOS (Intel): 0x6fc100
     * @note[short] Windows: 0x16d690
     * @note[short] Android
     */
    void updateMultiAssetInfo(bool update);

    /**
     * @note[short] MacOS (ARM): 0x60c8a8
     * @note[short] MacOS (Intel): 0x6faba0
     * @note[short] Windows: 0x16c160
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] MacOS (ARM): 0x60b7a0
     * @note[short] MacOS (Intel): 0x6f99b0
     * @note[short] Windows: 0x162550
     * @note[short] Android
     */
    void updateProgressBar(int progress);

    /**
     * @note[short] MacOS (ARM): 0x60b8bc
     * @note[short] MacOS (Intel): 0x6f9ad0
     * @note[short] Windows: 0x16c380
     * @note[short] Android
     */
    void updateSongInfo();

    /**
     * @note[short] MacOS (ARM): 0x60b818
     * @note[short] MacOS (Intel): 0x6f9a30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSongObject(SongInfoObject* songInfo);

    /**
     * @note[short] Windows: 0x16acc0
     * @note[short] Android
     */
    void updateUsageButton();

    /**
     * @note[short] MacOS (ARM): 0x60d534
     * @note[short] MacOS (Intel): 0x6fb930
     * @note[short] Windows: 0x16d380
     * @note[short] Android
     */
    void updateWithMultiAssets(std::string songList, std::string sfxList, int bytes);

    /**
     * @note[short] MacOS (ARM): 0x60e4d8
     * @note[short] MacOS (Intel): 0x6fc960
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool verifySongID(int id);
    SongInfoObject* m_songInfoObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_songLabel;
    cocos2d::CCLabelBMFont* m_artistLabel;
    cocos2d::CCLabelBMFont* m_songIDLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadBtn;
    CCMenuItemSpriteExtra* m_cancelDownloadBtn;
    CCMenuItemSpriteExtra* m_selectSongBtn;
    CCMenuItemSpriteExtra* m_getSongInfoBtn;
    CCMenuItemSpriteExtra* m_playbackBtn;
    CCMenuItemSpriteExtra* m_moreBtn;
    CCMenuItemSpriteExtra* m_deleteBtn;
    CCMenuItemSpriteExtra* m_infoBtn;
    CCMenuItemSpriteExtra* m_favoriteBtn;
    cocos2d::CCSprite* m_sliderGroove;
    cocos2d::CCSprite* m_sliderBar;
    cocos2d::CCSprite* m_ncsLogo;
    cocos2d::extension::CCScale9Sprite* m_bgSpr;
    CustomSongDelegate* m_songDelegate;
    bool m_showSelectSongBtn;
    bool m_showPlayMusicBtn;
    bool m_showDownloadBtn;
    bool m_isNotDownloading;
    bool m_isRobtopSong;
    bool m_isMusicLibrary;
    bool m_showFavoriteBtn;
    int m_customSongID;
    float m_lengthMod;
    bool m_isInCell;
    SongPlaybackDelegate* m_playbackDelegate;
    bool m_hasLibrarySongs;
    union {
        bool m_hasMultiAssets{};
        bool m_hasSFX;
    };
    CCMenuItemSpriteExtra* m_usageBtn;
    bool m_showUsageBtn;
    union {
        bool m_hasUndownloadedAssets{};
        bool m_unkBool2;
    };
    std::map<int, bool> m_songs;
    std::map<int, bool> m_sfx;
    std::vector<GJAssetDownloadAction> m_undownloadedAssets;
    int m_totalBytes;
    int m_uploadLimit;
    std::set<int> m_nextSongIDs;
};
