#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/ChanceTriggerGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class RandTriggerGameObject : public ChanceTriggerGameObject {
public:
    static constexpr auto CLASS_NAME = "RandTriggerGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RandTriggerGameObject, ChanceTriggerGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RandTriggerGameObject();

    /**
     * @note[short] Windows: 0x638130
     * @note[short] iOS: 0x440b50
     * @note[short] Android: Rebinded
     */
    virtual  ~RandTriggerGameObject();

    /**
     * @note[short] MacOS (ARM): 0x161bc4
     * @note[short] MacOS (Intel): 0x1a3860
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RandTriggerGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x161c90
     * @note[short] MacOS (Intel): 0x1a3930
     * @note[short] Windows: 0x6555e0
     * @note[short] iOS: 0x42feb4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x161fe4
     * @note[short] MacOS (Intel): 0x1a3bc0
     * @note[short] Windows: 0x655600
     * @note[short] iOS: 0x42ffd8
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x162298
     * @note[short] MacOS (Intel): 0x1a3e30
     * @note[short] Windows: 0x6557e0
     * @note[short] iOS: 0x4300b0
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x1628e4
     * @note[short] MacOS (Intel): 0x1a4440
     * @note[short] Windows: 0x6559e0
     * @note[short] iOS: 0x4304b0
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x161e14
     * @note[short] MacOS (Intel): 0x1a3a60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getRandomGroupID();

    /**
     * @note[short] MacOS (ARM): 0x161ce0
     * @note[short] MacOS (Intel): 0x1a3980
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getTotalChance();
};
