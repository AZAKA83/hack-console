#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class ForceBlockGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ForceBlockGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ForceBlockGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ForceBlockGameObject();

    /**
     * @note[short] Windows: 0x637a40
     * @note[short] Android: Rebinded
     */
    virtual  ~ForceBlockGameObject();

    /**
     * @note[short] MacOS (ARM): 0x182f18
     * @note[short] MacOS (Intel): 0x1ccca0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ForceBlockGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x183c80
     * @note[short] MacOS (Intel): 0x1cdd80
     * @note[short] Windows: 0x662890
     * @note[short] iOS: 0x43da64
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x183030
     * @note[short] MacOS (Intel): 0x1ccdc0
     * @note[short] Windows: 0x662530
     * @note[short] iOS: 0x43d6b4
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x183efc
     * @note[short] MacOS (Intel): 0x1cdfe0
     * @note[short] Windows: 0x662b00
     * @note[short] Android
     */
    cocos2d::CCPoint calculateForceToTarget(GameObject* target);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_force;
    float m_minForce;
    float m_maxForce;
    bool m_relativeForce;
    bool m_forceRange;
    int m_forceID;
};
