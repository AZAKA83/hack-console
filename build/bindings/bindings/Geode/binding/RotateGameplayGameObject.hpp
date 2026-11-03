#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class RotateGameplayGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "RotateGameplayGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RotateGameplayGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RotateGameplayGameObject();

    /**
     * @note[short] Windows: 0x6385c0
     * @note[short] Android: Rebinded
     */
    virtual  ~RotateGameplayGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1d4010
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RotateGameplayGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x189068
     * @note[short] MacOS (Intel): 0x1d4100
     * @note[short] Windows: 0x664f80
     * @note[short] iOS: 0x4400cc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x18a870
     * @note[short] MacOS (Intel): 0x1d5eb0
     * @note[short] Windows: 0x665810
     * @note[short] iOS: 0x44099c
     * @note[short] Android
     */
    virtual void updateStartValues();

    /**
     * @note[short] MacOS (ARM): 0x18a520
     * @note[short] MacOS (Intel): 0x1d5af0
     * @note[short] Windows: 0x665520
     * @note[short] iOS: 0x440690
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1890b8
     * @note[short] MacOS (Intel): 0x1d4150
     * @note[short] Windows: 0x664ff0
     * @note[short] iOS: 0x44011c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x18a804
     * @note[short] MacOS (Intel): 0x1d5e60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGameplayRotation();
    int m_moveDirection;
    int m_groundDirection;
    bool m_editVelocity;
    bool m_overrideVelocity;
    float m_velocityModX;
    float m_velocityModY;
    bool m_changeChannel;
    bool m_channelOnly;
    int m_targetChannelID;
    bool m_instantOffset;
    bool m_dontSlide;
};
