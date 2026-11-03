#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <fmod.hpp>
#include <Geode/mapping/CCNode.hpp>

class FMODLevelVisualizer : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODLevelVisualizer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODLevelVisualizer, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x80dc0
     * @note[short] Android: Rebinded
     */
    virtual  ~FMODLevelVisualizer();

    /**
     * @note[short] MacOS (ARM): 0x240f5c
     * @note[short] MacOS (Intel): 0x29daa0
     * @note[short] Windows: 0x3a9af0
     * @note[short] Android
     */
    static FMODLevelVisualizer* create();

    /**
     * @note[short] MacOS (ARM): 0x240fe4
     * @note[short] MacOS (Intel): 0x29db10
     * @note[short] Windows: 0x3a9b80
     * @note[short] iOS: 0x37f020
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x241448
     * @note[short] MacOS (Intel): 0x29df20
     * @note[short] Windows: 0x3aa050
     * @note[short] Android
     */
    void updateVisualizer(float volume, float peak, float time);
    float m_width;
};
