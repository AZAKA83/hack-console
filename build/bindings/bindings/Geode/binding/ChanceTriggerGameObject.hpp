#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChanceObject.hpp>
#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/vector.hpp>

class ChanceTriggerGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "ChanceTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ChanceTriggerGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ChanceTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x15b2fc
     * @note[short] MacOS (Intel): 0x19bc40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool containsTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x1618a8
     * @note[short] MacOS (Intel): 0x1a36c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void editChanceObject(int oldID, int newID);

    /**
     * @note[short] MacOS (ARM): 0x161b78
     * @note[short] MacOS (Intel): 0x1a3700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void getTargetIDs(std::vector<int>& ids);

    /**
     * @note[short] MacOS (ARM): 0x1616dc
     * @note[short] MacOS (Intel): 0x1a34f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x161724
     * @note[short] MacOS (Intel): 0x1a3540
     * @note[short] Windows: 0x6554f0
     * @note[short] Android
     */
    void remapChanceObjects(std::unordered_map<int, int> const* remap);

    /**
     * @note[short] MacOS (ARM): 0x161824
     * @note[short] MacOS (Intel): 0x1a3690
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void revertChanceRemap();
    std::vector<ChanceObject> m_chanceObjects;
};
