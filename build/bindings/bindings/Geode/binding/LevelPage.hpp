#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelPage : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelPage";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelPage, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelPage();

    /**
     * @note[short] MacOS (ARM): 0x39a784
     * @note[short] MacOS (Intel): 0x422cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x484918
     * @note[short] Android: Rebinded
     */
     ~LevelPage();

    /**
     * @note[short] MacOS (ARM): 0x397c74
     * @note[short] MacOS (Intel): 0x4200a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelPage* create(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x39c8f4
     * @note[short] MacOS (Intel): 0x4250e0
     * @note[short] Windows: 0x447820
     * @note[short] iOS: 0x486590
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39c9f4
     * @note[short] MacOS (Intel): 0x425200
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x486694
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39c9fc
     * @note[short] MacOS (Intel): 0x425220
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x48669c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39ca04
     * @note[short] MacOS (Intel): 0x425240
     * @note[short] Windows: 0x83ef0
     * @note[short] iOS: 0x4866a4
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x39ca20
     * @note[short] MacOS (Intel): 0x425280
     * @note[short] Windows: 0x134dc0
     * @note[short] iOS: 0x4866c0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x39c630
     * @note[short] MacOS (Intel): 0x424e30
     * @note[short] Windows: 0x446c60
     * @note[short] iOS: 0x48634c
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x302568
     * @note[short] MacOS (Intel): 0x421980
     * @note[short] Windows: 0x445910
     * @note[short] Android
     */
    void addSecretCoin();

    /**
     * @note[short] MacOS (ARM): 0x39b954
     * @note[short] MacOS (Intel): 0x424010
     * @note[short] Windows: 0x446030
     * @note[short] Android
     */
    void addSecretDoor();

    /**
     * @note[short] MacOS (ARM): 0x39a850
     * @note[short] MacOS (Intel): 0x422e10
     * @note[short] Windows: 0x443150
     * @note[short] Android
     */
    bool init(GJGameLevel* level);

    /**
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4472e0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39bac0
     * @note[short] MacOS (Intel): 0x424180
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onMoreGames(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1ec740
     * @note[short] MacOS (Intel): 0x422390
     * @note[short] Windows: 0x446d50
     * @note[short] iOS: 0x4842e0
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39bf5c
     * @note[short] MacOS (Intel): 0x424630
     * @note[short] Windows: 0x446250
     * @note[short] Android
     */
    void onSecretDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39b408
     * @note[short] MacOS (Intel): 0x423a70
     * @note[short] Windows: 0x445240
     * @note[short] iOS: 0x48540c
     * @note[short] Android
     */
    void onTheTower(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x39bb24
     * @note[short] MacOS (Intel): 0x4241e0
     * @note[short] Windows: 0x445b50
     * @note[short] Android
     */
    void playCoinEffect();

    /**
     * @note[short] Windows: 0x447100
     * @note[short] Android
     */
    void playStep2();

    /**
     * @note[short] Windows: 0x4471e0
     * @note[short] Android
     */
    void playStep3();

    /**
     * @note[short] MacOS (ARM): 0x398008
     * @note[short] MacOS (Intel): 0x420450
     * @note[short] Windows: 0x443df0
     * @note[short] Android
     */
    void updateDynamicPage(GJGameLevel* level);
    bool m_isBusy;
    GJGameLevel* m_level;
    cocos2d::CCMenu* m_levelMenu;
    cocos2d::extension::CCScale9Sprite* m_levelDisplay;
    cocos2d::CCLabelBMFont* m_normalProgressLabel;
    cocos2d::CCLabelBMFont* m_practiceProgressLabel;
    cocos2d::CCLabelBMFont* m_nameLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    float m_progressWidth;
    cocos2d::CCSprite* m_normalProgressBar;
    cocos2d::CCSprite* m_practiceProgressBar;
    cocos2d::CCSprite* m_difficultySprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSize m_levelDisplaySize;
    cocos2d::CCArray* m_coins;
    cocos2d::CCArray* m_dynamicObjects;
    cocos2d::CCArray* m_levelObjects;
    cocos2d::CCArray* m_progressObjects;
    GameObject* m_coinObject;
    cocos2d::CCSprite* m_secretDoor;
};
