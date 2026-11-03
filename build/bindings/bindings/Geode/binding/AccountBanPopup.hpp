#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/CommentAdminDelegate.hpp>
#include <Geode/binding/UploadPopupDelegate.hpp>
#include <Geode/binding/DropdownDelegate.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class AccountBanPopup : public SetupTriggerPopup, public CommentAdminDelegate, public UploadPopupDelegate, public DropdownDelegate, public AdminActionConfirmDelegate {
public:
    static constexpr auto CLASS_NAME = "AccountBanPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountBanPopup, SetupTriggerPopup)

    /**
     * @note[short] Android: Rebinded
     */
    virtual  ~AccountBanPopup();

    /**
     * @note[short] Android
     */
    static AccountBanPopup* create(int p0, std::string const& p1, int p2, int p3, int p4, int p5, int p6, int p7);

    /**
     * @note[short] MacOS (ARM): 0x86e7a0
     * @note[short] MacOS (Intel): 0x993590
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x53ff78
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x86acc4
     * @note[short] MacOS (Intel): 0x990770
     * @note[short] Windows: 0xa7990
     * @note[short] iOS: 0x53ea98
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x86e74c
     * @note[short] MacOS (Intel): 0x993540
     * @note[short] Windows: 0xabc00
     * @note[short] iOS: 0x53ff24
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* p0);

    /**
     * @note[short] Windows: 0xa95e0
     * @note[short] Android
     */
    virtual void adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x86c118
     * @note[short] MacOS (Intel): 0x991d40
     * @note[short] Windows: 0xaaf20
     * @note[short] iOS: 0x53f74c
     * @note[short] Android
     */
    virtual void adminCommentBanFinished();

    /**
     * @note[short] MacOS (ARM): 0x86c28c
     * @note[short] MacOS (Intel): 0x991dd0
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53f7c8
     * @note[short] Android
     */
    virtual void adminCommentBanFailed();

    /**
     * @note[short] MacOS (ARM): 0x86c3d4
     * @note[short] MacOS (Intel): 0x991ef0
     * @note[short] Windows: 0xab010
     * @note[short] iOS: 0x53f7d4
     * @note[short] Android
     */
    virtual void adminCommentUnbanFinished();

    /**
     * @note[short] MacOS (ARM): 0x86c540
     * @note[short] MacOS (Intel): 0x991f70
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53f84c
     * @note[short] Android
     */
    virtual void adminCommentUnbanFailed();

    /**
     * @note[short] MacOS (ARM): 0x86c688
     * @note[short] MacOS (Intel): 0x992090
     * @note[short] Windows: 0xab100
     * @note[short] iOS: 0x53f858
     * @note[short] Android
     */
    virtual void adminUploadBanFinished();

    /**
     * @note[short] MacOS (ARM): 0x86c7f4
     * @note[short] MacOS (Intel): 0x992120
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53f8d4
     * @note[short] Android
     */
    virtual void adminUploadBanFailed();

    /**
     * @note[short] MacOS (ARM): 0x86c93c
     * @note[short] MacOS (Intel): 0x992240
     * @note[short] Windows: 0xab1f0
     * @note[short] iOS: 0x53f8e0
     * @note[short] Android
     */
    virtual void adminUploadUnbanFinished();

    /**
     * @note[short] MacOS (ARM): 0x86caa0
     * @note[short] MacOS (Intel): 0x9922c0
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53f958
     * @note[short] Android
     */
    virtual void adminUploadUnbanFailed();

    /**
     * @note[short] MacOS (ARM): 0x86cbe8
     * @note[short] MacOS (Intel): 0x9923e0
     * @note[short] Windows: 0xab2e0
     * @note[short] iOS: 0x53f964
     * @note[short] Android
     */
    virtual void adminMessageBanFinished();

    /**
     * @note[short] MacOS (ARM): 0x86cd5c
     * @note[short] MacOS (Intel): 0x992470
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53f9e0
     * @note[short] Android
     */
    virtual void adminMessageBanFailed();

    /**
     * @note[short] MacOS (ARM): 0x86cea4
     * @note[short] MacOS (Intel): 0x992590
     * @note[short] Windows: 0xab3c0
     * @note[short] iOS: 0x53f9ec
     * @note[short] Android
     */
    virtual void adminMessageUnbanFinished();

    /**
     * @note[short] MacOS (ARM): 0x86d010
     * @note[short] MacOS (Intel): 0x992610
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53fa64
     * @note[short] Android
     */
    virtual void adminMessageUnbanFailed();

    /**
     * @note[short] MacOS (ARM): 0x86d158
     * @note[short] MacOS (Intel): 0x992730
     * @note[short] Windows: 0xab4b0
     * @note[short] iOS: 0x53fa70
     * @note[short] Android
     */
    virtual void adminFreezeFinished();

    /**
     * @note[short] MacOS (ARM): 0x86d2c8
     * @note[short] MacOS (Intel): 0x9927d0
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53faf4
     * @note[short] Android
     */
    virtual void adminFreezeFailed();

    /**
     * @note[short] MacOS (ARM): 0x86d410
     * @note[short] MacOS (Intel): 0x9928f0
     * @note[short] Windows: 0xab5a0
     * @note[short] iOS: 0x53fb00
     * @note[short] Android
     */
    virtual void adminUnfreezeFinished();

    /**
     * @note[short] MacOS (ARM): 0x86d574
     * @note[short] MacOS (Intel): 0x992990
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53fb7c
     * @note[short] Android
     */
    virtual void adminUnfreezeFailed();

    /**
     * @note[short] MacOS (ARM): 0x86d6bc
     * @note[short] MacOS (Intel): 0x992ab0
     * @note[short] Windows: 0xab690
     * @note[short] iOS: 0x53fb88
     * @note[short] Android
     */
    virtual void adminTrendingBanFinished();

    /**
     * @note[short] MacOS (ARM): 0x86d838
     * @note[short] MacOS (Intel): 0x992b50
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53fc04
     * @note[short] Android
     */
    virtual void adminTrendingBanFailed();

    /**
     * @note[short] MacOS (ARM): 0x86d980
     * @note[short] MacOS (Intel): 0x992c70
     * @note[short] Windows: 0xab780
     * @note[short] iOS: 0x53fc10
     * @note[short] Android
     */
    virtual void adminTrendingUnbanFinished();

    /**
     * @note[short] MacOS (ARM): 0x86dae4
     * @note[short] MacOS (Intel): 0x992cf0
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53fc8c
     * @note[short] Android
     */
    virtual void adminTrendingUnbanFailed();

    /**
     * @note[short] MacOS (ARM): 0x86dc2c
     * @note[short] MacOS (Intel): 0x992e10
     * @note[short] Windows: 0xab860
     * @note[short] iOS: 0x53fc98
     * @note[short] Android
     */
    virtual void adminNameLockFinished();

    /**
     * @note[short] MacOS (ARM): 0x86dd88
     * @note[short] MacOS (Intel): 0x992e90
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53fd14
     * @note[short] Android
     */
    virtual void adminNameLockFailed();

    /**
     * @note[short] MacOS (ARM): 0x86ded0
     * @note[short] MacOS (Intel): 0x992fb0
     * @note[short] Windows: 0xab940
     * @note[short] iOS: 0x53fd20
     * @note[short] Android
     */
    virtual void adminNameUnlockFinished();

    /**
     * @note[short] MacOS (ARM): 0x86e034
     * @note[short] MacOS (Intel): 0x993030
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53fd98
     * @note[short] Android
     */
    virtual void adminNameUnlockFailed();

    /**
     * @note[short] MacOS (ARM): 0x86e17c
     * @note[short] MacOS (Intel): 0x993150
     * @note[short] Windows: 0xaba30
     * @note[short] iOS: 0x53fda4
     * @note[short] Android
     */
    virtual void adminQueueMuteFinished();

    /**
     * @note[short] MacOS (ARM): 0x86e308
     * @note[short] MacOS (Intel): 0x993200
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53fe24
     * @note[short] Android
     */
    virtual void adminQueueMuteFailed();

    /**
     * @note[short] MacOS (ARM): 0x86e450
     * @note[short] MacOS (Intel): 0x993320
     * @note[short] Windows: 0xabb20
     * @note[short] iOS: 0x53fe30
     * @note[short] Android
     */
    virtual void adminQueueUnmuteFinished();

    /**
     * @note[short] MacOS (ARM): 0x86e57c
     * @note[short] MacOS (Intel): 0x9933a0
     * @note[short] Windows: 0xab000
     * @note[short] iOS: 0x53fea8
     * @note[short] Android
     */
    virtual void adminQueueUnmuteFailed();

    /**
     * @note[short] MacOS (ARM): 0x86e6c4
     * @note[short] MacOS (Intel): 0x9934c0
     * @note[short] Windows: 0xabbb0
     * @note[short] iOS: 0x53feb4
     * @note[short] Android
     */
    virtual void onClosePopup(UploadActionPopup* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void dropdownSelectionChanged(Dropdown* p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn actionFailed();

    /**
     * @note[short] Android
     */
    TodoReturn banLanded(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn banStateShort(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn banStateText(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn executeAction(int p0, std::vector<int> const& p1, std::string const& p2);

    /**
     * @note[short] Windows: 0xa6c70
     * @note[short] Android
     */
    bool init(int p0, std::string const& p1, int p2, int p3, int p4, int p5, int p6, int p7);

    /**
     * @note[short] Windows: 0xa7cb0
     * @note[short] Android
     */
    void onCommentBan(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa7f90
     * @note[short] Android
     */
    void onCommentUnban(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa8760
     * @note[short] Android
     */
    void onFreeze(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa7e20
     * @note[short] Android
     */
    void onLevelUploadBan(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa81b0
     * @note[short] Android
     */
    void onLevelUploadUnban(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa83d0
     * @note[short] Android
     */
    void onMessageBan(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa8540
     * @note[short] Android
     */
    void onMessageUnban(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNameLock(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNameUnlock(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa9080
     * @note[short] Android
     */
    void onQueueMute(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa93c0
     * @note[short] Android
     */
    void onQueueUnmute(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa8b10
     * @note[short] Android
     */
    void onTrendingBan(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa8e30
     * @note[short] Android
     */
    void onTrendingUnban(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xa88f0
     * @note[short] Android
     */
    void onUnfreeze(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshBanRows();
};
