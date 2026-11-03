#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/set.hpp>

class SFXFolderPickerDelegate {
public:
    static constexpr auto CLASS_NAME = "SFXFolderPickerDelegate";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void sfxFolderPicked(SFXFolderPickerPopup* p0, int p1, std::string const& p2);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void sfxFoldersPicked(SFXFolderPickerPopup* p0, std::set<int> const& p1);
};
