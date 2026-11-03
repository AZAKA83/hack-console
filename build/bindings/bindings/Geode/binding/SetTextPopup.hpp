#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>

class SetTextPopup : public FLAlertLayer, public EmotePickerDelegate {
public:
    static constexpr auto CLASS_NAME = "SetTextPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetTextPopup, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x9999999
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetTextPopup();

    /**
     * @note[short] Windows: 0x399820
     * @note[short] iOS: 0x37c8f8
     * @note[short] Android: Rebinded
     */
     ~SetTextPopup();

    /**
     * @note[short] MacOS (Intel): 0x29a330
     * @note[short] Windows: 0x3a6f70
     * @note[short] Android
     */
    static SetTextPopup* create(std::string p0, std::string p1, int p2, std::string p3, std::string p4, bool p5, float p6, bool p7, int p8, int p9);

    /**
     * @note[short] MacOS (ARM): 0x23f7cc
     * @note[short] MacOS (Intel): 0x29c120
     * @note[short] Windows: 0x3a8740
     * @note[short] iOS: 0x37dce0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x23f580
     * @note[short] MacOS (Intel): 0x29bef0
     * @note[short] Windows: 0x3a83c0
     * @note[short] iOS: 0x37dae4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x23ef8c
     * @note[short] MacOS (Intel): 0x29b970
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x37d5dc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23efa8
     * @note[short] MacOS (Intel): 0x29b9b0
     * @note[short] Windows: 0x3a7f10
     * @note[short] iOS: 0x37d5f8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x23f624
     * @note[short] MacOS (Intel): 0x29bf70
     * @note[short] Windows: 0x19a290
     * @note[short] iOS: 0x37db64
     * @note[short] Android
     */
    virtual void emotePickerClosed(EmotePickerPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn addInfoButton(std::string const& p0, std::string const& p1);

    /**
     * @note[short] Android
     */
    TodoReturn addInfoLabel(std::string const& p0);

    /**
     * @note[short] Android
     */
    TodoReturn addPathLabel(std::string const& p0);

    /**
     * @note[short] Windows: 0x3a71f0
     * @note[short] Android
     */
    bool init(std::string p0, std::string p1, int p2, std::string p3, std::string p4, bool p5, float p6, bool p7, int p8, int p9);

    /**
     * @note[short] MacOS (ARM): 0x23eed0
     * @note[short] MacOS (Intel): 0x29b8b0
     * @note[short] Windows: 0x3a8460
     * @note[short] Android
     */
    void onCancel(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3a85a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x3a8470
     * @note[short] Android
     */
    void onEmotes(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x23ee04
     * @note[short] MacOS (Intel): 0x29b800
     * @note[short] Windows: 0x3a7eb0
     * @note[short] Android
     */
    void onResetValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x29b8d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_input;
    bool m_disableDelegate;
    bool m_cancelled;
    float m_unk2ac;
    float m_unk2b0;
    std::string m_value;
    int m_unk2d8;
    int m_unk2dc;
    CCMenuItemSpriteExtra* m_emoteButton;
    EmotePickerPopup* m_emotePicker;
    SetTextPopupDelegate* m_delegate;
};
