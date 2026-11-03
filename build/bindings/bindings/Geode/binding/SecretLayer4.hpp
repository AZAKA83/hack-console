#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DialogDelegate.hpp>

class SecretLayer4 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer4";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer4, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer4();

    /**
     * @note[short] MacOS (ARM): 0x322930
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f3624
     * @note[short] Android: Rebinded
     */
     ~SecretLayer4();

    /**
     * @note[short] MacOS (ARM): 0x322bac
     * @note[short] MacOS (Intel): 0x399f70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer4* create();

    /**
     * @note[short] MacOS (ARM): 0x322b68
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x322c84
     * @note[short] MacOS (Intel): 0x39a080
     * @note[short] Windows: 0x585340
     * @note[short] iOS: 0x3f3714
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x326efc
     * @note[short] MacOS (Intel): 0x39e540
     * @note[short] Windows: 0x57f4f0
     * @note[short] iOS: 0x3f5d98
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x326e08
     * @note[short] MacOS (Intel): 0x39e450
     * @note[short] Windows: 0x588dc0
     * @note[short] iOS: 0x3f5d8c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x325e74
     * @note[short] MacOS (Intel): 0x39d560
     * @note[short] Windows: 0x57ca50
     * @note[short] iOS: 0x3f5710
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x325f54
     * @note[short] MacOS (Intel): 0x39d630
     * @note[short] Windows: 0x57cbb0
     * @note[short] iOS: 0x3f57fc
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x326064
     * @note[short] MacOS (Intel): 0x39d700
     * @note[short] Windows: 0x57cbb0
     * @note[short] iOS: 0x3f587c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x325e6c
     * @note[short] MacOS (Intel): 0x39d540
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f5708
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3255fc
     * @note[short] MacOS (Intel): 0x39cd00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3f53a8
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x326244
     * @note[short] MacOS (Intel): 0x39d8c0
     * @note[short] Windows: 0x588530
     * @note[short] Android
     */
    std::string getBasicMessage();

    /**
     * @note[short] Windows: 0x57e3b0
     * @note[short] Android
     */
    std::string getErrorMessage();

    /**
     * @note[short] Windows: 0x587ae0
     * @note[short] Android
     */
    std::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x3266a8
     * @note[short] MacOS (Intel): 0x39dce0
     * @note[short] Windows: 0x587c50
     * @note[short] Android
     */
    std::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x3238b8
     * @note[short] MacOS (Intel): 0x39acb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x324000
     * @note[short] MacOS (Intel): 0x39b490
     * @note[short] Windows: 0x588d00
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x324d04
     * @note[short] MacOS (Intel): 0x39c2b0
     * @note[short] Windows: 0x5864b0
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x324078
     * @note[short] MacOS (Intel): 0x39b500
     * @note[short] Windows: 0x586620
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x57ef90
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x326174
     * @note[short] MacOS (Intel): 0x39d7d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] Android
     */
    void showDialog(int index);

    /**
     * @note[short] MacOS (ARM): 0x3238f0
     * @note[short] MacOS (Intel): 0x39ace0
     * @note[short] Windows: 0x588070
     * @note[short] Android
     */
    void showFirstDialog();

    /**
     * @note[short] Windows: 0x57cfb0
     * @note[short] Android
     */
    void updateMessageLabel(std::string text);

    /**
     * @note[short] Windows: 0x57cc90
     * @note[short] Android
     */
    void updateSearchLabel(char const* text);
    int m_threadTag;
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_errorMessageIndex;
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCDictionary* m_messageThreads;
    bool m_exiting;
};
