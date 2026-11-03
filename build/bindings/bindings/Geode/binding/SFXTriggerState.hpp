#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SFXStateContainer.hpp>
#include <Geode/mapping/array.hpp>

class SFXTriggerState {
public:
    static constexpr auto CLASS_NAME = "SFXTriggerState";
    SFXTriggerGameObject* m_sfxTriggerGameObject;
    union {
        int m_instanceID{};
        int m_unkInt1;
    };
    union {
        double m_startTime{};
        double m_unkDouble1;
    };
    union {
        double m_playPosition{};
        double m_unkDouble2;
    };
    union {
        double m_positionTime{};
        double m_unkDouble3;
    };
    union {
        double m_lastUpdateTime{};
        double m_unkDouble4;
    };
    union {
        float m_speed{};
        float m_unkFloat1;
    };
    union {
        float m_groupSpeed{};
        float m_unkFloat2;
    };
    union {
        float m_volume{};
        float m_unkFloat3;
    };
    union {
        float m_length{};
        float m_unkFloat4;
    };
    union {
        int m_index{};
        int m_unkInt2;
    };
    bool m_processed;
    union {
        bool m_loop{};
        bool m_unkBool1;
    };
    std::array<SFXStateContainer, 3> m_sfxStateContainers;
};
