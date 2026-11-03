#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FriendPickerDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class MemberListPopup : public PagedListPopup, public ThreadMessageDelegate, public FriendPickerDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "MemberListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MemberListPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xd3900
     * @note[short] iOS: 0x506d80
     * @note[short] Android: Rebinded
     */
    virtual  ~MemberListPopup();

    /**
     * @note[short] Windows: 0xeb970
     * @note[short] Android
     */
    static MemberListPopup* create(GJMessageThread* p0, ThreadViewPopup* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x823338
     * @note[short] MacOS (Intel): 0x942850
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x507cdc
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x823d98
     * @note[short] MacOS (Intel): 0x9432f0
     * @note[short] Windows: 0xed9c0
     * @note[short] iOS: 0x5083e4
     * @note[short] Android
     */
    virtual void friendPicked(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x823f54
     * @note[short] MacOS (Intel): 0x943490
     * @note[short] Windows: 0xedb70
     * @note[short] iOS: 0x508570
     * @note[short] Android
     */
    virtual bool isRecipientSelected(int p0);

    /**
     * @note[short] MacOS (ARM): 0x824064
     * @note[short] MacOS (Intel): 0x943570
     * @note[short] Windows: 0xedbf0
     * @note[short] iOS: 0x5085f4
     * @note[short] Android
     */
    virtual int selectedRecipientCount();

    /**
     * @note[short] MacOS (ARM): 0x824084
     * @note[short] MacOS (Intel): 0x9435b0
     * @note[short] Windows: 0xedc10
     * @note[short] iOS: 0x508614
     * @note[short] Android
     */
    virtual cocos2d::CCArray* selectedRecipients();

    /**
     * @note[short] MacOS (ARM): 0x824094
     * @note[short] MacOS (Intel): 0x9435d0
     * @note[short] Windows: 0xedc20
     * @note[short] iOS: 0x508624
     * @note[short] Android
     */
    virtual int pickerRowState(int p0);

    /**
     * @note[short] MacOS (ARM): 0x824180
     * @note[short] MacOS (Intel): 0x9436c0
     * @note[short] Windows: 0xedd60
     * @note[short] iOS: 0x508708
     * @note[short] Android
     */
    virtual int pickerCountBase();

    /**
     * @note[short] MacOS (ARM): 0x8241d0
     * @note[short] MacOS (Intel): 0x943740
     * @note[short] Windows: 0xedd90
     * @note[short] iOS: 0x508758
     * @note[short] Android
     */
    virtual void friendPickerAdd();

    /**
     * @note[short] MacOS (ARM): 0x824198
     * @note[short] MacOS (Intel): 0x9436f0
     * @note[short] Windows: 0xedd70
     * @note[short] iOS: 0x508720
     * @note[short] Android
     */
    virtual void friendPickerClosed();

    /**
     * @note[short] MacOS (ARM): 0x823a1c
     * @note[short] MacOS (Intel): 0x942f10
     * @note[short] Windows: 0xed4b0
     * @note[short] iOS: 0x5081c8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x82449c
     * @note[short] MacOS (Intel): 0x943a50
     * @note[short] Windows: 0xee880
     * @note[short] iOS: 0x508954
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x8248a0
     * @note[short] MacOS (Intel): 0x943ef0
     * @note[short] Windows: 0xeec90
     * @note[short] iOS: 0x508cdc
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x822d54
     * @note[short] MacOS (Intel): 0x9422c0
     * @note[short] Windows: 0xebfe0
     * @note[short] iOS: 0x507948
     * @note[short] Android
     */
    virtual void threadMembersFinished(int p0);

    /**
     * @note[short] MacOS (ARM): 0x822e50
     * @note[short] MacOS (Intel): 0x9423b0
     * @note[short] Windows: 0xebfe0
     * @note[short] iOS: 0x5079c0
     * @note[short] Android
     */
    virtual void threadMembersFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x822f4c
     * @note[short] MacOS (Intel): 0x9424a0
     * @note[short] Windows: 0xec0b0
     * @note[short] iOS: 0x507a38
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x82300c
     * @note[short] MacOS (Intel): 0x942540
     * @note[short] Windows: 0xec110
     * @note[short] iOS: 0x507aa0
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x82303c
     * @note[short] MacOS (Intel): 0x942580
     * @note[short] Windows: 0xec130
     * @note[short] iOS: 0x507ad0
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x82306c
     * @note[short] MacOS (Intel): 0x9425d0
     * @note[short] Windows: 0xec150
     * @note[short] iOS: 0x507b00
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xec170
     * @note[short] iOS: 0x507b30
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] MacOS (ARM): 0x823208
     * @note[short] MacOS (Intel): 0x942730
     * @note[short] Windows: 0xec240
     * @note[short] iOS: 0x507bbc
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] Windows: 0xee170
     * @note[short] Android
     */
    TodoReturn applyAddOutcome(GJMessageThread* p0);

    /**
     * @note[short] Windows: 0xec5e0
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] MacOS (ARM): 0x8221a4
     * @note[short] MacOS (Intel): 0x941680
     * @note[short] Windows: 0xebaf0
     * @note[short] Android
     */
    bool init(GJMessageThread* p0, ThreadViewPopup* p1, bool p2);

    /**
     * @note[short] Windows: 0xed910
     * @note[short] Android
     */
    void onAddMember(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xec400
     * @note[short] Android
     */
    void onAddPolicy(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xed070
     * @note[short] Android
     */
    void onKickMember(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8810
     * @note[short] Android
     */
    void onMemberProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xece60
     * @note[short] Android
     */
    void onRevokeInvite(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xed2a0
     * @note[short] Android
     */
    void onTransferOwner(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn opPending();

    /**
     * @note[short] Android
     */
    TodoReturn refreshHost();

    /**
     * @note[short] MacOS (ARM): 0x82253c
     * @note[short] MacOS (Intel): 0x941a80
     * @note[short] Windows: 0xec260
     * @note[short] Android
     */
    void refreshPolicyBtn();
};
