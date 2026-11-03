#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/LevelOptionsLayer.hpp>

class LevelOptionsLayer2 : public LevelOptionsLayer {
public:
    static constexpr auto CLASS_NAME = "LevelOptionsLayer2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelOptionsLayer2, LevelOptionsLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelOptionsLayer2();

    /**
     * @note[short] Windows: 0x45d100
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelOptionsLayer2();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelOptionsLayer2* create(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x203fec
     * @note[short] MacOS (Intel): 0x25be30
     * @note[short] Windows: 0x45db80
     * @note[short] iOS: 0x20f520
     * @note[short] Android
     */
    virtual void setupOptions();

    /**
     * @note[short] MacOS (ARM): 0x203ee8
     * @note[short] MacOS (Intel): 0x25bd20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object);
};
