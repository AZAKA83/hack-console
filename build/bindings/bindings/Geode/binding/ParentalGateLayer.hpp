#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/NumberInputLayer.hpp>

class ParentalGateLayer : public NumberInputLayer {
public:
    static constexpr auto CLASS_NAME = "ParentalGateLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ParentalGateLayer, NumberInputLayer)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     ParentalGateLayer();

    /**
     * @note[short] iOS: 0x119084
     * @note[short] Android: Rebinded
     */
    virtual  ~ParentalGateLayer();

    /**
     * @note[short] MacOS (ARM): 0x77164c
     * @note[short] Windows: 0x4d3ba0
     * @note[short] Android
     */
    static ParentalGateLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x77b900
     * @note[short] MacOS (Intel): 0x886ce0
     * @note[short] Windows: 0x4d3ca0
     * @note[short] iOS: 0x118314
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x77bb68
     * @note[short] MacOS (Intel): 0x886f40
     * @note[short] Windows: 0x4d3ee0
     * @note[short] iOS: 0x118514
     * @note[short] Android
     */
    virtual void onDone(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x4d3d00
     * @note[short] Android
     */
    void generateChallenge();
    int m_solution;
};
