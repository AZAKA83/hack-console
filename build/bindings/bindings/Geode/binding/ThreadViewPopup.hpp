#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/LevelPickerDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/vector.hpp>

class ThreadViewPopup : public FLAlertLayer, public VirtualRowSource, public ThreadMessageDelegate, public LevelPickerDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "ThreadViewPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadViewPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd3020
     * @note[short] iOS: 0x4f7e6c
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadViewPopup();

    /**
     * @note[short] Windows: 0xd92b0
     * @note[short] Android
     */
    static ThreadViewPopup* create(GJMessageThread* p0);

    /**
     * @note[short] MacOS (ARM): 0x81b470
     * @note[short] MacOS (Intel): 0x93a110
     * @note[short] Windows: 0xe3e40
     * @note[short] iOS: 0x501494
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x81b52c
     * @note[short] MacOS (Intel): 0x93a1c0
     * @note[short] Windows: 0xe3eb0
     * @note[short] iOS: 0x501500
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x81b5b8
     * @note[short] MacOS (Intel): 0x93a260
     * @note[short] Windows: 0xe3f20
     * @note[short] iOS: 0x501554
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x81ba7c
     * @note[short] MacOS (Intel): 0x93a860
     * @note[short] Windows: 0xe5390
     * @note[short] iOS: 0x501a00
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x81b084
     * @note[short] MacOS (Intel): 0x939cc0
     * @note[short] Windows: 0xe2e30
     * @note[short] iOS: 0x5012e4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x81b204
     * @note[short] MacOS (Intel): 0x939e50
     * @note[short] Windows: 0xe2e70
     * @note[short] iOS: 0x501328
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x81b000
     * @note[short] MacOS (Intel): 0x939c40
     * @note[short] Windows: 0xc39c0
     * @note[short] iOS: 0x501268
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x81b1e0
     * @note[short] MacOS (Intel): 0x939e10
     * @note[short] Windows: 0xe2e50
     * @note[short] iOS: 0x501304
     * @note[short] Android
     */
    virtual void emotePickerKeyDown(EmotePickerPopup* p0, cocos2d::enumKeyCodes p1, double p2);

    /**
     * @note[short] MacOS (ARM): 0x81b380
     * @note[short] MacOS (Intel): 0x93a040
     * @note[short] Windows: 0xe2f40
     * @note[short] iOS: 0x501420
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x81b2f4
     * @note[short] MacOS (Intel): 0x939f50
     * @note[short] Windows: 0xe2f00
     * @note[short] iOS: 0x5013b0
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x81b32c
     * @note[short] MacOS (Intel): 0x939fb0
     * @note[short] Windows: 0xe2f20
     * @note[short] iOS: 0x5013e8
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x816064
     * @note[short] MacOS (Intel): 0x9343d0
     * @note[short] Windows: 0xde410
     * @note[short] iOS: 0x4fd414
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x8148a0
     * @note[short] MacOS (Intel): 0x932b00
     * @note[short] Windows: 0xdc950
     * @note[short] iOS: 0x4fc2d8
     * @note[short] Android
     */
    virtual void levelPicked(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x814cd8
     * @note[short] MacOS (Intel): 0x932f50
     * @note[short] Windows: 0xdca50
     * @note[short] iOS: 0x4fc624
     * @note[short] Android
     */
    virtual void listPicked(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x814df8
     * @note[short] MacOS (Intel): 0x933070
     * @note[short] Windows: 0xdcb40
     * @note[short] iOS: 0x4fc6b8
     * @note[short] Android
     */
    virtual void shareIDPicked(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x8165e8
     * @note[short] MacOS (Intel): 0x9349a0
     * @note[short] Windows: 0xdeac0
     * @note[short] iOS: 0x4fd7e8
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x817c38
     * @note[short] MacOS (Intel): 0x9361b0
     * @note[short] Windows: 0xe0060
     * @note[short] iOS: 0x4fe944
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x813974
     * @note[short] MacOS (Intel): 0x931b00
     * @note[short] Windows: 0xdbf60
     * @note[short] iOS: 0x4fb690
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x81401c
     * @note[short] MacOS (Intel): 0x9321d0
     * @note[short] Windows: 0xdc580
     * @note[short] iOS: 0x4fbc90
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xde420
     * @note[short] iOS: 0x4fd424
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] MacOS (ARM): 0x81635c
     * @note[short] MacOS (Intel): 0x9346f0
     * @note[short] Windows: 0xde840
     * @note[short] iOS: 0x4fd630
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] MacOS (ARM): 0x8151d4
     * @note[short] MacOS (Intel): 0x9334f0
     * @note[short] Windows: 0xdd240
     * @note[short] iOS: 0x4fc898
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x815c40
     * @note[short] MacOS (Intel): 0x933fd0
     * @note[short] Windows: 0xdd5f0
     * @note[short] iOS: 0x4fd0e4
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x8194e0
     * @note[short] MacOS (Intel): 0x937e40
     * @note[short] Windows: 0xe1640
     * @note[short] iOS: 0x4ffb30
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] MacOS (ARM): 0x81951c
     * @note[short] MacOS (Intel): 0x937e80
     * @note[short] Windows: 0xe1650
     * @note[short] iOS: 0x4ffb6c
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] MacOS (ARM): 0x819718
     * @note[short] MacOS (Intel): 0x938120
     * @note[short] Windows: 0xe1750
     * @note[short] iOS: 0x4ffc80
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] MacOS (ARM): 0x819544
     * @note[short] MacOS (Intel): 0x937ec0
     * @note[short] Windows: 0xe1670
     * @note[short] iOS: 0x4ffb94
     * @note[short] Android
     */
    virtual void unmountVirtualRow(int p0, cocos2d::CCNode* p1);

    /**
     * @note[short] MacOS (ARM): 0x81151c
     * @note[short] MacOS (Intel): 0x92f370
     * @note[short] Windows: 0xe34b0
     * @note[short] Android
     */
    void buildMemberButton();

    /**
     * @note[short] Windows: 0xe2c60
     * @note[short] Android
     */
    TodoReturn buildRows(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkMessageTap(cocos2d::CCTouch* p0);

    /**
     * @note[short] Android
     */
    TodoReturn checkUnseenBelow(float p0);

    /**
     * @note[short] Android
     */
    TodoReturn createModView(GJMessageThread* p0, long long p1);

    /**
     * @note[short] Android
     */
    TodoReturn dmSendBlocked();

    /**
     * @note[short] Android
     */
    TodoReturn exitSearch(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn goToDate(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x80fa9c
     * @note[short] MacOS (Intel): 0x92d740
     * @note[short] Windows: 0xd93b0
     * @note[short] Android
     */
    bool init(GJMessageThread* p0);

    /**
     * @note[short] Windows: 0xdcc30
     * @note[short] Android
     */
    TodoReturn insertShareToken(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn jumpToLatest();

    /**
     * @note[short] Windows: 0xe3960
     * @note[short] Android
     */
    void layoutComposeBar();

    /**
     * @note[short] Windows: 0xe0190
     * @note[short] Android
     */
    TodoReturn layoutRows();

    /**
     * @note[short] Windows: 0xe2fb0
     * @note[short] Android
     */
    void layoutTitleRow();

    /**
     * @note[short] Windows: 0xe08d0
     * @note[short] Android
     */
    TodoReturn measureBody(GJThreadMessage* p0);

    /**
     * @note[short] Android
     */
    TodoReturn messageWithID(long long p0);

    /**
     * @note[short] Android
     */
    TodoReturn onAutoRefresh(float p0);

    /**
     * @note[short] Windows: 0xdbaa0
     * @note[short] Android
     */
    void onClearSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe2da0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xde2e0
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onHideKeyboard(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn onHighlightFaded();

    /**
     * @note[short] Windows: 0xdb8e0
     * @note[short] Android
     */
    void onJumpToLatest(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdbab0
     * @note[short] Android
     */
    void onJumpToMessage(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb760
     * @note[short] Android
     */
    void onLoadEarlier(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb8c0
     * @note[short] Android
     */
    void onLoadNewer(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdc720
     * @note[short] Android
     */
    void onMessageOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb590
     * @note[short] Android
     */
    void onRefresh(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdffd0
     * @note[short] Android
     */
    void onScrollToBottom(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdb910
     * @note[short] Android
     */
    void onSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xddac0
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdc6e0
     * @note[short] Android
     */
    void onSenderProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdc8f0
     * @note[short] Android
     */
    void onShareLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdcfe0
     * @note[short] Android
     */
    void onShowDescription(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdd200
     * @note[short] Android
     */
    void onShowMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xdc6b0
     * @note[short] Android
     */
    void onThreadOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openAt(long long p0);

    /**
     * @note[short] Android
     */
    TodoReturn pastScoreFor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn refetchLatest();

    /**
     * @note[short] Windows: 0xdaca0
     * @note[short] Android
     */
    TodoReturn refreshDMSubLabel();

    /**
     * @note[short] Windows: 0xdad40
     * @note[short] Android
     */
    TodoReturn refreshLockNotice();

    /**
     * @note[short] Android
     */
    TodoReturn removedView();

    /**
     * @note[short] Windows: 0xe50e0
     * @note[short] Android
     */
    TodoReturn requestDeleteMessage(long long p0);

    /**
     * @note[short] Android
     */
    TodoReturn requestMessages(long long p0, long long p1);

    /**
     * @note[short] Android
     */
    TodoReturn scrollToUnreadLine();

    /**
     * @note[short] Android
     */
    TodoReturn senderNameFor(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn senderScoreFor(int p0);

    /**
     * @note[short] Windows: 0xdb480
     * @note[short] Android
     */
    void setPollInterval(float p0);

    /**
     * @note[short] Android
     */
    void setSendPending(bool p0);

    /**
     * @note[short] Windows: 0xdff30
     * @note[short] Android
     */
    void setUnseenBelow(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn showLoading();

    /**
     * @note[short] Android
     */
    TodoReturn sortMessagesByID();

    /**
     * @note[short] Android
     */
    TodoReturn startSearch(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateComposeCount();
    std::vector<void*> m_rows;
    std::map<long long, void*> m_bodyMeasures;
    float m_unk2e0;
    GJMessageThread* m_thread;
    cocos2d::CCArray* m_messages;
    long long m_unk2f8;
    long long m_newestMessageID;
    int m_unk308;
    bool m_unk30c;
    bool m_unk30d;
    bool m_sendPending;
    bool m_isModView;
    long long m_modViewMessageID;
    cocos2d::CCLabelBMFont* m_lockNoticeLabel;
    InfoAlertButton* m_lockInfoButton;
    bool m_refetchQueued;
    ScrollableContentLayer* m_messagesLayer;
    LoadingCircle* m_loadingCircle;
    float m_listWidth;
    float m_listHeight;
    cocos2d::CCPoint m_listCenter;
    cocos2d::CCLabelBMFont* m_unk350;
    cocos2d::CCLabelBMFont* m_subtitleLabel;
    CCMenuItemSpriteExtra* m_membersButton;
    cocos2d::CCPoint m_titleRowPos;
    cocos2d::CCLabelBMFont* m_titleLabel;
    EmoteSprite* m_titleEmote;
    cocos2d::CCSprite* m_roleBadge;
    CCMenuItemSpriteExtra* m_sendButton;
    EmotePickerPopup* m_emotePicker;
    CCTextInputNode* m_messageInput;
    int m_unk3a0;
    float m_pollInterval;
    float m_unk3a8;
    float m_unk3ac;
    float m_unk3b0;
    long long m_unreadLineMessageID;
    long long m_unk3c0;
    std::string m_unk3c8;
    bool m_unk3e8;
    bool m_unk3e9;
    cocos2d::extension::CCScale9Sprite* m_composeBg;
    cocos2d::CCLabelBMFont* m_charCountLabel;
    CCMenuItemSpriteExtra* m_scrollToBottomButton;
    CCMenuItemSpriteExtra* m_hideKeyboardButton;
    GJThreadMessage* m_unk410;
    cocos2d::extension::CCScale9Sprite* m_messagesBg;
};
