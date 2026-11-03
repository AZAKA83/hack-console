#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/unordered_map.hpp>

class SequenceTriggerState {
public:
    static constexpr auto CLASS_NAME = "SequenceTriggerState";
    std::unordered_map<int, float> m_sequenceTimes;
    std::unordered_map<int, int> m_sequenceIndices;
};
