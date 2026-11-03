#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TextInputDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/binding/GJOnlineRewardDelegate.hpp>
#include <Geode/mapping/vector.hpp>

class SecretLayer5 : public cocos2d::CCLayer, public TextInputDelegate, public FLAlertLayerProtocol, public DialogDelegate, public GJOnlineRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer5";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer5, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer5();

    /**
     * @note[short] MacOS (ARM): 0x4ed628
     * @note[short] MacOS (Intel): 0x26e4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7c670
     * @note[short] Android: Rebinded
     */
     ~SecretLayer5();

    /**
     * @note[short] MacOS (Intel): 0x46e850
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer5* create();

    /**
     * @note[short] MacOS (ARM): 0x3d9f2c
     * @note[short] MacOS (Intel): 0x46e810
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x3da07c
     * @note[short] MacOS (Intel): 0x46e9a0
     * @note[short] Windows: 0x5896a0
     * @note[short] iOS: 0x7c760
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x3de2d8
     * @note[short] MacOS (Intel): 0x473270
     * @note[short] Windows: 0x57f4f0
     * @note[short] iOS: 0x7f750
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x3dc270
     * @note[short] MacOS (Intel): 0x470fe0
     * @note[short] Windows: 0x58ae40
     * @note[short] iOS: 0x7e3b0
     * @note[short] Android
     */
    virtual void updateTweenActionInt(float value, int tag);

    /**
     * @note[short] MacOS (ARM): 0x3de1cc
     * @note[short] MacOS (Intel): 0x473180
     * @note[short] Windows: 0x58d8a0
     * @note[short] iOS: 0x7f744
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x3dde94
     * @note[short] MacOS (Intel): 0x472ee0
     * @note[short] Windows: 0x58cc70
     * @note[short] iOS: 0x7f558
     * @note[short] Android
     */
    virtual void textInputOpened(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3ddf74
     * @note[short] MacOS (Intel): 0x472fb0
     * @note[short] Windows: 0x58cdd0
     * @note[short] iOS: 0x7f644
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3de084
     * @note[short] MacOS (Intel): 0x473080
     * @note[short] Windows: 0x58cdd0
     * @note[short] iOS: 0x7f6c4
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x3dde8c
     * @note[short] MacOS (Intel): 0x472ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7f550
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x3dde84
     * @note[short] MacOS (Intel): 0x472ea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x7f548
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x3dd3f0
     * @note[short] MacOS (Intel): 0x4722a0
     * @note[short] Windows: 0x58c2a0
     * @note[short] iOS: 0x7f324
     * @note[short] Android
     */
    virtual void onlineRewardStatusFinished(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x3dd560
     * @note[short] MacOS (Intel): 0x4723f0
     * @note[short] Windows: 0x58c420
     * @note[short] iOS: 0x7f47c
     * @note[short] Android
     */
    virtual void onlineRewardStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x3dbf60
     * @note[short] MacOS (Intel): 0x470c80
     * @note[short] Windows: 0x58aa80
     * @note[short] Android
     */
    void animateHead();

    /**
     * @note[short] MacOS (ARM): 0x3dd178
     * @note[short] MacOS (Intel): 0x472040
     * @note[short] Windows: 0x58c070
     * @note[short] Android
     */
    void claimOnlineReward();

    /**
     * @note[short] MacOS (ARM): 0x3dbdd0
     * @note[short] MacOS (Intel): 0x470af0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void fadeInMessage();

    /**
     * @note[short] MacOS (ARM): 0x3dbd3c
     * @note[short] MacOS (Intel): 0x470a70
     * @note[short] Windows: 0x58a880
     * @note[short] Android
     */
    void fadeInSubmitMessage();

    /**
     * @note[short] MacOS (ARM): 0x3dbf38
     * @note[short] MacOS (Intel): 0x470c50
     * @note[short] Windows: 0x58aa50
     * @note[short] Android
     */
    void fadeOutMessage();

    /**
     * @note[short] MacOS (ARM): 0x3dc284
     * @note[short] MacOS (Intel): 0x471000
     * @note[short] Windows: 0x58ae90
     * @note[short] Android
     */
    void finishLoadingState();

    /**
     * @note[short] MacOS (ARM): 0x3daf70
     * @note[short] MacOS (Intel): 0x46fa90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::string getMessage();

    /**
     * @note[short] MacOS (ARM): 0x3dc298
     * @note[short] MacOS (Intel): 0x471020
     * @note[short] Windows: 0x58aeb0
     * @note[short] Android
     */
    void handleSecretResponse();

    /**
     * @note[short] MacOS (ARM): 0x3dd5f8
     * @note[short] MacOS (Intel): 0x472490
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideTextInput();

    /**
     * @note[short] MacOS (ARM): 0x3dbc2c
     * @note[short] MacOS (Intel): 0x470940
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementChatIdx();

    /**
     * @note[short] MacOS (ARM): 0x3de194
     * @note[short] MacOS (Intel): 0x473150
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCNode* nodeWithTag(int tag);

    /**
     * @note[short] MacOS (ARM): 0x3db1dc
     * @note[short] MacOS (Intel): 0x46fd40
     * @note[short] Windows: 0x58d820
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3db260
     * @note[short] MacOS (Intel): 0x46fdb0
     * @note[short] Windows: 0x58c4e0
     * @note[short] Android
     */
    void onSubmit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3dd0e4
     * @note[short] MacOS (Intel): 0x471fc0
     * @note[short] Windows: 0x58bfa0
     * @note[short] Android
     */
    void playWinSFX();

    /**
     * @note[short] Android
     */
    void showDialog(int index);

    /**
     * @note[short] MacOS (ARM): 0x14948
     * @note[short] MacOS (Intel): 0x4719e0
     * @note[short] Windows: 0x58af10
     * @note[short] Android
     */
    void showFailAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3db720
     * @note[short] MacOS (Intel): 0x470370
     * @note[short] Windows: 0x58d1d0
     * @note[short] Android
     */
    void showFirstDialog();

    /**
     * @note[short] MacOS (ARM): 0x3dc350
     * @note[short] MacOS (Intel): 0x4710e0
     * @note[short] Windows: 0x58b540
     * @note[short] Android
     */
    void showSuccessAnimation();

    /**
     * @note[short] MacOS (ARM): 0x3dd078
     * @note[short] MacOS (Intel): 0x471f50
     * @note[short] Windows: 0x58c470
     * @note[short] Android
     */
    void showTextInput();

    /**
     * @note[short] MacOS (ARM): 0x3dd380
     * @note[short] MacOS (Intel): 0x472230
     * @note[short] Windows: 0x58c290
     * @note[short] Android
     */
    void unlockUI();

    /**
     * @note[short] MacOS (ARM): 0x3daf1c
     * @note[short] MacOS (Intel): 0x46fa40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMessageLabel(std::string text);

    /**
     * @note[short] Windows: 0x58ceb0
     * @note[short] Android
     */
    void updateSearchLabel(char const* text);
    int m_threadTag;
    int m_basicMessageIndex;
    int m_selectedThread;
    int m_threadMessageIndex;
    int m_basicMessageCount;
    int m_errorMessageIndex;
    CCTextInputNode* m_textInput;
    cocos2d::CCLabelBMFont* m_messageLabel;
    CCMenuItemSpriteExtra* m_wraithButton;
    bool m_exiting;
    void* m_unk1f0;
    cocos2d::CCArray* m_torchFires;
    bool m_loading;
    int m_rewardStatus;
    std::string m_chestID;
    bool m_uiLocked;
    CCSpriteWithHue* m_wraithSprite;
    CCSpriteGrayscale* m_wraithGraySprite;
    cocos2d::CCSprite* m_eyesSprite;
    cocos2d::CCSprite* m_background;
    cocos2d::CCSprite* m_lockSprite;
    std::vector<int> m_soundEffects;
    int m_chatIndex;
    cocos2d::extension::CCScale9Sprite* m_inputBackground;
    LoadingCircleSprite* m_circleSprite;
    TextArea* m_messageArea;
};
