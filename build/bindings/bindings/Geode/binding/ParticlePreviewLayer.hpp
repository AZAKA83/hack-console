#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>

class ParticlePreviewLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "ParticlePreviewLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(ParticlePreviewLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ParticlePreviewLayer();

    /**
     * @note[short] Windows: 0x5c11b0
     * @note[short] iOS: 0x221d60
     * @note[short] Android: Rebinded
     */
    virtual  ~ParticlePreviewLayer();

    /**
     * @note[short] MacOS (ARM): 0x3d36c0
     * @note[short] MacOS (Intel): 0x4674d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ParticlePreviewLayer* create(cocos2d::CCParticleSystemQuad* particleSystem);

    /**
     * @note[short] MacOS (ARM): 0x3d7ae0
     * @note[short] MacOS (Intel): 0x46bf70
     * @note[short] Windows: 0x5cb210
     * @note[short] iOS: 0x3706cc
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x3d7958
     * @note[short] MacOS (Intel): 0x46bdf0
     * @note[short] Windows: 0x5cb130
     * @note[short] iOS: 0x3705ec
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): 0x3d78e0
     * @note[short] MacOS (Intel): 0x46bd90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCParticleSystemQuad* particleSystem);

    /**
     * @note[short] MacOS (ARM): 0x3d7ad8
     * @note[short] MacOS (Intel): 0x46bf60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void postVisit();

    /**
     * @note[short] MacOS (ARM): 0x3d7a38
     * @note[short] MacOS (Intel): 0x46bec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void preVisitWithClippingRect(cocos2d::CCRect rect);
    int m_particleMode;
    int m_drawMode;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    bool m_gravityMode;
};
