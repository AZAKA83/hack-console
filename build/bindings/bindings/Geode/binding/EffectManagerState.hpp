#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CAState.hpp>
#include <Geode/binding/PulseEffectAction.hpp>
#include <Geode/binding/CountTriggerAction.hpp>
#include <Geode/binding/OpacityEffectAction.hpp>
#include <Geode/binding/TouchToggleAction.hpp>
#include <Geode/binding/CollisionTriggerAction.hpp>
#include <Geode/binding/ToggleTriggerAction.hpp>
#include <Geode/binding/SpawnTriggerAction.hpp>
#include <Geode/binding/GroupCommandObject2.hpp>
#include <Geode/binding/TimerItem.hpp>
#include <Geode/binding/TimerTriggerAction.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class EffectManagerState {
public:
    static constexpr auto CLASS_NAME = "EffectManagerState";

    /**
     * @note[short] Windows: 0x503390
     * @note[short] Android: Rebinded
     */
     EffectManagerState();
    std::vector<CAState> m_colorActions;
    std::vector<PulseEffectAction> m_pulseActions;
    std::unordered_map<int,std::vector<PulseEffectAction>> m_unorderedMapInt_vectorPulseEffectAction;
    std::unordered_map<int,std::vector<CountTriggerAction>> m_unorderedMapInt_vectorCountTriggerAction;
    std::unordered_set<int> m_unorderedSet_int1;
    std::map<int,int> m_mapInt_Int;
    std::unordered_map<int,OpacityEffectAction> m_unorderedMapInt_OpacityEffectAction;
    std::vector<TouchToggleAction> m_vectorTouchToggleAction;
    std::vector<CollisionTriggerAction> m_vectorCollisionTriggerAction;
    std::vector<ToggleTriggerAction> m_vectorToggleTriggerAction;
    std::vector<SpawnTriggerAction> m_vectorSpawnTriggerAction;
    std::unordered_map<int,int> m_itemCountMap;
    std::unordered_map<int,bool> m_unorderedMapInt_bool;
    std::vector<GroupCommandObject2> m_vectorGroupCommandObject2;
    std::unordered_map<int,std::pair<double,double>> m_unorderedMapInt_pair_double_double;
    std::unordered_set<int> m_unorderedSet_int2;
    std::unordered_map<int,TimerItem> m_timerItemMap;
    std::unordered_map<int,std::vector<TimerTriggerAction>> m_unorderedMapInt_vectorTimerTriggerAction;
    int m_platformerProgress;
};
