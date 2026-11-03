#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class InputCaptureDelegate {
public:
    static constexpr auto CLASS_NAME = "InputCaptureDelegate";

    /**
     * @note[short] Windows: 0x44d290
     * @note[short] Android: Rebinded
     */
    virtual  ~InputCaptureDelegate();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void inputKeySelected(int p0);
};
