#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CCSpritePlus : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpritePlus";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpritePlus, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x49400
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpritePlus();

    /**
     * @note[short] MacOS (ARM): 0x3e0f28
     * @note[short] MacOS (Intel): 0x4762d0
     * @note[short] Windows: 0x4bdd0
     * @note[short] iOS: 0x24d814
     * @note[short] Android: Rebinded
     */
     ~CCSpritePlus();

    /**
Creates a sprite by a given sprite frame

 @param frame the frame to give to the specific sprite

 @return CCSpritePlus object and returns null if initialization fai     * @note[short] MacOS (ARM): 0x3e0fc4
     * @note[short] MacOS (Intel): 0x476390
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCSpritePlus* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
Creates a sprite by a given sprite's frame name

 @param frame the frame or filename to give to the specific sprite

 @return CCSpritePlus object and returns null if initialization fai     * @note[short] MacOS (ARM): 0x3e1074
     * @note[short] MacOS (Intel): 0x476430
     * @note[short] Windows: 0x4be20
     * @note[short] Android
     */
    static CCSpritePlus* createWithSpriteFrameName(char const* frame);

    /**
Sets X's scale on itself and it's followers

 @param scaleX the scale of X to s     * @note[short] MacOS (ARM): 0x3e14a4
     * @note[short] MacOS (Intel): 0x4768c0
     * @note[short] Windows: 0x4c2e0
     * @note[short] iOS: 0x24dc68
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
Sets Y's scale on itself and it's followers

 @param scaleY the scale of Y to s     * @note[short] MacOS (ARM): 0x3e1528
     * @note[short] MacOS (Intel): 0x476940
     * @note[short] Windows: 0x4c370
     * @note[short] iOS: 0x24dcec
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
Sets the Scale of itself and it's followers

 @param scale the scale value to s     * @note[short] MacOS (ARM): 0x3e15ac
     * @note[short] MacOS (Intel): 0x4769c0
     * @note[short] Windows: 0x4c400
     * @note[short] iOS: 0x24dd70
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
Sets the position where the sprite will be at and it's followers

 @param position the position to place to the sprite and it's followe     * @note[short] MacOS (ARM): 0x3e1154
     * @note[short] MacOS (Intel): 0x476520
     * @note[short] Windows: 0x4bee0
     * @note[short] iOS: 0x24d918
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
Sets the sprite's given rotation and it's followers

 @param rotation the rotation value to s     * @note[short] MacOS (ARM): 0x3e11cc
     * @note[short] MacOS (Intel): 0x4765a0
     * @note[short] Windows: 0x4bf70
     * @note[short] iOS: 0x24d990
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
Sets the sprite's given rotation of X and it's followers

 @param rotationX the rotation of X to se     * @note[short] MacOS (ARM): 0x3e1244
     * @note[short] MacOS (Intel): 0x476620
     * @note[short] Windows: 0x4c000
     * @note[short] iOS: 0x24da08
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
Sets the sprite's given rotation of Y and it's followers

 @param rotationY the rotation of Y to s     * @note[short] MacOS (ARM): 0x3e12bc
     * @note[short] MacOS (Intel): 0x4766a0
     * @note[short] Windows: 0x4c090
     * @note[short] iOS: 0x24da80
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
Initalizes the sprite using a texture

 @param texture the texture to initalize the sprite with

 @return true if initalization succeede     * @note[short] MacOS (ARM): 0x3e1140
     * @note[short] MacOS (Intel): 0x476500
     * @note[short] Windows: 0x4bec0
     * @note[short] iOS: 0x24d904
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
Initalizes the sprite with a frame name

 @param frameName the frame to initalize the sprite with

 @return true if initalization succeed     * @note[short] MacOS (ARM): 0x3e1134
     * @note[short] MacOS (Intel): 0x4764e0
     * @note[short] Windows: 0x4beb0
     * @note[short] iOS: 0x24d8f8
     * @note[short] Android
     */
    virtual bool initWithSpriteFrameName(char const* frameName);

    /**
Sets flipX to itself and it's followers

 @param flipX the direction that the sprite should be flipped      * @note[short] MacOS (ARM): 0x3e1334
     * @note[short] MacOS (Intel): 0x476720
     * @note[short] Windows: 0x4c120
     * @note[short] iOS: 0x24daf8
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
Sets flipY to itself and it's followers

 @param flipY the direction that the sprite should be flipped      * @note[short] MacOS (ARM): 0x3e13ec
     * @note[short] MacOS (Intel): 0x4767f0
     * @note[short] Windows: 0x4c200
     * @note[short] iOS: 0x24dbb0
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
Adds a follower to the sprite

 @param follower Something that will follow this spri     * @note[short] MacOS (ARM): 0x3e1630
     * @note[short] MacOS (Intel): 0x476a40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addFollower(cocos2d::CCNode* follower);

    /**
Attaches a sprite to the sprite. and other way around

 you can think of this as attaching 2 lego blocks together and letting

 it drag along.

 @param sprite the sprite to attach to the main sprite and vice ver     * @note[short] MacOS (ARM): 0x3e16c8
     * @note[short] MacOS (Intel): 0x476ae0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void followSprite(CCSpritePlus* sprite);

    /**
Obtains the first following sprite if it has a follower on hand

 @return nullptr if there is no follower avalib     * @note[short] MacOS (ARM): 0x3e1770
     * @note[short] MacOS (Intel): 0x476b80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CCSpritePlus* getFollower();

    /**
Removes a specific following sprite from this sprite.

 @param sprite follower sprite that will be remove     * @note[short] MacOS (ARM): 0x3e1680
     * @note[short] MacOS (Intel): 0x476a90
     * @note[short] Windows: 0x4c490
     * @note[short] Android
     */
    void removeFollower(cocos2d::CCNode* sprite);

    /**
Stops this child sprite from following it's given pare     * @note[short] MacOS (ARM): 0x3e1720
     * @note[short] MacOS (Intel): 0x476b30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopFollow();
    cocos2d::CCArray* m_followers;
    CCSpritePlus* m_followingSprite;
    bool m_hasFollower;
    bool m_propagateScaleChanges;
    bool m_propagateFlipChanges;
};
