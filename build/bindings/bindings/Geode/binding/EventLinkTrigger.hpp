#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/vector.hpp>

class EventLinkTrigger : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "EventLinkTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EventLinkTrigger, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EventLinkTrigger();

    /**
     * @note[short] Windows: 0x638520
     * @note[short] iOS: 0x434910
     * @note[short] Android: Rebinded
     */
    virtual  ~EventLinkTrigger();

    /**
     * @note[short] MacOS (ARM): 0x16d99c
     * @note[short] MacOS (Intel): 0x1b2240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EventLinkTrigger* create();

    /**
     * @note[short] MacOS (ARM): 0x16da78
     * @note[short] MacOS (Intel): 0x1b2320
     * @note[short] Windows: 0x659930
     * @note[short] iOS: 0x434a74
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x16dac8
     * @note[short] MacOS (Intel): 0x1b2370
     * @note[short] Windows: 0x6599a0
     * @note[short] iOS: 0x434ac4
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x16e6cc
     * @note[short] MacOS (Intel): 0x1b3270
     * @note[short] Windows: 0x659e10
     * @note[short] iOS: 0x434ec4
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x16db8c
     * @note[short] MacOS (Intel): 0x1b2430
     * @note[short] Windows: 0x659a90
     * @note[short] iOS: 0x434b48
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);
    std::set<int> m_eventIDs;
    bool m_resetRemap;
    int m_extraID;
    int m_extraID2;
};
