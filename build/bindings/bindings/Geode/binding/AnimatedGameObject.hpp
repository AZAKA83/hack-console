#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EnhancedGameObject.hpp>
#include <Geode/binding/AnimatedSpriteDelegate.hpp>
#include <Geode/binding/SpritePartDelegate.hpp>
#include <Geode/mapping/ccTypes.hpp>

class AnimatedGameObject : public EnhancedGameObject, public AnimatedSpriteDelegate, public SpritePartDelegate {
public:
    static constexpr auto CLASS_NAME = "AnimatedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AnimatedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x156964
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x429478
     * @note[short] Android: Rebinded
     */
     ~AnimatedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1590f4
     * @note[short] MacOS (Intel): 0x1992f0
     * @note[short] Windows: 0x647150
     * @note[short] Android
     */
    static std::string animationForID(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0x156ae0
     * @note[short] MacOS (Intel): 0x196970
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AnimatedGameObject* create(int id);

    /**
     * @note[short] MacOS (ARM): 0x159460
     * @note[short] MacOS (Intel): 0x199590
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static float getTweenTime(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0x157b1c
     * @note[short] MacOS (Intel): 0x197a10
     * @note[short] Windows: 0x6459f0
     * @note[short] iOS: 0x42a268
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x1594d4
     * @note[short] MacOS (Intel): 0x199610
     * @note[short] Windows: 0x647600
     * @note[short] iOS: 0x42b290
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x159470
     * @note[short] MacOS (Intel): 0x1995a0
     * @note[short] Windows: 0x647100
     * @note[short] iOS: 0x42b234
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x157a30
     * @note[short] MacOS (Intel): 0x197900
     * @note[short] Windows: 0x645840
     * @note[short] iOS: 0x42a188
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x157a74
     * @note[short] MacOS (Intel): 0x197940
     * @note[short] Windows: 0x645910
     * @note[short] iOS: 0x42a1cc
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x157be8
     * @note[short] MacOS (Intel): 0x197af0
     * @note[short] Windows: 0x645ac0
     * @note[short] iOS: 0x42a334
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x157c1c
     * @note[short] MacOS (Intel): 0x197b20
     * @note[short] Windows: 0x645b00
     * @note[short] iOS: 0x42a368
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x158c58
     * @note[short] MacOS (Intel): 0x198e50
     * @note[short] Windows: 0x646e60
     * @note[short] iOS: 0x42ada4
     * @note[short] Android
     */
    virtual void displayFrameChanged(cocos2d::CCObject* sprite, std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x156c04
     * @note[short] MacOS (Intel): 0x196ac0
     * @note[short] Windows: 0x644710
     * @note[short] Android
     */
    bool init(int id);

    /**
     * @note[short] MacOS (ARM): 0x158f78
     * @note[short] MacOS (Intel): 0x199190
     * @note[short] Windows: 0x646fd0
     * @note[short] Android
     */
    void playAnimation(int type);

    /**
     * @note[short] MacOS (ARM): 0x156da0
     * @note[short] MacOS (Intel): 0x196c60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setupAnimatedSize(int id);

    /**
     * @note[short] MacOS (ARM): 0x156f30
     * @note[short] MacOS (Intel): 0x196e20
     * @note[short] Windows: 0x644cc0
     * @note[short] Android
     */
    void setupChildSprites();

    /**
     * @note[short] MacOS (ARM): 0x157818
     * @note[short] MacOS (Intel): 0x1976c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateChildSpriteColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x157898
     * @note[short] MacOS (Intel): 0x197740
     * @note[short] Windows: 0x6455c0
     * @note[short] Android
     */
    void updateObjectAnimation();
    CCAnimatedSprite* m_animatedSprite;
    cocos2d::CCSprite* m_childSprite;
    CCSpritePart* m_eyeSpritePart;
    bool m_finishedAnimating;
    bool m_playingAnimation;
    std::string m_currentAnimation;
    bool m_notGrounded;
    int m_animationID;
};
