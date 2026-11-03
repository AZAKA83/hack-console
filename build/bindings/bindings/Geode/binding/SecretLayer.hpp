#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class SecretLayer : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "SecretLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer();

    /**
     * @note[short] MacOS (ARM): 0x61d494
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x463cd8
     * @note[short] Android: Rebinded
     */
     ~SecretLayer();

    /**
     * @note[short] MacOS (Intel): 0x6d16b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5e8734
     * @note[short] MacOS (Intel): 0x6d1590
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x5e88f4
     * @note[short] MacOS (Intel): 0x6d17b0
     * @note[short] Windows: 0x572490
     * @note[short] iOS: 0x463e1c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5ec270
     * @note[short] MacOS (Intel): 0x6d5600
     * @note[short] Windows: 0x577a60
     * @note[short] iOS: 0x466d90
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x5eb43c
     * @note[short] MacOS (Intel): 0x6d46d0
     * @note[short] Windows: 0x575410
     * @note[short] iOS: 0x466000
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5eb51c
     * @note[short] MacOS (Intel): 0x6d47a0
     * @note[short] Windows: 0x575570
     * @note[short] iOS: 0x4660ec
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5eb62c
     * @note[short] MacOS (Intel): 0x6d4870
     * @note[short] Windows: 0x575570
     * @note[short] iOS: 0x46616c
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x5eb434
     * @note[short] MacOS (Intel): 0x6d46b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x465ff8
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x5eade8
     * @note[short] MacOS (Intel): 0x6d4090
     * @note[short] Windows: 0x576910
     * @note[short] Android
     */
    std::string getBasicMessage();

    /**
     * @note[short] MacOS (ARM): 0x5e94c8
     * @note[short] MacOS (Intel): 0x6d23d0
     * @note[short] Windows: 0x575a00
     * @note[short] Android
     */
    std::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x5eb80c
     * @note[short] MacOS (Intel): 0x6d4a30
     * @note[short] Windows: 0x575b80
     * @note[short] Android
     */
    std::string getThreadMessage();

    /**
     * @note[short] MacOS (ARM): 0x5e943c
     * @note[short] MacOS (Intel): 0x6d2350
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x5e97b8
     * @note[short] MacOS (Intel): 0x6d26f0
     * @note[short] Windows: 0x5779c0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5e9824
     * @note[short] MacOS (Intel): 0x6d2760
     * @note[short] Windows: 0x5738b0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x577520
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] MacOS (ARM): 0x5eb73c
     * @note[short] MacOS (Intel): 0x6d4940
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void selectAThread();

    /**
     * @note[short] MacOS (ARM): 0x5e9474
     * @note[short] MacOS (Intel): 0x6d2380
     * @note[short] Windows: 0x575970
     * @note[short] Android
     */
    void updateMessageLabel(std::string text);

    /**
     * @note[short] Windows: 0x575650
     * @note[short] Android
     */
    void updateSearchLabel(char const* text);
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_doomedIndex;
    CCTextInputNode* m_searchInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCDictionary* m_messageThreads;
    int m_threadTag;
};
