#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCParticleSystem.hpp>
#include <Geode/binding/CCSpritePlus.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class GameObject : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "GameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameObject, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): 0x18afb8
     * @note[short] MacOS (Intel): 0x1d67f0
     * @note[short] Windows: 0x208980
     * @note[short] Android: Rebinded
     */
     GameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a63ac
     * @note[short] MacOS (Intel): 0x66ea30
     * @note[short] Windows: 0x288810
     * @note[short] iOS: 0x2f13d4
     * @note[short] Android: Rebinded
     */
     ~GameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a6958
     * @note[short] MacOS (Intel): 0x6736c0
     * @note[short] Windows: 0x28ada0
     * @note[short] Android
     */
    static GameObject* createWithFrame(char const* name);

    /**
     * @note[short] MacOS (ARM): 0x5a6484
     * @note[short] MacOS (Intel): 0x66eb50
     * @note[short] Windows: 0x288930
     * @note[short] Android
     */
    static GameObject* createWithKey(int key);

    /**
     * @note[short] MacOS (ARM): 0x5bb020
     * @note[short] MacOS (Intel): 0x69d430
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static bool isBasicEnterEffect(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b1424
     * @note[short] MacOS (Intel): 0x691390
     * @note[short] Windows: 0x29a210
     * @note[short] Android
     */
    static GameObject* objectFromVector(std::vector<std::string>& propValues, std::vector<void*>& propIsPresent, GJBaseGameLayer* gameLayer, bool lowDetail);

    /**
     * @note[short] MacOS (ARM): 0x5a639c
     * @note[short] MacOS (Intel): 0x66ea20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static void resetMID();

    /**
     * @note[short] MacOS (ARM): 0x5a8b0c
     * @note[short] MacOS (Intel): 0x67bb80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f390c
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x5ada9c
     * @note[short] MacOS (Intel): 0x68d960
     * @note[short] Windows: 0x295420
     * @note[short] iOS: 0x2f87fc
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x5adb34
     * @note[short] MacOS (Intel): 0x68d9f0
     * @note[short] Windows: 0x295510
     * @note[short] iOS: 0x2f8894
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x5adbcc
     * @note[short] MacOS (Intel): 0x68da80
     * @note[short] Windows: 0x295600
     * @note[short] iOS: 0x2f892c
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5ad4fc
     * @note[short] MacOS (Intel): 0x68d420
     * @note[short] Windows: 0x294d10
     * @note[short] iOS: 0x2f82f4
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x5ae204
     * @note[short] MacOS (Intel): 0x68e170
     * @note[short] Windows: 0x295d10
     * @note[short] iOS: 0x2f8e90
     * @note[short] Android
     */
    virtual void setVisible(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x5ad780
     * @note[short] MacOS (Intel): 0x68d690
     * @note[short] Windows: 0x294fc0
     * @note[short] iOS: 0x2f8500
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x5ad868
     * @note[short] MacOS (Intel): 0x68d760
     * @note[short] Windows: 0x295120
     * @note[short] iOS: 0x2f85d8
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
     * @note[short] MacOS (ARM): 0x5ad944
     * @note[short] MacOS (Intel): 0x68d820
     * @note[short] Windows: 0x295270
     * @note[short] iOS: 0x2f86a4
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x5adee8
     * @note[short] MacOS (Intel): 0x68ddd0
     * @note[short] Windows: 0x2958c0
     * @note[short] iOS: 0x2f8ba8
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x5a6bec
     * @note[short] MacOS (Intel): 0x673940
     * @note[short] Windows: 0x28ae30
     * @note[short] iOS: 0x2f1ed8
     * @note[short] Android
     */
    virtual bool initWithTexture(cocos2d::CCTexture2D* texture);

    /**
     * @note[short] MacOS (ARM): 0x5b8a4c
     * @note[short] MacOS (Intel): 0x69a770
     * @note[short] Windows: 0x29dd20
     * @note[short] iOS: 0x2fe48c
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5ada04
     * @note[short] MacOS (Intel): 0x68d8e0
     * @note[short] Windows: 0x295390
     * @note[short] iOS: 0x2f8764
     * @note[short] Android
     */
    virtual void setFlipX(bool flipX);

    /**
     * @note[short] MacOS (ARM): 0x5ada50
     * @note[short] MacOS (Intel): 0x68d920
     * @note[short] Windows: 0x2953d0
     * @note[short] iOS: 0x2f87b0
     * @note[short] Android
     */
    virtual void setFlipY(bool flipY);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x5a8b10
     * @note[short] MacOS (Intel): 0x67bb90
     * @note[short] Windows: 0x28e020
     * @note[short] iOS: 0x2f3910
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x3aebc4
     * @note[short] MacOS (Intel): 0x438860
     * @note[short] Windows: 0x2acb40
     * @note[short] iOS: 0x34d330
     * @note[short] Android
     */
    virtual void setupCustomSprites(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x5af6b8
     * @note[short] MacOS (Intel): 0x68f4c0
     * @note[short] Windows: 0x298e20
     * @note[short] iOS: 0x2f9f5c
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x5a8100
     * @note[short] MacOS (Intel): 0x67b040
     * @note[short] Windows: 0x28d880
     * @note[short] iOS: 0x2f2f94
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x5a85c4
     * @note[short] MacOS (Intel): 0x67b670
     * @note[short] Windows: 0x28dcd0
     * @note[short] iOS: 0x2f33d0
     * @note[short] Android
     */
    virtual void activateObject();

    /**
     * @note[short] MacOS (ARM): 0x5a8938
     * @note[short] MacOS (Intel): 0x67b9d0
     * @note[short] Windows: 0x28dd80
     * @note[short] iOS: 0x2f3754
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x5acecc
     * @note[short] MacOS (Intel): 0x68cd40
     * @note[short] Windows: 0x2947d0
     * @note[short] iOS: 0x2f7d88
     * @note[short] Android
     */
    virtual void transferObjectRect(cocos2d::CCRect& rect);

    /**
     * @note[short] MacOS (ARM): 0x5acf4c
     * @note[short] MacOS (Intel): 0x68cdb0
     * @note[short] Windows: 0x294820
     * @note[short] iOS: 0x2f7e08
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x5acf60
     * @note[short] MacOS (Intel): 0x68cde0
     * @note[short] Windows: 0x294840
     * @note[short] iOS: 0x2f7e1c
     * @note[short] Android
     */
    virtual cocos2d::CCRect getObjectRect(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x5ad148
     * @note[short] MacOS (Intel): 0x68d010
     * @note[short] Windows: 0x2949e0
     * @note[short] iOS: 0x2f7ff4
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectRect2(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x5ad21c
     * @note[short] MacOS (Intel): 0x68d0e0
     * @note[short] Windows: 0x294a90
     * @note[short] iOS: 0x2f8084
     * @note[short] Android
     */
    virtual cocos2d::CCRect const& getObjectTextureRect();

    /**
     * @note[short] MacOS (ARM): 0x5ad46c
     * @note[short] MacOS (Intel): 0x68d360
     * @note[short] Windows: 0x294cd0
     * @note[short] iOS: 0x2f8274
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getRealPosition();

    /**
     * @note[short] MacOS (ARM): 0x5a7ff0
     * @note[short] MacOS (Intel): 0x67af30
     * @note[short] Windows: 0x28d700
     * @note[short] iOS: 0x2f2e84
     * @note[short] Android
     */
    virtual void setStartPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x5a8454
     * @note[short] MacOS (Intel): 0x67b4a0
     * @note[short] Windows: 0x28db90
     * @note[short] iOS: 0x2f32e0
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x5b2dbc
     * @note[short] MacOS (Intel): 0x693300
     * @note[short] Windows: 0x29c200
     * @note[short] iOS: 0x2fc910
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x5ae350
     * @note[short] MacOS (Intel): 0x68e2d0
     * @note[short] Windows: 0x295e30
     * @note[short] iOS: 0x2f8fdc
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x5ae928
     * @note[short] MacOS (Intel): 0x68e8e0
     * @note[short] Windows: 0x296350
     * @note[short] iOS: 0x2f94a0
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x5ae998
     * @note[short] MacOS (Intel): 0x68e950
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2f94f8
     * @note[short] Android
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x5ad9f4
     * @note[short] MacOS (Intel): 0x68d8c0
     * @note[short] Windows: 0x295370
     * @note[short] iOS: 0x2f8754
     * @note[short] Android
     */
    virtual bool isFlipX();

    /**
     * @note[short] MacOS (ARM): 0x5ad9fc
     * @note[short] MacOS (Intel): 0x68d8d0
     * @note[short] Windows: 0x295380
     * @note[short] iOS: 0x2f875c
     * @note[short] Android
     */
    virtual bool isFlipY();

    /**
     * @note[short] MacOS (ARM): 0x5adc64
     * @note[short] MacOS (Intel): 0x68db10
     * @note[short] Windows: 0x2956f0
     * @note[short] iOS: 0x2f89c4
     * @note[short] Android
     */
    virtual void setRScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x5adc98
     * @note[short] MacOS (Intel): 0x68db50
     * @note[short] Windows: 0x295730
     * @note[short] iOS: 0x2f89f8
     * @note[short] Android
     */
    virtual void setRScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x5adccc
     * @note[short] MacOS (Intel): 0x68db90
     * @note[short] Windows: 0x295770
     * @note[short] iOS: 0x2f8a2c
     * @note[short] Android
     */
    virtual void setRScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5add50
     * @note[short] MacOS (Intel): 0x68dc10
     * @note[short] Windows: 0x2957b0
     * @note[short] iOS: 0x2f8a70
     * @note[short] Android
     */
    virtual float getRScaleX();

    /**
     * @note[short] MacOS (ARM): 0x5add88
     * @note[short] MacOS (Intel): 0x68dc40
     * @note[short] Windows: 0x2957f0
     * @note[short] iOS: 0x2f8aa8
     * @note[short] Android
     */
    virtual float getRScaleY();

    /**
     * @note[short] MacOS (ARM): 0x5ad6f0
     * @note[short] MacOS (Intel): 0x68d610
     * @note[short] Windows: 0x294f30
     * @note[short] iOS: 0x2f847c
     * @note[short] Android
     */
    virtual void setRRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x5b8708
     * @note[short] MacOS (Intel): 0x69a490
     * @note[short] Windows: 0x29d9e0
     * @note[short] iOS: 0x2fe180
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5b89f8
     * @note[short] MacOS (Intel): 0x69a720
     * @note[short] Windows: 0x29dcd0
     * @note[short] iOS: 0x2fe434
     * @note[short] Android
     */
    virtual void setGlowColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5ae9b8
     * @note[short] MacOS (Intel): 0x68e990
     * @note[short] Windows: 0x296440
     * @note[short] iOS: 0x2f9518
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x5b8ad0
     * @note[short] MacOS (Intel): 0x69a7e0
     * @note[short] Windows: 0x29dda0
     * @note[short] iOS: 0x2fe518
     * @note[short] Android
     */
    virtual void selectObject(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x5b92d4
     * @note[short] MacOS (Intel): 0x69b210
     * @note[short] Windows: 0x29e410
     * @note[short] iOS: 0x2feb48
     * @note[short] Android
     */
    virtual OBB2D* getOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x5b936c
     * @note[short] MacOS (Intel): 0x69b290
     * @note[short] Windows: 0x29e470
     * @note[short] iOS: 0x2febe0
     * @note[short] Android
     */
    virtual void updateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x5bf0dc
     * @note[short] MacOS (Intel): 0x6a3d30
     * @note[short] Windows: 0x29e3f0
     * @note[short] iOS: 0x3028dc
     * @note[short] Android
     */
    virtual float getObjectRotation();

    /**
     * @note[short] MacOS (ARM): 0x5b9d84
     * @note[short] MacOS (Intel): 0x69be10
     * @note[short] Windows: 0x29ef20
     * @note[short] iOS: 0x2ff458
     * @note[short] Android
     */
    virtual void updateMainColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5ba288
     * @note[short] MacOS (Intel): 0x69c300
     * @note[short] Windows: 0x29ef30
     * @note[short] iOS: 0x2ff638
     * @note[short] Android
     */
    virtual void updateSecondaryColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5afda0
     * @note[short] MacOS (Intel): 0x68fba0
     * @note[short] Windows: 0x2997d0
     * @note[short] iOS: 0x2fa594
     * @note[short] Android
     */
    virtual int addToGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x5afe70
     * @note[short] MacOS (Intel): 0x68fc50
     * @note[short] Windows: 0x299900
     * @note[short] iOS: 0x2fa640
     * @note[short] Android
     */
    virtual void removeFromGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b8544
     * @note[short] MacOS (Intel): 0x69a2d0
     * @note[short] Windows: 0x29d830
     * @note[short] iOS: 0x2fe028
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x18a9d4
     * @note[short] MacOS (Intel): 0x1d5ff0
     * @note[short] Windows: 0x208dc0
     * @note[short] iOS: 0x2cb854
     * @note[short] Android
     */
    virtual float spawnXPosition();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): 0x5b8930
     * @note[short] MacOS (Intel): 0x69a660
     * @note[short] Windows: 0x29dbc0
     * @note[short] iOS: 0x2fe36c
     * @note[short] Android
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x5ae17c
     * @note[short] MacOS (Intel): 0x68e0e0
     * @note[short] Windows: 0x295b60
     * @note[short] iOS: 0x2f8e08
     * @note[short] Android
     */
    virtual void updateParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateMainParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateSecondaryParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canReverse();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canBeOrdered();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1ffca0
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* label);

    /**
     * @note[short] MacOS (ARM): 0x5bb05c
     * @note[short] MacOS (Intel): 0x69d460
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3000d4
     * @note[short] Android
     */
    virtual bool shouldDrawEditorHitbox();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual bool canMultiActivate(bool multiActivate);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTextKerning(int kerning);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual int getTextKerning();

    /**
     * @note[short] MacOS (ARM): 0x18a9f4
     * @note[short] MacOS (Intel): 0x1d6010
     * @note[short] Windows: 0x208de0
     * @note[short] iOS: 0x2cb874
     * @note[short] Android
     */
    virtual bool getObjectRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x18a9fc
     * @note[short] MacOS (Intel): 0x1d6020
     * @note[short] Windows: 0x208df0
     * @note[short] iOS: 0x2cb87c
     * @note[short] Android
     */
    virtual void setObjectRectDirty(bool dirty);

    /**
     * @note[short] MacOS (ARM): 0x18aa04
     * @note[short] MacOS (Intel): 0x1d6030
     * @note[short] Windows: 0x208e00
     * @note[short] iOS: 0x2cb884
     * @note[short] Android
     */
    virtual bool getOrientedRectDirty() const ;

    /**
     * @note[short] MacOS (ARM): 0x18aa0c
     * @note[short] MacOS (Intel): 0x1d6040
     * @note[short] Windows: 0x208e10
     * @note[short] iOS: 0x2cb88c
     * @note[short] Android
     */
    virtual void setOrientedRectDirty(bool dirty);

    /**
     * @note[short] MacOS (ARM): 0x18aa14
     * @note[short] MacOS (Intel): 0x1d6050
     * @note[short] Windows: 0x208e20
     * @note[short] iOS: 0x2cb894
     * @note[short] Android
     */
    virtual GameObjectType getType() const ;

    /**
     * @note[short] MacOS (ARM): 0x18aa1c
     * @note[short] MacOS (Intel): 0x1d6060
     * @note[short] Windows: 0x208e30
     * @note[short] iOS: 0x2cb89c
     * @note[short] Android
     */
    virtual void setType(GameObjectType type);

    /**
     * @note[short] MacOS (ARM): 0x18aa24
     * @note[short] MacOS (Intel): 0x1d6070
     * @note[short] Windows: 0x208e40
     * @note[short] iOS: 0x2cb8a4
     * @note[short] Android
     */
    virtual cocos2d::CCPoint getStartPos() const ;

    /**
     * @note[short] MacOS (ARM): 0x5a7540
     * @note[short] MacOS (Intel): 0x6760e0
     * @note[short] Windows: 0x28b9d0
     * @note[short] Android
     */
    void addColorSprite(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5a8714
     * @note[short] MacOS (Intel): 0x67b7c0
     * @note[short] Windows: 0x299030
     * @note[short] Android
     */
    void addColorSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x5af844
     * @note[short] MacOS (Intel): 0x68f630
     * @note[short] Windows: 0x299220
     * @note[short] Android
     */
    void addColorSpriteToSelf();

    /**
     * @note[short] MacOS (ARM): 0x5ac8ac
     * @note[short] MacOS (Intel): 0x68c780
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomBlackChild(std::string frame, float opacity, bool color);

    /**
     * @note[short] MacOS (ARM): 0x5aca94
     * @note[short] MacOS (Intel): 0x68c920
     * @note[short] Windows: 0x294420
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomChild(std::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x5acb3c
     * @note[short] MacOS (Intel): 0x68c9c0
     * @note[short] Windows: 0x2944e0
     * @note[short] Android
     */
    cocos2d::CCSprite* addCustomColorChild(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5a73e8
     * @note[short] MacOS (Intel): 0x675f70
     * @note[short] Windows: 0x28b880
     * @note[short] Android
     */
    void addEmptyGlow();

    /**
     * @note[short] MacOS (ARM): 0x5a6cf4
     * @note[short] MacOS (Intel): 0x673a50
     * @note[short] Windows: 0x28b0d0
     * @note[short] Android
     */
    void addGlow(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5accd8
     * @note[short] MacOS (Intel): 0x68cb60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalChild(cocos2d::CCSprite* parent, std::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x5acc14
     * @note[short] MacOS (Intel): 0x68cab0
     * @note[short] Windows: 0x294610
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalCustomColorChild(std::string frame, cocos2d::CCPoint offset, int zOrder);

    /**
     * @note[short] MacOS (ARM): 0x5acd7c
     * @note[short] MacOS (Intel): 0x68cbf0
     * @note[short] Windows: 0x2946f0
     * @note[short] Android
     */
    cocos2d::CCSprite* addInternalGlowChild(std::string frame, cocos2d::CCPoint offset);

    /**
     * @note[short] MacOS (ARM): 0x5baa80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addNewSlope01(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x5bab88
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addNewSlope01Glow(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x5baccc
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addNewSlope02(bool dontDraw);

    /**
     * @note[short] MacOS (ARM): 0x5badd4
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addNewSlope02Glow(bool dontDraw);

    /**
     * @note[short] Windows: 0x294e90
     * @note[short] Android
     */
    void addRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x5ad684
     * @note[short] MacOS (Intel): 0x68d5b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addRotation(float rotationX, float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x5b0030
     * @note[short] MacOS (Intel): 0x68fe10
     * @note[short] Windows: 0x299a20
     * @note[short] Android
     */
    void addToColorGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x5addc0
     * @note[short] MacOS (Intel): 0x68dc70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToCustomScaleX(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5adde8
     * @note[short] MacOS (Intel): 0x68dcb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToCustomScaleY(float scale);

    /**
     * @note[short] MacOS (ARM): 0x5b0170
     * @note[short] MacOS (Intel): 0x68ff60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToOpacityGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x5ad3e8
     * @note[short] MacOS (Intel): 0x68d2a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToTempOffset(double offsetX, double offsetY);

    /**
     * @note[short] MacOS (ARM): 0x5a6c20
     * @note[short] MacOS (Intel): 0x673970
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void assignUniqueID();

    /**
     * @note[short] MacOS (ARM): 0x5aff9c
     * @note[short] MacOS (Intel): 0x68fd70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool belongsToGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0x5b9330
     * @note[short] MacOS (Intel): 0x69b260
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void calculateOrientedBox();

    /**
     * @note[short] MacOS (ARM): 0x5b97fc
     * @note[short] MacOS (Intel): 0x69b750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canChangeCustomColor();

    /**
     * @note[short] MacOS (ARM): 0x5b9830
     * @note[short] MacOS (Intel): 0x69b780
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canChangeMainColor();

    /**
     * @note[short] MacOS (ARM): 0x5b9844
     * @note[short] MacOS (Intel): 0x69b7a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canChangeSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x5afcf8
     * @note[short] MacOS (Intel): 0x68fae0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canRotateFree();

    /**
     * @note[short] MacOS (ARM): 0x5b9e88
     * @note[short] MacOS (Intel): 0x69bf20
     * @note[short] Windows: 0x29ef40
     * @note[short] Android
     */
    const cocos2d::ccColor3B& colorForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x5ab9e4
     * @note[short] MacOS (Intel): 0x686ba0
     * @note[short] Windows: 0x293ef0
     * @note[short] Android
     */
    void commonInteractiveSetup();

    /**
     * @note[short] MacOS (Intel): 0xd50a0
     * @note[short] Windows: 0x28ae70
     * @note[short] Android
     */
    void commonSetup();

    /**
     * @note[short] MacOS (ARM): 0x5aff24
     * @note[short] MacOS (Intel): 0x68fd00
     * @note[short] Windows: 0x299990
     * @note[short] Android
     */
    void copyGroups(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x58ce30
     * @note[short] MacOS (Intel): 0x686c60
     * @note[short] Windows: 0x295be0
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createAndAddParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createColorGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x5a7354
     * @note[short] MacOS (Intel): 0x675ed0
     * @note[short] Windows: 0x28b8f0
     * @note[short] Android
     */
    void createGlow(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5afd40
     * @note[short] MacOS (Intel): 0x68fb40
     * @note[short] Windows: 0x299700
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createGroupContainer(int size);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void createOpacityGroupContainer(int size);

    /**
     * @note[short] MacOS (ARM): 0x5a6c3c
     * @note[short] MacOS (Intel): 0x673990
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createSpriteColor(int type);

    /**
     * @note[short] MacOS (ARM): 0x5b8f9c
     * @note[short] MacOS (Intel): 0x69abf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deselectObject();

    /**
     * @note[short] MacOS (ARM): 0x5ae99c
     * @note[short] MacOS (Intel): 0x68e960
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void destroyObject();

    /**
     * @note[short] MacOS (ARM): 0x5af938
     * @note[short] MacOS (Intel): 0x68f730
     * @note[short] Windows: 0x299320
     * @note[short] Android
     */
    void determineSlopeDirection();

    /**
     * @note[short] MacOS (ARM): 0x5ade10
     * @note[short] MacOS (Intel): 0x68dcf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool didScaleXChange();

    /**
     * @note[short] MacOS (ARM): 0x5ade40
     * @note[short] MacOS (Intel): 0x68dd20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool didScaleYChange();

    /**
     * @note[short] MacOS (ARM): 0x5acebc
     * @note[short] MacOS (Intel): 0x68cd30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dirtifyObjectPos();

    /**
     * @note[short] MacOS (ARM): 0x5aceb0
     * @note[short] MacOS (Intel): 0x68cd20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dirtifyObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x5aea04
     * @note[short] MacOS (Intel): 0x68ea20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disableObject();

    /**
     * @note[short] MacOS (Intel): 0x687360
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool dontCountTowardsLimit();

    /**
     * @note[short] MacOS (ARM): 0x5b9a4c
     * @note[short] MacOS (Intel): 0x69ba30
     * @note[short] Windows: 0x29eb90
     * @note[short] Android
     */
    void duplicateAttributes(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5b99b4
     * @note[short] MacOS (Intel): 0x69b980
     * @note[short] Windows: 0x29eab0
     * @note[short] Android
     */
    void duplicateColorMode(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5b9af0
     * @note[short] MacOS (Intel): 0x69bb10
     * @note[short] Windows: 0x29ecd0
     * @note[short] Android
     */
    void duplicateValues(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5b8e64
     * @note[short] MacOS (Intel): 0x69ab20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForCustomMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b8c90
     * @note[short] MacOS (Intel): 0x69a9c0
     * @note[short] Windows: 0x29df70
     * @note[short] Android
     */
    cocos2d::ccColor3B editorColorForMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b95bc
     * @note[short] MacOS (Intel): 0x69b530
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void fastRotateObject(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x5ba4b8
     * @note[short] MacOS (Intel): 0x69c550
     * @note[short] Windows: 0x29f070
     * @note[short] Android
     */
    cocos2d::ccColor3B const& getActiveColorForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x5b850c
     * @note[short] MacOS (Intel): 0x69a2a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    const char* getBallFrame(int index);

    /**
     * @note[short] MacOS (ARM): 0x5ace4c
     * @note[short] MacOS (Intel): 0x68ccb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getBoundingRect();

    /**
     * @note[short] MacOS (ARM): 0x5ad058
     * @note[short] MacOS (Intel): 0x68cf10
     * @note[short] Windows: 0x29e6e0
     * @note[short] Android
     */
    cocos2d::CCPoint const& getBoxOffset();

    /**
     * @note[short] Windows: 0x28d580
     * @note[short] Android
     */
    std::string getColorFrame(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5ba8c8
     * @note[short] MacOS (Intel): 0x69cd10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getColorIndex();

    /**
     * @note[short] MacOS (ARM): 0x5b0a9c
     * @note[short] MacOS (Intel): 0x4ee800
     * @note[short] Windows: 0x299db0
     * @note[short] Android
     */
    std::string getColorKey(bool isMainColor, bool colorGroups);

    /**
     * @note[short] MacOS (ARM): 0x5afd28
     * @note[short] MacOS (Intel): 0x68fb10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    ZLayer getCustomZLayer();

    /**
     * @note[short] Windows: 0x28d640
     * @note[short] Android
     */
    std::string getGlowFrame(std::string frame);

    /**
     * @note[short] MacOS (ARM): 0x5b0220
     * @note[short] MacOS (Intel): 0x690000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool getGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x5aff04
     * @note[short] MacOS (Intel): 0x68fce0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getGroupID(int index);

    /**
     * @note[short] MacOS (ARM): 0x5b025c
     * @note[short] MacOS (Intel): 0x690050
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getGroupString();

    /**
     * @note[short] MacOS (ARM): 0x5ba678
     * @note[short] MacOS (Intel): 0x69c730
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint const& getLastPosition();

    /**
     * @note[short] MacOS (ARM): 0x5b97ec
     * @note[short] MacOS (Intel): 0x69b730
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJSpriteColor* getMainColor();

    /**
     * @note[short] MacOS (ARM): 0x5b13e4
     * @note[short] MacOS (Intel): 0x691350
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getMainColorMode();

    /**
     * @note[short] MacOS (ARM): 0x5afb8c
     * @note[short] MacOS (Intel): 0x68f990
     * @note[short] Windows: 0x299560
     * @note[short] Android
     */
    int getObjectDirection();

    /**
     * @note[short] MacOS (ARM): 0x5ba9dc
     * @note[short] MacOS (Intel): 0x69ce10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getObjectRadius();

    /**
     * @note[short] MacOS (ARM): 0x5acf10
     * @note[short] MacOS (Intel): 0x68cd80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect* getObjectRectPointer();

    /**
     * @note[short] MacOS (ARM): 0x5a86fc
     * @note[short] MacOS (Intel): 0x67b7a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    ZLayer getObjectZLayer();

    /**
     * @note[short] MacOS (ARM): 0x5af82c
     * @note[short] MacOS (Intel): 0x68f610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getObjectZOrder();

    /**
     * @note[short] MacOS (ARM): 0x5ad1d8
     * @note[short] MacOS (Intel): 0x68d0a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCRect getOuterObjectRect();

    /**
     * @note[short] MacOS (ARM): 0x5ae8a4
     * @note[short] MacOS (Intel): 0x68e870
     * @note[short] Windows: 0x297b80
     * @note[short] Android
     */
    int getParentMode();

    /**
     * @note[short] MacOS (ARM): 0x5b9864
     * @note[short] MacOS (Intel): 0x69b7c0
     * @note[short] Windows: 0x29e9c0
     * @note[short] Android
     */
    GJSpriteColor* getRelativeSpriteColor(int type);

    /**
     * @note[short] MacOS (ARM): 0x5afbd8
     * @note[short] MacOS (Intel): 0x68f9d0
     * @note[short] Windows: 0x2995e0
     * @note[short] Android
     */
    cocos2d::CCPoint getScalePosDelta();

    /**
     * @note[short] MacOS (ARM): 0x5b97f4
     * @note[short] MacOS (Intel): 0x69b740
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GJSpriteColor* getSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x5b1404
     * @note[short] MacOS (Intel): 0x691370
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getSecondaryColorMode();

    /**
     * @note[short] MacOS (ARM): 0x5afb54
     * @note[short] MacOS (Intel): 0x68f950
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getSlopeAngle();

    /**
     * @note[short] MacOS (ARM): 0x5ad40c
     * @note[short] MacOS (Intel): 0x68d2d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getUnmodifiedPosition();

    /**
     * @note[short] MacOS (ARM): 0x5ba5a0
     * @note[short] MacOS (Intel): 0x69c640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B const& groupColor(cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x5b0914
     * @note[short] MacOS (Intel): 0x690630
     * @note[short] Windows: 0x299d30
     * @note[short] Android
     */
    float groupOpacityMod();

    /**
     * @note[short] MacOS (ARM): 0x5b0244
     * @note[short] MacOS (Intel): 0x690030
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void groupWasDisabled();

    /**
     * @note[short] MacOS (ARM): 0x5b0228
     * @note[short] MacOS (Intel): 0x690010
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void groupWasEnabled();

    /**
     * @note[short] MacOS (ARM): 0x5b99a4
     * @note[short] MacOS (Intel): 0x69b960
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x5ac0b0
     * @note[short] MacOS (Intel): 0x687a20
     * @note[short] Windows: 0x2a00a0
     * @note[short] Android
     */
    bool ignoreEditorDuration();

    /**
     * @note[short] MacOS (ARM): 0x5ace44
     * @note[short] MacOS (Intel): 0x68cca0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool ignoreEnter();

    /**
     * @note[short] MacOS (ARM): 0x5ace3c
     * @note[short] MacOS (Intel): 0x68cc90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool ignoreFade();

    /**
     * @note[short] MacOS (ARM): 0x5a69e8
     * @note[short] MacOS (Intel): 0x673730
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x5baf30
     * @note[short] MacOS (Intel): 0x69d350
     * @note[short] Windows: 0x2a0590
     * @note[short] Android
     */
    bool isBasicTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5b98dc
     * @note[short] MacOS (Intel): 0x69b830
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isColorObject();

    /**
     * @note[short] MacOS (ARM): 0x5ba874
     * @note[short] MacOS (Intel): 0x69ccc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isColorTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5bafa4
     * @note[short] MacOS (Intel): 0x69d3c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isConfigurablePortal();

    /**
     * @note[short] MacOS (ARM): 0x5ac2c0
     * @note[short] MacOS (Intel): 0x688570
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isEditorSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5b96ac
     * @note[short] MacOS (Intel): 0x69b610
     * @note[short] Windows: 0x29e820
     * @note[short] Android
     */
    bool isFacingDown();

    /**
     * @note[short] MacOS (ARM): 0x5b973c
     * @note[short] MacOS (Intel): 0x69b690
     * @note[short] Windows: 0x29e8e0
     * @note[short] Android
     */
    bool isFacingLeft();

    /**
     * @note[short] MacOS (ARM): 0x5baf18
     * @note[short] MacOS (Intel): 0x69d330
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isSettingsObject();

    /**
     * @note[short] MacOS (ARM): 0x5ba688
     * @note[short] MacOS (Intel): 0x69c760
     * @note[short] Windows: 0x29f650
     * @note[short] Android
     */
    bool isSpawnableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5baa08
     * @note[short] MacOS (Intel): 0x69ce60
     * @note[short] Windows: 0x29fa60
     * @note[short] Android
     */
    bool isSpecialObject();

    /**
     * @note[short] MacOS (ARM): 0x5ba954
     * @note[short] MacOS (Intel): 0x69cd90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isSpeedObject();

    /**
     * @note[short] MacOS (ARM): 0x5abf54
     * @note[short] MacOS (Intel): 0x6878e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isStoppableTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5abd58
     * @note[short] MacOS (Intel): 0x687370
     * @note[short] Windows: 0x29f1e0
     * @note[short] Android
     */
    bool isTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5b04b8
     * @note[short] MacOS (Intel): 0x690320
     * @note[short] Windows: 0x299b20
     * @note[short] Android
     */
    void loadGroupsFromString(std::string groupList);

    /**
     * @note[short] MacOS (ARM): 0x5ae9d0
     * @note[short] MacOS (Intel): 0x68e9c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void makeInvisible();

    /**
     * @note[short] MacOS (ARM): 0x5ae9ec
     * @note[short] MacOS (Intel): 0x68e9f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void makeVisible();

    /**
     * @note[short] MacOS (ARM): 0x5ba198
     * @note[short] MacOS (Intel): 0x69c240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float opacityModForMode(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x306b0
     * @note[short] MacOS (Intel): 0x67b740
     * @note[short] Windows: 0x298f50
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode);

    /**
     * @note[short] MacOS (ARM): 0x3aeb48
     * @note[short] MacOS (Intel): 0x4387f0
     * @note[short] Windows: 0x2acb10
     * @note[short] Android
     */
    std::string perspectiveColorFrame(char const* prefix, int index);

    /**
     * @note[short] MacOS (ARM): 0x3ae850
     * @note[short] MacOS (Intel): 0x438480
     * @note[short] Windows: 0x2aca00
     * @note[short] Android
     */
    std::string perspectiveFrame(char const* prefix, int index);

    /**
     * @note[short] MacOS (ARM): 0x1f1afc
     * @note[short] MacOS (Intel): 0x2484c0
     * @note[short] Windows: 0x2a7830
     * @note[short] Android
     */
    void playDestroyObjectAnim(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1f162c
     * @note[short] MacOS (Intel): 0x247fc0
     * @note[short] Windows: 0x2a7260
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* target, float offset, float duration, float randomValue1, float randomValue2);

    /**
     * @note[short] MacOS (ARM): 0x1f16b4
     * @note[short] MacOS (Intel): 0x248050
     * @note[short] Windows: 0x2a7350
     * @note[short] Android
     */
    void playPickupAnimation(cocos2d::CCSprite* target, float xOffset, float yOffset, float controlYOffset1, float controlYOffset2, float endYOffset, float duration, float fadeDelay, float fadeDuration, bool rotate, float randomValue1, float randomValue2);

    /**
     * @note[short] MacOS (ARM): 0x305270
     * @note[short] MacOS (Intel): 0x68ea60
     * @note[short] Windows: 0x296460
     * @note[short] iOS: 0x2f95ac
     * @note[short] Android
     */
    void playShineEffect();

    /**
     * @note[short] MacOS (ARM): 0x5ad484
     * @note[short] MacOS (Intel): 0x68d390
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void quickUpdatePosition();

    /**
     * @note[short] MacOS (ARM): 0x5ad4ec
     * @note[short] MacOS (Intel): 0x68d400
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void quickUpdatePosition2();

    /**
     * @note[short] MacOS (ARM): 0x5a7514
     * @note[short] MacOS (Intel): 0x6760b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x5a74d8
     * @note[short] MacOS (Intel): 0x676070
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeGlow();

    /**
     * @note[short] MacOS (ARM): 0x5af934
     * @note[short] MacOS (Intel): 0x68f720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reorderColorSprite();

    /**
     * @note[short] MacOS (ARM): 0x5b00e0
     * @note[short] MacOS (Intel): 0x68feb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x5a8388
     * @note[short] MacOS (Intel): 0x67b380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetGroupDisabled();

    /**
     * @note[short] MacOS (ARM): 0x5afefc
     * @note[short] MacOS (Intel): 0x68fcd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetGroups();

    /**
     * @note[short] MacOS (ARM): 0x5b995c
     * @note[short] MacOS (Intel): 0x69b8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetMainColorMode();

    /**
     * @note[short] MacOS (ARM): 0x5a85b4
     * @note[short] MacOS (Intel): 0x67b650
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetMoveOffset();

    /**
     * @note[short] MacOS (ARM): 0x5add10
     * @note[short] MacOS (Intel): 0x68dbd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetRScaleForced();

    /**
     * @note[short] MacOS (ARM): 0x5b9980
     * @note[short] MacOS (Intel): 0x69b920
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSecondaryColorMode();

    /**
     * @note[short] MacOS (ARM): 0x5ade70
     * @note[short] MacOS (Intel): 0x68dd50
     * @note[short] Windows: 0x295830
     * @note[short] Android
     */
    void setAreaOpacity(float step, float value, int index);

    /**
     * @note[short] MacOS (ARM): 0x5afd30
     * @note[short] MacOS (Intel): 0x68fb20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setCustomZLayer(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0x5ab9c4
     * @note[short] MacOS (Intel): 0x686b70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setDefaultMainColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5a7eb4
     * @note[short] MacOS (Intel): 0x67adf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setDefaultSecondaryColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5ae118
     * @note[short] MacOS (Intel): 0x68e060
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setGlowOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x5ba680
     * @note[short] MacOS (Intel): 0x69c740
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setLastPosition(cocos2d::CCPoint const& position);

    /**
     * @note[short] MacOS (ARM): 0x5b991c
     * @note[short] MacOS (Intel): 0x69b880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setMainColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b993c
     * @note[short] MacOS (Intel): 0x69b8b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setSecondaryColorMode(int id);

    /**
     * @note[short] MacOS (ARM): 0x5b86cc
     * @note[short] MacOS (Intel): 0x69a460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupColorSprite(int id, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x3cd9d4
     * @note[short] MacOS (Intel): 0x45e470
     * @note[short] Windows: 0x2c16b0
     * @note[short] Android
     */
    void setupPixelScale();

    /**
     * @note[short] MacOS (ARM): 0x5ac474
     * @note[short] MacOS (Intel): 0x6888d0
     * @note[short] Windows: 0x2a0640
     * @note[short] Android
     */
    void setupSpriteSize();

    /**
     * @note[short] MacOS (ARM): 0x5af5c0
     * @note[short] Windows: 0x28de70
     * @note[short] Android
     */
    bool shouldBlendColor(GJSpriteColor* color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x5abb74
     * @note[short] MacOS (Intel): 0x686d30
     * @note[short] Windows: 0x293fb0
     * @note[short] Android
     */
    bool shouldLockX();

    /**
     * @note[short] MacOS (ARM): 0x1f15d4
     * @note[short] MacOS (Intel): 0x247f50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldNotHideAnimFreeze();

    /**
     * @note[short] MacOS (ARM): 0x1f18b4
     * @note[short] MacOS (Intel): 0x248290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool shouldShowPickupEffects();

    /**
     * @note[short] MacOS (ARM): 0x5b90a0
     * @note[short] MacOS (Intel): 0x69b000
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool slopeFloorTop();

    /**
     * @note[short] MacOS (ARM): 0x5b9084
     * @note[short] MacOS (Intel): 0x69afe0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool slopeWallLeft();

    /**
     * @note[short] MacOS (ARM): 0x5b90bc
     * @note[short] MacOS (Intel): 0x69b020
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double slopeYPos(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x5b915c
     * @note[short] MacOS (Intel): 0x69b090
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    double slopeYPos(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x5b91cc
     * @note[short] MacOS (Intel): 0x69b0e0
     * @note[short] Windows: 0x29e2b0
     * @note[short] Android
     */
    double slopeYPos(float x);

    /**
     * @note[short] MacOS (ARM): 0x1f1924
     * @note[short] MacOS (Intel): 0x2482f0
     * @note[short] Windows: 0x2a75f0
     * @note[short] Android
     */
    void spawnDefaultPickupParticle(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (Intel): 0x2366e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBlendMode();

    /**
     * @note[short] MacOS (ARM): 0x5ba624
     * @note[short] MacOS (Intel): 0x69c6d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateCustomColorType(short type);

    /**
     * @note[short] MacOS (ARM): 0x5a8394
     * @note[short] MacOS (Intel): 0x67b3a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCustomScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x5a83f4
     * @note[short] MacOS (Intel): 0x67b420
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCustomScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x5b09ac
     * @note[short] MacOS (Intel): 0x6906c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateHSVState();

    /**
     * @note[short] MacOS (ARM): 0x5b94f0
     * @note[short] MacOS (Intel): 0x69b430
     * @note[short] Windows: 0x29e640
     * @note[short] Android
     */
    void updateIsOriented();

    /**
     * @note[short] MacOS (ARM): 0x5b9d90
     * @note[short] MacOS (Intel): 0x69be30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMainColor();

    /**
     * @note[short] MacOS (ARM): 0x5ba148
     * @note[short] MacOS (Intel): 0x69c1f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMainColorOnly();

    /**
     * @note[short] MacOS (ARM): 0x5ba070
     * @note[short] MacOS (Intel): 0x69c120
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateMainOpacity();

    /**
     * @note[short] MacOS (ARM): 0x5b8fa4
     * @note[short] MacOS (Intel): 0x69ac10
     * @note[short] Windows: 0x29e1f0
     * @note[short] Android
     */
    void updateObjectEditorColor();

    /**
     * @note[short] MacOS (ARM): 0x5ba294
     * @note[short] MacOS (Intel): 0x69c320
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSecondaryColor();

    /**
     * @note[short] MacOS (ARM): 0x5ba468
     * @note[short] MacOS (Intel): 0x69c500
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSecondaryColorOnly();

    /**
     * @note[short] MacOS (ARM): 0x5ba390
     * @note[short] MacOS (Intel): 0x69c430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSecondaryOpacity();

    /**
     * @note[short] MacOS (ARM): 0x5a8060
     * @note[short] MacOS (Intel): 0x67afb0
     * @note[short] Windows: 0x28d7a0
     * @note[short] Android
     */
    void updateStartPos();

    /**
     * @note[short] MacOS (ARM): 0x5ad43c
     * @note[short] MacOS (Intel): 0x68d320
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateUnmodifiedPositions();

    /**
     * @note[short] MacOS (ARM): 0x1f152c
     * @note[short] MacOS (Intel): 0x247bb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool usesFreezeAnimation();

    /**
     * @note[short] MacOS (ARM): 0x1f15e4
     * @note[short] MacOS (Intel): 0x247f70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool usesSpecialAnimation();
    int m_someOtherIndex;
    int m_innerSectionIndex;
    int m_outerSectionIndex;
    int m_middleSectionIndex;
    bool m_hasExtendedCollision;
    cocos2d::ccColor3B m_groupColor;
    bool m_isColorSpriteBlack;
    bool m_isObjectBlack;
    float m_blackChildOpacity;
    bool m_blackChildOpacityLocked;
    bool m_editorEnabled;
    bool m_isGroupDisabled;
    bool m_isGroupDisabledTemp;
    bool m_unk28c;
    int m_activeMainColorID;
    int m_activeDetailColorID;
    bool m_baseUsesHSV;
    bool m_detailUsesHSV;
    float m_positionXOffset;
    float m_positionYOffset;
    float m_rotationXOffset;
    float m_unk2A8;
    float m_rotationYOffset;
    float m_unk2B0;
    float m_scaleXOffset;
    float m_scaleYOffset;
    float m_unk2BC;
    float m_unk2C0;
    bool m_tempOffsetXRelated;
    bool m_isFlipX;
    bool m_isFlipY;
    cocos2d::CCPoint m_customBoxOffset;
    bool m_boxOffsetCalculated;
    cocos2d::CCPoint m_boxOffset;
    OBB2D* m_orientedBox;
    bool m_shouldUseOuterOb;
    cocos2d::CCSprite* m_glowSprite;
    bool m_isRingPoweredOn;
    float m_width;
    float m_height;
    bool m_addToNodeContainer;
    bool m_isActivated;
    bool m_isDisabled2;
    cocos2d::CCParticleSystemQuad* m_particle;
    std::string m_particleString;
    bool m_hasParticles;
    bool m_particleUseObjectColor;
    bool m_hasColorSprite;
    cocos2d::CCPoint m_particleOffset;
    bool m_isParticleSpriteLocked;
    cocos2d::CCRect m_textureRect;
    bool m_isDirty;
    bool m_isObjectPosDirty;
    bool m_isUnmodifiedPosDirty;
    float m_fadeMargin;
    cocos2d::CCRect m_objectRect;
    bool m_isObjectRectDirty;
    bool m_isOrientedBoxDirty;
    bool m_colorSpriteLocked;
    bool m_unk353;
    bool m_canRotateFree;
    bool m_isMirroredByScale;
    int m_linkedGroup;
    int m_unk35C;
    short m_colorType;
    short m_childColorType;
    bool m_shouldBlendBase;
    bool m_shouldBlendDetail;
    bool m_hasCustomChild;
    union {
        bool m_hasAnimatedChild{};
        bool m_unk367;
    };
    cocos2d::CCSprite* m_colorSprite;
    bool m_unk370;
    float m_objectRadius;
    bool m_isRotationAligned;
    float m_spriteWidthScale;
    float m_spriteHeightScale;
    int m_uniqueID;
    GameObjectType m_objectType;
    GameObjectType m_savedObjectType;
    int m_unk390;
    float m_unmodifiedPositionX;
    float m_unmodifiedPositionY;
    double m_positionX;
    double m_positionY;
    cocos2d::CCPoint m_startPosition;
    bool m_usesAudioScale;
    bool m_hasNoAudioScale;
    bool m_isDisabled;
    float m_startRotationX;
    float m_startRotationY;
    float m_startScaleX;
    float m_startScaleY;
    float m_customScaleX;
    float m_customScaleY;
    bool m_startFlipX;
    bool m_startFlipY;
    bool m_unk3ee;
    bool m_isInvisible;
    int m_unk3D8;
    short m_varianceIndex;
    bool m_unk3DE;
    short m_enterType;
    short m_exitType;
    short m_enterChannel;
    short m_objectMaterial;
    bool m_unk3E8;
    short m_parentMode;
    bool m_hasNoGlow;
    int m_targetColor;
    int m_objectID;
    bool m_unk3F8;
    bool m_intrinsicDontFade;
    bool m_ignoreEnter;
    bool m_ignoreFade;
    bool m_isSolidColorBlock;
    bool m_unk3FD;
    bool m_customSpriteColor;
    short m_customColorType;
    bool m_isDontEnter;
    bool m_isDontFade;
    bool m_hasNoEffects;
    bool m_hasNoParticles;
    int m_defaultZOrder;
    bool m_unk40C;
    bool m_colorZLayerRelated;
    bool m_customAudioScale;
    float m_minAudioScale;
    float m_maxAudioScale;
    bool m_particleLocked;
    int m_property53;
    bool m_isInvisibleBlock;
    bool m_customGlowColor;
    bool m_glowColorIsLBG;
    bool m_cantColorGlow;
    float m_opacityMod;
    bool m_slopeUphill;
    int m_slopeDirection;
    bool m_slopeIsHazard;
    float m_opacityMod2;
    GJSpriteColor* m_baseColor;
    GJSpriteColor* m_detailColor;
    bool m_baseOrDetailBlending;
    ZLayer m_defaultZLayer;
    bool m_zFixedZLayer;
    ZLayer m_zLayer;
    int m_zOrder;
    bool m_wasSelected;
    bool m_isSelected;
    union {
        int m_cycleIndex{};
        int m_unk460;
    };
    cocos2d::CCPoint m_unk464;
    bool m_updateParents;
    bool m_updateEditorColor;
    bool m_hasGroupParent;
    bool m_hasAreaParent;
    float m_scaleX;
    float m_scaleY;
    std::array<short, 10>* m_groups;
    short m_groupCount;
    bool m_hasGroupParentsString;
    std::array<short, 10>* m_colorGroups;
    short m_colorGroupCount;
    std::array<short, 10>* m_opacityGroups;
    short m_opacityGroupCount;
    short m_editorLayer;
    short m_editorLayer2;
    int m_enabledGroupsCounter;
    union {
        bool m_useObjectRect{};
        bool m_updateCustomContentSize;
    };
    bool m_hasContentSize;
    bool m_isNoTouch;
    cocos2d::CCSize m_contentSize;
    cocos2d::CCPoint m_lastPosition;
    int m_unk4C0;
    int m_unk4C4;
    int m_unk4C8;
    int m_unk4CC;
    GameObjectClassType m_classType;
    bool m_isTrigger;
    bool m_isSpawnOrderTrigger;
    bool m_isColorTrigger;
    bool m_dontIgnoreDuration;
    bool m_canBeControlled;
    bool m_activateTriggerInEditor;
    bool m_isStartPos;
    bool m_isHighDetail;
    ColorActionSprite* m_mainActionSprite;
    ColorActionSprite* m_detailActionSprite;
    GJEffectManager* m_goEffectManager;
    union {
        bool m_useTextureRectForSelection{};
        bool m_unk4F8;
    };
    bool m_isDecoration;
    bool m_isDecoration2;
    bool m_unk4fb;
    bool m_maybeNotColorable;
    bool m_isPassable;
    bool m_isHide;
    bool m_isNonStickX;
    bool m_isNonStickY;
    bool m_isIceBlock;
    bool m_isGripSlope;
    bool m_isScaleStick;
    bool m_isExtraSticky;
    bool m_isDontBoostY;
    bool m_isDontBoostX;
    bool m_unk507;
    bool m_unk508;
    float m_unk50C;
    float m_pixelScaleX;
    float m_pixelScaleY;
    int m_mainColorKeyIndex;
    int m_detailColorKeyIndex;
    uint8_t m_areaOpacityRelated;
    float m_areaOpacityValue;
    int m_areaOpacityIndex;
    int m_unk52C;
    bool m_hasDynamicallySaved;
    bool m_isUIObject;
    bool m_greenDebugDraw;
};
