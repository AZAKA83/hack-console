#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/PagedListPopup.hpp>
#include <Geode/binding/VirtualRowSource.hpp>
#include <Geode/binding/UserListDelegate.hpp>

class FriendPickerPopup : public PagedListPopup, public VirtualRowSource, public UserListDelegate {
public:
    static constexpr auto CLASS_NAME = "FriendPickerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FriendPickerPopup, PagedListPopup)

    /**
     * @note[short] Windows: 0xd3780
     * @note[short] iOS: 0x502f50
     * @note[short] Android: Rebinded
     */
    virtual  ~FriendPickerPopup();

    /**
     * @note[short] Windows: 0xe6ab0
     * @note[short] Android
     */
    static FriendPickerPopup* create(FriendPickerDelegate* p0, bool p1, bool p2, bool p3, bool p4);

    /**
     * @note[short] MacOS (ARM): 0x81e1a8
     * @note[short] MacOS (Intel): 0x93d140
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x5039d8
     * @note[short] Android
     */
    virtual int requestPage(int p0);

    /**
     * @note[short] MacOS (ARM): 0x81f0d8
     * @note[short] MacOS (Intel): 0x93e180
     * @note[short] Windows: 0xe8b20
     * @note[short] iOS: 0x504740
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x81eb64
     * @note[short] MacOS (Intel): 0x93dbf0
     * @note[short] Windows: 0xe8440
     * @note[short] iOS: 0x5041f8
     * @note[short] Android
     */
    virtual int virtualRowCount();

    /**
     * @note[short] MacOS (ARM): 0x81eb84
     * @note[short] MacOS (Intel): 0x93dc30
     * @note[short] Windows: 0xe8460
     * @note[short] iOS: 0x504218
     * @note[short] Android
     */
    virtual int virtualRowHeight(int p0);

    /**
     * @note[short] MacOS (ARM): 0x81eb9c
     * @note[short] MacOS (Intel): 0x93dc50
     * @note[short] Windows: 0xe8470
     * @note[short] iOS: 0x504230
     * @note[short] Android
     */
    virtual void mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2);

    /**
     * @note[short] MacOS (ARM): 0x81e1b0
     * @note[short] MacOS (Intel): 0x93d150
     * @note[short] Windows: 0xe75e0
     * @note[short] iOS: 0x5039e0
     * @note[short] Android
     */
    virtual void getUserListFinished(cocos2d::CCArray* p0, UserListType p1);

    /**
     * @note[short] MacOS (ARM): 0x81e888
     * @note[short] MacOS (Intel): 0x93d920
     * @note[short] Windows: 0xe76b0
     * @note[short] iOS: 0x503f40
     * @note[short] Android
     */
    virtual void getUserListFailed(UserListType p0, GJErrorCode p1);

    /**
     * @note[short] MacOS (ARM): 0x81ea00
     * @note[short] MacOS (Intel): 0x93da80
     * @note[short] Windows: 0xe7820
     * @note[short] iOS: 0x50408c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* p0);

    /**
     * @note[short] Windows: 0xe8120
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] Android
     */
    TodoReturn delayedRebuild(float p0);

    /**
     * @note[short] MacOS (ARM): 0x81d5ac
     * @note[short] MacOS (Intel): 0x93c5b0
     * @note[short] Windows: 0xe6c60
     * @note[short] Android
     */
    bool init(FriendPickerDelegate* p0, bool p1, bool p2, bool p3, bool p4);

    /**
     * @note[short] Windows: 0xe8ae0
     * @note[short] Android
     */
    void onClearAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8a40
     * @note[short] Android
     */
    void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe79e0
     * @note[short] Android
     */
    void onGlobalSearch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8850
     * @note[short] Android
     */
    void onPickFriend(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe8810
     * @note[short] Android
     */
    void onShowProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xe7980
     * @note[short] Android
     */
    void onToggleSelectedView(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateCountLabel();
};
