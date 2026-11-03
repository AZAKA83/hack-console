#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SequenceTriggerState.hpp>
#include <Geode/binding/ChanceTriggerGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SequenceTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SequenceTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SequenceTriggerGameObject();

    /**
     * @note[short] Windows: 0x6381a0
     * @note[short] iOS: 0x440bf4
     * @note[short] Android: Rebinded
     */
    virtual  ~SequenceTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x16306c
     * @note[short] MacOS (Intel): 0x1a4d80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SequenceTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x163160
     * @note[short] MacOS (Intel): 0x1a4e90
     * @note[short] Windows: 0x655c00
     * @note[short] iOS: 0x4307f4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1631b0
     * @note[short] MacOS (Intel): 0x1a4ee0
     * @note[short] Windows: 0x655c20
     * @note[short] iOS: 0x430844
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x16337c
     * @note[short] MacOS (Intel): 0x1a50b0
     * @note[short] Windows: 0x655c50
     * @note[short] iOS: 0x430870
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x163860
     * @note[short] MacOS (Intel): 0x1a5610
     * @note[short] Windows: 0x6560a0
     * @note[short] iOS: 0x430b20
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x163d18
     * @note[short] MacOS (Intel): 0x1a5ac0
     * @note[short] Windows: 0x656410
     * @note[short] iOS: 0x430eb4
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x164cc0
     * @note[short] MacOS (Intel): 0x1a6ee0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addCount(int index, int count);

    /**
     * @note[short] MacOS (ARM): 0x164abc
     * @note[short] MacOS (Intel): 0x1a6c80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addTarget(int groupID, int count);

    /**
     * @note[short] MacOS (ARM): 0x164c44
     * @note[short] MacOS (Intel): 0x1a6e60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void deleteTarget(int index);

    /**
     * @note[short] MacOS (ARM): 0x164bc8
     * @note[short] MacOS (Intel): 0x1a6de0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool reorderTarget(int index, bool left);

    /**
     * @note[short] MacOS (ARM): 0x163248
     * @note[short] MacOS (Intel): 0x1a4fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateSequenceTotalCount();
    SequenceTriggerState m_sequenceState;
    float m_minInt;
    int m_sequenceMode;
    int m_resetMode;
    float m_reset;
    int m_sequenceTotalCount;
    bool m_uniqueRemap;
};
