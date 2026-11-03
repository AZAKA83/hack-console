#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>


class CreatorSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "CreatorSettingsDelegate";

    /**
     * @note[short] Windows: 0x1780d0
     * @note[short] Android: Rebinded
     */
    virtual  ~CreatorSettingsDelegate();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void creatorDescriptionChanged(std::string const& p0);
};
