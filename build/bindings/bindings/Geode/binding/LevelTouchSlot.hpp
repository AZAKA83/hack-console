#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/UIButtonConfig.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelTouchSlot {
public:
    static constexpr auto CLASS_NAME = "LevelTouchSlot";
    UIButtonConfig m_config;
    cocos2d::CCPoint m_offset;
    int m_anchorX;
    int m_anchorY;
    bool m_scaleX;
    bool m_scaleY;
};
