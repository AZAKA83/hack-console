#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>

class ThreadDescPopup : public SetupTriggerPopup, public ThreadMessageDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "ThreadDescPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ThreadDescPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xd4140
     * @note[short] iOS: 0x512c08
     * @note[short] Android: Rebinded
     */
    virtual  ~ThreadDescPopup();

    /**
     * @note[short] Android
     */
    static ThreadDescPopup* create(GJMessageThread* p0, ThreadViewPopup* p1);

    /**
     * @note[short] MacOS (ARM): 0x833128
     * @note[short] MacOS (Intel): 0x953fa0
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x514268
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x833088
     * @note[short] MacOS (Intel): 0x953f00
     * @note[short] Windows: 0xfe920
     * @note[short] iOS: 0x5141f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x832550
     * @note[short] MacOS (Intel): 0x953380
     * @note[short] Windows: 0xfd4a0
     * @note[short] iOS: 0x513a04
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x832720
     * @note[short] MacOS (Intel): 0x953550
     * @note[short] Windows: 0xfdb70
     * @note[short] iOS: 0x513b88
     * @note[short] Android
     */
    virtual void emotePicked(EmotePickerPopup* p0, EmoteDef const* p1);

    /**
     * @note[short] MacOS (ARM): 0x832790
     * @note[short] MacOS (Intel): 0x9535d0
     * @note[short] Windows: 0xfdbc0
     * @note[short] iOS: 0x513bc8
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x832970
     * @note[short] MacOS (Intel): 0x9537f0
     * @note[short] Windows: 0xfe2a0
     * @note[short] iOS: 0x513d3c
     * @note[short] Android
     */
    virtual void threadUpdateFinished(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x832a98
     * @note[short] MacOS (Intel): 0x953950
     * @note[short] Windows: 0xfe3c0
     * @note[short] iOS: 0x513e2c
     * @note[short] Android
     */
    virtual void threadUpdateFailed(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x832c80
     * @note[short] MacOS (Intel): 0x953b20
     * @note[short] Windows: 0xfe500
     * @note[short] iOS: 0x513fb0
     * @note[short] Android
     */
    virtual void threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x832d2c
     * @note[short] MacOS (Intel): 0x953bd0
     * @note[short] Windows: 0xfe5b0
     * @note[short] iOS: 0x514010
     * @note[short] Android
     */
    virtual void threadMessagesFailed(int p0);

    /**
     * @note[short] MacOS (ARM): 0x832dd8
     * @note[short] MacOS (Intel): 0x953c70
     * @note[short] Windows: 0xfe660
     * @note[short] iOS: 0x514070
     * @note[short] Android
     */
    virtual void threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2);

    /**
     * @note[short] MacOS (ARM): 0x832e84
     * @note[short] MacOS (Intel): 0x953d20
     * @note[short] Windows: 0xfe710
     * @note[short] iOS: 0x5140d0
     * @note[short] Android
     */
    virtual void threadSearchFailed(int p0);

    /**
     * @note[short] Windows: 0xfe7c0
     * @note[short] iOS: 0x514130
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] MacOS (ARM): 0x832fdc
     * @note[short] MacOS (Intel): 0x953e60
     * @note[short] Windows: 0xfe870
     * @note[short] iOS: 0x514190
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] MacOS (ARM): 0x8316b4
     * @note[short] MacOS (Intel): 0x952390
     * @note[short] Windows: 0xfc920
     * @note[short] Android
     */
    bool buildUI(bool p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] Android
     */
    TodoReturn finishSave(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn handBackSlot();

    /**
     * @note[short] Android
     */
    bool init(GJMessageThread* p0, ThreadViewPopup* p1);

    /**
     * @note[short] Windows: 0xfda40
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xfd940
     * @note[short] Android
     */
    void onPickIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xfdbd0
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshIconSlot();

    /**
     * @note[short] Android
     */
    TodoReturn sendDescription();
};
