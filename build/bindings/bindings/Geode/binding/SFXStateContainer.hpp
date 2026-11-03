#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class SFXStateContainer {
public:
    static constexpr auto CLASS_NAME = "SFXStateContainer";
    union {
        double m_startTime{};
        double m_unkDouble1;
    };
    union {
        double m_duration{};
        double m_unkDouble2;
    };
    union {
        float m_target{};
        float m_unkFloat1;
    };
    union {
        float m_unusedFrom{};
        float m_unkFloat2;
    };
    union {
        bool m_active{};
        bool m_unkBool;
    };
};
