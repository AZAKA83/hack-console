#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class AudioLineGuideGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "AudioLineGuideGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioLineGuideGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AudioLineGuideGameObject();

    /**
     * @note[short] Windows: 0x637aa0
     * @note[short] Android: Rebinded
     */
    virtual  ~AudioLineGuideGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1cbc80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AudioLineGuideGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1822e0
     * @note[short] MacOS (Intel): 0x1cbd60
     * @note[short] Windows: 0x662060
     * @note[short] iOS: 0x43d120
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x182d94
     * @note[short] MacOS (Intel): 0x1ccb10
     * @note[short] Windows: 0x6623b0
     * @note[short] iOS: 0x43d490
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x182330
     * @note[short] MacOS (Intel): 0x1cbdb0
     * @note[short] Windows: 0x6620d0
     * @note[short] iOS: 0x43d170
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    int m_beatsPerMinute;
    int m_beatsPerBar;
    Speed m_speed;
    bool m_disabled;
};
