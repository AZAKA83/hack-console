#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class AdvancedFollowTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "AdvancedFollowTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AdvancedFollowTriggerObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x637c20
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AdvancedFollowTriggerObject();

    /**
     * @note[short] Windows: 0x637d50
     * @note[short] Android: Rebinded
     */
    virtual  ~AdvancedFollowTriggerObject();

    /**
     * @note[short] MacOS (ARM): 0x146a3c
     * @note[short] MacOS (Intel): 0x182b60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AdvancedFollowTriggerObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x14d9e8
     * @note[short] MacOS (Intel): 0x18c260
     * @note[short] Windows: 0x63ef10
     * @note[short] iOS: 0x424334
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x146bcc
     * @note[short] MacOS (Intel): 0x182d40
     * @note[short] Windows: 0x63d2e0
     * @note[short] iOS: 0x4224c8
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x146b94
     * @note[short] MacOS (Intel): 0x182d00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getAdvancedFollowID();

    /**
     * @note[short] MacOS (ARM): 0x146b4c
     * @note[short] MacOS (Intel): 0x182cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_delay;
    float m_delayVariance;
    float m_startSpeed;
    float m_startSpeedVariance;
    int m_startSpeedReference;
    float m_startDirection;
    float m_startDirectionVariance;
    int m_startDirectionReference;
    float m_maxSpeed;
    float m_maxSpeedVariance;
    bool m_xOnly;
    bool m_yOnly;
    float m_maxRange;
    float m_maxRangeVariance;
    float m_property310;
    float m_property311;
    float m_acceleration;
    float m_accelerationVariance;
    float m_property312;
    float m_property313;
    float m_property314;
    float m_property315;
    float m_steerForce;
    float m_steerForceVariance;
    bool m_steerForceLowEnabled;
    float m_steerForceLow;
    float m_steerForceLowVariance;
    bool m_steerForceHighEnabled;
    float m_steerForceHigh;
    float m_steerFroceHighVariance;
    float m_speedRangeLow;
    float m_speedRangeLowVariance;
    float m_speedRangeHigh;
    float m_speedRangeHighVariance;
    float m_breakForce;
    float m_breakForceVariance;
    float m_breakAngle;
    float m_breakAngleVariance;
    float m_breakSteerForce;
    float m_breakSteerForceVariance;
    float m_breakSteerSpeedLimit;
    float m_breakSteerSpeedLimitVariance;
    bool m_targetDirection;
    bool m_ignoreDisabled;
    bool m_rotateDirection;
    float m_rotationOffset;
    float m_nearAcceleration;
    float m_nearAccelerationVariance;
    float m_nearDistance;
    float m_nearDistanceVariance;
    float m_nearFriction;
    float m_nearFrictionVariance;
    float m_friction;
    float m_frictionVariance;
    float m_easing;
    float m_easingVariance;
    float m_rotateEasing;
    float m_rotateDeadZ;
    int m_priority;
    int m_unk7fc;
    int m_maxRangeReference;
    int m_followMode;
    bool m_exclusive;
    int m_startMode;
};
