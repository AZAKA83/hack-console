#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/tk_spline.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class KeyframeObject {
public:
    static constexpr auto CLASS_NAME = "KeyframeObject";

    /**
     * @note[short] MacOS (ARM): 0xcb680
     * @note[short] MacOS (Intel): 0xe9740
     * @note[short] Windows: 0x3d9f10
     * @note[short] Android
     */
    void setupSpline(std::vector<KeyframeObject*>& objects);
    union {
        double m_duration{};
        double m_unk000;
    };
    union {
        int m_easingType{};
        int m_unk008;
    };
    union {
        float m_easingRate{};
        float m_unk00c;
    };
    union {
        bool m_refOnly{};
        bool m_unk010;
    };
    union {
        int m_spawnGroup{};
        int m_unk014;
    };
    union {
        float m_spawnDelay{};
        float m_unk018;
    };
    union {
        bool m_proximity{};
        bool m_unk01c;
    };
    union {
        bool m_spawned{};
        bool m_unk01d;
    };
    union {
        bool m_curve{};
        bool m_unk01e;
    };
    tk_spline m_spline1;
    tk_spline m_spline2;
    union {
        double m_curveLength{};
        double m_unk170;
    };
    union {
        double m_refRunDuration{};
        double m_unk178;
    };
    union {
        int m_timeMode{};
        int m_unk180;
    };
    union {
        int m_keyframeObject{};
        int m_unk184;
    };
    cocos2d::CCPoint m_positionDelta;
    cocos2d::CCPoint m_position;
    union {
        double m_scaleX{};
        double m_unk198;
    };
    union {
        double m_scaleY{};
        double m_unk1a0;
    };
    union {
        double m_rotation{};
        double m_unk1a8;
    };
    double m_unk1b0;
    union {
        float m_opacity{};
        float m_unk1b8;
    };
};
