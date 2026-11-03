#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/ParticleStruct.hpp>
#include <Geode/binding/EnhancedGameObject.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class ParticleGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "ParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParticleGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParticleGameObject();

    /**
     * @note[short] Windows: 0x637610
     * @note[short] iOS: 0x440a7c
     * @note[short] Android: Rebinded
     */
    virtual  ~ParticleGameObject();

    /**
     * @note[short] MacOS (ARM): 0x152714
     * @note[short] MacOS (Intel): 0x191b50
     * @note[short] Windows: 0x641850
     * @note[short] Android
     */
    static ParticleGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x152874
     * @note[short] MacOS (Intel): 0x191d30
     * @note[short] Windows: 0x641970
     * @note[short] iOS: 0x426e98
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x15387c
     * @note[short] MacOS (Intel): 0x192d90
     * @note[short] Windows: 0x642d20
     * @note[short] iOS: 0x427c94
     * @note[short] Android
     */
    virtual void setScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x1538f0
     * @note[short] MacOS (Intel): 0x192e00
     * @note[short] Windows: 0x642da0
     * @note[short] iOS: 0x427ce4
     * @note[short] Android
     */
    virtual void setScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x153964
     * @note[short] MacOS (Intel): 0x192e70
     * @note[short] Windows: 0x642e20
     * @note[short] iOS: 0x427d34
     * @note[short] Android
     */
    virtual void setScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x15378c
     * @note[short] MacOS (Intel): 0x192cd0
     * @note[short] Windows: 0x642900
     * @note[short] iOS: 0x427ba4
     * @note[short] Android
     */
    virtual void setRotation(float rotation);

    /**
     * @note[short] MacOS (ARM): 0x1537dc
     * @note[short] MacOS (Intel): 0x192d10
     * @note[short] Windows: 0x642950
     * @note[short] iOS: 0x427bf4
     * @note[short] Android
     */
    virtual void setRotationX(float rotationX);

    /**
     * @note[short] MacOS (ARM): 0x15382c
     * @note[short] MacOS (Intel): 0x192d50
     * @note[short] Windows: 0x642ac0
     * @note[short] iOS: 0x427c44
     * @note[short] Android
     */
    virtual void setRotationY(float rotationY);

    /**
     * @note[short] MacOS (ARM): 0x153ad4
     * @note[short] MacOS (Intel): 0x192fd0
     * @note[short] Windows: 0x642fd0
     * @note[short] iOS: 0x427e80
     * @note[short] Android
     */
    virtual void setChildColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x152a94
     * @note[short] MacOS (Intel): 0x192000
     * @note[short] Windows: 0x641be0
     * @note[short] iOS: 0x427078
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x152b44
     * @note[short] MacOS (Intel): 0x1920d0
     * @note[short] Windows: 0x641cb0
     * @note[short] iOS: 0x427128
     * @note[short] Android
     */
    virtual void addMainSpriteToParent(bool reorder);

    /**
     * @note[short] MacOS (ARM): 0x153c90
     * @note[short] MacOS (Intel): 0x1931a0
     * @note[short] Windows: 0x643220
     * @note[short] iOS: 0x42803c
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x153c54
     * @note[short] MacOS (Intel): 0x193160
     * @note[short] Windows: 0x6431e0
     * @note[short] iOS: 0x428000
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x1528ac
     * @note[short] MacOS (Intel): 0x191d60
     * @note[short] Windows: 0x6419d0
     * @note[short] iOS: 0x426ed0
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x153e9c
     * @note[short] MacOS (Intel): 0x1933a0
     * @note[short] Windows: 0x643480
     * @note[short] iOS: 0x42822c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x152c28
     * @note[short] MacOS (Intel): 0x1921b0
     * @note[short] Windows: 0x641da0
     * @note[short] iOS: 0x42720c
     * @note[short] Android
     */
    virtual void claimParticle();

    /**
     * @note[short] MacOS (ARM): 0x1531b4
     * @note[short] MacOS (Intel): 0x192720
     * @note[short] Windows: 0x642320
     * @note[short] iOS: 0x427770
     * @note[short] Android
     */
    virtual void unclaimParticle();

    /**
     * @note[short] MacOS (ARM): 0x15321c
     * @note[short] MacOS (Intel): 0x1927a0
     * @note[short] Windows: 0x642400
     * @note[short] iOS: 0x4277d8
     * @note[short] Android
     */
    virtual void particleWasActivated();

    /**
     * @note[short] MacOS (ARM): 0x1539d8
     * @note[short] MacOS (Intel): 0x192ee0
     * @note[short] Windows: 0x642ea0
     * @note[short] iOS: 0x427d84
     * @note[short] Android
     */
    virtual void setObjectColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x152b10
     * @note[short] MacOS (Intel): 0x192090
     * @note[short] Windows: 0x641c70
     * @note[short] iOS: 0x4270f4
     * @note[short] Android
     */
    virtual void blendModeChanged();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateParticleColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x153bd0
     * @note[short] MacOS (Intel): 0x1930c0
     * @note[short] Windows: 0x643100
     * @note[short] iOS: 0x427f7c
     * @note[short] Android
     */
    virtual void updateMainParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x153c14
     * @note[short] MacOS (Intel): 0x193110
     * @note[short] Windows: 0x643180
     * @note[short] iOS: 0x427fc0
     * @note[short] Android
     */
    virtual void updateSecondaryParticleOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x153cf8
     * @note[short] MacOS (Intel): 0x193200
     * @note[short] Windows: 0x643280
     * @note[short] iOS: 0x4280a4
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x153e44
     * @note[short] MacOS (Intel): 0x193350
     * @note[short] Windows: 0x643400
     * @note[short] iOS: 0x4281d4
     * @note[short] Android
     */
    virtual void updateAnimateOnTrigger(bool animate);

    /**
     * @note[short] MacOS (ARM): 0x152d80
     * @note[short] MacOS (Intel): 0x192330
     * @note[short] Windows: 0x641f90
     * @note[short] Android
     */
    void applyParticleSettings(cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x152a3c
     * @note[short] MacOS (Intel): 0x191f90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createAndAddCustomParticle();

    /**
     * @note[short] MacOS (ARM): 0x153584
     * @note[short] MacOS (Intel): 0x192af0
     * @note[short] Windows: 0x6426f0
     * @note[short] Android
     */
    void createParticlePreviewArt();

    /**
     * @note[short] MacOS (ARM): 0x153374
     * @note[short] MacOS (Intel): 0x1928e0
     * @note[short] Windows: 0x6424c0
     * @note[short] Android
     */
    void setParticleString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x153408
     * @note[short] MacOS (Intel): 0x192970
     * @note[short] Windows: 0x642550
     * @note[short] Android
     */
    void updateParticle();

    /**
     * @note[short] MacOS (ARM): 0x153098
     * @note[short] MacOS (Intel): 0x192610
     * @note[short] Windows: 0x642bf0
     * @note[short] Android
     */
    void updateParticleAngle(float angle, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x153708
     * @note[short] MacOS (Intel): 0x192c50
     * @note[short] Windows: 0x642880
     * @note[short] Android
     */
    void updateParticlePreviewArtOpacity(float opacity);

    /**
     * @note[short] MacOS (ARM): 0x153530
     * @note[short] MacOS (Intel): 0x192aa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateParticleScale(float scale);

    /**
     * @note[short] MacOS (ARM): 0x152c04
     * @note[short] MacOS (Intel): 0x192180
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateParticleStruct();
    std::string m_particleData;
    bool m_updatedParticleData;
    cocos2d::ParticleStruct m_particleStruct;
    bool m_hasUniformObjectColor;
    int m_popupPage;
    bool m_shouldQuickStart;
    float m_respawnResult;
    bool m_startingRespawn;
    bool m_notPreviewing;
};
