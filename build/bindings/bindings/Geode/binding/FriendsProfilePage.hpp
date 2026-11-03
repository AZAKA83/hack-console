#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/UploadActionDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/UserListDelegate.hpp>

class FriendsProfilePage : public PagedListPopup, public VirtualRowSource, public FLAlertLayerProtocol, public UploadActionDelegate, public UploadPopupDelegate, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendsProfilePage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendsProfilePage, PagedListPopup)

    /**
     * @note[short] Windows: 0x213240
     * @note[short] iOS: 0x271548
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendsProfilePage();

    /**
     * @note[short] Windows: 0x213430
     * @note[short] Android
     */
    static FriendsProfilePage* create(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x6451b0
     * @note[short] MacOS (Intel): 0x737340
     * @note[short] Windows: 0x214d40
     * @note[short] iOS: 0x273484
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* scores, UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x6454b4
     * @note[short] MacOS (Intel): 0x737680
     * @note[short] Windows: 0x215600
     * @note[short] iOS: 0x273704
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType type, GJErrorCode errorType);

    /**
     * @note[short] MacOS (ARM): 0x6455bc
     * @note[short] MacOS (Intel): 0x737780
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x2737f4
     * @note[short] Android
     */
    virtual void userListChanged(cocos2d::CCArray* scores, UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x6455d8
     * @note[short] MacOS (Intel): 0x7377c0
     * @note[short] Windows: 0x2156d0
     * @note[short] iOS: 0x273810
     * @note[short] Android
     */
    virtual void forceReloadList(UserListType type);

    /**
     * @note[short] MacOS (ARM): 0x643f0c
     * @note[short] MacOS (Intel): 0x736020
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x2726b8
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x6440b0
     * @note[short] MacOS (Intel): 0x7361e0
     * @note[short] Windows: 0x214740
     * @note[short] iOS: 0x2727fc
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] MacOS (ARM): 0x644168
     * @note[short] MacOS (Intel): 0x736290
     * @note[short] Windows: 0xe8460
     * @note[short] iOS: 0x272868
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] MacOS (ARM): 0x644180
     * @note[short] MacOS (Intel): 0x7362b0
     * @note[short] Windows: 0x214770
     * @note[short] iOS: 0x272880
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] MacOS (ARM): 0x645680
     * @note[short] MacOS (Intel): 0x7378b0
     * @note[short] Windows: 0x215f00
     * @note[short] iOS: 0x2738b8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x6457e4
     * @note[short] MacOS (Intel): 0x737a30
     * @note[short] Windows: 0x216150
     * @note[short] iOS: 0x273a08
     * @note[short] Android
     */
    virtual void uploadActionFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x645944
     * @note[short] MacOS (Intel): 0x737b80
     * @note[short] Windows: 0x2161e0
     * @note[short] iOS: 0x273aa4
     * @note[short] Android
     */
    virtual void uploadActionFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x645ac4
     * @note[short] MacOS (Intel): 0x737c70
     * @note[short] Windows: 0x2162b0
     * @note[short] iOS: 0x273b40
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x645b4c
     * @note[short] MacOS (Intel): 0x737ce0
     * @note[short] Windows: 0x216300
     * @note[short] iOS: 0x273bb0
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Android
     */
    TodoReturn filterUsersWithQuery(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn getActiveUserList();

    /**
     * @note[short] MacOS (ARM): 0x642b54
     * @note[short] MacOS (Intel): 0x734bd0
     * @note[short] Windows: 0x213620
     * @note[short] Android
     */
    bool init(UserListType type);

    /**
     * @note[short] Windows: 0x216b80
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x217060
     * @note[short] iOS: 0x273cd8
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x216440
     * @note[short] Android
     */
    void onGlobalSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x2157c0
     * @note[short] Android
     */
    void onSendMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x216fa0
     * @note[short] Android
     */
    void onSwitchList(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x214ba0
     * @note[short] Android
     */
    void onToggleSort(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x214c40
     * @note[short] Android
     */
    void onToggleSortDir(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x215cc0
     * @note[short] Android
     */
    void onUnblock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x215840
     * @note[short] Android
     */
    void onUnfollow(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x215a80
     * @note[short] Android
     */
    void onUnmute(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x643ea8
     * @note[short] MacOS (Intel): 0x735fb0
     * @note[short] Windows: 0x216e80
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8810
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn rebuildList();

    /**
     * @note[short] Android
     */
    TodoReturn sortUsers();

    /**
     * @note[short] Windows: 0x2145a0
     * @note[short] Android
     */
    TodoReturn updateCountLabel();

    /**
     * @note[short] Android
     */
    TodoReturn updateSortLabel();
    UserListType m_type;
    cocos2d::CCLabelBMFont* m_noInternet;
    cocos2d::CCLabelBMFont* m_totalFriends;
    GJCommentListLayer* m_listLayer;
    LoadingCircle* m_circle;
    void* m_unk532;
    cocos2d::CCArray* m_users;
    CCMenuItemSpriteExtra* m_refreshBtn;
};
