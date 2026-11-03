#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJAccountLoginDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCPoint.hpp>

class AccountLoginLayer : public FLAlertLayer, public GJAccountLoginDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountLoginLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountLoginLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x8c010
     * @note[short] iOS: 0x8c660
     * @note[short] Android: Rebinded
     */
    virtual  ~AccountLoginLayer();

    /**
     * @note[short] Windows: 0x90960
     * @note[short] Android
     */
    static AccountLoginLayer* create(std::string username);

    /**
     * @note[short] MacOS (ARM): 0x3fb848
     * @note[short] MacOS (Intel): 0x492e60
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x8db48
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3fb6f8
     * @note[short] MacOS (Intel): 0x492d20
     * @note[short] Windows: 0x92060
     * @note[short] iOS: 0x8da5c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3fb4e4
     * @note[short] MacOS (Intel): 0x492b60
     * @note[short] Windows: 0x91bc0
     * @note[short] iOS: 0x8d964
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3fba14
     * @note[short] MacOS (Intel): 0x493000
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8dd00
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fb880
     * @note[short] MacOS (Intel): 0x492ea0
     * @note[short] Windows: 0x92130
     * @note[short] iOS: 0x8db80
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fba1c
     * @note[short] MacOS (Intel): 0x493020
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8dd08
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3fadf0
     * @note[short] MacOS (Intel): 0x4924c0
     * @note[short] Windows: 0x91760
     * @note[short] iOS: 0x8d560
     * @note[short] Android
     */
    virtual void loginAccountFinished(int accountID, int userID);

    /**
     * @note[short] MacOS (ARM): 0x3fb160
     * @note[short] MacOS (Intel): 0x492840
     * @note[short] Windows: 0x919c0
     * @note[short] iOS: 0x8d76c
     * @note[short] Android
     */
    virtual void loginAccountFailed(AccountError errorType);

    /**
     * @note[short] MacOS (ARM): 0x3fab10
     * @note[short] MacOS (Intel): 0x492200
     * @note[short] Windows: 0x914b0
     * @note[short] Android
     */
    cocos2d::extension::CCScale9Sprite* createTextBackground(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3facbc
     * @note[short] MacOS (Intel): 0x4923a0
     * @note[short] Windows: 0x91660
     * @note[short] Android
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, char const* text, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3fabd4
     * @note[short] MacOS (Intel): 0x4922c0
     * @note[short] Windows: 0x91580
     * @note[short] Android
     */
    cocos2d::CCLabelBMFont* createTextLabel(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3fb600
     * @note[short] MacOS (Intel): 0x492c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableNodes();

    /**
     * @note[short] MacOS (ARM): 0x3fb0c8
     * @note[short] MacOS (Intel): 0x492790
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3f9aec
     * @note[short] MacOS (Intel): 0x491100
     * @note[short] Windows: 0x90b00
     * @note[short] Android
     */
    bool init(std::string username);

    /**
     * @note[short] MacOS (ARM): 0x3fa650
     * @note[short] MacOS (Intel): 0x491d40
     * @note[short] Windows: 0x92010
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fadcc
     * @note[short] MacOS (Intel): 0x4924a0
     * @note[short] Windows: 0x91480
     * @note[short] Android
     */
    void onForgotPassword(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fada8
     * @note[short] MacOS (Intel): 0x492480
     * @note[short] Windows: 0x91450
     * @note[short] Android
     */
    void onForgotUser(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fa6b8
     * @note[short] MacOS (Intel): 0x491da0
     * @note[short] Windows: 0x91c30
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3fb468
     * @note[short] MacOS (Intel): 0x492b00
     * @note[short] Windows: 0x91b40
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetLabel(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3fb3f0
     * @note[short] MacOS (Intel): 0x492a90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetLabels();

    /**
     * @note[short] MacOS (ARM): 0x3fb640
     * @note[short] MacOS (Intel): 0x492c80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3fb7cc
     * @note[short] MacOS (Intel): 0x492df0
     * @note[short] Windows: 0x920c0
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] Windows: 0x91a00
     * @note[short] Android
     */
    void updateLabel(AccountError type);
    CCTextInputNode* m_usernameInput;
    CCTextInputNode* m_passwordInput;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    LoadingCircle* m_loadingCircle;
    std::string m_username;
    std::string m_password;
};
