#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/RingObject.hpp>
#include <Geode/mapping/vector.hpp>

class DashRingObject : public RingObject {
public:
    static constexpr auto CLASS_NAME = "DashRingObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DashRingObject, RingObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     DashRingObject();

    /**
     * @note[short] Windows: 0x637a40
     * @note[short] Android: Rebinded
     */
    virtual  ~DashRingObject();

    /**
     * @note[short] MacOS (Intel): 0x195690
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static DashRingObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x155c98
     * @note[short] MacOS (Intel): 0x1957e0
     * @note[short] Windows: 0x644110
     * @note[short] iOS: 0x428ec8
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x155eb0
     * @note[short] MacOS (Intel): 0x1959f0
     * @note[short] Windows: 0x644410
     * @note[short] iOS: 0x4290b8
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x155c48
     * @note[short] MacOS (Intel): 0x195780
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_dashSpeed;
    float m_endBoost;
    float m_maxDuration;
    bool m_allowCollide;
    bool m_stopSlide;
};
