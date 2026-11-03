#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class EndTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EndTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EndTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EndTriggerGameObject();

    /**
     * @note[short] Windows: 0x637e10
     * @note[short] Android: Rebinded
     */
    virtual  ~EndTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x176408
     * @note[short] MacOS (Intel): 0x1bcaa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EndTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x1764d0
     * @note[short] MacOS (Intel): 0x1bcb60
     * @note[short] Windows: 0x65dbb0
     * @note[short] iOS: 0x438978
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x176520
     * @note[short] MacOS (Intel): 0x1bcbb0
     * @note[short] Windows: 0x65dc20
     * @note[short] iOS: 0x4389c8
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x17709c
     * @note[short] MacOS (Intel): 0x1bd9d0
     * @note[short] Windows: 0x65dff0
     * @note[short] iOS: 0x438d60
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1765ec
     * @note[short] MacOS (Intel): 0x1bcc80
     * @note[short] Windows: 0x65dd20
     * @note[short] iOS: 0x438a54
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    bool m_noEffects;
    bool m_noSFX;
    bool m_instant;
};
