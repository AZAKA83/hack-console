#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class GJDifficultySprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJDifficultySprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJDifficultySprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x7e780
     * @note[short] Android: Rebinded
     */
    virtual  ~GJDifficultySprite();

    /**
     * @note[short] MacOS (ARM): 0x247594
     * @note[short] MacOS (Intel): 0x2a4ab0
     * @note[short] Windows: 0x3aaf10
     * @note[short] Android
     */
    static GJDifficultySprite* create(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x247740
     * @note[short] MacOS (Intel): 0x2a4c00
     * @note[short] Windows: 0x3ab000
     * @note[short] Android
     */
    static std::string getDifficultyFrame(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x2476a8
     * @note[short] MacOS (Intel): 0x2a4b90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x247880
     * @note[short] MacOS (Intel): 0x2a4d30
     * @note[short] Windows: 0x3ab0e0
     * @note[short] Android
     */
    void updateDifficultyFrame(int difficulty, GJDifficultyName name);

    /**
     * @note[short] MacOS (ARM): 0x2479fc
     * @note[short] MacOS (Intel): 0x2a4eb0
     * @note[short] Windows: 0x3ab1f0
     * @note[short] Android
     */
    void updateFeatureState(GJFeatureState state);

    /**
     * @note[short] MacOS (ARM): 0x2479c0
     * @note[short] MacOS (Intel): 0x2a4e60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateFeatureStateFromLevel(GJGameLevel* level);
    GJFeatureState m_featureState;
};
