#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class GameEffectsManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GameEffectsManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GameEffectsManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x197d0c
     * @note[short] MacOS (Intel): 0x1e4740
     * @note[short] Android
     */
    static GameEffectsManager* create(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x197f1c
     * @note[short] MacOS (Intel): 0x1e48f0
     * @note[short] Android
     */
    void addParticleEffect(cocos2d::CCParticleSystemQuad* particle, int unused);

    /**
     * @note[short] MacOS (ARM): 0x197d68
     * @note[short] MacOS (Intel): 0x1e47a0
     * @note[short] Android
     */
    bool init(PlayLayer* playLayer);

    /**
     * @note[short] MacOS (ARM): 0x197d74
     * @note[short] MacOS (Intel): 0x1e47b0
     * @note[short] Android
     */
    void scaleParticle(cocos2d::CCParticleSystemQuad* particle, float scale);
    PlayLayer* m_playLayer;
};
