#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>

class SecretLayer3 : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "SecretLayer3";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretLayer3, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SecretLayer3();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3aa9a0
     * @note[short] Android: Rebinded
     */
     ~SecretLayer3();

    /**
     * @note[short] MacOS (ARM): 0x4044b8
     * @note[short] MacOS (Intel): 0x49c500
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SecretLayer3* create();

    /**
     * @note[short] MacOS (ARM): 0x401d28
     * @note[short] MacOS (Intel): 0x499ce0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x404570
     * @note[short] MacOS (Intel): 0x49c5d0
     * @note[short] Windows: 0x57fa80
     * @note[short] iOS: 0x3aaa84
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x408f94
     * @note[short] MacOS (Intel): 0x4a1450
     * @note[short] Windows: 0x584fd0
     * @note[short] iOS: 0x3ae598
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x408f88
     * @note[short] MacOS (Intel): 0x4a1420
     * @note[short] Windows: 0x584fc0
     * @note[short] iOS: 0x3ae58c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x408c50
     * @note[short] MacOS (Intel): 0x4a1100
     * @note[short] Windows: 0x5849a0
     * @note[short] iOS: 0x3ae330
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x405bf0
     * @note[short] MacOS (Intel): 0x49dc70
     * @note[short] Windows: 0x581450
     * @note[short] Android
     */
    void animateEyes();

    /**
     * @note[short] MacOS (ARM): 0x406d2c
     * @note[short] MacOS (Intel): 0x49efd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void firstInteractionStep1();

    /**
     * @note[short] MacOS (ARM): 0x406de8
     * @note[short] MacOS (Intel): 0x49f090
     * @note[short] Windows: 0x581570
     * @note[short] Android
     */
    void firstInteractionStep2();

    /**
     * @note[short] MacOS (ARM): 0x4071c0
     * @note[short] MacOS (Intel): 0x49f4b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void firstInteractionStep3();

    /**
     * @note[short] MacOS (ARM): 0x407330
     * @note[short] MacOS (Intel): 0x49f620
     * @note[short] Windows: 0x581a40
     * @note[short] Android
     */
    void firstInteractionStep4();

    /**
     * @note[short] MacOS (ARM): 0x406bdc
     * @note[short] MacOS (Intel): 0x49ee90
     * @note[short] Windows: 0x584e50
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x406a04
     * @note[short] MacOS (Intel): 0x49ecf0
     * @note[short] Windows: 0x581150
     * @note[short] Android
     */
    void onChest01(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x406af0
     * @note[short] MacOS (Intel): 0x49edc0
     * @note[short] Windows: 0x5812d0
     * @note[short] Android
     */
    void onChest02(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x405ce4
     * @note[short] MacOS (Intel): 0x49dd60
     * @note[short] Windows: 0x581ee0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4076f4
     * @note[short] MacOS (Intel): 0x49f9f0
     * @note[short] Windows: 0x583680
     * @note[short] Android
     */
    void revealStep1();

    /**
     * @note[short] MacOS (ARM): 0x407cc8
     * @note[short] MacOS (Intel): 0x4a0000
     * @note[short] Windows: 0x583870
     * @note[short] Android
     */
    void revealStep2();

    /**
     * @note[short] MacOS (ARM): 0x407fd0
     * @note[short] MacOS (Intel): 0x4a0320
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void revealStep3();

    /**
     * @note[short] MacOS (ARM): 0x40806c
     * @note[short] MacOS (Intel): 0x4a03c0
     * @note[short] Windows: 0x583c40
     * @note[short] Android
     */
    void revealStep4();

    /**
     * @note[short] MacOS (ARM): 0x408798
     * @note[short] MacOS (Intel): 0x4a0bd0
     * @note[short] Windows: 0x5843e0
     * @note[short] Android
     */
    void revealStep5();

    /**
     * @note[short] MacOS (ARM): 0x40775c
     * @note[short] MacOS (Intel): 0x49fa50
     * @note[short] Windows: 0x583170
     * @note[short] Android
     */
    void showUnlockDialog();
    DungeonBarsSprite* m_dungeonBars;
    bool m_lockInput;
    cocos2d::CCArray* m_locksArray;
    cocos2d::CCSprite* m_demonEyes;
    cocos2d::CCSprite* m_demonBody;
    CCMenuItemSpriteExtra* m_secretChest;
};
