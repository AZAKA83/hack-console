#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class EnhancedTriggerObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedTriggerObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedTriggerObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EnhancedTriggerObject();

    /**
     * @note[short] Windows: 0x637aa0
     * @note[short] Android: Rebinded
     */
    virtual  ~EnhancedTriggerObject();

    /**
     * @note[short] MacOS (Intel): 0x19d100
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EnhancedTriggerObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x15cde4
     * @note[short] MacOS (Intel): 0x19dd30
     * @note[short] Windows: 0x653230
     * @note[short] iOS: 0x42d8ec
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x15c520
     * @note[short] MacOS (Intel): 0x19d210
     * @note[short] Windows: 0x652fc0
     * @note[short] iOS: 0x42d648
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);
    int m_minXID;
    int m_minYID;
    int m_maxXID;
    int m_maxYID;
};
