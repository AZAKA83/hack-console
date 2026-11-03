#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCAnimatedSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCAnimatedSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCAnimatedSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x43950
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCAnimatedSprite();

    /**
     * @note[short] MacOS (ARM): 0x2ce8dc
     * @note[short] MacOS (Intel): 0x33c840
     * @note[short] Windows: 0x44cc0
     * @note[short] iOS: 0x39a9bc
     * @note[short] Android: Rebinded
     */
     ~CCAnimatedSprite();

    /**
     * @note[short] MacOS (Intel): 0x33b520
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCAnimatedSprite* createWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2ce77c
     * @note[short] MacOS (Intel): 0x33c6d0
     * @note[short] Windows: 0x44bf0
     * @note[short] iOS: 0x39a868
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x2ce82c
     * @note[short] MacOS (Intel): 0x33c780
     * @note[short] Windows: 0x44c50
     * @note[short] iOS: 0x39a8c8
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x2ce764
     * @note[short] MacOS (Intel): 0x33c6b0
     * @note[short] Windows: 0x44bd0
     * @note[short] iOS: 0x39a850
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2ce730
     * @note[short] MacOS (Intel): 0x33c680
     * @note[short] Windows: 0x44b90
     * @note[short] iOS: 0x39a81c
     * @note[short] Android
     */
    virtual void animationFinishedO(cocos2d::CCObject* str);

    /**
     * @note[short] MacOS (ARM): 0x2ce018
     * @note[short] MacOS (Intel): 0x33bf40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void cleanupSprite();

    /**
     * @note[short] MacOS (ARM): 0x2cd730
     * @note[short] MacOS (Intel): 0x33b600
     * @note[short] Windows: 0x43a60
     * @note[short] Android
     */
    bool initWithType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2cd920
     * @note[short] MacOS (Intel): 0x33b7f0
     * @note[short] Windows: 0x43cd0
     * @note[short] Android
     */
    void loadType(char const* definition, cocos2d::CCTexture2D* texture, bool useTexture);

    /**
     * @note[short] MacOS (ARM): 0x2ce1b4
     * @note[short] MacOS (Intel): 0x33c100
     * @note[short] Windows: 0x447e0
     * @note[short] Android
     */
    void runAnimation(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x2ce24c
     * @note[short] MacOS (Intel): 0x33c180
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void runAnimationForced(std::string animation);

    /**
     * @note[short] MacOS (ARM): 0x2ce6f4
     * @note[short] MacOS (Intel): 0x33c640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopTween();

    /**
     * @note[short] MacOS (ARM): 0x2ce0a8
     * @note[short] MacOS (Intel): 0x33bfe0
     * @note[short] Windows: 0x44670
     * @note[short] Android
     */
    void switchToMode(spriteMode mode);

    /**
     * @note[short] MacOS (ARM): 0x2ce320
     * @note[short] MacOS (Intel): 0x33c240
     * @note[short] Windows: 0x44850
     * @note[short] Android
     */
    void tweenToAnimation(std::string animation, float duration);

    /**
     * @note[short] MacOS (ARM): 0x2ce5d8
     * @note[short] MacOS (Intel): 0x33c530
     * @note[short] Windows: 0x44b40
     * @note[short] Android
     */
    void tweenToAnimationFinished();

    /**
     * @note[short] MacOS (ARM): 0x2ce2f0
     * @note[short] MacOS (Intel): 0x33c210
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void willPlayAnimation();
    std::string m_unkString1;
    std::string m_activeTween;
    SpriteAnimationManager* m_animationManager;
    cocos2d::CCSprite* m_sprite;
    cocos2d::CCSprite* m_fbfSprite;
    CCPartAnimSprite* m_paSprite;
    spriteMode m_spriteMode;
    std::string m_currentAnim;
    AnimatedSpriteDelegate* m_delegate;
};
