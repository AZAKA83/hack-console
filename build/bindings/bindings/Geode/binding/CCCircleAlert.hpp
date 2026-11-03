#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCCircleWave.hpp>

class CCCircleAlert : public CCCircleWave {
public:
    static constexpr auto CLASS_NAME = "CCCircleAlert";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CCCircleAlert, CCCircleWave)

    /**
     * @note[short] MacOS (ARM): 0x124018
     * @note[short] MacOS (Intel): 0x158050
     * @note[short] Android
     */
    static CCCircleAlert* create(float duration, float startRadius, float endRadius);

    /**
     * @note[short] MacOS (ARM): 0x1241d4
     * @note[short] MacOS (Intel): 0x158200
     * @note[short] Android
     */
    bool init(float duration, float startRadius, float endRadius);
};
