#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class KeyframeAnimTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeAnimTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(KeyframeAnimTriggerObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     KeyframeAnimTriggerObject();

    /**
     * @note[short] Windows: 0x637a40
     * @note[short] Android: Rebinded
     */
    virtual  ~KeyframeAnimTriggerObject();

    /**
     * @note[short] MacOS (Intel): 0x19bcd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static KeyframeAnimTriggerObject* create();

    /**
     * @note[short] MacOS (ARM): 0x15b474
     * @note[short] MacOS (Intel): 0x19bda0
     * @note[short] Windows: 0x6528f0
     * @note[short] iOS: 0x42ced8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x15c158
     * @note[short] MacOS (Intel): 0x19ce50
     * @note[short] Windows: 0x652ce0
     * @note[short] iOS: 0x42d318
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x15b4c4
     * @note[short] MacOS (Intel): 0x19bdf0
     * @note[short] Windows: 0x652960
     * @note[short] iOS: 0x42cf28
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    float m_timeMod;
    float m_positionXMod;
    float m_positionYMod;
    float m_rotationMod;
    float m_scaleXMod;
    float m_scaleYMod;
};
