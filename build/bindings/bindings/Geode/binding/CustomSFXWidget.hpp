#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class CustomSFXWidget : public cocos2d::CCNode, public MusicDownloadDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "CustomSFXWidget";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSFXWidget, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x15fe40
     * @note[short] iOS: 0x38adb8
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSFXWidget();

    /**
     * @note[short] MacOS (Intel): 0x6b5270
     * @note[short] Windows: 0x160070
     * @note[short] Android
     */
    static CustomSFXWidget* create(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, bool p8);

    /**
     * @note[short] MacOS (ARM): 0x5d1c88
     * @note[short] MacOS (Intel): 0x6b8740
     * @note[short] Windows: 0x1637f0
     * @note[short] iOS: 0x38d958
     * @note[short] Android
     */
    virtual void downloadSFXFinished(int id);

    /**
     * @note[short] MacOS (ARM): 0x5d1d28
     * @note[short] MacOS (Intel): 0x6b87f0
     * @note[short] Windows: 0x163870
     * @note[short] iOS: 0x38d9b0
     * @note[short] Android
     */
    virtual void downloadSFXFailed(int id, GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x5d1c60
     * @note[short] MacOS (Intel): 0x6b86d0
     * @note[short] Windows: 0x1625e0
     * @note[short] iOS: 0x38d944
     * @note[short] Android
     */
    virtual void songStateChanged();

    /**
     * @note[short] MacOS (ARM): 0x5d1f80
     * @note[short] MacOS (Intel): 0x6b8a10
     * @note[short] Windows: 0x163970
     * @note[short] iOS: 0x38daa4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x5d16f8
     * @note[short] MacOS (Intel): 0x6b8130
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteSFX();

    /**
     * @note[short] MacOS (ARM): 0x5d1bac
     * @note[short] MacOS (Intel): 0x6b8620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void downloadFailed();

    /**
     * @note[short] MacOS (ARM): 0x5d0acc
     * @note[short] MacOS (Intel): 0x6b7480
     * @note[short] Windows: 0x161cf0
     * @note[short] Android
     */
    void hideLoadingArt();

    /**
     * @note[short] Android
     */
    TodoReturn infoBtnWidth();

    /**
     * @note[short] MacOS (Intel): 0x6b53c0
     * @note[short] Windows: 0x1601f0
     * @note[short] Android
     */
    bool init(SFXInfoObject* p0, CustomSFXDelegate* p1, bool p2, bool p3, bool p4, bool p5, bool p6, bool p7, bool p8);

    /**
     * @note[short] Android
     */
    void onAddToFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d0128
     * @note[short] Windows: 0x161d90
     * @note[short] Android
     */
    void onCancelDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d0164
     * @note[short] MacOS (Intel): 0x6b6ac0
     * @note[short] Windows: 0x161810
     * @note[short] Android
     */
    void onDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5cffe4
     * @note[short] MacOS (Intel): 0x6b6920
     * @note[short] Windows: 0x161e50
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onEditCustom(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d0264
     * @note[short] MacOS (Intel): 0x6b6bd0
     * @note[short] Windows: 0x162220
     * @note[short] Android
     */
    void onPlayback(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d0244
     * @note[short] MacOS (Intel): 0x6b6ba0
     * @note[short] Windows: 0x162060
     * @note[short] Android
     */
    void onSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x163130
     * @note[short] Android
     */
    void onShowInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3a4ec0
     * @note[short] MacOS (Intel): 0x69a10
     * @note[short] Windows: 0x161b30
     * @note[short] Android
     */
    void showLoadingArt();

    /**
     * @note[short] MacOS (Intel): 0x6b8490
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void startDownload();

    /**
     * @note[short] MacOS (ARM): 0x5d164c
     * @note[short] MacOS (Intel): 0x6b8080
     * @note[short] Windows: 0x161fb0
     * @note[short] Android
     */
    void startMonitorDownload();

    /**
     * @note[short] MacOS (ARM): 0x5d1ae8
     * @note[short] MacOS (Intel): 0x6b8550
     * @note[short] Windows: 0x162480
     * @note[short] Android
     */
    void updateDownloadProgress(float dt);

    /**
     * @note[short] MacOS (ARM): 0x5d1df4
     * @note[short] MacOS (Intel): 0x6b88b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateError(GJSongError errorType);

    /**
     * @note[short] MacOS (ARM): 0x5d1c6c
     * @note[short] MacOS (Intel): 0x6b8700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLengthMod(float mod);

    /**
     * @note[short] MacOS (ARM): 0x5d16f4
     * @note[short] MacOS (Intel): 0x6b8120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlaybackBtn();

    /**
     * @note[short] MacOS (ARM): 0x5d0a54
     * @note[short] MacOS (Intel): 0x6b7400
     * @note[short] Windows: 0x162550
     * @note[short] Android
     */
    void updateProgressBar(int progress);

    /**
     * @note[short] MacOS (ARM): 0x5d0bec
     * @note[short] MacOS (Intel): 0x6b75a0
     * @note[short] Windows: 0x1625f0
     * @note[short] Android
     */
    void updateSFXInfo();

    /**
     * @note[short] MacOS (ARM): 0x5d0b60
     * @note[short] MacOS (Intel): 0x6b7510
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSFXObject(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5d1c74
     * @note[short] MacOS (Intel): 0x6b8720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool verifySFXID(int id);
    SFXInfoObject* m_sfxObject;
    cocos2d::CCMenu* m_buttonMenu;
    cocos2d::CCLabelBMFont* m_titleLabel;
    cocos2d::CCLabelBMFont* m_idLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    CCMenuItemSpriteExtra* m_downloadButton;
    CCMenuItemSpriteExtra* m_cancelButton;
    CCMenuItemSpriteExtra* m_selectButton;
    CCMenuItemSpriteExtra* m_playButton;
    CCMenuItemSpriteExtra* m_deleteButton;
    CCMenuItemSpriteExtra* m_toggleFavoriteButton;
    CCMenuItemSpriteExtra* m_addToFolderButton;
    CCMenuItemSpriteExtra* m_editCustomButton;
    CCMenuItemSpriteExtra* m_toggleSelectButton;
    CCMenuItemSpriteExtra* m_infoButton;
    cocos2d::CCSprite* m_progressOutlineSprite;
    cocos2d::CCSprite* m_progressBarSprite;
    cocos2d::CCSprite* m_clockSprite;
    CustomSFXDelegate* m_delegate;
    bool m_showDelete;
    bool m_showPlay;
    bool m_showDownload;
    bool m_showCancel;
    bool m_compactMode;
    bool m_unk1ed;
    bool m_unk1ee;
    int m_sfxID;
    float m_lengthMod;
};
