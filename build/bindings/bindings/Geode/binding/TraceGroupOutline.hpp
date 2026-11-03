#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class TraceGroupOutline {
public:
    static constexpr auto CLASS_NAME = "TraceGroupOutline";
    uint64_t m_version;
    std::vector<cocos2d::CCPoint> m_points;
    std::vector<cocos2d::CCPoint> m_points2;
};
