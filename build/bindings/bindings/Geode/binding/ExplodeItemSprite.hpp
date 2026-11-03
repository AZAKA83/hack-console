#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class ExplodeItemSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "ExplodeItemSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ExplodeItemSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ExplodeItemSprite();

    /**
     * @note[short] Windows: 0x4dd120
     * @note[short] Android: Rebinded
     */
    virtual  ~ExplodeItemSprite();

    /**
     * @note[short] MacOS (ARM): 0x1a96cc
     * @note[short] MacOS (Intel): 0x1f7b20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ExplodeItemSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x1a9a60
     * @note[short] MacOS (Intel): 0x1f7f40
     * @note[short] Windows: 0x4e36a0
     * @note[short] iOS: 0x65df4
     * @note[short] Android
     */
    virtual bool init();
    float m_xVelocity;
    float m_yVelocity;
    float m_timeRemaining;
    float m_fadeOutTime;
    float m_rotVelocity;
    cocos2d::CCParticleSystemQuad* m_particles;
};
