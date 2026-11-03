#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GhostTrailEffect : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GhostTrailEffect";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GhostTrailEffect, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x76a40
     * @note[short] iOS: 0x391824
     * @note[short] Android: Rebinded
     */
    virtual  ~GhostTrailEffect();

    /**
     * @note[short] MacOS (ARM): 0x5e7b88
     * @note[short] MacOS (Intel): 0x6d0890
     * @note[short] Windows: 0x76a80
     * @note[short] Android
     */
    static GhostTrailEffect* create();

    /**
     * @note[short] MacOS (ARM): 0x5e7c90
     * @note[short] MacOS (Intel): 0x6d0970
     * @note[short] Windows: 0x76b70
     * @note[short] iOS: 0x391930
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x5e81f8
     * @note[short] MacOS (Intel): 0x6d0f20
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x391e94
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x5e81e8
     * @note[short] MacOS (Intel): 0x6d0f00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void doBlendAdditive();

    /**
     * @note[short] MacOS (ARM): 0x5e7cec
     * @note[short] MacOS (Intel): 0x6d09d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void runWithTarget(cocos2d::CCSprite* sprite, float snapshotInterval, float fadeInterval, float duration, float ghostScale, bool scaleTwice);

    /**
     * @note[short] MacOS (ARM): 0x5e8198
     * @note[short] MacOS (Intel): 0x6d0ec0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopTrail();

    /**
     * @note[short] MacOS (ARM): 0x5e7da0
     * @note[short] MacOS (Intel): 0x6d0a70
     * @note[short] Windows: 0x76bd0
     * @note[short] Android
     */
    void trailSnapshot(float dt);
    float m_snapshotInterval;
    float m_fadeInterval;
    float m_ghostScale;
    bool m_scaleTwice;
    float m_playerScale;
    cocos2d::ccBlendFunc m_blendFunc;
    cocos2d::CCSprite* m_iconSprite;
    PlayerObject* m_playerObject;
    cocos2d::CCLayer* m_objectLayer;
    float m_opacity;
    void* m_delegate;
    cocos2d::ccColor3B m_color;
    cocos2d::CCPoint m_position;
    bool m_unk194;
};
