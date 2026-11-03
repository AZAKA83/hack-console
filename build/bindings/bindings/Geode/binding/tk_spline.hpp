#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/vector.hpp>

class tk_spline {
public:
    static constexpr auto CLASS_NAME = "tk_spline";
    std::vector<double> m_x;
    std::vector<double> m_y;
    std::vector<double> m_b;
    std::vector<double> m_c;
    std::vector<double> m_d;
    double m_c0;
    int m_type;
    int m_left;
    int m_right;
    double m_leftValue;
    double m_rightValue;
    bool m_madeMonotonic;
};
