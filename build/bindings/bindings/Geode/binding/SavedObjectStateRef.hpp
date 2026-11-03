#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class SavedObjectStateRef {
public:
    static constexpr auto CLASS_NAME = "SavedObjectStateRef";
    GameObject* m_gameObject;
    double m_positionX;
    double m_positionY;
    float m_rotationXOffset;
    float m_rotationYOffset;
    float m_addToCustomScaleX;
    float m_addToCustomScaleY;
    union {
        float m_stepStartX{};
        float m_unkFloat3;
    };
    union {
        float m_stepStartY{};
        float m_unkFloat4;
    };
};
