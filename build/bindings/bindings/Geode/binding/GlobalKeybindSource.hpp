#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/KeybindSource.hpp>
#include <Geode/mapping/vector.hpp>

class GlobalKeybindSource : public KeybindSource {
public:
    static constexpr auto CLASS_NAME = "GlobalKeybindSource";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GlobalKeybindSource, KeybindSource)

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
    virtual  ~GlobalKeybindSource();

    /**
     * @note[short] MacOS (ARM): 0x5f9160
     * @note[short] MacOS (Intel): 0x6e4de0
     * @note[short] Windows: 0x3d5200
     * @note[short] iOS: 0x25fb8
     * @note[short] Android
     */
    virtual std::vector<int> chordsForAction(int action);

    /**
     * @note[short] MacOS (ARM): 0x5f918c
     * @note[short] MacOS (Intel): 0x6e4e10
     * @note[short] Windows: 0x3d5240
     * @note[short] iOS: 0x25fe4
     * @note[short] Android
     */
    virtual std::vector<int> actionsForChord(int chord);

    /**
     * @note[short] MacOS (ARM): 0x5f91b8
     * @note[short] MacOS (Intel): 0x6e4e40
     * @note[short] Windows: 0x3d5280
     * @note[short] iOS: 0x26010
     * @note[short] Android
     */
    virtual void bindChord(int chord, int action);

    /**
     * @note[short] MacOS (ARM): 0x5f91e4
     * @note[short] MacOS (Intel): 0x6e4e70
     * @note[short] Windows: 0x3d52b0
     * @note[short] iOS: 0x2603c
     * @note[short] Android
     */
    virtual void unbindChord(int chord, int action);
};
