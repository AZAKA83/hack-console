#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/FriendPickerDelegate.hpp>

class MessageThreadsPage : public FLAlertLayer, public ThreadMessageDelegate, public FLAlertLayerProtocol, public FriendPickerDelegate {
public:
    static constexpr auto CLASS_NAME = "MessageThreadsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MessageThreadsPage, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd2b40
     * @note[short] iOS: 0x4f3ce0
     * @note[short] Android: Rebinded
     */
    virtual  ~MessageThreadsPage();

    /**
     * @note[short] MacOS (ARM): 0x80a544
     * @note[short] Windows: 0xd42e0
     * @note[short] Android
     */
    static MessageThreadsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x80a6ec
     * @note[short] MacOS (Intel): 0x9281c0
     * @note[short] Windows: 0xd4500
     * @note[short] iOS: 0x4f3d8c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x80f7f0
     * @note[short] MacOS (Intel): 0x92d3b0
     * @note[short] Windows: 0xd92a0
     * @note[short] iOS: 0x4f7d28
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x80f680
     * @note[short] MacOS (Intel): 0x92d250
     * @note[short] Windows: 0xd9130
     * @note[short] iOS: 0x4f7bf0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool ownsTouchPrio();

    /**
     * @note[short] MacOS (ARM): 0x80db68
     * @note[short] MacOS (Intel): 0x92b640
     * @note[short] Windows: 0x3f5c0
     * @note[short] iOS: 0x4f666c
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x80dda4
     * @note[short] MacOS (Intel): 0x92b8c0
     * @note[short] Windows: 0xd7890
     * @note[short] iOS: 0x4f6888
     * @note[short] Android
     */
    virtual void friendPicked(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x80dfb0
     * @note[short] MacOS (Intel): 0x92bad0
     * @note[short] Windows: 0xd7a40
     * @note[short] iOS: 0x4f6a10
     * @note[short] Android
     */
    virtual bool isRecipientSelected(int p0);

    /**
     * @note[short] MacOS (ARM): 0x80e0c0
     * @note[short] MacOS (Intel): 0x92bbb0
     * @note[short] Windows: 0xd7ac0
     * @note[short] iOS: 0x4f6a94
     * @note[short] Android
     */
    virtual int selectedRecipientCount();

    /**
     * @note[short] MacOS (ARM): 0x80e0e0
     * @note[short] MacOS (Intel): 0x92bbf0
     * @note[short] Windows: 0xd7ae0
     * @note[short] iOS: 0x4f6ab4
     * @note[short] Android
     */
    virtual cocos2d::CCArray* selectedRecipients();

    /**
     * @note[short] MacOS (ARM): 0x80e0f0
     * @note[short] MacOS (Intel): 0x92bc10
     * @note[short] Windows: 0xd7af0
     * @note[short] iOS: 0x4f6ac4
     * @note[short] Android
     */
    virtual void clearRecipients();

    /**
     * @note[short] MacOS (ARM): 0x80e258
     * @note[short] MacOS (Intel): 0x92bd30
     * @note[short] Windows: 0xd7b20
     * @note[short] iOS: 0x4f6af8
     * @note[short] Android
     */
    virtual void friendPickerClosed();

    /**
     * @note[short] MacOS (ARM): 0x80d224
     * @note[short] MacOS (Intel): 0x92ae90
     * @note[short] Windows: 0xd6c90
     * @note[short] iOS: 0x4f6128
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x80e6e8
     * @note[short] MacOS (Intel): 0x92c180
     * @note[short] Windows: 0xd8510
     * @note[short] iOS: 0x4f6ea0
     * @note[short] Android
     */
    virtual void threadListFinished(cocos2d::CCArray* p0, int p1, int p2, int p3);

    /**
     * @note[short] MacOS (ARM): 0x80f488
     * @note[short] MacOS (Intel): 0x92d040
     * @note[short] Windows: 0xd8c90
     * @note[short] iOS: 0x4f7a28
     * @note[short] Android
     */
    virtual void threadListFailed();

    /**
     * @note[short] MacOS (ARM): 0x80d7b0
     * @note[short] MacOS (Intel): 0x92b2a0
     * @note[short] Windows: 0xd7310
     * @note[short] iOS: 0x4f63c8
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x80d9bc
     * @note[short] MacOS (Intel): 0x92b4c0
     * @note[short] Windows: 0xd7470
     * @note[short] iOS: 0x4f6544
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x80eca8
     * @note[short] Windows: 0xd87b0
     * @note[short] Android
     */
    void applyThreadList(cocos2d::CCArray* p0, int p1, int p2, int p3, bool p4);

    /**
     * @note[short] MacOS (ARM): 0x80f5e8
     * @note[short] Windows: 0xd9030
     * @note[short] Android
     */
    void checkActivityAbove(float p0);

    /**
     * @note[short] Android
     */
    bool isCovered();

    /**
     * @note[short] MacOS (ARM): 0x80ccb8
     * @note[short] Windows: 0xd5d30
     * @note[short] Android
     */
    void loadPage(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x80bdf0
     * @note[short] Windows: 0xd7f40
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80bb9c
     * @note[short] Windows: 0xd91c0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80c4f8
     * @note[short] Windows: 0xd6740
     * @note[short] Android
     */
    void onDeleteSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onInboxPoll(float p0);

    /**
     * @note[short] MacOS (ARM): 0x80bc5c
     * @note[short] Windows: 0xd8330
     * @note[short] Android
     */
    void onLegacyMessages(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80c370
     * @note[short] Windows: 0xd7140
     * @note[short] Android
     */
    void onMarkRead(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80bce8
     * @note[short] Windows: 0xd83d0
     * @note[short] Android
     */
    void onNewThread(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80c048
     * @note[short] Windows: 0xd7fd0
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80c038
     * @note[short] Windows: 0xd7fc0
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80c058
     * @note[short] Windows: 0xd8170
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80c1d0
     * @note[short] Windows: 0xd90e0
     * @note[short] Android
     */
    void onScrollToTop(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80bda8
     * @note[short] Windows: 0xd7810
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80c224
     * @note[short] Windows: 0xd62f0
     * @note[short] Android
     */
    void onSelectAll(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80bf4c
     * @note[short] Windows: 0xd7ef0
     * @note[short] Android
     */
    void onSelectFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80cbb0
     * @note[short] Windows: 0xd63f0
     * @note[short] Android
     */
    void onSelectionChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80ca94
     * @note[short] Windows: 0xd65c0
     * @note[short] Android
     */
    void onShowInvites(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80cb64
     * @note[short] Windows: 0xd5f60
     * @note[short] Android
     */
    void onThreadsChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x80be94
     * @note[short] Windows: 0xd7850
     * @note[short] Android
     */
    void onUserFilter(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refetchIfQueued();

    /**
     * @note[short] Android
     */
    TodoReturn refreshUserFilterBtn();

    /**
     * @note[short] Android
     */
    int selectedCount();

    /**
     * @note[short] MacOS (ARM): 0x80f410
     * @note[short] Windows: 0xd8fd0
     * @note[short] Android
     */
    void setActivityAbove(bool p0);

    /**
     * @note[short] Android
     */
    void setInboxPoll(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn setupThreadBrowser(cocos2d::CCArray* p0, float p1);

    /**
     * @note[short] Android
     */
    TodoReturn syncSearchFromBox();

    /**
     * @note[short] MacOS (ARM): 0x80db70
     * @note[short] Windows: 0xd7d60
     * @note[short] Android
     */
    TodoReturn updateFilterButtons();

    /**
     * @note[short] Android
     */
    TodoReturn updateInviteButton();

    /**
     * @note[short] Android
     */
    TodoReturn updatePageArrows(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn updateSelectUI();

    /**
     * @note[short] Android
     */
    TodoReturn userFilterCSV();
};
