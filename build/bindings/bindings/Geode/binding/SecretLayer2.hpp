#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DialogDelegate.hpp>

class SecretLayer2 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer2, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer2();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a638c
     * @note[short] Android: Rebinded
     */
     ~SecretLayer2();

    /**
     * @note[short] MacOS (ARM): 0x3fe5c8
     * @note[short] MacOS (Intel): 0x496040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer2* create();

    /**
     * @note[short] MacOS (ARM): 0x3fe584
     * @note[short] MacOS (Intel): 0x496000
     * @note[short] Windows: 0x577ca0
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3fe6b0
     * @note[short] MacOS (Intel): 0x496170
     * @note[short] Windows: 0x577e20
     * @note[short] iOS: 0x3a647c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x404228
     * @note[short] MacOS (Intel): 0x49c130
     * @note[short] Windows: 0x57f4f0
     * @note[short] iOS: 0x3aa8ac
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x40413c
     * @note[short] MacOS (Intel): 0x49c040
     * @note[short] Windows: 0x57f4e0
     * @note[short] iOS: 0x3aa8a0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4030c0
     * @note[short] MacOS (Intel): 0x49b0c0
     * @note[short] Windows: 0x57ca50
     * @note[short] iOS: 0x3a9de8
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4031a0
     * @note[short] MacOS (Intel): 0x49b190
     * @note[short] Windows: 0x57cbb0
     * @note[short] iOS: 0x3a9ed4
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4032b0
     * @note[short] MacOS (Intel): 0x49b260
     * @note[short] Windows: 0x57cbb0
     * @note[short] iOS: 0x3a9f54
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4030b8
     * @note[short] MacOS (Intel): 0x49b0a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3a9de0
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x401c60
     * @note[short] MacOS (Intel): 0x499c10
     * @note[short] Windows: 0x57a090
     * @note[short] iOS: 0x3a91e8
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x403490
     * @note[short] MacOS (Intel): 0x49b420
     * @note[short] Windows: 0x57d8b0
     * @note[short] Android
     */
    std::string getBasicMessage();

    /**
     * @note[short] Windows: 0x57e3b0
     * @note[short] Android
     */
    std::string getErrorMessage();

    /**
     * @note[short] Android
     */
    std::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x403b90
     * @note[short] MacOS (Intel): 0x49bb00
     * @note[short] Windows: 0x57d1b0
     * @note[short] Android
     */
    std::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x3ff4f0
     * @note[short] MacOS (Intel): 0x496ff0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3ff84c
     * @note[short] MacOS (Intel): 0x497390
     * @note[short] Windows: 0x57f430
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x400d1c
     * @note[short] MacOS (Intel): 0x498ae0
     * @note[short] Windows: 0x57a3e0
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x400f78
     * @note[short] MacOS (Intel): 0x498d10
     * @note[short] Windows: 0x57a130
     * @note[short] Android
     */
    void onSecretLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3ff8c0
     * @note[short] MacOS (Intel): 0x497400
     * @note[short] Windows: 0x57ad00
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x57ef90
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x4033c0
     * @note[short] MacOS (Intel): 0x49b330
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] MacOS (ARM): 0x401138
     * @note[short] MacOS (Intel): 0x498ed0
     * @note[short] Windows: 0x5794d0
     * @note[short] Android
     */
    void showCompletedLevel();

    /**
     * @note[short] MacOS (ARM): 0x401b4c
     * @note[short] MacOS (Intel): 0x499ae0
     * @note[short] Windows: 0x579360
     * @note[short] Android
     */
    void showSecretLevel();

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
    int m_doorDialogIndex;
    CCMenuItemSpriteExtra* m_secretLevelButton;
    cocos2d::CCArray* m_secretLevelLabels;
    CCMenuItemSpriteExtra* m_secretDoorButton;
};
