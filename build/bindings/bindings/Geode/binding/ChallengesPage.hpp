#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/GJChallengeDelegate.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ChallengesPage : public FLAlertLayer, public FLAlertLayerProtocol, public GJChallengeDelegate, public CurrencyRewardDelegate {
public:
    static constexpr auto CLASS_NAME = "ChallengesPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChallengesPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChallengesPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x35544
     * @note[short] Android: Rebinded
     */
     ~ChallengesPage();

    /**
     * @note[short] MacOS (ARM): 0x311658
     * @note[short] MacOS (Intel): 0x3868e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ChallengesPage* create();

    /**
     * @note[short] MacOS (ARM): 0x3117e4
     * @note[short] MacOS (Intel): 0x386b00
     * @note[short] Windows: 0x9d960
     * @note[short] iOS: 0x3565c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x312eb8
     * @note[short] MacOS (Intel): 0x388200
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x36750
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x312e1c
     * @note[short] MacOS (Intel): 0x388170
     * @note[short] Windows: 0x9f0a0
     * @note[short] iOS: 0x36744
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x312c8c
     * @note[short] MacOS (Intel): 0x387fd0
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x365c4
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x312e14
     * @note[short] MacOS (Intel): 0x388150
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3673c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x312740
     * @note[short] MacOS (Intel): 0x387ad0
     * @note[short] Windows: 0x9e4b0
     * @note[short] iOS: 0x3624c
     * @note[short] Android
     */
    virtual void challengeStatusFinished();

    /**
     * @note[short] MacOS (ARM): 0x312a04
     * @note[short] MacOS (Intel): 0x387dd0
     * @note[short] Windows: 0x9e640
     * @note[short] iOS: 0x36454
     * @note[short] Android
     */
    virtual void challengeStatusFailed();

    /**
     * @note[short] MacOS (ARM): 0x313020
     * @note[short] MacOS (Intel): 0x388360
     * @note[short] Windows: 0x9f410
     * @note[short] iOS: 0x368b8
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] Android
     */
    TodoReturn canCollectQuests();

    /**
     * @note[short] MacOS (ARM): 0x312ef0
     * @note[short] MacOS (Intel): 0x388240
     * @note[short] Windows: 0x9f0f0
     * @note[short] Android
     */
    void claimItem(ChallengeNode* node, GJChallengeItem* item, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x31243c
     * @note[short] MacOS (Intel): 0x3877a0
     * @note[short] Windows: 0x9e790
     * @note[short] Android
     */
    ChallengeNode* createChallengeNode(int number, bool skipAnimation, float animLength, bool isNew);

    /**
     * @note[short] MacOS (ARM): 0x31291c
     * @note[short] MacOS (Intel): 0x387cd0
     * @note[short] Windows: 0x9eac0
     * @note[short] Android
     */
    void exitNodeAtSlot(int position, float delay);

    /**
     * @note[short] MacOS (ARM): 0x3121b4
     * @note[short] MacOS (Intel): 0x387510
     * @note[short] Windows: 0x9f060
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x312a9c
     * @note[short] MacOS (Intel): 0x387e60
     * @note[short] Windows: 0x9e710
     * @note[short] Android
     */
    void tryGetChallenges();

    /**
     * @note[short] MacOS (ARM): 0x312698
     * @note[short] MacOS (Intel): 0x387a00
     * @note[short] Windows: 0x9e400
     * @note[short] Android
     */
    void updateDots();

    /**
     * @note[short] Windows: 0x9ebb0
     * @note[short] Android
     */
    void updateTimers(float dt);
    cocos2d::CCArray* m_dots;
    cocos2d::CCLabelBMFont* m_countdownLabel;
    LoadingCircle* m_circle;
    bool m_triedToLoad;
    bool m_unkBool;
    CurrencyRewardLayer* m_currencyRewardLayer;
    cocos2d::CCDictionary* m_challengeNodes;
};
