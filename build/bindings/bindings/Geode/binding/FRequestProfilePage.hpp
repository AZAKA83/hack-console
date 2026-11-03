#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/FriendRequestDelegate.hpp>
#include <Geode/binding/UserListDelegate.hpp>

class FRequestProfilePage : public FLAlertLayer, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public FriendRequestDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FRequestProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FRequestProfilePage, FLAlertLayer)

    /**
     * @note[short] Windows: 0x20f240
     * @note[short] iOS: 0x24ac90
     * @note[short] Android: Rebinded
     */
    virtual  ~FRequestProfilePage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static FRequestProfilePage* create(bool sent);

    /**
     * @note[short] MacOS (ARM): 0x767ecc
     * @note[short] MacOS (Intel): 0x871990
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x24cdbc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x767ec0
     * @note[short] MacOS (Intel): 0x871960
     * @note[short] Windows: 0x211f10
     * @note[short] iOS: 0x24cdb0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x767d1c
     * @note[short] MacOS (Intel): 0x8717f0
     * @note[short] Windows: 0x2119f0
     * @note[short] iOS: 0x24cc3c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x767f04
     * @note[short] MacOS (Intel): 0x8719d0
     * @note[short] Windows: 0x211f20
     * @note[short] iOS: 0x24cdf4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* popup);

    /**
     * @note[short] MacOS (ARM): 0x767f8c
     * @note[short] MacOS (Intel): 0x871a40
     * @note[short] Windows: 0x211f70
     * @note[short] iOS: 0x24ce64
     * @note[short] Android
     */
    virtual void uploadActionFinished(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x768160
     * @note[short] MacOS (Intel): 0x871c00
     * @note[short] Windows: 0x212110
     * @note[short] iOS: 0x24cf60
     * @note[short] Android
     */
    virtual void uploadActionFailed(int id, int response);

    /**
     * @note[short] MacOS (ARM): 0x76866c
     * @note[short] MacOS (Intel): 0x8720f0
     * @note[short] Windows: 0x212bd0
     * @note[short] iOS: 0x24d178
     * @note[short] Android
     */
    virtual void loadFRequestsFinished(cocos2d::CCArray* scores, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x768798
     * @note[short] MacOS (Intel): 0x872200
     * @note[short] Windows: 0x212c60
     * @note[short] iOS: 0x24d20c
     * @note[short] Android
     */
    virtual void loadFRequestsFailed(char const* key, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x768958
     * @note[short] MacOS (Intel): 0x8723c0
     * @note[short] Windows: 0x212d40
     * @note[short] iOS: 0x24d304
     * @note[short] Android
     */
    virtual void setupPageInfo(std::string info, char const* key);

    /**
     * @note[short] MacOS (ARM): 0x768924
     * @note[short] MacOS (Intel): 0x872380
     * @note[short] Windows: 0x212d20
     * @note[short] iOS: 0x24d2d0
     * @note[short] Android
     */
    virtual void forceReloadRequests(bool sent);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x7676f8
     * @note[short] MacOS (Intel): 0x871170
     * @note[short] Windows: 0x210c80
     * @note[short] iOS: 0x24c684
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS (ARM): 0x767970
     * @note[short] MacOS (Intel): 0x871410
     * @note[short] Windows: 0x210d90
     * @note[short] iOS: 0x24c8fc
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x7683b0
     * @note[short] MacOS (Intel): 0x871e40
     * @note[short] Windows: 0x212780
     * @note[short] iOS: 0x24d028
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x767a74
     * @note[short] MacOS (Intel): 0x2132a0
     * @note[short] Windows: 0x211400
     * @note[short] Android
     */
    void deleteSelected();

    /**
     * @note[short] Android
     */
    TodoReturn doSearch(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn exitGlobalMode();

    /**
     * @note[short] MacOS (ARM): 0x765698
     * @note[short] MacOS (Intel): 0x86ef70
     * @note[short] Windows: 0x20f420
     * @note[short] Android
     */
    bool init(bool sent);

    /**
     * @note[short] Windows: 0x2121b0
     * @note[short] Android
     */
    bool isCorrect(char const* key);

    /**
     * @note[short] Windows: 0x2122f0
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x210fe0
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onGlobalSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2116b0
     * @note[short] Android
     */
    void onMarkRead(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onSelectionChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x211a20
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggleAllObjects(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn removeFromNewCount(int p0);

    /**
     * @note[short] Windows: 0x2102f0
     * @note[short] Android
     */
    int selectedCount();

    /**
     * @note[short] MacOS (ARM): 0x767808
     * @note[short] Windows: 0x212a40
     * @note[short] Android
     */
    void setupCommentsBrowser(cocos2d::CCArray* scores);

    /**
     * @note[short] MacOS (Intel): 0x213840
     * @note[short] Windows: 0x211e70
     * @note[short] Android
     */
    void untoggleAll();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLevelsLabel();

    /**
     * @note[short] Windows: 0x211b40
     * @note[short] Android
     */
    TodoReturn updateModeButtons();

    /**
     * @note[short] MacOS (ARM): 0x768fa4
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePageArrows();

    /**
     * @note[short] Windows: 0x2103a0
     * @note[short] Android
     */
    void updateSelectUI();
    bool m_sent;
    bool m_ignored;
    std::string m_key;
    std::string m_query;
    cocos2d::CCLabelBMFont* m_pageLabel;
    cocos2d::CCLabelBMFont* m_errorLabel;
    cocos2d::CCLabelBMFont* m_wrongLabel;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    UploadActionPopup* m_uploadPopup;
    void* m_unk2e8;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_refreshButton;
    cocos2d::CCNode* m_inboxNode;
    cocos2d::CCNode* m_sentNode;
    cocos2d::CCNode* m_ignoredNode;
    CCTextInputNode* m_searchInput;
    cocos2d::CCArray* m_userScores;
    bool m_triedToLoadUsers;
    GJSelectionStrip* m_selectionStrip;
    CCMenuItemSpriteExtra* m_markReadButton;
    int m_itemCount;
    int m_pageStartIdx;
    int m_pageEndIdx;
    int m_page;
};
