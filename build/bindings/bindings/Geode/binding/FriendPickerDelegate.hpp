#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class FriendPickerDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendPickerDelegate";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void friendPicked(GJUserScore* p0);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool isRecipientSelected(int p0);

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual int selectedRecipientCount();

    /**
     * @note[short] Windows: 0x9999999
     * @note[short] Android
     */
    virtual cocos2d::CCArray* selectedRecipients();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void clearRecipients();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void friendPickerClosed();

    /**
     * @note[short] Windows: 0x98e00
     * @note[short] Android
     */
    virtual int pickerRowState(int p0);

    /**
     * @note[short] Windows: 0x98e00
     * @note[short] Android
     */
    virtual int pickerCountBase();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void friendPickerAdd();
};
