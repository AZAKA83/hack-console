#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>

class SoundPackDescPopup : public SetupTriggerPopup, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "SoundPackDescPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SoundPackDescPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x191a30
     * @note[short] iOS: 0x4d485c
     * @note[short] Android: Rebinded
     */
    virtual  ~SoundPackDescPopup();

    /**
     * @note[short] Android
     */
    static SoundPackDescPopup* create(std::string const& p0, std::string const& p1, SoundPackDescDelegate* p2);

    /**
     * @note[short] MacOS (ARM): 0x7e2c3c
     * @note[short] MacOS (Intel): 0x8fb070
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x4d556c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7e2be0
     * @note[short] MacOS (Intel): 0x8fb010
     * @note[short] Windows: 0x19a5c0
     * @note[short] iOS: 0x4d5510
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7e2990
     * @note[short] MacOS (Intel): 0x8fad90
     * @note[short] Windows: 0x199b70
     * @note[short] iOS: 0x4d533c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] MacOS (ARM): 0x7e2b60
     * @note[short] MacOS (Intel): 0x8faf60
     * @note[short] Windows: 0x19a240
     * @note[short] iOS: 0x4d54c0
     * @note[short] Android
     */
    virtual void emotePicked(EmotePickerPopup* p0, EmoteDef const* p1);

    /**
     * @note[short] MacOS (ARM): 0x7e2bd0
     * @note[short] MacOS (Intel): 0x8fafe0
     * @note[short] Windows: 0x19a290
     * @note[short] iOS: 0x4d5500
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] Windows: 0x199220
     * @note[short] Android
     */
    bool init(std::string const& p0, std::string const& p1, SoundPackDescDelegate* p2);

    /**
     * @note[short] Windows: 0x19a110
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19a010
     * @note[short] Android
     */
    void onPickIcon(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x19a2a0
     * @note[short] Android
     */
    void onSave(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshIconSlot();
};
