#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/NumberInputDelegate.hpp>

class ShareLevelSettingsLayer : public FLAlertLayer, public NumberInputDelegate {
public:
    static constexpr auto CLASS_NAME = "ShareLevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShareLevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShareLevelSettingsLayer();

    /**
     * @note[short] Windows: 0x630480
     * @note[short] iOS: 0x314e24
     * @note[short] Android: Rebinded
     */
    virtual  ~ShareLevelSettingsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShareLevelSettingsLayer* create(GJGameLevel* p0, ShareLevelLayer* p1);

    /**
     * @note[short] MacOS (ARM): 0x216d48
     * @note[short] MacOS (Intel): 0x26fef0
     * @note[short] Windows: 0x633940
     * @note[short] iOS: 0x315958
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1a9c8c
     * @note[short] MacOS (Intel): 0x1f9ce0
     * @note[short] Windows: 0x632b30
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, ShareLevelLayer* p1);

    /**
     * @note[short] Windows: 0x6338b0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x216b34
     * @note[short] MacOS (Intel): 0x26fc90
     * @note[short] Windows: 0x633590
     * @note[short] Android
     */
    void onUnlisted(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x26fe40
     * @note[short] Windows: 0x6337b0
     * @note[short] Android
     */
    void onUnlistedFriendsOnly(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x6337d0
     * @note[short] Android
     */
    void updateSettingsState();
    cocos2d::CCLabelBMFont* m_passwordLabel;
    GJGameLevel* m_level;
    CCMenuItemToggler* m_friendsOnlyToggler;
    cocos2d::CCLabelBMFont* m_friendsOnlyLabel;
    ShareLevelLayer* m_shareLevelLayer;
};
