#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/LevelCommentDelegate.hpp>
#include <Geode/binding/CommentUploadDelegate.hpp>
#include <Geode/binding/UserInfoDelegate.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/LeaderboardManagerDelegate.hpp>
#include <Geode/binding/FollowUserDelegate.hpp>

class ProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public LevelCommentDelegate, public CommentUploadDelegate, public UserInfoDelegate, public UploadActionDelegate, public UploadPopupDelegate, public LeaderboardManagerDelegate, public FollowUserDelegate {
public:
    static constexpr auto CLASS_NAME = "ProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x550490
     * @note[short] iOS: 0x229c0c
     * @note[short] Android: Rebinded
     */
    virtual  ~ProfilePage();

    /**
     * @note[short] MacOS (ARM): 0x790e9c
     * @note[short] MacOS (Intel): 0x89dad0
     * @note[short] Windows: 0x5506e0
     * @note[short] iOS: 0x229c44
     * @note[short] Android
     */
    static ProfilePage* create(int accountID, bool ownProfile);

    /**
     * @note[short] MacOS (ARM): 0x79a32c
     * @note[short] MacOS (Intel): 0x8a78e0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x231334
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x798730
     * @note[short] MacOS (Intel): 0x8a5d20
     * @note[short] Windows: 0x558fd0
     * @note[short] iOS: 0x23028c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x79896c
     * @note[short] MacOS (Intel): 0x8a5fb0
     * @note[short] Windows: 0x559380
     * @note[short] iOS: 0x2303e0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x798170
     * @note[short] MacOS (Intel): 0x8a5770
     * @note[short] Windows: 0x558840
     * @note[short] iOS: 0x22fec4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x798824
     * @note[short] MacOS (Intel): 0x8a5e30
     * @note[short] Windows: 0x559200
     * @note[short] iOS: 0x230298
     * @note[short] Android
     */
    virtual void updateUserScoreFinished();

    /**
     * @note[short] MacOS (ARM): 0x7988c4
     * @note[short] MacOS (Intel): 0x8a5f10
     * @note[short] Windows: 0x559330
     * @note[short] iOS: 0x230338
     * @note[short] Android
     */
    virtual void updateUserScoreFailed();

