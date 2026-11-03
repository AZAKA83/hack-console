#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>

class GJAccountSettingsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "GJAccountSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJAccountSettingsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJAccountSettingsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x372d90
     * @note[short] Android: Rebinded
     */
     ~GJAccountSettingsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJAccountSettingsLayer* create(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x2323d8
     * @note[short] MacOS (Intel): 0x28dc90
     * @note[short] Windows: 0x39f2f0
     * @note[short] iOS: 0x375b48
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2315fc
     * @note[short] MacOS (Intel): 0x28cd10
     * @note[short] Windows: 0x39ec50
     * @note[short] Android
     */
    void closeAccInputNodes(cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (ARM): 0x2307cc
     * @note[short] MacOS (Intel): 0x28bd80
     * @note[short] Windows: 0x39e790
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position, float width, float scale);

    /**
     * @note[short] MacOS (Intel): 0x704400
     * @note[short] Windows: 0x39c9d0
     * @note[short] Android
     */
    bool init(int accountID);

    /**
     * @note[short] MacOS (ARM): 0x230c58
     * @note[short] MacOS (Intel): 0x28c1e0
     * @note[short] Windows: 0x39edc0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x39eae0
     * @note[short] Android
     */
    void onCommentSetting(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x39ea40
     * @note[short] Android
     */
    void onFriendRequests(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x39eb80
     * @note[short] Android
     */
    void onGroupFriends(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x39e9a0
     * @note[short] Android
     */
    void onMessageSetting(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x39e670
     * @note[short] Android
     */
    void onSocialLinks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x28c220
     * @note[short] Windows: 0x39ee00
     * @note[short] Android
     */
    void onUpdate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x231c68
     * @note[short] MacOS (Intel): 0x28d4c0
     * @note[short] Windows: 0x39eff0
     * @note[short] Android
     */
    void updateScoreValues();
    int m_accountID;
    int m_messageStatus;
    int m_friendStatus;
    int m_commentHistoryStatus;
    int m_groupStatus;
    int m_unk2ac;
    cocos2d::CCArray* m_inputs;
    std::map<int, std::string> m_links;
    cocos2d::CCArray* m_messageSettings;
    cocos2d::CCArray* m_friendRequestSettings;
    cocos2d::CCArray* m_commentSettings;
    cocos2d::CCArray* m_groupInviteSettings;
};
