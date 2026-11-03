#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class TriggerControlGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "TriggerControlGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TriggerControlGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     TriggerControlGameObject();

    /**
     * @note[short] Windows: 0x638620
     * @note[short] iOS: 0x440cf0
     * @note[short] Android: Rebinded
     */
    virtual  ~TriggerControlGameObject();

    /**
     * @note[short] MacOS (ARM): 0x1725b0
     * @note[short] MacOS (Intel): 0x1d12c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static TriggerControlGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1874e0
     * @note[short] MacOS (Intel): 0x1d1f80
     * @note[short] Windows: 0x664310
     * @note[short] iOS: 0x43f530
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x187288
     * @note[short] MacOS (Intel): 0x1d1d30
     * @note[short] Windows: 0x664220
     * @note[short] iOS: 0x43f378
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x186afc
     * @note[short] MacOS (Intel): 0x1d1400
     * @note[short] Windows: 0x664000
     * @note[short] iOS: 0x43f12c
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x186aa0
     * @note[short] MacOS (Intel): 0x66ef0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x187378
     * @note[short] MacOS (Intel): 0x1d1e20
     * @note[short] Windows: 0x664340
     * @note[short] Android
     */
    void updateTriggerControlFrame();
    std::string m_triggerControlFrame;
    GJActionCommand m_customTriggerValue;
};
