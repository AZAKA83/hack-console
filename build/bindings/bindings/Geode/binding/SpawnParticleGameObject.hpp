#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class SpawnParticleGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnParticleGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnParticleGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpawnParticleGameObject();

    /**
     * @note[short] Windows: 0x637b60
     * @note[short] Android: Rebinded
     */
    virtual  ~SpawnParticleGameObject();

    /**
     * @note[short] MacOS (ARM): 0x187504
     * @note[short] MacOS (Intel): 0x1d1fb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpawnParticleGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1875dc
     * @note[short] MacOS (Intel): 0x1d2080
     * @note[short] Windows: 0x664530
     * @note[short] iOS: 0x43f5c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x188b3c
     * @note[short] MacOS (Intel): 0x1d3bc0
     * @note[short] Windows: 0x664b10
     * @note[short] iOS: 0x43fc08
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x18762c
     * @note[short] MacOS (Intel): 0x1d20d0
     * @note[short] Windows: 0x6645a0
     * @note[short] iOS: 0x43f618
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    cocos2d::CCPoint m_offset;
    cocos2d::CCPoint m_offsetVariance;
    bool m_matchRotation;
    float m_rotation;
    float m_rotationVariance;
    float m_scale;
    float m_scaleVariance;
};
