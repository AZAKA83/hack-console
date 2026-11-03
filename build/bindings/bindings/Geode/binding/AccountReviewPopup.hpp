#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/CommentAdminDelegate.hpp>
#include <Geode/binding/CommentUploadDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DropdownDelegate.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/binding/ReviewChoiceDelegate.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class AccountReviewPopup : public PagedListPopup, public CommentAdminDelegate, public CommentUploadDelegate, public UploadPopupDelegate, public FLAlertLayerProtocol, public DropdownDelegate, public AdminActionConfirmDelegate, public ReviewChoiceDelegate, public ThreadMessageDelegate {
public:
    static constexpr auto CLASS_NAME = "AccountReviewPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountReviewPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xaedc0
     * @note[short] iOS: 0x540bb8
     * @note[short] Android: Rebinded
     */
    virtual  ~AccountReviewPopup();

    /**
     * @note[short] Windows: 0xaf0b0
     * @note[short] Android
     */
    static AccountReviewPopup* create(int p0, std::string const& p1, GJUserScore* p2);

    /**
     * @note[short] MacOS (ARM): 0x876280
     * @note[short] MacOS (Intel): 0x99bc10
     * @note[short] Windows: 0xb33c0
     * @note[short] iOS: 0x545120
     * @note[short] Android
     */
    virtual void rebuildContent();

    /**
     * @note[short] MacOS (ARM): 0x876198
     * @note[short] MacOS (Intel): 0x99bb00
     * @note[short] Windows: 0xb3200
     * @note[short] iOS: 0x545038
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x876220
     * @note[short] MacOS (Intel): 0x99bb90
     * @note[short] Windows: 0xb32d0
     * @note[short] iOS: 0x5450c0
     * @note[short] Android
     */
    virtual void clearPageContent();

    /**
     * @note[short] MacOS (ARM): 0x86f530
     * @note[short] MacOS (Intel): 0x994570
     * @note[short] Windows: 0xaf060
     * @note[short] iOS: 0x540bf0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8762bc
     * @note[short] MacOS (Intel): 0x99bc60
     * @note[short] Windows: 0xb34a0
     * @note[short] iOS: 0x545148
     * @note[short] Android
     */
    virtual void dropdownSelectionChanged(Dropdown* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x87cb68
     * @note[short] MacOS (Intel): 0x9a2920
     * @note[short] Windows: 0xba500
     * @note[short] iOS: 0x54a3d8
     * @note[short] Android
     */
    virtual void reviewChoicePicked(int p0, int p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x87e390
     * @note[short] MacOS (Intel): 0x9a41b0
     * @note[short] Windows: 0xbc670
     * @note[short] iOS: 0x54b3e4
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x87d478
     * @note[short] MacOS (Intel): 0x9a32f0
     * @note[short] Windows: 0xbb0e0
     * @note[short] iOS: 0x54aa34
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x87e764
     * @note[short] MacOS (Intel): 0x9a4590
     * @note[short] Windows: 0xbcaa0
     * @note[short] iOS: 0x54b620
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x87e0bc
     * @note[short] MacOS (Intel): 0x9a3eb0
     * @note[short] Windows: 0xbbbb0
     * @note[short] iOS: 0x54b1f0
     * @note[short] Android
     */
    virtual void commentDeleteFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x87df04
     * @note[short] MacOS (Intel): 0x9a3d10
     * @note[short] Windows: 0xbbb60
     * @note[short] iOS: 0x54b148
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x87dfd0
     * @note[short] MacOS (Intel): 0x9a3dd0
     * @note[short] Windows: 0xbbb80
     * @note[short] iOS: 0x54b16c
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x872a68
     * @note[short] MacOS (Intel): 0x9980e0
     * @note[short] Windows: 0xb0a30
     * @note[short] iOS: 0x542974
     * @note[short] Android
     */
    virtual void adminAccountReviewFinished(int p0, AccountReviewCard const& p1);

    /**
     * @note[short] MacOS (ARM): 0x875060
     * @note[short] MacOS (Intel): 0x99ab30
     * @note[short] Windows: 0xb0d40
     * @note[short] iOS: 0x544148
     * @note[short] Android
     */
    virtual void adminAccountReviewFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x8762f4
     * @note[short] MacOS (Intel): 0x99bca0
     * @note[short] Windows: 0xb3620
     * @note[short] iOS: 0x545180
     * @note[short] Android
     */
    virtual void adminReportedContentFinished(int p0, cocos2d::CCArray* p1, AdminReportedMeta const& p2);

    /**
     * @note[short] MacOS (ARM): 0x877bbc
     * @note[short] MacOS (Intel): 0x99d810
     * @note[short] Windows: 0xb37d0
     * @note[short] iOS: 0x546600
     * @note[short] Android
     */
    virtual void adminReportedContentFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x877c70
     * @note[short] MacOS (Intel): 0x99d8b0
     * @note[short] Windows: 0xb3840
     * @note[short] iOS: 0x546664
     * @note[short] Android
     */
    virtual void adminAbuseInfoFinished(int p0, cocos2d::CCArray* p1, AdminAbuseMeta const& p2);

    /**
     * @note[short] MacOS (ARM): 0x8791f0
     * @note[short] MacOS (Intel): 0x99f090
     * @note[short] Windows: 0xb39a0
     * @note[short] iOS: 0x547918
     * @note[short] Android
     */
    virtual void adminAbuseInfoFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x8792ac
     * @note[short] MacOS (Intel): 0x99f130
     * @note[short] Windows: 0xb3a10
     * @note[short] iOS: 0x547980
     * @note[short] Android
     */
    virtual void adminUserHistoryFinished(int p0, cocos2d::CCArray* p1, int p2, int p3, int p4);

    /**
     * @note[short] MacOS (ARM): 0x87b050
     * @note[short] MacOS (Intel): 0x9a0ed0
     * @note[short] Windows: 0xb3b40
     * @note[short] iOS: 0x549040
     * @note[short] Android
     */
    virtual void adminUserHistoryFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x87d218
     * @note[short] MacOS (Intel): 0x9a3080
     * @note[short] Windows: 0xbaab0
     * @note[short] iOS: 0x54a8dc
     * @note[short] Android
     */
    virtual void adminClearReportsFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x87d414
     * @note[short] MacOS (Intel): 0x9a3290
     * @note[short] Windows: 0xbad10
     * @note[short] iOS: 0x54a9fc
     * @note[short] Android
     */
    virtual void adminClearReportsFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x87e490
     * @note[short] MacOS (Intel): 0x9a42d0
     * @note[short] Windows: 0xbc8b0
     * @note[short] iOS: 0x54b4c8
     * @note[short] Android
     */
    virtual void adminDeleteCommentsFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x87e60c
     * @note[short] MacOS (Intel): 0x9a4450
     * @note[short] Windows: 0xbc9f0
     * @note[short] iOS: 0x54b5a0
     * @note[short] Android
     */
    virtual void adminDeleteCommentsFailed();

    /**
     * @note[short] MacOS (ARM): 0x87e898
     * @note[short] MacOS (Intel): 0x9a46c0
     * @note[short] Windows: 0xbcb90
     * @note[short] iOS: 0x54b6a4
     * @note[short] Android
     */
    virtual void adminCloseCaseFinished(int p0, int p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x87eb74
     * @note[short] MacOS (Intel): 0x9a49a0
     * @note[short] Windows: 0xbcf70
     * @note[short] iOS: 0x54b898
     * @note[short] Android
     */
    virtual void adminCloseCaseFailed(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn applySelected(int p0, bool p1);

    /**
     * @note[short] Windows: 0xb3bb0
     * @note[short] Android
     */
    TodoReturn buildDirectReportRow(cocos2d::CCNode* p0, float p1);

    /**
     * @note[short] Windows: 0xb5920
     * @note[short] Android
     */
    TodoReturn buildFilterRows(cocos2d::CCArray* p0);

    /**
     * @note[short] Android
     */
    TodoReturn buildHistoryRows(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xb4100
     * @note[short] Android
     */
    TodoReturn buildReportedRows(cocos2d::CCArray* p0);

    /**
     * @note[short] Windows: 0xb0e50
     * @note[short] Android
     */
    TodoReturn clearCard();

    /**
     * @note[short] Android
     */
    TodoReturn clearSelectedReports();

    /**
     * @note[short] Android
     */
    TodoReturn closeAfterDone();

    /**
     * @note[short] Windows: 0xb9440
     * @note[short] Android
     */
    TodoReturn confirmDeleteSelected();

    /**
     * @note[short] Windows: 0xbb850
     * @note[short] Android
     */
    TodoReturn deleteEntry(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteFailedTick(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn deleteFilterEntry(int p0);

    /**
     * @note[short] Windows: 0xaf480
     * @note[short] Android
     */
    bool init(int p0, std::string const& p1, GJUserScore* p2);

    /**
     * @note[short] Android
     */
    TodoReturn jumpTo(int p0, int p1);

    /**
     * @note[short] Windows: 0xb96d0
     * @note[short] Android
     */
    void onBans(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb9af0
     * @note[short] Android
     */
    void onCommentHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb34f0
     * @note[short] Android
     */
    void onCopyAccountID(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xbc240
     * @note[short] Android
     */
    void onDeleteFilterRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb88f0
     * @note[short] Android
     */
    void onDeleteMenu(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xbae00
     * @note[short] Android
     */
    void onDeleteRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb96c0
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb9b70
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xbbce0
     * @note[short] Android
     */
    void onHistoryJump(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xbc030
     * @note[short] Android
     */
    void onJumpFilterRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xbbd40
     * @note[short] Android
     */
    void onJumpRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb33a0
     * @note[short] Android
     */
    void onModActionTaken(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb9a70
     * @note[short] Android
     */
    void onNotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb34c0
     * @note[short] Android
     */
    void onOpenProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb8680
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb3000
     * @note[short] Android
     */
    void onTab(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb3450
     * @note[short] Android
     */
    void onToggleHistory(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xb87c0
     * @note[short] Android
     */
    void onToggleRow(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openUserComments(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildRows();

    /**
     * @note[short] Android
     */
    TodoReturn refreshCard();

    /**
     * @note[short] Android
     */
    TodoReturn selectedDeletable();

    /**
     * @note[short] Windows: 0xb3030
     * @note[short] Android
     */
    TodoReturn selectTab(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn threadDeleteAnswered();

    /**
     * @note[short] Windows: 0xb0f30
     * @note[short] Android
     */
    TodoReturn updateCard(AccountReviewCard const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectedLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateTabControls();

    /**
     * @note[short] Windows: 0xaf3a0
     * @note[short] Android
     */
    TodoReturn viewedByLabel(std::string const& p0, std::string const& p1, float p2);
};
