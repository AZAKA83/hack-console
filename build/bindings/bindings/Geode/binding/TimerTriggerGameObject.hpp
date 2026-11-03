#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class TimerTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TimerTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TimerTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TimerTriggerGameObject();

    /**
     * @note[short] Windows: 0x6385c0
     * @note[short] Android: Rebinded
     */
    virtual  ~TimerTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x17beb8
     * @note[short] MacOS (Intel): 0x1c3e80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TimerTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x17bfe0
     * @note[short] MacOS (Intel): 0x1c3fb0
     * @note[short] Windows: 0x660020
     * @note[short] iOS: 0x43ae18
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x17d820
     * @note[short] MacOS (Intel): 0x1c5ed0
     * @note[short] Windows: 0x660700
     * @note[short] iOS: 0x43b53c
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x17c0d8
     * @note[short] MacOS (Intel): 0x1c40b0
     * @note[short] Windows: 0x660140
     * @note[short] iOS: 0x43aec8
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x17bf98
     * @note[short] MacOS (Intel): 0x1c3f60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    double m_startTime;
    double m_targetTime;
    bool m_stopTimeEnabled;
    bool m_dontOverride;
    bool m_ignoreTimeWarp;
    float m_timeMod;
    bool m_startPaused;
    bool m_multiActivate;
    int m_controlType;
};
