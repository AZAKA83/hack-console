#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SFXTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SFXTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SFXTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x638340
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SFXTriggerGameObject();

    /**
     * @note[short] Windows: 0x657870
     * @note[short] iOS: 0x4326b4
     * @note[short] Android: Rebinded
     */
    virtual  ~SFXTriggerGameObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SFXTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x16c0f0
     * @note[short] MacOS (Intel): 0x1b0610
     * @note[short] Windows: 0x658af0
     * @note[short] iOS: 0x433a20
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1679e8
     * @note[short] MacOS (Intel): 0x1aa760
     * @note[short] Windows: 0x6578f0
     * @note[short] iOS: 0x4327b8
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1679c8
     * @note[short] MacOS (Intel): 0x1aa740
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getSFXRefID();

    /**
     * @note[short] MacOS (ARM): 0x167994
     * @note[short] MacOS (Intel): 0x1aa710
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getUniqueSFXID();

    /**
     * @note[short] MacOS (ARM): 0x16794c
     * @note[short] MacOS (Intel): 0x1aa6c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    std::string m_soundPath;
    int m_soundID;
    int m_property601;
    float m_pitch;
    int m_speed;
    int m_pitchIndex;
    float m_volume;
    int m_start;
    int m_fadeIn;
    int m_end;
    int m_fadeOut;
    bool m_reverb;
    bool m_fastFourierTransform;
    bool m_loop;
    bool m_stopLoop;
    bool m_dontReset;
    bool m_unique;
    bool m_override;
    int m_sfxUniqueID;
    float m_volumeNear;
    float m_volumeMedium;
    float m_volumeFar;
    int m_minDistNear;
    int m_minDistMedium;
    int m_minDistFar;
    int m_proximityMode;
    bool m_cameraDistance;
    bool m_preload;
    bool m_ignoreVolumeTest;
    float m_minInterval;
    int m_sfxGroup;
    bool m_stop;
    bool m_changeSpeed;
    bool m_changeVolume;
    int m_groupID;
    int m_unk788;
    FMODReverbPreset m_reverbPreset;
    bool m_reverbEnabled;
    float m_soundDuration;
    bool m_applyDisabled;
    int m_speedVariance;
    int m_pitchVariance;
    float m_volumeVariance;
    bool m_pitchSteps;
    std::string m_unk7e8;
};
