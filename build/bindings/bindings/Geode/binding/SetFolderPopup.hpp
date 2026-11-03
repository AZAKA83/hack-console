#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetIDPopup.hpp>
#include <Geode/binding/SetTextPopupDelegate.hpp>

class SetFolderPopup : public SetIDPopup, public SetTextPopupDelegate {
public:
    static constexpr auto CLASS_NAME = "SetFolderPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetFolderPopup, SetIDPopup)

    /**
     * @note[short] Windows: 0x399ac0
     * @note[short] iOS: 0x37bf84
     * @note[short] Android: Rebinded
     */
    virtual  ~SetFolderPopup();

    /**
     * @note[short] MacOS (ARM): 0x23d468
     * @note[short] MacOS (Intel): 0x299c80
     * @note[short] Windows: 0x3a6670
     * @note[short] Android
     */
    static SetFolderPopup* create(int value, bool isCreated, std::string title);

    /**
     * @note[short] MacOS (ARM): 0x23d9f0
     * @note[short] MacOS (Intel): 0x29a1e0
     * @note[short] Windows: 0x3a6a40
     * @note[short] iOS: 0x37c4b8
     * @note[short] Android
     */
    virtual void valueChanged();

    /**
     * @note[short] MacOS (ARM): 0x23dde8
     * @note[short] MacOS (Intel): 0x29a5c0
     * @note[short] Windows: 0x3a6dc0
     * @note[short] iOS: 0x37c7b4
     * @note[short] Android
     */
    virtual void setTextPopupClosed(SetTextPopup* popup, std::string text);

    /**
     * @note[short] MacOS (ARM): 0x23d56c
     * @note[short] MacOS (Intel): 0x299d50
     * @note[short] Windows: 0x3a67b0
     * @note[short] Android
     */
    bool init(int value, bool isCreated, std::string title);

    /**
     * @note[short] MacOS (ARM): 0x23d7e0
     * @note[short] Windows: 0x3a6ba0
     * @note[short] Android
     */
    void onSetFolderName(cocos2d::CCObject* sender);
    bool m_isCreated;
    cocos2d::CCLabelBMFont* m_titleLabel;
};