    /**
     * @note[short] MacOS (ARM): 0x799230
     * @note[short] MacOS (Intel): 0x8a6850
     * @note[short] Windows: 0x559c10
     * @note[short] iOS: 0x230948
     * @note[short] Android
     */
    virtual void getUserInfoFinished(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x7995d0
     * @note[short] MacOS (Intel): 0x8a6c20
     * @note[short] Windows: 0x559d30
     * @note[short] iOS: 0x230ba8
     * @note[short] Android
     */
    virtual void getUserInfoFailed(int id);

    /**
     * @note[short] MacOS (ARM): 0x7996a0
     * @note[short] MacOS (Intel): 0x8a6ce0
     * @note[short] Windows: 0x559d80
     * @note[short] iOS: 0x230c14
     * @note[short] Android
     */
    virtual void userInfoChanged(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x7998b4
     * @note[short] MacOS (Intel): 0x8a6ef0
     * @note[short] Windows: 0x55a3f0
     * @note[short] iOS: 0x230d34
     * @note[short] Android
     */
    virtual void loadCommentsFinished(cocos2d::CCArray* comments, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x7999c0
     * @note[short] MacOS (Intel): 0x8a6fe0
     * @note[short] Windows: 0x55a470
     * @note[short] iOS: 0x230db8
     * @note[short] Android
     */
    virtual void loadCommentsFailed(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x799a94
     * @note[short] MacOS (Intel): 0x8a70b0
     * @note[short] Windows: 0x55a4d0
     * @note[short] iOS: 0x230e28
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x79a040
     * @note[short] MacOS (Intel): 0x8a75e0
     * @note[short] Windows: 0x55a6f0
     * @note[short] iOS: 0x2310f0
     * @note[short] Android
     */
    virtual void commentUploadFinished(int parentID);

    /**
     * @note[short] MacOS (ARM): 0x79a0e0
     * @note[short] MacOS (Intel): 0x8a7670
     * @note[short] Windows: 0x55a740
     * @note[short] iOS: 0x231148
     * @note[short] Android
     */
    virtual void commentUploadFailed(int parentID, CommentError errorType);

    /**
     * @note[short] MacOS (ARM): 0x79a1c4
     * @note[short] MacOS (Intel): 0x8a7750
     * @note[short] Windows: 0x55a880
     * @note[short] iOS: 0x231204
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int id, int parentID);

    /**
     * @note[short] MacOS (ARM): 0x798364
     * @note[short] MacOS (Intel): 0x8a5990
     * @note[short] Windows: 0x558c40
     * @note[short] iOS: 0x230080
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x7983ec
     * @note[short] MacOS (Intel): 0x8a5a10
     * @note[short] Windows: 0x558c90
     * @note[short] iOS: 0x2300f0
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x7985d0
     * @note[short] MacOS (Intel): 0x8a5c00
     * @note[short] Windows: 0x558e90
     * @note[short] iOS: 0x230208
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x797e18
     * @note[short] MacOS (Intel): 0x8a53e0
     * @note[short] Windows: 0x557cd0
     * @note[short] iOS: 0x22fc24
     * @note[short] Android
     */
    virtual void followUserFinished(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x798030
     * @note[short] MacOS (Intel): 0x8a5600
     * @note[short] Windows: 0x558510
     * @note[short] iOS: 0x22fe00
     * @note[short] Android
     */
    virtual void followUserFailed(int p0, bool p1);

    /**
     * @note[short] MacOS (Intel): 0x8a52a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void blockUser();

    /**
     * @note[short] Windows: 0x5519f0
     * @note[short] Android
     */
    TodoReturn createOfflineNotice();

    /**
     * @note[short] Windows: 0x558fe0
     * @note[short] Android
     */
    FLAlertLayer* createUnfriendAlert(FLAlertLayerProtocol* p0, std::string p1);

    /**
     * @note[short] MacOS (ARM): 0x790f30
     * @note[short] MacOS (Intel): 0x89db40
     * @note[short] Windows: 0x5508f0
     * @note[short] iOS: 0x229cc8
     * @note[short] Android
     */
    bool init(int accountID, bool ownProfile);

    /**
     * @note[short] Windows: 0x559e00
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x791d1c
     * @note[short] MacOS (Intel): 0x89e9c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isOnWatchlist(int id);

    /**
     * @note[short] MacOS (ARM): 0x7992dc
     * @note[short] MacOS (Intel): 0x8a68f0
     * @note[short] Windows: 0x559f40
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x79252c
     * @note[short] MacOS (Intel): 0x89f240
     * @note[short] Windows: 0x552b60
     * @note[short] Android
     */
    void loadPageFromUserInfo(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x79585c
     * @note[short] Windows: 0x557880
     * @note[short] Android
     */
    void onAdminPanel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x795538
     * @note[short] MacOS (Intel): 0x893a60
     * @note[short] Windows: 0x5573e0
     * @note[short] Android
     */
    void onBlockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x791d24
     * @note[short] MacOS (Intel): 0x89e9d0
     * @note[short] Windows: 0x558f40
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x797110
     * @note[short] MacOS (Intel): 0x8a4650
     * @note[short] Windows: 0x556c60
     * @note[short] Android
     */
    void onComment(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796078
     * @note[short] MacOS (Intel): 0x8a3420
     * @note[short] Windows: 0x556ad0
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7968fc
     * @note[short] MacOS (Intel): 0x8a3df0
     * @note[short] Windows: 0x556070
     * @note[short] Android
     */
    void onCopyName(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x791f94
     * @note[short] MacOS (Intel): 0x9a920
     * @note[short] Windows: 0x557a60
     * @note[short] Android
     */
    void onFollow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x794f60
     * @note[short] MacOS (Intel): 0x8a2290
     * @note[short] Windows: 0x556e40
     * @note[short] Android
     */
    void onFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796f50
     * @note[short] Windows: 0x559840
     * @note[short] Android
     */
    void onFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x795f38
     * @note[short] Windows: 0x555ce0
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796210
     * @note[short] MacOS (Intel): 0x8a35b0
     * @note[short] Windows: 0x5562a0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796ec8
     * @note[short] Windows: 0x559810
     * @note[short] Android
     */
    void onMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7960b4
     * @note[short] Windows: 0x556750
     * @note[short] Android
     */
    void onModInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x557970
     * @note[short] Android
     */
    void onModNotes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796b3c
     * @note[short] MacOS (Intel): 0x8a4030
     * @note[short] Windows: 0x556820
     * @note[short] Android
     */
    void onMyLevels(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796d08
     * @note[short] MacOS (Intel): 0x8a4210
     * @note[short] Windows: 0x5569a0
     * @note[short] Android
     */
    void onMyLists(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x559560
     * @note[short] Android
     */
    void onMyStuff(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x798164
     * @note[short] MacOS (Intel): 0x8a5750
     * @note[short] Windows: 0x55a6d0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x797068
     * @note[short] Windows: 0x559a90
     * @note[short] Android
     */
    void onNotifications(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x798158
     * @note[short] MacOS (Intel): 0x8a5730
     * @note[short] Windows: 0x55a6e0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x795828
     * @note[short] Windows: 0x557840
     * @note[short] Android
     */
    void onReportUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796fdc
     * @note[short] Windows: 0x559870
     * @note[short] Android
     */
    void onRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x794e80
     * @note[short] MacOS (Intel): 0x8a21c0
     * @note[short] Windows: 0x556b10
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7970f0
     * @note[short] MacOS (Intel): 0x8a4630
     * @note[short] Windows: 0x559690
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x796048
     * @note[short] Windows: 0x5594e0
     * @note[short] Android
     */
    void onSocialPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x795a4c
     * @note[short] Windows: 0x555d50
     * @note[short] Android
     */
    void onStatInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7952c4
     * @note[short] Windows: 0x557650
     * @note[short] Android
     */
    void onUnblockUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x792100
     * @note[short] MacOS (Intel): 0x89edc0
     * @note[short] Windows: 0x551c60
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x794914
     * @note[short] Windows: 0x5523c0
     * @note[short] Android
     */
    void setupAccountButtons();

    /**
     * @note[short] MacOS (ARM): 0x791d9c
     * @note[short] MacOS (Intel): 0x89ea50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupComments();

    /**
     * @note[short] MacOS (ARM): 0x7923b0
     * @note[short] MacOS (Intel): 0x89f0c0
     * @note[short] Windows: 0x55a240
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* comments);

    /**
     * @note[short] MacOS (ARM): 0x798ac0
     * @note[short] MacOS (Intel): 0x8a60f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleMainPageVisibility(bool visible);

    /**
     * @note[short] Android
     */
    TodoReturn unblockUser();

    /**
     * @note[short] Windows: 0x557c50
     * @note[short] Android
     */
    TodoReturn updateFollowButton(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x79a03c
     * @note[short] MacOS (Intel): 0x8a75d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] Windows: 0x55a660
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();
    GJUserScore* m_score;
    int m_accountID;
    bool m_ownProfile;
    std::string m_profileKey;
    cocos2d::CCLabelBMFont* m_somethingWentWrong;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    GJCommentListLayer* m_list;
    CCMenuItemSpriteExtra* m_rightArrow;
    CCMenuItemSpriteExtra* m_leftArrow;
    CCMenuItemSpriteExtra* m_followBtn;
    cocos2d::CCSprite* m_followHint;
    bool m_unk;
    cocos2d::CCArray* m_buttons;
    cocos2d::CCArray* m_arrayWithUsernameLabel;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
    LoadingCircle* m_circle;
    UploadActionPopup* m_popupDelegate;
    CCMenuItemSpriteExtra* m_refreshBtn;
    int m_unk2;
};
