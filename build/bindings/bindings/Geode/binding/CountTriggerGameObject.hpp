#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class CountTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CountTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CountTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CountTriggerGameObject();

    /**
     * @note[short] Windows: 0x637aa0
     * @note[short] Android: Rebinded
     */
    virtual  ~CountTriggerGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1b79c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CountTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1726c8
     * @note[short] MacOS (Intel): 0x1b7ae0
     * @note[short] Windows: 0x65c2b0
     * @note[short] iOS: 0x437210
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1728dc
     * @note[short] MacOS (Intel): 0x1b7d50
     * @note[short] Windows: 0x65c730
     * @note[short] iOS: 0x4373ac
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x172c98
     * @note[short] MacOS (Intel): 0x1b8180
     * @note[short] Windows: 0x65cac0
     * @note[short] iOS: 0x4376d8
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x172680
     * @note[short] MacOS (Intel): 0x1b7a90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_pickupCount;
    int m_pickupTriggerMode;
    bool m_multiActivate;
    bool m_isOverride;
    float m_pickupTriggerMultiplier;
};
