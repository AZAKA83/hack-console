#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
#include <Geode/binding/FriendPickerDelegate.hpp>
#include <Geode/binding/LevelPickerDelegate.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class NewThreadPopup : public FLAlertLayer, public ThreadMessageDelegate, public FriendPickerDelegate, public LevelPickerDelegate, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "NewThreadPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NewThreadPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0xd3a60
     * @note[short] iOS: 0x508ef0
     * @note[short] Android: Rebinded
     */
    virtual  ~NewThreadPopup();

    /**
     * @note[short] MacOS (ARM): 0x80e64c
     * @note[short] Windows: 0xeeda0
     * @note[short] Android
     */
    static NewThreadPopup* create(int p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): 0x829260
     * @note[short] MacOS (Intel): 0x948dc0
     * @note[short] Windows: 0xf3e30
     * @note[short] iOS: 0x50c6e8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x827758
     * @note[short] MacOS (Intel): 0x947160
     * @note[short] Windows: 0xf0510
     * @note[short] iOS: 0x50b520
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x8291d8
     * @note[short] MacOS (Intel): 0x948d40
     * @note[short] Windows: 0xf3d00
     * @note[short] iOS: 0x50c668
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x827734
     * @note[short] MacOS (Intel): 0x947120
     * @note[short] Windows: 0xe2e50
     * @note[short] iOS: 0x50b4fc
     * @note[short] Android
     */
    virtual void emotePickerKeyDown(EmotePickerPopup* p0, cocos2d::enumKeyCodes p1, double p2);

    /**
     * @note[short] MacOS (ARM): 0x827874
     * @note[short] MacOS (Intel): 0x9472a0
     * @note[short] Windows: 0xf06f0
     * @note[short] iOS: 0x50b5a8
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] MacOS (ARM): 0x827b64
     * @note[short] MacOS (Intel): 0x9475b0
     * @note[short] Windows: 0xf0880
     * @note[short] iOS: 0x50b840
     * @note[short] Android
     */
    virtual void emotePicked(EmotePickerPopup* p0, EmoteDef const* p1);

    /**
     * @note[short] MacOS (ARM): 0x827e2c
     * @note[short] MacOS (Intel): 0x947870
     * @note[short] Windows: 0xf1330
     * @note[short] iOS: 0x50b978
     * @note[short] Android
     */
    virtual void levelPicked(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x82829c
     * @note[short] MacOS (Intel): 0x947cf0
     * @note[short] Windows: 0xf1430
     * @note[short] iOS: 0x50bcf0
     * @note[short] Android
     */
    virtual void listPicked(GJLevelList* p0);

    /**
     * @note[short] MacOS (ARM): 0x8283bc
     * @note[short] MacOS (Intel): 0x947e10
     * @note[short] Windows: 0xf1520
     * @note[short] iOS: 0x50bd84
     * @note[short] Android
     */
    virtual void shareIDPicked(int p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x828624
     * @note[short] MacOS (Intel): 0x948070
     * @note[short] Windows: 0xf1db0
     * @note[short] iOS: 0x50bed4
     * @note[short] Android
     */
    virtual void friendPicked(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): 0x828514
     * @note[short] MacOS (Intel): 0x947f90
     * @note[short] Windows: 0xf1a20
     * @note[short] iOS: 0x50be50
     * @note[short] Android
     */
    virtual bool isRecipientSelected(int p0);

    /**
     * @note[short] MacOS (ARM): 0x8284e4
     * @note[short] MacOS (Intel): 0x947f30
     * @note[short] Windows: 0xf19f0
     * @note[short] iOS: 0x50be20
     * @note[short] Android
     */
    virtual int selectedRecipientCount();

    /**
     * @note[short] MacOS (ARM): 0x828504
     * @note[short] MacOS (Intel): 0x947f70
     * @note[short] Windows: 0xf1a10
     * @note[short] iOS: 0x50be40
     * @note[short] Android
     */
    virtual cocos2d::CCArray* selectedRecipients();

    /**
     * @note[short] MacOS (ARM): 0x827bd4
     * @note[short] MacOS (Intel): 0x947630
     * @note[short] Windows: 0xf10d0
     * @note[short] iOS: 0x50b880
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x82884c
     * @note[short] Windows: 0xf33e0
     * @note[short] iOS: 0x50c0cc
     * @note[short] Android
     */
    virtual void threadSendFinished(int p0, long long p1);

    /**
     * @note[short] MacOS (ARM): 0x82908c
     * @note[short] MacOS (Intel): 0x948c10
     * @note[short] Windows: 0xf3c10
     * @note[short] iOS: 0x50c580
     * @note[short] Android
     */
    virtual void threadSendFailed();

    /**
     * @note[short] Windows: 0xf0ac0
     * @note[short] Android
     */
    TodoReturn applyMode();

    /**
     * @note[short] Android
     */
    TodoReturn bodyCharLimit();

    /**
     * @note[short] Android
     */
    TodoReturn bodyEmoteCap();

    /**
     * @note[short] MacOS (ARM): 0x824b40
     * @note[short] Windows: 0xeefd0
     * @note[short] Android
     */
    bool init(int p0, std::string const& p1, std::string const& p2);

    /**
     * @note[short] Windows: 0xf1610
     * @note[short] Android
     */
    TodoReturn insertShareToken(std::string const& p0);

    /**
     * @note[short] Windows: 0xf3d90
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf05a0
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf1d50
     * @note[short] Android
     */
    void onOpenPicker(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf0780
     * @note[short] Android
     */
    void onPickIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x826410
     * @note[short] Windows: 0xf2020
     * @note[short] Android
     */
    void onSend(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf12f0
     * @note[short] Android
     */
    void onShareLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xf0700
     * @note[short] Android
     */
    void onToggleMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshIconSlot();

    /**
     * @note[short] Windows: 0xf1f40
     * @note[short] Android
     */
    void setSendPending(bool p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateCharCount(cocos2d::CCLabelBMFont* p0, int p1, int p2);

    /**
     * @note[short] Windows: 0xf1aa0
     * @note[short] Android
     */
    TodoReturn updateRecipientLabel();
};
