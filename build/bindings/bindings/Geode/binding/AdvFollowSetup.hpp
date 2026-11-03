#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/unordered_set.hpp>

class AdvFollowSetup {
public:
    static constexpr auto CLASS_NAME = "AdvFollowSetup";
    std::unordered_set<int> m_centerIDs;
    std::unordered_set<int> m_groupIDs;
    std::unordered_set<int> m_controlIDs;
    int m_delay;
};
