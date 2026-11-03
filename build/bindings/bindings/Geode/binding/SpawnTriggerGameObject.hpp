#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChanceObject.hpp>
#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class SpawnTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "SpawnTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SpawnTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SpawnTriggerGameObject();

    /**
     * @note[short] Windows: 0x638240
     * @note[short] iOS: 0x435284
     * @note[short] Android: Rebinded
     */
    virtual  ~SpawnTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x16eed8
     * @note[short] MacOS (Intel): 0x1b3a00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SpawnTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x16efbc
     * @note[short] MacOS (Intel): 0x1b3ae0
     * @note[short] Windows: 0x65a0d0
     * @note[short] iOS: 0x435374
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x16f1a8
     * @note[short] MacOS (Intel): 0x1b3dd0
     * @note[short] Windows: 0x65a240
     * @note[short] iOS: 0x435490
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x16f774
     * @note[short] MacOS (Intel): 0x1b4310
     * @note[short] Windows: 0x65a5e0
     * @note[short] iOS: 0x435848
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x16fb5c
     * @note[short] MacOS (Intel): 0x1b4790
     * @note[short] Windows: 0x65a960
     * @note[short] iOS: 0x435be4
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0xf59a8
     * @note[short] MacOS (Intel): 0x1b3f10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addRemap(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x16f4bc
     * @note[short] MacOS (Intel): 0x1b4120
     * @note[short] Windows: 0x65a390
     * @note[short] Android
     */
    void changeRemap(int oldID, int newID, bool reverse);

    /**
     * @note[short] MacOS (ARM): 0x16f24c
     * @note[short] MacOS (Intel): 0x1b3e90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ChanceObject* getRemapWithSource(int id);

    /**
     * @note[short] MacOS (ARM): 0x16f280
     * @note[short] MacOS (Intel): 0x1b3ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    ChanceObject* getRemapWithTarget(int id);

    /**
     * @note[short] MacOS (ARM): 0x16f41c
     * @note[short] MacOS (Intel): 0x1b4090
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeRemap(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x16f00c
     * @note[short] MacOS (Intel): 0x1b3b30
     * @note[short] Windows: 0x65a140
     * @note[short] Android
     */
    void updateRemapKeys(std::vector<int> const& remapKeys);
    std::vector<ChanceObject> m_remapObjects;
    int m_remapKey;
    std::vector<int> m_remapKeys;
    double m_currentDelay;
    float m_spawnDelay;
    float m_delayRange;
    bool m_resetRemap;
};
