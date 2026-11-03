#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/GJAccountRegisterDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/mapping/CCPoint.hpp>

class AccountRegisterLayer : public FLAlertLayer, public GJAccountRegisterDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountRegisterLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountRegisterLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AccountRegisterLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8970c
     * @note[short] Android: Rebinded
     */
     ~AccountRegisterLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AccountRegisterLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x3f56d4
     * @note[short] MacOS (Intel): 0x48c590
     * @note[short] Windows: 0x8cd00
     * @note[short] iOS: 0x897b8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3f8cfc
     * @note[short] MacOS (Intel): 0x4900b0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x8bc78
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x3f8af8
     * @note[short] MacOS (Intel): 0x48fee0
     * @note[short] Windows: 0x8ef60
     * @note[short] iOS: 0x8bb34
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3f7838
     * @note[short] MacOS (Intel): 0x48eb30
     * @note[short] Windows: 0x8e3e0
     * @note[short] iOS: 0x8aff4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3f9390
     * @note[short] MacOS (Intel): 0x490860
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8c1ec
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f8d34
     * @note[short] MacOS (Intel): 0x4900f0
     * @note[short] Windows: 0x8f0c0
     * @note[short] iOS: 0x8bcb0
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f9398
     * @note[short] MacOS (Intel): 0x490880
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x8c1f4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f97c0
     * @note[short] MacOS (Intel): 0x490cb0
     * @note[short] Windows: 0x908a0
     * @note[short] iOS: 0x8c580
     * @note[short] Android
     */
    virtual bool allowTextInput(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3f6f78
     * @note[short] MacOS (Intel): 0x48e170
     * @note[short] Windows: 0x8dda0
     * @note[short] iOS: 0x8aa34
     * @note[short] Android
     */
    virtual void registerAccountFinished();

    /**
     * @note[short] MacOS (ARM): 0x3f7110
     * @note[short] MacOS (Intel): 0x48e320
     * @note[short] Windows: 0x8dfe0
     * @note[short] iOS: 0x8ab58
     * @note[short] Android
     */
    virtual void registerAccountFailed(AccountError errorType);

    /**
     * @note[short] MacOS (ARM): 0x3f6cc0
     * @note[short] MacOS (Intel): 0x48ded0
     * @note[short] Windows: 0x8da90
     * @note[short] Android
     */
    cocos2d::extension::CCScale9Sprite* createTextBackground(cocos2d::CCPoint position, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3f6e78
     * @note[short] MacOS (Intel): 0x48e080
     * @note[short] Windows: 0x8dc70
     * @note[short] Android
     */
    CCTextInputNode* createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, std::string text, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3f6d84
     * @note[short] MacOS (Intel): 0x48df90
     * @note[short] Windows: 0x8db60
     * @note[short] Android
     */
    cocos2d::CCLabelBMFont* createTextLabel(cocos2d::CCPoint position, std::string text, cocos2d::CCSize size);

    /**
     * @note[short] MacOS (ARM): 0x3f79cc
     * @note[short] MacOS (Intel): 0x48ec90
     * @note[short] Windows: 0x8efa0
     * @note[short] Android
     */
    void disableNodes();

    /**
     * @note[short] MacOS (ARM): 0x3f73fc
     * @note[short] MacOS (Intel): 0x48e710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hideLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3f65d4
     * @note[short] MacOS (Intel): 0x48d690
     * @note[short] Windows: 0x8ef30
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4b2f10
     * @note[short] Windows: 0x8e430
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3f76ec
     * @note[short] Windows: 0x8e290
     * @note[short] Android
     */
    void resetLabel(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3f75a0
     * @note[short] MacOS (Intel): 0x48e8b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetLabels();

    /**
     * @note[short] MacOS (ARM): 0x3f89c8
     * @note[short] MacOS (Intel): 0x48fdd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void showLoadingUI();

    /**
     * @note[short] MacOS (ARM): 0x3f8c44
     * @note[short] MacOS (Intel): 0x490010
     * @note[short] Windows: 0x8f010
     * @note[short] Android
     */
    void toggleUI(bool enable);

    /**
     * @note[short] Windows: 0x8e020
     * @note[short] Android
     */
    void updateLabel(AccountError type);

    /**
     * @note[short] Windows: 0x90140
     * @note[short] Android
     */
    TodoReturn updatePasswordInfo(std::string p0);

    /**
     * @note[short] MacOS (ARM): 0x3f8908
     * @note[short] MacOS (Intel): 0x48fc40
     * @note[short] Windows: 0x908b0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool validEmail(std::string email);

    /**
     * @note[short] MacOS (ARM): 0x3f8714
     * @note[short] MacOS (Intel): 0x48fa20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool validUser(std::string username);
    CCTextInputNode* m_usernameField;
    CCTextInputNode* m_passwordField;
    CCTextInputNode* m_confirmPasswordField;
    CCTextInputNode* m_emailField;
    CCTextInputNode* m_verifyEmailField;
    cocos2d::CCLabelBMFont* m_usernameLabel;
    cocos2d::CCLabelBMFont* m_passwordLabel;
    cocos2d::CCLabelBMFont* m_passwordInfoLabel;
    cocos2d::CCLabelBMFont* m_confirmPasswordLabel;
    cocos2d::CCLabelBMFont* m_emailLabel;
    cocos2d::CCLabelBMFont* m_verifyEmailLabel;
    LoadingCircle* m_loadingCircle;
    bool m_lockInput;
};
