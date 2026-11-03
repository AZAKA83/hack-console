#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/EditorSoundDownloadDelegate.hpp>
#include <Geode/binding/EditorSoundDeleteDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/binding/LikeItemDelegate.hpp>
#include <Geode/binding/SoundPackDescDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class EditorSoundConfigInfoLayer : public SetupTriggerPopup, public EditorSoundDownloadDelegate, public EditorSoundDeleteDelegate, public FLAlertLayerProtocol, public AdminActionConfirmDelegate, public LikeItemDelegate, public SoundPackDescDelegate, public UploadActionDelegate, public UploadPopupDelegate, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "EditorSoundConfigInfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditorSoundConfigInfoLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x191db0
     * @note[short] iOS: 0x4d1700
     * @note[short] Android: Rebinded
     */
    virtual  ~EditorSoundConfigInfoLayer();

    /**
     * @note[short] Windows: 0x191b80
     * @note[short] Android
     */
    static EditorSoundConfigInfoLayer* create(GJEditorSoundConfig* p0, EditorSoundInfoKind p1, EditorSoundBrowserLayer* p2);

    /**
     * @note[short] MacOS (ARM): 0x7df818
     * @note[short] MacOS (Intel): 0x8f7720
     * @note[short] Windows: 0x194ea0
     * @note[short] iOS: 0x4d2d2c
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7df8c8
     * @note[short] MacOS (Intel): 0x8f7800
     * @note[short] Windows: 0x194f70
     * @note[short] iOS: 0x4d2ddc
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7df954
     * @note[short] MacOS (Intel): 0x8f78a0
     * @note[short] Windows: 0x194fe0
     * @note[short] iOS: 0x4d2e2c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7df9e0
     * @note[short] MacOS (Intel): 0x8f7940
     * @note[short] Windows: 0x195030
     * @note[short] iOS: 0x4d2e7c
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7e1464
     * @note[short] MacOS (Intel): 0x8f95a0
     * @note[short] Windows: 0x1989c0
     * @note[short] iOS: 0x4d42c0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7e077c
     * @note[short] MacOS (Intel): 0x8f8890
     * @note[short] Windows: 0x196cd0
     * @note[short] iOS: 0x4d3908
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e0d40
     * @note[short] MacOS (Intel): 0x8f8e20
     * @note[short] Windows: 0x197d60
     * @note[short] iOS: 0x4d3cb8
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x7e1580
     * @note[short] MacOS (Intel): 0x8f9700
     * @note[short] Windows: 0x198ba0
     * @note[short] iOS: 0x4d439c
     * @note[short] Android
     */
    virtual void downloadEditorSoundFinished(GJEditorSoundConfig* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e16ec
     * @note[short] MacOS (Intel): 0x8f98a0
     * @note[short] Windows: 0x198de0
     * @note[short] iOS: 0x4d44fc
     * @note[short] Android
     */
    virtual void downloadEditorSoundFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7e17f4
     * @note[short] MacOS (Intel): 0x8f99c0
     * @note[short] Windows: 0x198f30
     * @note[short] iOS: 0x4d45c0
     * @note[short] Android
     */
    virtual void deleteEditorSoundFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x7e1950
     * @note[short] MacOS (Intel): 0x8f9b40
     * @note[short] Windows: 0x199160
     * @note[short] iOS: 0x4d46f4
     * @note[short] Android
     */
    virtual void deleteEditorSoundFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7e0e08
     * @note[short] MacOS (Intel): 0x8f8ef0
     * @note[short] Windows: 0x197d80
     * @note[short] iOS: 0x4d3cec
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x7e088c
     * @note[short] MacOS (Intel): 0x8f8970
     * @note[short] Windows: 0x196da0
     * @note[short] iOS: 0x4d3988
     * @note[short] Android
     */
    virtual void likedItem(LikeItemType p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x7dfb7c
     * @note[short] MacOS (Intel): 0x8f7b20
     * @note[short] Windows: 0x195eb0
     * @note[short] iOS: 0x4d2fcc
     * @note[short] Android
     */
    virtual void soundPackDescSaved(std::string const& p0, std::string const& p1);

    /**
     * @note[short] MacOS (ARM): 0x7dfe54
     * @note[short] MacOS (Intel): 0x8f7e60
     * @note[short] Windows: 0x1961d0
     * @note[short] iOS: 0x4d321c
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7dffec
     * @note[short] MacOS (Intel): 0x8f8040
     * @note[short] Windows: 0x1963c0
     * @note[short] iOS: 0x4d33a0
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x7e00bc
     * @note[short] MacOS (Intel): 0x8f8130
     * @note[short] Windows: 0x1964a0
     * @note[short] iOS: 0x4d3444
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e0618
     * @note[short] MacOS (Intel): 0x8f8720
     * @note[short] Windows: 0x196bc0
     * @note[short] iOS: 0x4d37d4
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] MacOS (ARM): 0x7e0660
     * @note[short] MacOS (Intel): 0x8f8780
     * @note[short] Windows: 0x196bf0
     * @note[short] iOS: 0x4d381c
     * @note[short] Android
     */
    virtual void musicActionFailed(GJMusicAction p0);

    /**
     * @note[short] Windows: 0x197140
     * @note[short] Android
     */
    TodoReturn applyConfig(bool p0, bool p1);

    /**
     * @note[short] Windows: 0x194920
     * @note[short] Android
     */
    TodoReturn buildSummary();

    /**
     * @note[short] Windows: 0x196a30
     * @note[short] Android
     */
    TodoReturn downloadMissingSFX();

    /**
     * @note[short] Android
     */
    TodoReturn editsServerDescription();

    /**
     * @note[short] Windows: 0x1920b0
     * @note[short] Android
     */
    bool init(GJEditorSoundConfig* p0, EditorSoundInfoKind p1, EditorSoundBrowserLayer* p2);

    /**
     * @note[short] Windows: 0x196160
     * @note[short] Android
     */
    bool isOwner();

    /**
     * @note[short] Android
     */
    TodoReturn missingSFXIDs();

    /**
     * @note[short] Windows: 0x197ac0
     * @note[short] Android
     */
    void onDeleteServer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x195c20
     * @note[short] Android
     */
    void onDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1967a0
     * @note[short] Android
     */
    void onDownloadSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1955e0
     * @note[short] Android
     */
    void onDuplicate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1950c0
     * @note[short] Android
     */
    void onFavorite(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onFeatureAdmin(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x195b80
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1959d0
     * @note[short] Android
     */
    void onLike(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x196ec0
     * @note[short] Android
     */
    void onLoad(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x195420
     * @note[short] Android
     */
    void onLocalDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x197000
     * @note[short] Android
     */
    void onMerge(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1976d0
     * @note[short] Android
     */
    void onOverwrite(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x195c00
     * @note[short] Android
     */
    void onShowDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1950b0
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x197800
     * @note[short] Android
     */
    void onUpload(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x1964f0
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x195710
     * @note[short] Android
     */
    TodoReturn refreshActionButtons();

    /**
     * @note[short] Windows: 0x194690
     * @note[short] Android
     */
    TodoReturn refreshLikeState();

    /**
     * @note[short] Android
     */
    TodoReturn reloadWindow();

    /**
     * @note[short] Windows: 0x194840
     * @note[short] Android
     */
    TodoReturn startDownload();

    /**
     * @note[short] Android
     */
    void startServerDelete(std::string const& p0, std::vector<int> const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn startSFXDownload();
};
