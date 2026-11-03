#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ShareListLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShareListLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareListLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareListLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2e51d0
     * @note[short] Android: Rebinded
     */
     ~ShareListLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShareListLayer* create(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x2df290
     * @note[short] MacOS (Intel): 0x34f060
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x2e64ac
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2ddc84
     * @note[short] MacOS (Intel): 0x26c960
     * @note[short] Windows: 0x431ca0
     * @note[short] Android
     */
    bool init(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x234c14
     * @note[short] MacOS (Intel): 0x34ea70
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2dee70
     * @note[short] Windows: 0x432ea0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x433230
     * @note[short] Android
     */
    void onNotifyFollowers(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x433210
     * @note[short] Android
     */
    void onNotifyFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2ded58
     * @note[short] MacOS (Intel): 0x34eaa0
     * @note[short] Windows: 0x433250
     * @note[short] Android
     */
    void onShare(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x77b2d4
     * @note[short] Windows: 0x433000
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateNotifyToggles();

    /**
     * @note[short] Windows: 0x433070
     * @note[short] Android
     */
    void updateUnlistedF();
    GJLevelList* m_list;
    CCMenuItemToggler* m_friendsOnlyToggler;
    cocos2d::CCLabelBMFont* m_friendsOnlyLabel;
    cocos2d::CCLabelBMFont* m_notifyLabel;
    cocos2d::CCSprite* m_notifySprite;
    CCMenuItemToggler* m_friendsToggler;
    CCMenuItemToggler* m_followersToggler;
    cocos2d::CCSprite* m_friendsSprite;
    cocos2d::CCSprite* m_followersSprite;
    cocos2d::CCLabelBMFont* m_friendsLabel;
    cocos2d::CCLabelBMFont* m_followersLabel;
};
