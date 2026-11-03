#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJPointDouble.hpp>
#include <Geode/binding/GameObject.hpp>
#include <Geode/binding/AnimatedSpriteDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class PlayerObject : public GameObject, public AnimatedSpriteDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayerObject, GameObject)

    /**
     * @note[short] MacOS (ARM): 0x384504
     * @note[short] MacOS (Intel): 0x40aa00
     * @note[short] Windows: 0x4e36c0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     PlayerObject();

    /**
     * @note[short] MacOS (ARM): 0x3656e8
     * @note[short] MacOS (Intel): 0x3e7540
     * @note[short] Windows: 0x4e4710
     * @note[short] iOS: 0x2b4214
     * @note[short] Android: Rebinded
     */
     ~PlayerObject();

    /**
     * @note[short] MacOS (ARM): 0x3658dc
     * @note[short] MacOS (Intel): 0x3e7820
     * @note[short] Windows: 0x4e4940
     * @note[short] Android
     */
    static PlayerObject* create(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer);

    /**
     * @note[short] MacOS (ARM): 0x367eb4
     * @note[short] MacOS (Intel): 0x3ea130
     * @note[short] Windows: 0x4e6fc0
     * @note[short] iOS: 0x2b6188
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x383f38
     * @note[short] MacOS (Intel): 0x40a390
     * @note[short] Windows: 0x501f40
     * @note[short] iOS: 0x2cb504
     * @note[short] Android
     */
    virtual void setScaleX(float scale);

    /**
     * @note[short] MacOS (ARM): 0x383f3c
     * @note[short] MacOS (Intel): 0x40a3a0
     * @note[short] Windows: 0x501f50
     * @note[short] iOS: 0x2cb508
     * @note[short] Android
     */
    virtual void setScaleY(float scale);

    /**
     * @note[short] MacOS (ARM): 0x383f40
     * @note[short] MacOS (Intel): 0x40a3b0
     * @note[short] Windows: 0x501f60
     * @note[short] iOS: 0x2cb50c
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x38060c
     * @note[short] MacOS (Intel): 0x406050
     * @note[short] Windows: 0x4fa970
     * @note[short] iOS: 0x2c83d4
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x383f44
     * @note[short] MacOS (Intel): 0x40a3c0
     * @note[short] Windows: 0x501f70
     * @note[short] iOS: 0x2cb510
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x383ec8
     * @note[short] MacOS (Intel): 0x40a300
     * @note[short] Windows: 0x501e70
     * @note[short] iOS: 0x2cb494
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x3816a0
     * @note[short] MacOS (Intel): 0x407250
     * @note[short] Windows: 0x4fbe40
     * @note[short] iOS: 0x2c93b8
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x3810c4
     * @note[short] MacOS (Intel): 0x406c30
     * @note[short] Windows: 0x4fb630
     * @note[short] iOS: 0x2c8e74
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x383ecc
     * @note[short] MacOS (Intel): 0x40a310
     * @note[short] Windows: 0x501e80
     * @note[short] iOS: 0x2cb498
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x383f34
     * @note[short] MacOS (Intel): 0x40a380
     * @note[short] Windows: 0x2953d0
     * @note[short] iOS: 0x2cb500
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): 0x379f00
     * @note[short] MacOS (Intel): 0x3ff020
     * @note[short] Windows: 0x4f5110
     * @note[short] iOS: 0x2c3550
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x38189c
     * @note[short] MacOS (Intel): 0x407420
     * @note[short] Windows: 0x4fbf70
     * @note[short] iOS: 0x2c94bc
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x382a44
     * @note[short] MacOS (Intel): 0x408700
     * @note[short] Windows: 0x4febe0
     * @note[short] iOS: 0x2ca278
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x382a70
     * @note[short] MacOS (Intel): 0x408720
     * @note[short] Windows: 0x4fec00
     * @note[short] iOS: 0x2ca2a4
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x384014
     * @note[short] MacOS (Intel): 0x40a4b0
     * @note[short] Windows: 0x501f90
     * @note[short] iOS: 0x2cb51c
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x36d614
     * @note[short] MacOS (Intel): 0x3f04c0
     * @note[short] Windows: 0x4fe4a0
     * @note[short] Android
     */
    void activateStreak();

    /**
     * @note[short] MacOS (ARM): 0x367b5c
     * @note[short] MacOS (Intel): 0x3e9da0
     * @note[short] Windows: 0x4e68b0
     * @note[short] Android
     */
    void addAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x37cfd8
     * @note[short] MacOS (Intel): 0x402730
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToTouchedRings(RingObject* object);

    /**
     * @note[short] MacOS (ARM): 0x367e6c
     * @note[short] MacOS (Intel): 0x3ea0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToYVelocity(double yVelocity, int type);

    /**
     * @note[short] MacOS (ARM): 0x36dd5c
     * @note[short] MacOS (Intel): 0x3f0c50
     * @note[short] Windows: 0x4eaf30
     * @note[short] Android
     */
    void animatePlatformerJump(float scale);

    /**
     * @note[short] MacOS (Intel): 0x3f36b0
     * @note[short] Windows: 0x4fe2f0
     * @note[short] Android
     */
    void boostPlayer(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x381d78
     * @note[short] MacOS (Intel): 0x8dae0
     * @note[short] Windows: 0x4fdae0
     * @note[short] Android
     */
    void bumpPlayer(float bumpMod, int objectType, bool noEffects, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37cfbc
     * @note[short] MacOS (Intel): 0x402710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool buttonDown(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x37d8b4
     * @note[short] MacOS (Intel): 0x403080
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canStickToGround();

    /**
     * @note[short] MacOS (ARM): 0x375664
     * @note[short] MacOS (Intel): 0x3f9f40
     * @note[short] Windows: 0x4f1eb0
     * @note[short] Android
     */
    void checkSnapJumpToObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3755a4
     * @note[short] MacOS (Intel): 0x3f9e90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool collidedWithObject(float dt, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3703b0
     * @note[short] MacOS (Intel): 0x3f3950
     * @note[short] Windows: 0x4efc90
     * @note[short] Android
     */
    bool collidedWithObject(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x371ff4
     * @note[short] MacOS (Intel): 0x3f5b40
     * @note[short] Windows: 0x4efd50
     * @note[short] Android
     */
    bool collidedWithObjectInternal(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x370470
     * @note[short] MacOS (Intel): 0x3f39f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void collidedWithSlope(float dt, GameObject* object, bool skipPre);

    /**
     * @note[short] MacOS (ARM): 0x370af4
     * @note[short] MacOS (Intel): 0x3f40d0
     * @note[short] Windows: 0x4edb90
     * @note[short] Android
     */
    void collidedWithSlopeInternal(float dt, GameObject* object, bool forced);

    /**
     * @note[short] MacOS (ARM): 0x36cdf8
     * @note[short] MacOS (Intel): 0x3efbf0
     * @note[short] Windows: 0x4eb3b0
     * @note[short] Android
     */
    float convertToClosestRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x3827a4
     * @note[short] MacOS (Intel): 0x4083e0
     * @note[short] Windows: 0x4fea30
     * @note[short] Android
     */
    void copyAttributes(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x37d108
     * @note[short] MacOS (Intel): 0x402880
     * @note[short] Windows: 0x4f69a0
     * @note[short] Android
     */
    void createFadeOutDartStreak();

    /**
     * @note[short] MacOS (ARM): 0x367010
     * @note[short] MacOS (Intel): 0x3e9190
     * @note[short] Windows: 0x4e60d0
     * @note[short] Android
     */
    void createRobot(int frame);

    /**
     * @note[short] MacOS (ARM): 0x367354
     * @note[short] MacOS (Intel): 0x3e9540
     * @note[short] Windows: 0x4e64c0
     * @note[short] Android
     */
    void createSpider(int frame);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): 0x3ee9a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deactivateParticle();

    /**
     * @note[short] MacOS (ARM): 0x367cf4
     * @note[short] MacOS (Intel): 0x3e9f60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deactivateStreak(bool stop);

    /**
     * @note[short] MacOS (ARM): 0x38059c
     * @note[short] MacOS (Intel): 0x405ff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool destroyFromHitHead();

    /**
     * @note[short] MacOS (ARM): 0x375b64
     * @note[short] MacOS (Intel): 0x3fa4b0
     * @note[short] Windows: 0x4f1e30
     * @note[short] Android
     */
    void didHitHead();

    /**
     * @note[short] MacOS (ARM): 0x3811f4
     * @note[short] MacOS (Intel): 0x406d80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void disableCustomGlowColor();

    /**
     * @note[short] MacOS (ARM): 0x381a30
     * @note[short] MacOS (Intel): 0x4075c0
     * @note[short] Windows: 0x4fd790
     * @note[short] Android
     */
    void disablePlayerControls();

    /**
     * @note[short] MacOS (ARM): 0x37b958
     * @note[short] MacOS (Intel): 0x400dd0
     * @note[short] Windows: 0x4f91a0
     * @note[short] Android
     */
    void disableSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x36c7e0
     * @note[short] MacOS (Intel): 0x3ef650
     * @note[short] Windows: 0x4f6830
     * @note[short] Android
     */
    void doReversePlayer(bool reverse);

    /**
     * @note[short] MacOS (ARM): 0x3811d4
     * @note[short] MacOS (Intel): 0x406d50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void enableCustomGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x381a8c
     * @note[short] MacOS (Intel): 0x407620
     * @note[short] Windows: 0x4fd940
     * @note[short] Android
     */
    void enablePlayerControls();

    /**
     * @note[short] MacOS (ARM): 0x36c9b4
     * @note[short] MacOS (Intel): 0x3ef780
     * @note[short] Windows: 0x4eb1f0
     * @note[short] Android
     */
    void exitPlatformerAnimateJump();

    /**
     * @note[short] MacOS (ARM): 0x37b8bc
     * @note[short] MacOS (Intel): 0x400d40
     * @note[short] Windows: 0x4fe600
     * @note[short] Android
     */
    void fadeOutStreak2(float duration);

    /**
     * @note[short] MacOS (ARM): 0x377150
     * @note[short] MacOS (Intel): 0x3fbd90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void flashPlayer(float flashDuration, float flashDelay, cocos2d::ccColor3B mainColor, cocos2d::ccColor3B secondColor);

    /**
     * @note[short] MacOS (ARM): 0x36da4c
     * @note[short] MacOS (Intel): 0x403110
     * @note[short] Windows: 0x4f8440
     * @note[short] Android
     */
    void flipGravity(bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x36bb3c
     * @note[short] MacOS (Intel): 0x3ee920
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int flipMod();

    /**
     * @note[short] MacOS (ARM): 0x36dd44
     * @note[short] MacOS (Intel): 0x3f0c20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gameEventTriggered(int gameEvent, int material);

    /**
     * @note[short] MacOS (ARM): 0x37d8e4
     * @note[short] MacOS (Intel): 0x4030b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObjectType getActiveMode();

    /**
     * @note[short] MacOS (ARM): 0x36bb14
     * @note[short] MacOS (Intel): 0x3ee8f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    double getCurrentXVelocity();

    /**
     * @note[short] MacOS (ARM): 0x36d9b8
     * @note[short] MacOS (Intel): 0x3f0880
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getModifiedSlopeYVel();

    /**
     * @note[short] MacOS (ARM): 0x36cf78
     * @note[short] MacOS (Intel): 0x3efdb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getOldPosition(float dt);

    /**
     * @note[short] MacOS (ARM): 0x3811a8
     * @note[short] MacOS (Intel): 0x406d20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getSecondColor();

    /**
     * @note[short] MacOS (ARM): 0x367e64
     * @note[short] MacOS (Intel): 0x3ea0b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    double getYVelocity();

    /**
     * @note[short] MacOS (ARM): 0x383f74
     * @note[short] MacOS (Intel): 0x40a410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gravityDown();

    /**
     * @note[short] MacOS (ARM): 0x383f50
     * @note[short] MacOS (Intel): 0x40a3e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void gravityUp();

    /**
     * @note[short] MacOS (Intel): 0x3f1530
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void handlePlayerCommand(int command);

    /**
     * @note[short] MacOS (ARM): 0x370698
     * @note[short] MacOS (Intel): 0x3f3be0
     * @note[short] Windows: 0x4ed4c0
     * @note[short] Android
     */
    bool handleRotatedCollisionInternal(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck, bool skipPre, bool slope);

    /**
     * @note[short] MacOS (ARM): 0x37062c
     * @note[short] MacOS (Intel): 0x3f3b80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool handleRotatedObjectCollision(float dt, GameObject* object, cocos2d::CCRect rect, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x3707f8
     * @note[short] MacOS (Intel): 0x3f3d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void handleRotatedSlopeCollision(float dt, GameObject* object, bool skipPre);

    /**
     * @note[short] MacOS (ARM): 0x375d4c
     * @note[short] MacOS (Intel): 0x3fa700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hardFlipGravity();

    /**
     * @note[short] MacOS (ARM): 0x3745b0
     * @note[short] MacOS (Intel): 0x3f8d40
     * @note[short] Windows: 0x4fa250
     * @note[short] Android
     */
    void hitGround(GameObject* object, bool notFlipped);

    /**
     * @note[short] MacOS (ARM): 0x3759cc
     * @note[short] MacOS (Intel): 0x3fa2f0
     * @note[short] Windows: 0x4fa1f0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void hitGroundNoJump(GameObject* object, bool notFlipped);

    /**
     * @note[short] MacOS (ARM): 0x36da10
     * @note[short] MacOS (Intel): 0x3f08e0
     * @note[short] Windows: 0x4eae50
     * @note[short] iOS: 0x2babf0
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x365994
     * @note[short] MacOS (Intel): 0x3e78b0
     * @note[short] Windows: 0x4e49e0
     * @note[short] Android
     */
    bool init(int player, int ship, GJBaseGameLayer* gameLayer, cocos2d::CCLayer* layer, bool playLayer);

    /**
     * @note[short] MacOS (ARM): 0x3700e4
     * @note[short] MacOS (Intel): 0x3f3650
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isBoostValid(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x36bb50
     * @note[short] MacOS (Intel): 0x3ee940
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isFlying();

    /**
     * @note[short] MacOS (ARM): 0x3769c0
     * @note[short] MacOS (Intel): 0x3fb560
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isInBasicMode();

    /**
     * @note[short] MacOS (ARM): 0x36a668
     * @note[short] MacOS (Intel): 0x3ed040
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isInNormalMode();

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::in     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isPlayer1();

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::in     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isPlayer2();

    /**
     * @note[short] MacOS (ARM): 0x374584
     * @note[short] MacOS (Intel): 0x3f8d00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isSafeFlip(float flipTime);

    /**
     * @note[short] MacOS (ARM): 0x38267c
     * @note[short] MacOS (Intel): 0x408270
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isSafeHeadTest();

    /**
     * @note[short] MacOS (ARM): 0x374558
     * @note[short] MacOS (Intel): 0x3f8cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSafeMode(float changeTime);

    /**
     * @note[short] MacOS (ARM): 0x375d20
     * @note[short] MacOS (Intel): 0x3fa6c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSafeSpiderFlip(float flipTime);

    /**
@note geode addition

 @note this will return false for PlayerObjects in MenuGameLayer

 @note this might break if you call from PlayerObject::in     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    bool isVanillaPlayer();

    /**
     * @note[short] Windows: 0x4e99b0
     * @note[short] Android
     */
    void levelFlipFinished();

    /**
     * @note[short] MacOS (ARM): 0x36bb98
     * @note[short] MacOS (Intel): 0x3ee970
     * @note[short] Windows: 0x4f97c0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool levelFlipping();

    /**
     * @note[short] MacOS (ARM): 0x36d7c4
     * @note[short] MacOS (Intel): 0x3f0680
     * @note[short] Windows: 0x4e9930
     * @note[short] Android
     */
    void levelWillFlip();

    /**
     * @note[short] MacOS (ARM): 0x3792f4
     * @note[short] MacOS (Intel): 0x3fe2f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void limitDashRotation(float& rotation);

    /**
     * @note[short] Windows: 0x5007b0
     * @note[short] Android
     */
    void loadFromCheckpoint(PlayerCheckpoint* object);

    /**
     * @note[short] Windows: 0x4fd670
     * @note[short] Android
     */
    void lockPlayer();

    /**
     * @note[short] MacOS (ARM): 0x383f70
     * @note[short] MacOS (Intel): 0x40a400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void logValues();

    /**
     * @note[short] MacOS (ARM): 0x37e3a0
     * @note[short] MacOS (Intel): 0x403bf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void modeDidChange();

    /**
     * @note[short] MacOS (ARM): 0x3702e8
     * @note[short] MacOS (Intel): 0x3f3880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void performSlideCheck();

    /**
     * @note[short] MacOS (ARM): 0x370048
     * @note[short] Windows: 0x4fec10
     * @note[short] Android
     */
    void placeStreakPoint();

    /**
     * @note[short] Android
     */
    void placeStreakPoint(cocos2d::CCPoint p0);

    /**
     * @note[short] MacOS (ARM): 0x381f30
     * @note[short] MacOS (Intel): 0x407a90
     * @note[short] Windows: 0x4fde90
     * @note[short] iOS: 0x2c9904
     * @note[short] Android
     */
    void playBumpEffect(int objectType, GameObject* player);

    /**
     * @note[short] MacOS (ARM): 0x36e13c
     * @note[short] MacOS (Intel): 0x3f1090
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void playBurstEffect();

    /**
     * @note[short] MacOS (ARM): 0x1a90c8
     * @note[short] MacOS (Intel): 0x1f7550
     * @note[short] Windows: 0x4e2420
     * @note[short] Android
     */
    void playCompleteEffect(bool noEffects, bool instant);

    /**
     * @note[short] MacOS (ARM): 0x1a176c
     * @note[short] MacOS (Intel): 0x1ef740
     * @note[short] Windows: 0x4dd160
     * @note[short] iOS: 0x6016c
     * @note[short] Android
     */
    void playDeathEffect();

    /**
     * @note[short] MacOS (ARM): 0x36c51c
     * @note[short] MacOS (Intel): 0x3ef390
     * @note[short] Windows: 0x4ffb10
     * @note[short] Android
     */
    void playDynamicSpiderRun();

    /**
     * @note[short] MacOS (ARM): 0x37b6d8
     * @note[short] MacOS (Intel): 0x400b40
     * @note[short] Windows: 0x4f5ff0
     * @note[short] Android
     */
    void playerDestroyed(bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x36e10c
     * @note[short] MacOS (Intel): 0x3f1050
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerIsFalling(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x36e040
     * @note[short] MacOS (Intel): 0x3f0f60
     * @note[short] Windows: 0x4f86d0
     * @note[short] Android
     */
    bool playerIsFallingBugged();

    /**
     * @note[short] MacOS (ARM): 0x36e0ec
     * @note[short] MacOS (Intel): 0x3f1020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerIsMovingUp();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void playerTeleported();

    /**
     * @note[short] MacOS (ARM): 0x381cd8
     * @note[short] MacOS (Intel): 0x407840
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void playingEndEffect();

    /**
     * @note[short] MacOS (ARM): 0x37b034
     * @note[short] MacOS (Intel): 0x400480
     * @note[short] Windows: 0x4f5710
     * @note[short] Android
     */
    void playSpawnEffect();

    /**
     * @note[short] MacOS (ARM): 0x376a20
     * @note[short] MacOS (Intel): 0x3fb5b0
     * @note[short] Windows: 0x4f3370
     * @note[short] iOS: 0x2c2200
     * @note[short] Android
     */
    void playSpiderDashEffect(cocos2d::CCPoint from, cocos2d::CCPoint to);

    /**
     * @note[short] Windows: 0x4eb830
     * @note[short] Android
     */
    void postCollision(float dt, bool betweenSteps);

    /**
     * @note[short] MacOS (Intel): 0x3f1680
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preCollision();

    /**
     * @note[short] MacOS (ARM): 0x3740c0
     * @note[short] MacOS (Intel): 0x3f87d0
     * @note[short] Windows: 0x4ed660
     * @note[short] Android
     */
    bool preSlopeCollision(float dt, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x382054
     * @note[short] MacOS (Intel): 0x407bd0
     * @note[short] Windows: 0x4fdc90
     * @note[short] Android
     */
    void propellPlayer(float yVelocity, bool noEffects, int objectType);

    /**
     * @note[short] MacOS (ARM): 0x37bbd8
     * @note[short] MacOS (Intel): 0x401090
     * @note[short] Windows: 0x4f6200
     * @note[short] Android
     */
    bool pushButton(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x3826f4
     * @note[short] MacOS (Intel): 0x4082e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pushDown();

    /**
     * @note[short] MacOS (ARM): 0x38227c
     * @note[short] MacOS (Intel): 0x407dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pushPlayer(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x378c40
     * @note[short] MacOS (Intel): 0x3fdbe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void redirectDash(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x382404
     * @note[short] MacOS (Intel): 0x407fa0
     * @note[short] Windows: 0x4fe0a0
     * @note[short] Android
     */
    void redirectPlayerForce(float rotation, float modifier, float minimum, float maximum);

    /**
     * @note[short] Android
     */
    TodoReturn refreshStreakState();

    /**
     * @note[short] MacOS (ARM): 0x3818fc
     * @note[short] MacOS (Intel): 0x407490
     * @note[short] Windows: 0x4fd450
     * @note[short] iOS: 0x2c951c
     * @note[short] Android
     */
    void releaseAllButtons();

    /**
     * @note[short] MacOS (ARM): 0x37cc88
     * @note[short] MacOS (Intel): 0x4023b0
     * @note[short] Windows: 0x4f64c0
     * @note[short] Android
     */
    bool releaseButton(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x367c7c
     * @note[short] MacOS (Intel): 0x3e9ef0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x37a9a4
     * @note[short] MacOS (Intel): 0x3ffd20
     * @note[short] Windows: 0x501800
     * @note[short] Android
     */
    void removePendingCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x37b69c
     * @note[short] MacOS (Intel): 0x400b00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removePlacedCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x36d4c8
     * @note[short] MacOS (Intel): 0x3f0360
     * @note[short] Windows: 0x4e9a60
     * @note[short] Android
     */
    void resetAllParticles();

    /**
     * @note[short] MacOS (ARM): 0x36e5c8
     * @note[short] MacOS (Intel): 0x3f1550
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetCollisionLog(bool full);

    /**
     * @note[short] MacOS (Intel): 0x3fa790
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetCollisionValues();

    /**
     * @note[short] MacOS (ARM): 0x37e1b8
     * @note[short] MacOS (Intel): 0x4039f0
     * @note[short] Windows: 0x4f95b0
     * @note[short] Android
     */
    void resetPlayerIcon();

    /**
     * @note[short] MacOS (ARM): 0x37a7b8
     * @note[short] MacOS (Intel): 0x3ffa00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetStateVariables();

    /**
     * @note[short] MacOS (ARM): 0x36d52c
     * @note[short] MacOS (Intel): 0x3f03d0
     * @note[short] Windows: 0x4e9840
     * @note[short] Android
     */
    void resetStreak();

    /**
     * @note[short] MacOS (ARM): 0x37a81c
     * @note[short] MacOS (Intel): 0x3ffa80
     * @note[short] Windows: 0x4f6600
     * @note[short] Android
     */
    void resetTouchedRings(bool removeAll);

    /**
     * @note[short] MacOS (ARM): 0x36e484
     * @note[short] MacOS (Intel): 0x3f1410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int reverseMod();

    /**
     * @note[short] MacOS (ARM): 0x37d030
     * @note[short] MacOS (Intel): 0x402790
     * @note[short] Windows: 0x4f6740
     * @note[short] Android
     */
    void reversePlayer(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37bf2c
     * @note[short] MacOS (Intel): 0x401420
     * @note[short] Windows: 0x4f6f50
     * @note[short] iOS: 0x2c4d90
     * @note[short] Android
     */
    void ringJump(RingObject* object, bool skipCheck);

    /**
     * @note[short] MacOS (ARM): 0x37a3c0
     * @note[short] MacOS (Intel): 0x3ff650
     * @note[short] Windows: 0x4f7fa0
     * @note[short] Android
     */
    void rotateGameplay(int moveDirection, int groundDirection, bool editVelocity, float velocityModX, float velocityModY, bool overrideVelocity, bool dontSlide);

    /**
     * @note[short] MacOS (ARM): 0x370868
     * @note[short] MacOS (Intel): 0x3f3da0
     * @note[short] Windows: 0x4ef700
     * @note[short] Android
     */
    void rotateGameplayObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37d71c
     * @note[short] MacOS (Intel): 0x402ee0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void rotateGameplayOnly(bool sideways);

    /**
     * @note[short] MacOS (ARM): 0x370abc
     * @note[short] MacOS (Intel): 0x3f4090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void rotatePreSlopeObjects();

    /**
     * @note[short] MacOS (ARM): 0x36e36c
     * @note[short] MacOS (Intel): 0x3f12f0
     * @note[short] Windows: 0x4eb600
     * @note[short] Android
     */
    void runBallRotation(float speed);

    /**
     * @note[short] MacOS (ARM): 0x36e498
     * @note[short] MacOS (Intel): 0x3f1430
     * @note[short] Windows: 0x4eb730
     * @note[short] Android
     */
    void runBallRotation2();

    /**
     * @note[short] MacOS (ARM): 0x36e290
     * @note[short] MacOS (Intel): 0x3f11e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void runNormalRotation();

    /**
     * @note[short] MacOS (ARM): 0x36a6d8
     * @note[short] MacOS (Intel): 0x3ed0a0
     * @note[short] Windows: 0x4eb4d0
     * @note[short] Android
     */
    void runNormalRotation(bool notNormalMode, float speed);

    /**
     * @note[short] MacOS (ARM): 0x36cab4
     * @note[short] MacOS (Intel): 0x3ef890
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void runRotateAction(bool ground, int type);

    /**
     * @note[short] Windows: 0x4ffd80
     * @note[short] Android
     */
    void saveToCheckpoint(PlayerCheckpoint* checkpoint);

    /**
     * @note[short] MacOS (ARM): 0x368dc8
     * @note[short] MacOS (Intel): 0x3eb240
     * @note[short] Windows: 0x4fb6c0
     * @note[short] Android
     */
    void setSecondColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x3677b8
     * @note[short] MacOS (Intel): 0x3e99f0
     * @note[short] Windows: 0x4e6a00
     * @note[short] Android
     */
    void setupStreak();

    /**
     * @note[short] MacOS (ARM): 0x3675b8
     * @note[short] MacOS (Intel): 0x3e9810
     * @note[short] Windows: 0x4e6f50
     * @note[short] Android
     */
    void setYVelocity(double velocity, int type);

    /**
     * @note[short] MacOS (ARM): 0x194bfc
     * @note[short] MacOS (Intel): 0x4005f0
     * @note[short] Windows: 0x4f5840
     * @note[short] Android
     */
    void spawnCircle();

    /**
     * @note[short] MacOS (ARM): 0x37b2a8
     * @note[short] MacOS (Intel): 0x4006e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void spawnCircle2();

    /**
     * @note[short] MacOS (ARM): 0x37b5ac
     * @note[short] MacOS (Intel): 0x400a00
     * @note[short] Windows: 0x4f5e20
     * @note[short] Android
     */
    void spawnDualCircle();

    /**
     * @note[short] MacOS (ARM): 0x1607f8
     * @note[short] MacOS (Intel): 0x4085d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void spawnFromPlayer(PlayerObject* player, bool flip);

    /**
     * @note[short] MacOS (ARM): 0x37b34c
     * @note[short] MacOS (Intel): 0x400780
     * @note[short] Windows: 0x4f5a00
     * @note[short] iOS: 0x2c4458
     * @note[short] Android
     */
    void spawnPortalCircle(cocos2d::ccColor3B color, float startRadius);

    /**
     * @note[short] MacOS (ARM): 0x37b46c
     * @note[short] MacOS (Intel): 0x4008b0
     * @note[short] Windows: 0x4f5c10
     * @note[short] Android
     */
    void spawnScaleCircle();

    /**
     * @note[short] MacOS (ARM): 0x382704
     * @note[short] MacOS (Intel): 0x408300
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void specialGroundHit();

    /**
     * @note[short] MacOS (ARM): 0x383fb4
     * @note[short] MacOS (Intel): 0x40a450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void speedDown();

    /**
     * @note[short] MacOS (ARM): 0x383f94
     * @note[short] MacOS (Intel): 0x40a430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void speedUp();

    /**
     * @note[short] MacOS (ARM): 0x36d900
     * @note[short] MacOS (Intel): 0x3f07c0
     * @note[short] Windows: 0x4f2540
     * @note[short] Android
     */
    void spiderTestJump(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x375de4
     * @note[short] MacOS (Intel): 0x3fa7b0
     * @note[short] Windows: 0x4f25f0
     * @note[short] Android
     */
    void spiderTestJumpInternal(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x37720c
     * @note[short] MacOS (Intel): 0x3fbe80
     * @note[short] Android
     */
    void spiderTestJumpX(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x377f24
     * @note[short] MacOS (Intel): 0x3fcd40
     * @note[short] Android
     */
    void spiderTestJumpY(bool dynamic);

    /**
     * @note[short] MacOS (ARM): 0x379490
     * @note[short] MacOS (Intel): 0x3fe4a0
     * @note[short] Windows: 0x4f3b20
     * @note[short] Android
     */
    void startDashing(DashRingObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37f9a4
     * @note[short] MacOS (Intel): 0x405340
     * @note[short] Windows: 0x4f97b0
     * @note[short] Android
     */
    void stopBurstEffect();

    /**
     * @note[short] MacOS (ARM): 0x36be40
     * @note[short] MacOS (Intel): 0x3eec40
     * @note[short] Windows: 0x4f4850
     * @note[short] Android
     */
    void stopDashing();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): 0x3f0760
     * @note[short] Windows: 0x4e9ae0
     * @note[short] Android
     */
    void stopParticles();

    /**
     * @note[short] MacOS (ARM): 0x36e1f8
     * @note[short] MacOS (Intel): 0x3f1130
     * @note[short] Windows: 0x4eb320
     * @note[short] Android
     */
    void stopPlatformerJumpAnimation();

    /**
     * @note[short] MacOS (ARM): 0x36e280
     * @note[short] MacOS (Intel): 0x3f11c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopRotation(bool ground, int type);

    /**
     * @note[short] MacOS (ARM): 0x3825e4
     * @note[short] MacOS (Intel): 0x4081e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopStreak2();

    /**
     * @note[short] MacOS (ARM): 0x36e628
     * @note[short] MacOS (Intel): 0x3f15c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void storeCollision(PlayerCollisionDirection direction, int id);

    /**
     * @note[short] Windows: 0x4fe6a0
     * @note[short] Android
     */
    TodoReturn streakDisabledForCurrentMode();

    /**
     * @note[short] MacOS (ARM): 0x37b9d4
     * @note[short] MacOS (Intel): 0x400e60
     * @note[short] Windows: 0x4f60e0
     * @note[short] Android
     */
    bool switchedDirTo(PlayerButton button);

    /**
     * @note[short] MacOS (ARM): 0x37a9f0
     * @note[short] MacOS (Intel): 0x3ffd70
     * @note[short] Windows: 0x4fa150
     * @note[short] Android
     */
    void switchedToMode(GameObjectType type);

    /**
     * @note[short] MacOS (ARM): 0x3704f4
     * @note[short] MacOS (Intel): 0x3f3a70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool testForMoving(float dt, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x37e3c4
     * @note[short] MacOS (Intel): 0x403c10
     * @note[short] Windows: 0x4f8ad0
     * @note[short] Android
     */
    void toggleBirdMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37f3f8
     * @note[short] MacOS (Intel): 0x404d20
     * @note[short] Windows: 0x4f9230
     * @note[short] Android
     */
    void toggleDartMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37d94c
     * @note[short] MacOS (Intel): 0x403110
     * @note[short] Windows: 0x4f8790
     * @note[short] Android
     */
    void toggleFlyMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37aef4
     * @note[short] MacOS (Intel): 0x400300
     * @note[short] Windows: 0x4fd180
     * @note[short] Android
     */
    void toggleGhostEffect(GhostType type);

    /**
     * @note[short] MacOS (ARM): 0x367b54
     * @note[short] MacOS (Intel): 0x3e9d90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void togglePlatformerMode(bool val);

    /**
     * @note[short] MacOS (ARM): 0x37ab68
     * @note[short] MacOS (Intel): 0x3ffec0
     * @note[short] Windows: 0x4fecb0
     * @note[short] Android
     */
    void togglePlayerScale(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37fd68
     * @note[short] MacOS (Intel): 0x405730
     * @note[short] Windows: 0x4f99d0
     * @note[short] Android
     */
    void toggleRobotMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37f9ac
     * @note[short] MacOS (Intel): 0x405360
     * @note[short] Windows: 0x4f9840
     * @note[short] Android
     */
    void toggleRollMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x380198
     * @note[short] MacOS (Intel): 0x405ba0
     * @note[short] Windows: 0x4f9d80
     * @note[short] Android
     */
    void toggleSpiderMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x37ea28
     * @note[short] MacOS (Intel): 0x404310
     * @note[short] Windows: 0x4f8dd0
     * @note[short] Android
     */
    void toggleSwingMode(bool enable, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x36d330
     * @note[short] MacOS (Intel): 0x3f01c0
     * @note[short] Windows: 0x4e9680
     * @note[short] Android
     */
    void toggleVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x383c28
     * @note[short] MacOS (Intel): 0x40a040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void touchedObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x36d0d8
     * @note[short] MacOS (Intel): 0x3eff10
     * @note[short] Windows: 0x501880
     * @note[short] Android
     */
    void tryPlaceCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x373e84
     * @note[short] MacOS (Intel): 0x3f84f0
     * @note[short] Windows: 0x4ef9d0
     * @note[short] Android
     */
    void unrotateGameplayObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x374088
     * @note[short] MacOS (Intel): 0x3f8790
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unrotatePreSlopeObjects();

    /**
     * @note[short] MacOS (ARM): 0x367b4c
     * @note[short] MacOS (Intel): 0x3e9d80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCheckpointMode(bool enable);

    /**
     * @note[short] MacOS (Intel): 0x3efe40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCheckpointTest();

    /**
     * @note[short] MacOS (ARM): 0x374bc8
     * @note[short] MacOS (Intel): 0x3f9420
     * @note[short] Windows: 0x4f21f0
     * @note[short] Android
     */
    void updateCollide(PlayerCollisionDirection direction, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x375aa4
     * @note[short] MacOS (Intel): 0x3fa3e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCollideBottom(float y, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x375c94
     * @note[short] MacOS (Intel): 0x3fa620
     * @note[short] Windows: 0x4f2400
     * @note[short] Android
     */
    void updateCollideLeft(float x, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x375c08
     * @note[short] MacOS (Intel): 0x3fa580
     * @note[short] Windows: 0x4f24a0
     * @note[short] Android
     */
    void updateCollideRight(float x, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x375a18
     * @note[short] MacOS (Intel): 0x3fa350
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCollideTop(float y, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x36bbf8
     * @note[short] MacOS (Intel): 0x3ee9d0
     * @note[short] Windows: 0x4f4f40
     * @note[short] Android
     */
    void updateDashAnimation();

    /**
     * @note[short] MacOS (ARM): 0x378dcc
     * @note[short] MacOS (Intel): 0x3fdda0
     * @note[short] Windows: 0x4f43c0
     * @note[short] Android
     */
    void updateDashArt();

    /**
     * @note[short] MacOS (ARM): 0x36cf70
     * @note[short] MacOS (Intel): 0x3efd90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateEffects(float param);

    /**
     * @note[short] MacOS (ARM): 0x3811fc
     * @note[short] MacOS (Intel): 0x406d90
     * @note[short] Windows: 0x4fb750
     * @note[short] Android
     */
    void updateGlowColor();

    /**
     * @note[short] MacOS (ARM): 0x3844f8
     * @note[short] MacOS (Intel): 0x40a9e0
     * @note[short] Windows: 0x502570
     * @note[short] Android
     */
    void updateInternalActions(float dt);

    /**
     * @note[short] MacOS (ARM): 0x1b28e4
     * @note[short] MacOS (Intel): 0x3eb2b0
     * @note[short] Windows: 0x4e9b80
     * @note[short] Android
     */
    void updateJump(float dt);

    /**
     * @note[short] MacOS (ARM): 0x36bda4
     * @note[short] MacOS (Intel): 0x3eeb90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateJumpVariables();

    /**
     * @note[short] MacOS (ARM): 0x375b30
     * @note[short] MacOS (Intel): 0x3fa470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateLastGroundObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x36a7c4
     * @note[short] MacOS (Intel): 0x3ed1b0
     * @note[short] Windows: 0x4e8310
     * @note[short] Android
     */
    void updateMove(float dt);

    /**
     * @note[short] MacOS (ARM): 0x37d3a4
     * @note[short] MacOS (Intel): 0x402ae0
     * @note[short] Windows: 0x4f6bb0
     * @note[short] Android
     */
    void updatePlayerArt();

    /**
     * @note[short] MacOS (ARM): 0x37e7a4
     * @note[short] MacOS (Intel): 0x404060
     * @note[short] Windows: 0x4fc640
     * @note[short] Android
     */
    void updatePlayerBirdFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37f774
     * @note[short] MacOS (Intel): 0x405100
     * @note[short] Windows: 0x4fcd50
     * @note[short] Android
     */
    void updatePlayerDartFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x379ea0
     * @note[short] MacOS (Intel): 0x3fefb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerForce(cocos2d::CCPoint velocity, bool additive);

    /**
     * @note[short] MacOS (ARM): 0x37f0f8
     * @note[short] MacOS (Intel): 0x404a20
     * @note[short] Windows: 0x4fbfa0
     * @note[short] Android
     */
    void updatePlayerFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37d1e4
     * @note[short] MacOS (Intel): 0x402950
     * @note[short] Windows: 0x4fe840
     * @note[short] Android
     */
    void updatePlayerGlow();

    /**
     * @note[short] MacOS (ARM): 0x37df88
     * @note[short] MacOS (Intel): 0x4037b0
     * @note[short] Windows: 0x4fc410
     * @note[short] Android
     */
    void updatePlayerJetpackFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x3818cc
     * @note[short] MacOS (Intel): 0x407450
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePlayerRobotFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37fb3c
     * @note[short] MacOS (Intel): 0x4054f0
     * @note[short] Windows: 0x4fc8f0
     * @note[short] Android
     */
    void updatePlayerRollFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x37d758
     * @note[short] MacOS (Intel): 0x402f40
     * @note[short] Windows: 0x4fe7c0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updatePlayerScale();

    /**
     * @note[short] MacOS (ARM): 0x37dd58
     * @note[short] MacOS (Intel): 0x403560
     * @note[short] Windows: 0x4fc1e0
     * @note[short] Android
     */
    void updatePlayerShipFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x3818e4
     * @note[short] MacOS (Intel): 0x407470
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updatePlayerSpiderFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x366e48
     * @note[short] MacOS (Intel): 0x3e8ff0
     * @note[short] Windows: 0x4fcf80
     * @note[short] Android
     */
    void updatePlayerSpriteExtra(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x37ee30
     * @note[short] MacOS (Intel): 0x404750
     * @note[short] Windows: 0x4fcb20
     * @note[short] Android
     */
    void updatePlayerSwingFrame(int frame);

    /**
     * @note[short] MacOS (ARM): 0x382aec
     * @note[short] MacOS (Intel): 0x408770
     * @note[short] Windows: 0x4ff700
     * @note[short] Android
     */
    void updateRobotAnimationSpeed();

    /**
     * @note[short] MacOS (ARM): 0x3753e8
     * @note[short] MacOS (Intel): 0x3f9cd0
     * @note[short] Windows: 0x4ef390
     * @note[short] Android
     */
    void updateRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x36ccac
     * @note[short] MacOS (Intel): 0x3efac0
     * @note[short] Windows: 0x4ef5b0
     * @note[short] Android
     */
    void updateRotation(float dt, float rotation);

    /**
     * @note[short] MacOS (ARM): 0x375018
     * @note[short] MacOS (Intel): 0x8d960
     * @note[short] Windows: 0x4eefa0
     * @note[short] Android
     */
    void updateShipRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x366f2c
     * @note[short] MacOS (Intel): 0x3e90c0
     * @note[short] Windows: 0x4fd080
     * @note[short] Android
     */
    void updateShipSpriteExtra(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x374e9c
     * @note[short] MacOS (Intel): 0x3f9780
     * @note[short] Windows: 0x4eef20
     * @note[short] Android
     */
    void updateSlopeRotation(float dt);

    /**
     * @note[short] MacOS (ARM): 0x375014
     * @note[short] MacOS (Intel): 0x3f9900
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSlopeYVelocity(float yVelocity);

    /**
     * @note[short] MacOS (ARM): 0x36cef8
     * @note[short] MacOS (Intel): 0x3efd10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSpecial(float dt);

    /**
     * @note[short] MacOS (Intel): 0x3eebb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateStateVariables();

    /**
     * @note[short] MacOS (ARM): 0x3822c8
     * @note[short] MacOS (Intel): 0x407e40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateStaticForce(float rotation, float staticForce, bool additive);

    /**
     * @note[short] MacOS (ARM): 0x367dc8
     * @note[short] MacOS (Intel): 0x3ea020
     * @note[short] Windows: 0x4e6ee0
     * @note[short] Android
     */
    void updateStreakBlend(bool blend);

    /**
     * @note[short] MacOS (ARM): 0x367e4c
     * @note[short] MacOS (Intel): 0x3ea090
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateStreaks(float dt);

    /**
     * @note[short] MacOS (ARM): 0x37d7a4
     * @note[short] MacOS (Intel): 0x402f90
     * @note[short] Windows: 0x4f9080
     * @note[short] Android
     */
    void updateSwingFire();

    /**
     * @note[short] MacOS (ARM): 0x3675f8
     * @note[short] MacOS (Intel): 0x3e9870
     * @note[short] Windows: 0x4ff370
     * @note[short] Android
     */
    void updateTimeMod(float speed, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x382a7c
     * @note[short] MacOS (Intel): 0x408730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool usingWallLimitedMode();

    /**
     * @note[short] MacOS (ARM): 0x383ff4
     * @note[short] MacOS (Intel): 0x40a490
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void yStartDown();

    /**
     * @note[short] MacOS (ARM): 0x383fd4
     * @note[short] MacOS (Intel): 0x40a470
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void yStartUp();
    cocos2d::CCNode* m_mainLayer;
    bool m_wasTeleported;
    bool m_fixGravityBug;
    bool m_reverseSync;
    double m_yVelocityBeforeSlope;
    double m_dashX;
    double m_dashY;
    double m_dashAngle;
    double m_dashStartTime;
    DashRingObject* m_dashRing;
    double m_slopeStartTime;
    bool m_justPlacedStreak;
    GameObject* m_maybeLastGroundObject;
    cocos2d::CCDictionary* m_collisionLogTop;
    cocos2d::CCDictionary* m_collisionLogBottom;
    cocos2d::CCDictionary* m_collisionLogLeft;
    cocos2d::CCDictionary* m_collisionLogRight;
    int m_lastCollisionBottom;
    int m_lastCollisionTop;
    int m_lastCollisionLeft;
    int m_lastCollisionRight;
    union {
        int m_prevCollisionBottom{};
        int m_unk50C;
    };
    union {
        int m_prevCollisionTop{};
        int m_unk510;
    };
    GameObject* m_currentSlope2;
    GameObject* m_preLastGroundObject;
    float m_slopeAngle;
    bool m_slopeSlidingMaybeRotated;
    bool m_quickCheckpointMode;
    GameObject* m_collidedObject;
    GameObject* m_lastGroundObject;
    GameObject* m_collidingWithLeft;
    GameObject* m_collidingWithRight;
    int m_maybeSavedPlayerFrame;
    double m_scaleXRelated2;
    double m_groundYVelocity;
    double m_yVelocityRelated;
    double m_scaleXRelated3;
    bool m_collidingBetweenSteps;
    double m_scaleXRelated4;
    double m_scaleXRelated5;
    bool m_isCollidingWithSlope;
    cocos2d::CCSprite* m_dashFireSprite;
    bool m_isBallRotating;
    union {
        bool m_noPotentialSlope{};
        bool m_unk669;
    };
    GameObject* m_currentPotentialSlope;
    GameObject* m_currentSlope;
    union {
        double m_slopeCenterOffset{};
        double unk_584;
    };
    int m_collidingWithSlopeId;
    union {
        bool m_slopeIsDownhill{};
        bool m_slopeFlipGravityRelated;
    };
    cocos2d::CCArray* m_particleSystems;
    float m_slopeAngleRadians;
    std::unordered_map<int, GJPointDouble> m_rotateObjectsRelated;
    std::unordered_map<int, GameObject*> m_potentialSlopeMap;
    float m_rotationSpeed;
    float m_rotateSpeed;
    bool m_isRotating;
    union {
        bool m_ballSpinning{};
        bool m_isBallRotating2;
    };
    bool m_hasGlow;
    bool m_isHidden;
    GhostType m_ghostType;
    GhostTrailEffect* m_ghostTrail;
    cocos2d::CCSprite* m_iconSprite;
    cocos2d::CCSprite* m_iconSpriteSecondary;
    cocos2d::CCSprite* m_iconSpriteWhitener;
    cocos2d::CCSprite* m_iconGlow;
    cocos2d::CCSprite* m_vehicleSprite;
    cocos2d::CCSprite* m_vehicleSpriteSecondary;
    cocos2d::CCSprite* m_birdVehicle;
    cocos2d::CCSprite* m_vehicleSpriteWhitener;
    cocos2d::CCSprite* m_vehicleGlow;
    PlayerFireBoostSprite* m_swingFireMiddle;
    PlayerFireBoostSprite* m_swingFireBottom;
    PlayerFireBoostSprite* m_swingFireTop;
    cocos2d::CCSprite* m_dashSpritesContainer;
    cocos2d::CCMotionStreak* m_regularTrail;
    cocos2d::CCMotionStreak* m_shipStreak;
    HardStreak* m_waveTrail;
    double m_speedMultiplier;
    double m_yStart;
    double m_gravity;
    float m_trailingParticleLife;
    float m_unk648;
    double m_gameModeChangedTime;
    union {
        bool m_ringJumpedSincePress{};
        bool m_padRingRelated;
    };
    bool m_maybeReducedEffects;
    union {
        bool m_hasStartedFalling{};
        bool m_maybeIsFalling;
    };
    bool m_shouldTryPlacingCheckpoint;
    bool m_playEffects;
    bool m_maybeCanRunIntoBlocks;
    bool m_hasGroundParticles;
    bool m_hasShipParticles;
    union {
        bool m_landedSinceFlip{};
        bool m_isOnGround3;
    };
    bool m_checkpointTimeout;
    double m_lastCheckpointTime;
    double m_lastJumpTime;
    double m_lastFlipTime;
    double m_flashTime;
    float m_flashDuration;
    float m_flashDelay;
    cocos2d::ccColor3B m_flashMainColor;
    cocos2d::ccColor3B m_flashSecondColor;
    double m_lastSpiderFlipTime;
    bool m_unkBool5;
    bool m_maybeIsVehicleGlowing;
    bool m_switchWaveTrailColor;
    bool m_practiceDeathEffect;
    double m_accelerationOrSpeed;
    double m_snapDistance;
    union {
        bool m_usedRingThisStep{};
        bool m_ringJumpRelated;
    };
    std::unordered_set<int> m_usedRings;
    GameObject* m_objectSnappedTo;
    CheckpointObject* m_pendingCheckpoint;
    int m_onFlyCheckpointTries;
    GJRobotSprite* m_robotSprite;
    GJSpiderSprite* m_spiderSprite;
    union {
        bool m_specialGroundHit{};
        bool m_maybeSpriteRelated;
    };
    cocos2d::CCParticleSystemQuad* m_playerGroundParticles;
    cocos2d::CCParticleSystemQuad* m_trailingParticles;
    cocos2d::CCParticleSystemQuad* m_shipClickParticles;
    cocos2d::CCParticleSystemQuad* m_vehicleGroundParticles;
    cocos2d::CCParticleSystemQuad* m_ufoClickParticles;
    cocos2d::CCParticleSystemQuad* m_robotBurstParticles;
    cocos2d::CCParticleSystemQuad* m_dashParticles;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles1;
    cocos2d::CCParticleSystemQuad* m_swingBurstParticles2;
    bool m_useLandParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles0;
    cocos2d::CCParticleSystemQuad* m_landParticles1;
    float m_landParticlesAngle;
    union {
        float m_landParticlesGravityY{};
        float m_landParticleRelatedY;
    };
    int m_playerStreak;
    float m_streakStrokeWidth;
    bool m_disableStreakTint;
    bool m_alwaysShowStreak;
    ShipStreak m_shipStreakType;
    double m_slopeRotation;
    double m_currentSlopeYVelocity;
    union {
        double m_lastSlopeSnapY{};
        double m_unk3d0;
    };
    union {
        double m_lastSlopeSnapOffset{};
        double m_blackOrbRelated;
    };
    union {
        bool m_lastSlopeSnapAtFarEdge{};
        bool m_unk3e0;
    };
    union {
        bool m_lastSlopeSnapAtNearEdge{};
        bool m_unk3e1;
    };
    bool m_isAccelerating;
    bool m_isCurrentSlopeTop;
    double m_collidedTopMinY;
    double m_collidedBottomMaxY;
    double m_collidedLeftMaxX;
    double m_collidedRightMinX;
    bool m_fadeOutStreak;
    bool m_canPlaceCheckpoint;
    cocos2d::ccColor3B m_originalMainColor;
    cocos2d::ccColor3B m_originalSecondColor;
    bool m_hasCustomGlowColor;
    cocos2d::ccColor3B m_glowColor;
    bool m_maybeIsColliding;
    bool m_jumpBuffered;
    bool m_stateRingJump;
    bool m_wasJumpBuffered;
    bool m_wasRobotJump;
    unsigned char m_stateJumpBuffered;
    union {
        bool m_statePreJump{};
        bool m_stateRingJump2;
    };
    bool m_touchedRing;
    bool m_touchedCustomRing;
    bool m_touchedGravityPortal;
    union {
        bool m_brokeBlockSincePress{};
        bool m_maybeTouchedBreakableBlock;
    };
    geode::SeedValueRSV m_jumpRelatedAC2;
    bool m_touchedPad;
    double m_yVelocity;
    double m_fallSpeed;
    bool m_isOnSlope;
    bool m_wasOnSlope;
    float m_slopeVelocity;
    union {
        bool m_slopeResnapped{};
        bool m_maybeUpsideDownSlope;
    };
    bool m_isShip;
    bool m_isBird;
    bool m_isBall;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isUpsideDown;
    bool m_isDead;
    bool m_isOnGround;
    bool m_isGoingLeft;
    bool m_isSideways;
    bool m_isSwing;
    union {
        int m_reverseCooldown{};
        int m_reverseRelated;
    };
    double m_maybeReverseSpeed;
    union {
        double m_reverseSyncStep{};
        double m_maybeReverseAcceleration;
    };
    union {
        float m_ballRollSpeed{};
        float m_xVelocityRelated2;
    };
    bool m_isDashing;
    int m_dashFireFrame;
    int m_groundObjectMaterial;
    float m_vehicleSize;
    float m_playerSpeed;
    cocos2d::CCPoint m_shipRotation;
    cocos2d::CCPoint m_lastPortalPos;
    float m_unkUnused3;
    union {
        bool m_touchingGround{};
        bool m_isOnGround2;
    };
    double m_lastLandTime;
    union {
        float m_decelerationRamp{};
        float m_platformerVelocityRelated;
    };
    union {
        bool m_isRising{};
        bool m_maybeIsBoosted;
    };
    union {
        double m_lastGroundXDeltaTime{};
        double m_scaleXRelatedTime;
    };
    bool m_decreaseBoostSlide;
    bool m_unkA29;
    bool m_isLocked;
    bool m_controlsDisabled;
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    std::unordered_set<int> m_touchedRings;
    GameObject* m_lastActivatedPortal;
    bool m_hasEverJumped;
    bool m_hasEverHitRing;
    cocos2d::ccColor3B m_playerColor1;
    cocos2d::ccColor3B m_playerColor2;
    cocos2d::CCPoint m_position;
    bool m_isSecondPlayer;
    bool m_unkA99;
    double m_totalTime;
    bool m_isBeingSpawnedByDualPortal;
    float m_audioScale;
    float m_unkAngle1;
    union {
        float m_diagonalYStep{};
        float m_yVelocityRelated3;
    };
    bool m_defaultMiniIcon;
    bool m_swapColors;
    bool m_switchDashFireColor;
    int m_followRelated;
    std::vector<float> m_playerFollowFloats;
    union {
        float m_followSampleTimer{};
        float m_unk838;
    };
    int m_stateOnGround;
    union {
        float m_unusedFloatA80{};
        float m_stateUnk;
    };
    unsigned char m_stateNoStickX;
    unsigned char m_stateNoStickY;
    unsigned char m_stateUnk2;
    int m_stateBoostX;
    int m_stateBoostY;
    union {
        int m_stateNoWallPush{};
        int m_maybeStateForce2;
    };
    int m_stateScale;
    double m_platformerXVelocity;
    bool m_holdingRight;
    bool m_holdingLeft;
    bool m_leftPressedFirst;
    union {
        double m_platformXMove{};
        double m_scaleXRelated;
    };
    union {
        bool m_hasPlatformMomentum{};
        bool m_maybeHasStopped;
    };
    union {
        float m_platformMomentum{};
        float m_xVelocityRelated;
    };
    union {
        bool m_forcedSlopeSlide{};
        bool m_maybeGoingCorrectSlopeDirection;
    };
    bool m_isSliding;
    union {
        double m_slopeSpeedBonus{};
        double m_maybeSlopeForce;
    };
    bool m_isOnIce;
    union {
        double m_platformRideTime{};
        double m_physDeltaRelated;
    };
    union {
        bool m_wasTouchingGround{};
        bool m_isOnGround4;
    };
    union {
        int m_slopeJumpCount{};
        int m_maybeSlidingTime;
    };
    union {
        double m_slopeJumpResetTime{};
        double m_maybeSlidingStartTime;
    };
    double m_changedDirectionsTime;
    double m_slopeEndTime;
    bool m_isMoving;
    union {
        bool m_forcedSlideLeft{};
        bool m_platformerMovingLeft;
    };
    union {
        bool m_forcedSlideRight{};
        bool m_platformerMovingRight;
    };
    union {
        bool m_lastSlideLeft{};
        bool m_isSlidingRight;
    };
    union {
        double m_slideSlopeAngle{};
        double m_maybeChangedDirectionAngle;
    };
    double m_unkUnused2;
    bool m_isPlatformer;
    int m_stateNoAutoJump;
    int m_stateDartSlide;
    int m_stateHitHead;
    int m_stateFlipGravity;
    float m_gravityMod;
    int m_stateForce;
    cocos2d::CCPoint m_stateForceVector;
    bool m_affectedByForces;
    std::map<int, bool> m_touchedForceIds;
    union {
        float m_lastMovedTime{};
        float m_somethingPlayerSpeedTime;
    };
    float m_playerSpeedAC;
    bool m_fixRobotJump;
    std::map<int, bool> m_holdingButtons;
    bool m_inputsLocked;
    std::string m_currentRobotAnimation;
    bool m_gv0123;
    int m_iconRequestID;
    cocos2d::CCSpriteBatchNode* m_robotBatchNode;
    cocos2d::CCSpriteBatchNode* m_spiderBatchNode;
    cocos2d::CCArray* m_unk958;
    PlayerFireBoostSprite* m_robotFire;
    int m_unkUnused;
    GJBaseGameLayer* m_gameLayer;
    cocos2d::CCLayer* m_parentLayer;
    GJActionManager* m_actionManager;
    bool m_isOutOfBounds;
    float m_fallStartY;
    bool m_disablePlayerSqueeze;
    bool m_robotAnimation1Enabled;
    bool m_robotAnimation2Enabled;
    bool m_spiderAnimationEnabled;
    bool m_ignoreDamage;
    bool m_enable22Changes;
    bool m_enableImpulseFix;
};
