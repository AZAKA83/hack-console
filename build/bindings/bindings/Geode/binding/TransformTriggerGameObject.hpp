#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class TransformTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TransformTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TransformTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TransformTriggerGameObject();

    /**
     * @note[short] Windows: 0x637a40
     * @note[short] Android: Rebinded
     */
    virtual  ~TransformTriggerGameObject();

    /**
     * @note[short] MacOS (Intel): 0x1ba470
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TransformTriggerGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x174778
     * @note[short] MacOS (Intel): 0x1ba5a0
     * @note[short] Windows: 0x65d130
     * @note[short] iOS: 0x437e88
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x174798
     * @note[short] MacOS (Intel): 0x1ba5d0
     * @note[short] Windows: 0x65d150
     * @note[short] iOS: 0x437eac
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x174b10
     * @note[short] MacOS (Intel): 0x1ba9f0
     * @note[short] Windows: 0x65d520
     * @note[short] iOS: 0x4381cc
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x174730
     * @note[short] MacOS (Intel): 0x1ba550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    float m_objectScaleX;
    float m_objectScaleY;
    float m_property450;
    float m_property451;
    bool m_onlyMove;
    bool m_divideX;
    bool m_divideY;
    bool m_relativeRotation;
    bool m_relativeScale;
};
