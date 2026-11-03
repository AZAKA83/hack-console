#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/GJAccountDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class AccountHelpLayer : public GJDropDownLayer, public GJAccountDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AccountHelpLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AccountHelpLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AccountHelpLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1efd04
     * @note[short] Android: Rebinded
     */
     ~AccountHelpLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AccountHelpLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x8c6dc
     * @note[short] MacOS (Intel): 0x9c830
     * @note[short] Windows: 0x94ce0
     * @note[short] iOS: 0x1efd3c
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x8d340
     * @note[short] MacOS (Intel): 0x9d4e0
     * @note[short] Windows: 0x95920
     * @note[short] iOS: 0x1f07bc
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x8d1f4
     * @note[short] MacOS (Intel): 0x9d3a0
     * @note[short] Windows: 0x95420
     * @note[short] iOS: 0x1f0708
     * @note[short] Android
     */
    virtual void accountStatusChanged();

    /**
     * @note[short] MacOS (ARM): 0x8d200
     * @note[short] MacOS (Intel): 0x9d3d0
     * @note[short] Windows: 0x956e0
     * @note[short] iOS: 0x1f0714
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x8d1c0
     * @note[short] MacOS (Intel): 0x9d360
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void doUnlink();

    /**
     * @note[short] MacOS (ARM): 0x8d1ec
     * @note[short] MacOS (Intel): 0x9d390
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x8cb00
     * @note[short] MacOS (Intel): 0x9cc80
     * @note[short] Windows: 0x95160
     * @note[short] Android
     */
    void onAccountManagement(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8ca8c
     * @note[short] MacOS (Intel): 0x9cc20
     * @note[short] Windows: 0x95110
     * @note[short] Android
     */
    void onReLogin(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8cbd4
     * @note[short] MacOS (Intel): 0x9cd50
     * @note[short] Windows: 0x95280
     * @note[short] Android
     */
    void onUnlink(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x8cd88
     * @note[short] MacOS (Intel): 0x9cf00
     * @note[short] Windows: 0x95430
     * @note[short] Android
     */
    void updatePage();

    /**
     * @note[short] MacOS (ARM): 0x8d0c8
     * @note[short] MacOS (Intel): 0x9d250
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void verifyUnlink();
    cocos2d::CCLabelBMFont* m_loginStatusLabel;
    TextArea* m_textArea;
    CCMenuItemSpriteExtra* m_refreshLoginButton;
    CCMenuItemSpriteExtra* m_unlinkAccountButton;
    bool m_unk290;
};
