#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class NotificationFilterPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "NotificationFilterPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(NotificationFilterPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~NotificationFilterPopup();

    /**
     * @note[short] Android
     */
    static NotificationFilterPopup* create(NotificationsPage* p0);

    /**
     * @note[short] MacOS (ARM): 0x8679e8
     * @note[short] MacOS (Intel): 0x98d630
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x53c760
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x867904
     * @note[short] MacOS (Intel): 0x98d540
     * @note[short] Windows: 0x479e30
     * @note[short] iOS: 0x53c70c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4790f0
     * @note[short] Android
     */
    bool init(NotificationsPage* p0);

    /**
     * @note[short] Windows: 0x479d40
     * @note[short] Android
     */
    void onDownloadMilestones(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x479d50
     * @note[short] Android
     */
    void onFollowerMilestones(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x479d30
     * @note[short] Android
     */
    void onFollowUploads(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x479d60
     * @note[short] Android
     */
    void onFriendAccepts(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x479d70
     * @note[short] Android
     */
    void onFriendRated(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x479d20
     * @note[short] Android
     */
    void onFriendUploads(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x479d80
     * @note[short] Android
     */
    void onSocialAlerts(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn savedMask();

    /**
     * @note[short] Android
     */
    TodoReturn toggleSource(int p0);
};
