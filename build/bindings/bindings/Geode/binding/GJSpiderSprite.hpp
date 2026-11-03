#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJRobotSprite.hpp>

class GJSpiderSprite : public GJRobotSprite {
public:
    static constexpr auto CLASS_NAME = "GJSpiderSprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJSpiderSprite, GJRobotSprite)

    /**
     * @note[short] Windows: 0x3ac630
     * @note[short] iOS: 0x2dd24c
     * @note[short] Android: Rebinded
     */
    virtual  ~GJSpiderSprite();

    /**
     * @note[short] MacOS (ARM): 0x5c8d60
     * @note[short] MacOS (Intel): 0x6aec30
     * @note[short] Windows: 0x3adc30
     * @note[short] Android
     */
    static GJSpiderSprite* create(int frame);

    /**
     * @note[short] MacOS (ARM): 0x5c8e9c
     * @note[short] MacOS (Intel): 0x6aed80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int frame);
};
