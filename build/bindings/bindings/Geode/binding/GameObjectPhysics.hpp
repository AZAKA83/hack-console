#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>

class GameObjectPhysics {
public:
    static constexpr auto CLASS_NAME = "GameObjectPhysics";
    GameObject* m_gameObject;
    union {
        cocos2d::CCPoint m_velocity{};
        cocos2d::CCPoint m_unkPoint1;
    };
    union {
        cocos2d::CCPoint m_direction{};
        cocos2d::CCPoint m_unkPoint2;
    };
    union {
        float m_targetAngle{};
        float m_unkFloat1;
    };
    union {
        float m_turnSpeed{};
        float m_unkFloat2;
    };
    int m_unkInt1;
    union {
        int m_lastUpdateStep{};
        int m_unkInt2;
    };
    union {
        int m_exclusiveStep{};
        int m_unkInt3;
    };
};
