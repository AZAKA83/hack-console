#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/SetIDPopupDelegate.hpp>
#include <Geode/binding/CreatorSettingsDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class EditLevelLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public SetIDPopupDelegate, public CreatorSettingsDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "EditLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(EditLevelLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x3d9e34
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x10eb70
     * @note[short] Android: Rebinded
     */
     ~EditLevelLayer();

    /**
     * @note[short] MacOS (ARM): 0x190a00
     * @note[short] MacOS (Intel): 0x1dcb70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EditLevelLayer* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1909b4
     * @note[short] MacOS (Intel): 0x1dcb30
     * @note[short] Windows: 0x1782c0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x194e58
     * @note[short] MacOS (Intel): 0x1e1200
     * @note[short] Windows: 0x17d280
     * @note[short] iOS: 0x1125f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x194e64
     * @note[short] MacOS (Intel): 0x1e1230
     * @note[short] Windows: 0x17d290
     * @note[short] iOS: 0x112600
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x194d58
     * @note[short] MacOS (Intel): 0x1e1100
     * @note[short] Windows: 0x17cb90
     * @note[short] iOS: 0x112570
     * @note[short] Android
     */
    virtual void setIDPopupClosed(SetIDPopup* popup, int value);

    /**
     * @note[short] MacOS (ARM): 0x1948d4
     * @note[short] MacOS (Intel): 0x1e0c60
     * @note[short] Windows: 0x17c1c0
     * @note[short] iOS: 0x1121a4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x193ce4
     * @note[short] MacOS (Intel): 0x1e0010
     * @note[short] Windows: 0x17acc0
     * @note[short] iOS: 0x111a20
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1939a0
     * @note[short] MacOS (Intel): 0x1dfca0
     * @note[short] Windows: 0x17a690
     * @note[short] iOS: 0x111790
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x193df4
     * @note[short] MacOS (Intel): 0x1e00f0
     * @note[short] Windows: 0x17ae50
     * @note[short] iOS: 0x111b30
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x194ee8
     * @note[short] MacOS (Intel): 0x1e12d0
     * @note[short] Windows: 0x17d300
     * @note[short] iOS: 0x112670
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x195098
     * @note[short] MacOS (Intel): 0x1e1470
     * @note[short] Windows: 0x17d430
     * @note[short] iOS: 0x112764
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x194e98
     * @note[short] MacOS (Intel): 0x1e1280
     * @note[short] Windows: 0x17d2c0
     * @note[short] iOS: 0x112620
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x19455c
     * @note[short] MacOS (Intel): 0x1e0880
     * @note[short] Windows: 0x17b640
     * @note[short] iOS: 0x1120c0
     * @note[short] Android
     */
    virtual void creatorDescriptionChanged(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x194680
     * @note[short] MacOS (Intel): 0x1e09a0
     * @note[short] Windows: 0x17b7f0
     * @note[short] iOS: 0x112154
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x193944
     * @note[short] MacOS (Intel): 0x1dfc40
     * @note[short] Windows: 0x17a630
     * @note[short] Android
     */
    void closeTextInputs();

    /**
     * @note[short] MacOS (ARM): 0x193470
     * @note[short] Windows: 0x17c780
     * @note[short] Android
     */
    void confirmClone(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1930f4
     * @note[short] MacOS (Intel): 0x1df410
     * @note[short] Windows: 0x17c070
     * @note[short] Android
     */
    void confirmDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x17c9d0
     * @note[short] Android
     */
    TodoReturn confirmMoveToBottom(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x1931dc
     * @note[short] MacOS (Intel): 0x1df500
     * @note[short] Windows: 0x17c8a0
     * @note[short] Android
     */
    void confirmMoveToTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x190af8
     * @note[short] MacOS (Intel): 0x1dccd0
     * @note[short] Windows: 0x1784a0
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1937b8
     * @note[short] MacOS (Intel): 0x1dfaa0
     * @note[short] Windows: 0x17cdf0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4006e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onClone();

    /**
     * @note[short] Windows: 0x17b600
     * @note[short] Android
     */
    void onCreatorSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x179d00
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x194894
     * @note[short] MacOS (Intel): 0x1e0c20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onDelete();

    /**
     * @note[short] MacOS (ARM): 0x1921a8
     * @note[short] MacOS (Intel): 0x1de4a0
     * @note[short] Windows: 0x17b800
     * @note[short] Android
     */
    void onEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x17b6c0
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x17cc10
     * @note[short] Android
     */
    void onExportLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x179cd0
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x193548
     * @note[short] MacOS (Intel): 0x1df860
     * @note[short] Windows: 0x179b40
     * @note[short] Android
     */
    void onLevelLeaderboard(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x193924
     * @note[short] MacOS (Intel): 0x1dfc20
     * @note[short] Windows: 0x179ca0
     * @note[short] Android
     */
    void onLevelOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onMoveToBottom();

    /**
     * @note[short] MacOS (ARM): 0x194d2c
     * @note[short] MacOS (Intel): 0x1e1080
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoveToTop();

    /**
     * @note[short] MacOS (ARM): 0x1922e0
     * @note[short] MacOS (Intel): 0x1de600
     * @note[short] Windows: 0x17b0f0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19339c
     * @note[short] MacOS (Intel): 0x1df6c0
     * @note[short] Windows: 0x17cb00
     * @note[short] Android
     */
    void onSetFolder(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x192554
     * @note[short] MacOS (Intel): 0x1de8b0
     * @note[short] Windows: 0x17b9b0
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onTest(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19447c
     * @note[short] MacOS (Intel): 0x1df5e0
     * @note[short] Android
     */
    void onUpdateDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x194330
     * @note[short] Windows: 0x17b440
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] Windows: 0x17b520
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x1928d4
     * @note[short] MacOS (Intel): 0x1dec70
     * @note[short] Windows: 0x179dc0
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x1921a4
     * @note[short] MacOS (Intel): 0x1de490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateDescText(char const* text);

    /**
     * @note[short] MacOS (ARM): 0x193ffc
     * @note[short] MacOS (Intel): 0x1e02e0
     * @note[short] Windows: 0x17cfa0
     * @note[short] Android
     */
    void verifyLevelName();
    cocos2d::CCMenu* m_buttonMenu;
    GJGameLevel* m_level;
    cocos2d::CCArray* m_textInputs;
    cocos2d::CCLabelBMFont* m_folderLabel;
    bool m_exiting;
    GJLevelType m_levelType;
    std::string m_levelName;
    UploadActionPopup* m_descriptionPopup;
    bool m_loadPlatformerSave;
    CCMenuItemSpriteExtra* m_emoteButton;
    EmotePickerPopup* m_emotePicker;
    std::string m_levelDesc;
};
