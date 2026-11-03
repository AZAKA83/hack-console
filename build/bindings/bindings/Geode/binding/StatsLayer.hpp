#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>

class StatsLayer : public GJDropDownLayer {
public:
    static constexpr auto CLASS_NAME = "StatsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     StatsLayer();

    /**
     * @note[short] Windows: 0x669250
     * @note[short] iOS: 0x2dfb7c
     * @note[short] Android: Rebinded
     */
    virtual  ~StatsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static StatsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x5bce4
     * @note[short] MacOS (Intel): 0x62af0
     * @note[short] Windows: 0x6692f0
     * @note[short] iOS: 0x2dfbb4
     * @note[short] Android
     */
    virtual void customSetup();
};
