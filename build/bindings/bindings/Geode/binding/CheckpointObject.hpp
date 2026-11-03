#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJGameState.hpp>
#include <Geode/binding/GJShaderState.hpp>
#include <Geode/binding/FMODAudioState.hpp>
#include <Geode/binding/EffectManagerState.hpp>
#include <Geode/binding/SavedObjectStateRef.hpp>
#include <Geode/binding/SavedActiveObjectState.hpp>
#include <Geode/binding/SavedSpecialObjectState.hpp>
#include <Geode/binding/SequenceTriggerState.hpp>
#include <Geode/binding/TimerItem.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class CheckpointObject : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "CheckpointObject";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CheckpointObject, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x540d6c
     * @note[short] MacOS (Intel): 0x90010
     * @note[short] Windows: 0x520f70
     * @note[short] Android: Rebinded
     */
     CheckpointObject();

    /**
     * @note[short] MacOS (Intel): 0x5d7100
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x19c954
     * @note[short] Android: Rebinded
     */
     ~CheckpointObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CheckpointObject* create();

    /**
     * @note[short] MacOS (ARM): 0x529684
     * @note[short] MacOS (Intel): 0x5dde30
     * @note[short] Windows: 0x8b060
     * @note[short] iOS: 0x19c9e0
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* getObject();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setObject(GameObject* object);
    GJGameState m_gameState;
    GJShaderState m_shaderState;
    FMODAudioState m_audioState;
    GameObject* m_physicalCheckpointObject;
    PlayerCheckpoint* m_player1Checkpoint;
    PlayerCheckpoint* m_player2Checkpoint;
    bool m_ground2Invisible;
    bool m_streakBlend;
    int m_uniqueID;
    int m_respawnID;
    std::vector<SavedObjectStateRef> m_vectorSavedObjectStateRef;
    std::vector<SavedActiveObjectState> m_vectorActiveSaveObjectState;
    std::vector<SavedSpecialObjectState> m_vectorSpecialSaveObjectState;
    EffectManagerState m_effectManagerState;
    cocos2d::CCArray* m_gradientTriggerObjectArray;
    std::unordered_map<int,SequenceTriggerState> m_sequenceTriggerStateUnorderedMap;
    int m_commandIndex;
    int m_attempts;
    double m_levelTime;
    double m_bestTime;
    int m_totalClicks;
    double m_timePlayed;
    int m_tickIndex;
    int m_clickIndex;
    int m_jumps;
    std::unordered_map<int, int> m_persistentCounts;
    std::unordered_set<int> m_persistentIDs;
    std::unordered_map<int, TimerItem> m_persistentItems;
};
