#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class GradientTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "GradientTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GradientTriggerObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GradientTriggerObject();

    /**
     * @note[short] Windows: 0x637b60
     * @note[short] Android: Rebinded
     */
    virtual  ~GradientTriggerObject();

    /**
     * @note[short] MacOS (Intel): 0x17b060
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GradientTriggerObject* create();

    /**
     * @note[short] MacOS (ARM): 0x140b98
     * @note[short] MacOS (Intel): 0x17b140
     * @note[short] Windows: 0x63b040
     * @note[short] iOS: 0x41fffc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x141f44
     * @note[short] MacOS (Intel): 0x17caf0
     * @note[short] Windows: 0x63b5e0
     * @note[short] iOS: 0x4205a0
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x140bec
     * @note[short] MacOS (Intel): 0x17b1a0
     * @note[short] Windows: 0x63b0c0
     * @note[short] iOS: 0x420050
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    int m_blendingLayer;
    int m_blendingMode;
    int m_gradientID;
    int m_upBottomLeftID;
    int m_downBottomRightID;
    int m_leftTopLeftID;
    int m_rightTopRightID;
    bool m_vertexMode;
    bool m_disable;
    bool m_disableAll;
    float m_previewOpacity;
};
