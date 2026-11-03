#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class SpriteAnimationManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "SpriteAnimationManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SpriteAnimationManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpriteAnimationManager();

    /**
     * @note[short] MacOS (ARM): 0x703bfc
     * @note[short] MacOS (Intel): 0x8035c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3c23e0
     * @note[short] Android: Rebinded
     */
     ~SpriteAnimationManager();

    /**
     * @note[short] MacOS (ARM): 0x700c78
     * @note[short] MacOS (Intel): 0x8001e0
     * @note[short] Windows: 0x85e90
     * @note[short] Android
     */
    static void createAnimations(std::string definition);

    /**
     * @note[short] MacOS (ARM): 0x700964
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpriteAnimationManager* createWithOwner(CCAnimatedSprite* sprite, std::string definition);

    /**
     * @note[short] MacOS (ARM): 0x7025f8
     * @note[short] MacOS (Intel): 0x801e40
     * @note[short] Windows: 0x875b0
     * @note[short] Android
     */
    void animationFinished();

    /**
     * @note[short] MacOS (ARM): 0x703714
     * @note[short] MacOS (Intel): 0x8030d0
     * @note[short] Windows: 0x87600
     * @note[short] Android
     */
    void callAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x703bd4
     * @note[short] MacOS (Intel): 0x803590
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void doCleanup();

    /**
     * @note[short] MacOS (ARM): 0x46fec8
     * @note[short] MacOS (Intel): 0x8029d0
     * @note[short] Windows: 0x86ee0
     * @note[short] Android
     */
    void executeAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x703828
     * @note[short] MacOS (Intel): 0x8031e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void finishAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x703434
     * @note[short] MacOS (Intel): 0x802de0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    spriteMode getAnimType(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x22406c
     * @note[short] MacOS (Intel): 0x27e840
     * @note[short] Windows: 0x87700
     * @note[short] Android
     */
    int getPrio(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x700a4c
     * @note[short] MacOS (Intel): 0x7fffc0
     * @note[short] Windows: 0x85150
     * @note[short] Android
     */
    bool initWithOwner(CCAnimatedSprite* sprite, std::string definition);

    /**
     * @note[short] MacOS (ARM): 0x701b78
     * @note[short] MacOS (Intel): 0x801190
     * @note[short] Windows: 0x853e0
     * @note[short] Android
     */
    void loadAnimations(std::string definition);

    /**
     * @note[short] MacOS (ARM): 0x703934
     * @note[short] MacOS (Intel): 0x803330
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void offsetCurrentAnimation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x70344c
     * @note[short] MacOS (Intel): 0x802e00
     * @note[short] Windows: 0x87400
     * @note[short] Android
     */
    void overridePrio();

    /**
     * @note[short] MacOS (ARM): 0x702b34
     * @note[short] MacOS (Intel): 0x8023e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playSound(std::string sound);

    /**
     * @note[short] MacOS (ARM): 0x702958
     * @note[short] MacOS (Intel): 0x8021f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void playSoundForAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x702ecc
     * @note[short] Windows: 0x874d0
     * @note[short] Android
     */
    void queueAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x7039ac
     * @note[short] MacOS (Intel): 0x803390
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetAnimState();

    /**
     * @note[short] MacOS (ARM): 0x702b38
     * @note[short] MacOS (Intel): 0x8023f0
     * @note[short] Windows: 0x86d80
     * @note[short] Android
     */
    void runAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x7034fc
     * @note[short] MacOS (Intel): 0x802eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void runQueuedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x703644
     * @note[short] MacOS (Intel): 0x803000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopAnimations();

    /**
     * @note[short] MacOS (ARM): 0x70265c
     * @note[short] MacOS (Intel): 0x801ea0
     * @note[short] Windows: 0x86ac0
     * @note[short] Android
     */
    void storeAnimation(cocos2d::CCAnimate* action, cocos2d::CCAnimate* frames, std::string name, int priority, spriteMode type, cocos2d::CCSpriteFrame* first);

    /**
     * @note[short] MacOS (ARM): 0x702598
     * @note[short] MacOS (Intel): 0x801de0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void storeSoundForAnimation(cocos2d::CCString* sound, std::string animation, float delay);

    /**
     * @note[short] MacOS (Intel): 0x8033d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void switchToFirstFrameOfAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x702914
     * @note[short] MacOS (Intel): 0x802190
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateAnimationSpeed(float speed);
    CCAnimatedSprite* m_sprite;
    cocos2d::CCDictionary* m_priorityDict;
    cocos2d::CCDictionary* m_typeDict;
    cocos2d::CCDictionary* m_soundDict;
    std::string m_queuedAnimation;
    float m_speed;
    cocos2d::CCDictionary* m_animateDict;
    cocos2d::CCDictionary* m_frameDict;
    std::string m_currentAnimation;
    std::string m_nextAnimation;
};
