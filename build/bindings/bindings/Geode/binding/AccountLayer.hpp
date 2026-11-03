#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/GJAccountDelegate.hpp>
#include <Geode/binding/GJAccountBackupDelegate.hpp>
#include <Geode/binding/GJAccountSyncDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class AccountLayer : public GJDropDownLayer, public GJAccountDelegate, public GJAccountBackupDelegate, public GJAccountSyncDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLayer, GJDropDownLayer)

    /**
     * @note[short] Windows: 0x929e0
     * @note[short] iOS: 0x1ee424
     * @note[short] Android: Rebinded
     */
    virtual  ~AccountLayer();

    /**
     * @note[short] MacOS (ARM): 0x8a010
     * @note[short] Windows: 0x92c50
     * @note[short] Android
     */
    static AccountLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x8a2a0
     * @note[short] MacOS (Intel): 0x9a1c0
     * @note[short] Windows: 0x92db0
     * @note[short] iOS: 0x1ee45c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x8c204
     * @note[short] MacOS (Intel): 0x9c1f0
     * @note[short] Windows: 0x94b60
     * @note[short] iOS: 0x1efb48
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x8b7c0
     * @note[short] MacOS (Intel): 0x9b730
     * @note[short] Windows: 0x94240
     * @note[short] iOS: 0x1ef468
     * @note[short] Android
     */
    virtual void backupAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0x8b984
     * @note[short] MacOS (Intel): 0x9b8f0
     * @note[short] Windows: 0x943f0
     * @note[short] iOS: 0x1ef59c
     * @note[short] Android
     */
    virtual void backupAccountFailed(BackupAccountError errorType, int response);

    /**
     * @note[short] MacOS (ARM): 0x8bcf0
     * @note[short] MacOS (Intel): 0x9bcb0
     * @note[short] Windows: 0x94700
     * @note[short] iOS: 0x1ef800
     * @note[short] Android
     */
    virtual void syncAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0x8be5c
     * @note[short] MacOS (Intel): 0x9be30
     * @note[short] Windows: 0x948c0
     * @note[short] iOS: 0x1ef934
     * @note[short] Android
     */
    virtual void syncAccountFailed(BackupAccountError errorType, int response);

    /**
     * @note[short] MacOS (ARM): 0x8b7ac
     * @note[short] MacOS (Intel): 0x9b700
     * @note[short] Windows: 0x93e70
     * @note[short] iOS: 0x1ef454
     * @note[short] Android
     */
    virtual void accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0x8c0d4
     * @note[short] MacOS (Intel): 0x9c0d0
     * @note[short] Windows: 0x94a50
     * @note[short] iOS: 0x1efaac
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x8b3cc
     * @note[short] MacOS (Intel): 0x9b390
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x8b640
     * @note[short] MacOS (Intel): 0x9b5a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void doBackup();

    /**
     * @note[short] MacOS (ARM): 0x8b71c
     * @note[short] MacOS (Intel): 0x9b670
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void doSync();

    /**
     * @note[short] MacOS (ARM): 0x8b7a4
     * @note[short] MacOS (Intel): 0x9b6f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x8b928
     * @note[short] MacOS (Intel): 0x9b880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x8a9ac
     * @note[short] MacOS (Intel): 0x9a920
     * @note[short] Windows: 0x936e0
     * @note[short] Android
     */
    void onBackup(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8ae9c
     * @note[short] MacOS (Intel): 0x9ae30
     * @note[short] Windows: 0x93d00
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8a8f4
     * @note[short] MacOS (Intel): 0x9a870
     * @note[short] Windows: 0x93520
     * @note[short] Android
     */
    void onLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8af74
     * @note[short] MacOS (Intel): 0x9aef0
     * @note[short] Windows: 0x93e20
     * @note[short] Android
     */
    void onMore(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8a990
     * @note[short] MacOS (Intel): 0x9a900
     * @note[short] Windows: 0x93560
     * @note[short] Android
     */
    void onRegister(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8aca4
     * @note[short] MacOS (Intel): 0x9ac50
     * @note[short] Windows: 0x93a70
     * @note[short] Android
     */
    void onSync(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8b6c8
     * @note[short] MacOS (Intel): 0x9b620
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x8c094
     * @note[short] MacOS (Intel): 0x9c090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] MacOS (ARM): 0x8af84
     * @note[short] MacOS (Intel): 0x9af10
     * @note[short] Windows: 0x93e80
     * @note[short] Android
     */
    void updatePage(bool changed);
    cocos2d::CCLabelBMFont* m_linkedAccountTitle;
    TextArea* m_textArea;
    CCMenuItemSpriteExtra* m_loginButton;
    CCMenuItemSpriteExtra* m_registerButton;
    CCMenuItemSpriteExtra* m_backupButton;
    CCMenuItemSpriteExtra* m_syncButton;
    CCMenuItemSpriteExtra* m_helpButton;
    CCMenuItemSpriteExtra* m_moreButton;
    LoadingCircle* m_loadingCircle;
    int m_accountHelpRelated;
    bool m_isLoggedIn;
};
