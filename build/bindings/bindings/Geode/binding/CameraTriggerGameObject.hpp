#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class CameraTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CameraTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CameraTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CameraTriggerGameObject();

    /**
     * @note[short] Windows: 0x6385c0
     * @note[short] Android: Rebinded
     */
    virtual  ~CameraTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1780e4
     * @note[short] MacOS (Intel): 0x1bed90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CameraTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x17820c
     * @note[short] MacOS (Intel): 0x1beed0
     * @note[short] Windows: 0x65e690
     * @note[short] iOS: 0x439560
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x17b560
     * @note[short] MacOS (Intel): 0x1c3410
     * @note[short] Windows: 0x65f6b0
     * @note[short] iOS: 0x43a4b0
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1783ac
     * @note[short] MacOS (Intel): 0x1bf130
     * @note[short] Windows: 0x65e9f0
     * @note[short] iOS: 0x43971c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1781c4
     * @note[short] MacOS (Intel): 0x1bee80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    bool m_exitStatic;
    bool m_followObject;
    float m_followEasing;
    int m_edgeDirection;
    bool m_smoothVelocity;
    float m_velocityModifier;
    bool m_exitInstant;
    float m_previewOpacity;
};
