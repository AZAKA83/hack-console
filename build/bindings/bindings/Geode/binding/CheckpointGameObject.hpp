#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EffectGameObject.hpp>
#include <Geode/mapping/vector.hpp>

class CheckpointGameObject : public EffectGameObject {
public:
    static constexpr auto CLASS_NAME = "CheckpointGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CheckpointGameObject, EffectGameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CheckpointGameObject();

    /**
     * @note[short] Windows: 0x637aa0
     * @note[short] iOS: 0x436054
     * @note[short] Android: Rebinded
     */
    virtual  ~CheckpointGameObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CheckpointGameObject* create();

    /**
     * @note[short] MacOS (ARM): 0x170bd8
     * @note[short] MacOS (Intel): 0x1b5c70
     * @note[short] Windows: 0x65ad90
     * @note[short] iOS: 0x436138
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x171010
     * @note[short] MacOS (Intel): 0x1b6090
     * @note[short] Windows: 0x65b220
     * @note[short] iOS: 0x436504
     * @note[short] Android
     */
    virtual void setupCustomSprites(std::string frameName);

    /**
     * @note[short] MacOS (ARM): 0x172520
     * @note[short] MacOS (Intel): 0x1b7910
     * @note[short] Windows: 0x65c030
     * @note[short] iOS: 0x4370c4
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x170c34
     * @note[short] MacOS (Intel): 0x1b5cd0
     * @note[short] Windows: 0x65ae10
     * @note[short] iOS: 0x436194
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1723ac
     * @note[short] MacOS (Intel): 0x1b7790
     * @note[short] Windows: 0x65bed0
     * @note[short] iOS: 0x436f88
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x17190c
     * @note[short] MacOS (Intel): 0x1b6a40
     * @note[short] Windows: 0x65bc00
     * @note[short] iOS: 0x436c84
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x170c4c
     * @note[short] MacOS (Intel): 0x1b5cf0
     * @note[short] Windows: 0x65ae30
     * @note[short] iOS: 0x4361ac
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x172578
     * @note[short] MacOS (Intel): 0x1b7980
     * @note[short] Windows: 0x65c270
     * @note[short] iOS: 0x437114
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x171584
     * @note[short] MacOS (Intel): 0x1b6650
     * @note[short] Windows: 0x65b8c0
     * @note[short] iOS: 0x436908
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x172570
     * @note[short] MacOS (Intel): 0x1b7960
     * @note[short] Windows: 0x65c0b0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x170e7c
     * @note[short] MacOS (Intel): 0x1b5f10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCheckpointSpriteVisibility();
    bool m_checkpointActivated;
    int m_respawnID;
    int m_preSpawnID;
};
