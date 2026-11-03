#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/BulkCommentKey.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/LevelCommentDelegate.hpp>
#include <Geode/binding/CommentUploadDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class InfoLayer : public FLAlertLayer, public LevelCommentDelegate, public CommentUploadDelegate, public FLAlertLayerProtocol, public AdminActionConfirmDelegate {
public:
    static constexpr auto CLASS_NAME = "InfoLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(InfoLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): 0x7852e8
     * @note[short] MacOS (Intel): 0x891280
     * @note[short] Windows: 0x3cd910
     * @note[short] iOS: 0x3eddc4
     * @note[short] Android: Rebinded
     */
    virtual  ~InfoLayer();

    /**
     * @note[short] MacOS (ARM): 0x785468
     * @note[short] MacOS (Intel): 0x8914c0
     * @note[short] Windows: 0x3cdb00
     * @note[short] Android
     */
    static InfoLayer* create(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3);

    /**
     * @note[short] MacOS (ARM): 0x789860
     * @note[short] MacOS (Intel): 0x895e40
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x3f1568
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x78976c
     * @note[short] MacOS (Intel): 0x895d20
     * @note[short] Windows: 0x3d1410
     * @note[short] iOS: 0x3f155c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x78a928
     * @note[short] MacOS (Intel): 0x896f80
     * @note[short] Windows: 0x3d2de0
     * @note[short] iOS: 0x3f1fac
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x789b1c
     * @note[short] MacOS (Intel): 0x896110
     * @note[short] Windows: 0x3d1f30
     * @note[short] iOS: 0x3f176c
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* comments, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x789c00
     * @note[short] MacOS (Intel): 0x8961e0
     * @note[short] Windows: 0x3d1fa0
     * @note[short] iOS: 0x3f17dc
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x789cac
     * @note[short] MacOS (Intel): 0x896280
     * @note[short] Windows: 0x3d1ff0
     * @note[short] iOS: 0x3f1838
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x78a3f0
     * @note[short] MacOS (Intel): 0x896970
     * @note[short] Windows: 0x3d2340
     * @note[short] iOS: 0x3f1c18
     * @note[short] Android
     */
    virtual void commentUploadFinished(int parentID);

    /**
     * @note[short] MacOS (ARM): 0x78a520
     * @note[short] MacOS (Intel): 0x896af0
     * @note[short] Windows: 0x3d2400
     * @note[short] iOS: 0x3f1ca0
     * @note[short] Android
     */
    virtual void commentUploadFailed(int parentID, CommentError errorType);

    /**
     * @note[short] MacOS (ARM): 0x78a304
     * @note[short] MacOS (Intel): 0x896850
     * @note[short] Windows: 0x3d2200
     * @note[short] iOS: 0x3f1b70
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x7895b0
     * @note[short] MacOS (Intel): 0x895b60
     * @note[short] Windows: 0x3d0620
     * @note[short] iOS: 0x3f14d4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x78bc3c
     * @note[short] MacOS (Intel): 0x8983f0
     * @note[short] Windows: 0x3d4430
     * @note[short] iOS: 0x3f2ac4
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x78b604
     * @note[short] MacOS (Intel): 0x897d60
     * @note[short] Windows: 0x3d3e40
     * @note[short] iOS: 0x3f25f4
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x78b8a4
     * @note[short] MacOS (Intel): 0x898080
     * @note[short] Windows: 0x3d4120
     * @note[short] iOS: 0x3f28d4
     * @note[short] Android
     */
    virtual void bulkCommentDeleteFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x78baac
     * @note[short] MacOS (Intel): 0x898290
     * @note[short] Windows: 0x3d4330
     * @note[short] iOS: 0x3f2a30
     * @note[short] Android
     */
    virtual void bulkCommentDeleteFailed();

    /**
     * @note[short] Android
     */
    TodoReturn activeCommentID();

    /**
     * @note[short] Android
     */
    TodoReturn activeCommentKeyType();

    /**
     * @note[short] Android
     */
    TodoReturn canBulkDelete();

    /**
     * @note[short] Android
     */
    TodoReturn canToggleModRoom();

    /**
     * @note[short] Android
     */
    TodoReturn clearBulkSelection();

    /**
     * @note[short] Android
     */
    TodoReturn confirmBulkDelete(std::string const& p0, std::vector<int> const& p1);

    /**
     * @note[short] MacOS (Intel): 0x5bd6e0
     * @note[short] Windows: 0x3d04a0
     * @note[short] Android
     */
    void confirmReport(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x8945e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getAccountID();

    /**
     * @note[short] MacOS (ARM): 0x7881d4
     * @note[short] MacOS (Intel): 0x8945e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getID();

    /**
     * @note[short] MacOS (ARM): 0x789314
     * @note[short] MacOS (Intel): 0x8958a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getRealID();

    /**
     * @note[short] MacOS (ARM): 0x787d30
     * @note[short] MacOS (Intel): 0x894100
     * @note[short] Windows: 0x3cffc0
     * @note[short] Android
     */
    CCMenuItemSpriteExtra* getSpriteButton(char const* frame, cocos2d::SEL_MenuHandler selector, cocos2d::CCMenu* menu, float scale, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x785518
     * @note[short] MacOS (Intel): 0x891550
     * @note[short] Windows: 0x3cdd50
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, GJUserScore* p1, GJLevelList* p2, GJEditorSoundConfig* p3);

    /**
     * @note[short] Windows: 0x3d1420
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x788228
     * @note[short] MacOS (Intel): 0x894640
     * @note[short] Windows: 0x3d1560
     * @note[short] Android
     */
    void loadPage(int page, bool noSetup);

    /**
     * @note[short] Windows: 0x3d3bd0
     * @note[short] Android
     */
    void onBulkDelete(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d3970
     * @note[short] Android
     */
    void onBulkSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d1380
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d0780
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d2f80
     * @note[short] Android
     */
    void onCommentCellToggled(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7893a4
     * @note[short] MacOS (Intel): 0x895950
     * @note[short] Windows: 0x162080
     * @note[short] Android
     */
    void onCopyLevelID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d0cf0
     * @note[short] Android
     */
    void onGetComments(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d2338
     * @note[short] MacOS (Intel): 0x894ef0
     * @note[short] Windows: 0x3d0d00
     * @note[short] Android
     */
    void onLevelInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x787318
     * @note[short] MacOS (Intel): 0x893680
     * @note[short] Windows: 0x3d0650
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80c048
     * @note[short] MacOS (Intel): 0x894080
     * @note[short] Windows: 0x3d2320
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x893910
     * @note[short] Windows: 0x3d06c0
     * @note[short] Android
     */
    void onOriginal(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x787cac
     * @note[short] MacOS (Intel): 0x894060
     * @note[short] Windows: 0x3d2330
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x788f08
     * @note[short] MacOS (Intel): 0x895480
     * @note[short] Windows: 0x3d0330
     * @note[short] Android
     */
    void onRefreshComments(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x895bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onSimilar(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn parentalCommentsDisabled();

    /**
     * @note[short] Android
     */
    TodoReturn refreshBulkUI();

    /**
     * @note[short] Windows: 0x3d2c40
     * @note[short] Android
     */
    TodoReturn refreshUserTitle();

    /**
     * @note[short] Windows: 0x3d2740
     * @note[short] Android
     */
    void reloadWindow();

    /**
     * @note[short] Windows: 0x3d33b0
     * @note[short] Android
     */
    TodoReturn setupBulkUI();

    /**
     * @note[short] MacOS (ARM): 0x788630
     * @note[short] MacOS (Intel): 0x894ad0
     * @note[short] Windows: 0x3d1af0
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* comments);

    /**
     * @note[short] MacOS (ARM): 0x787388
     * @note[short] MacOS (Intel): 0x8936f0
     * @note[short] Windows: 0x3d0110
     * @note[short] Android
     */
    void setupLevelInfo();

    /**
     * @note[short] MacOS (ARM): 0x4fb014
     * @note[short] MacOS (Intel): 0x8941e0
     * @note[short] Windows: 0x3d29b0
     * @note[short] Android
     */
    void toggleCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x787ef8
     * @note[short] MacOS (Intel): 0x8942c0
     * @note[short] Windows: 0x3d2550
     * @note[short] Android
     */
    void toggleExtendedMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3d2d30
     * @note[short] Android
     */
    TodoReturn toggleModRoom(cocos2d::CCObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x787f28
     * @note[short] MacOS (Intel): 0x8942f0
     * @note[short] Windows: 0x3d25b0
     * @note[short] Android
     */
    void toggleSmallCommentMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x788124
     * @note[short] MacOS (Intel): 0x894520
     * @note[short] Windows: 0x3d2a70
     * @note[short] Android
     */
    void updateCommentModeButtons();

    /**
     * @note[short] MacOS (ARM): 0x78a294
     * @note[short] MacOS (Intel): 0x8967d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();
    GJGameLevel* m_level;
    GJUserScore* m_score;
    GJLevelList* m_levelList;
    GJEditorSoundConfig* m_soundConfig;
    std::string m_commentKey;
    LoadingCircle* m_loadingCircle;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_noComments;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_likeBtn;
    CCMenuItemSpriteExtra* m_timeBtn;
    CCMenuItemSpriteExtra* m_modRoomBtn;
    CCMenuItemSpriteExtra* m_commentsBtn;
    CCMenuItemSpriteExtra* m_reportBtn;
    CCMenuItemSpriteExtra* m_loadCommentsBtn;
    CCMenuItemSpriteExtra* m_refreshCommentsBtn;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    bool m_canUpdateUserScore;
    CommentKeyType m_mode;
    bool m_modRoomEnabled;
    cocos2d::CCLabelBMFont* m_titleLabel;
    CustomListView* m_bulkList;
    cocos2d::CCLabelBMFont* m_bulkLabel;
    CCMenuItemSpriteExtra* m_bulkSelectAllBtn;
    CCMenuItemSpriteExtra* m_bulkDeleteBtn;
    std::map<std::pair<int, int>, BulkCommentKey> m_bulkSelection;
    cocos2d::CCLayer* m_bulkLayer;
};
