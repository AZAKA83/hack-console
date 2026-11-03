#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CustomSongCell.hpp>

class CustomMusicCell : public CustomSongCell {
public:
    static constexpr auto CLASS_NAME = "CustomMusicCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomMusicCell, CustomSongCell)

    /**
     * @note[short] MacOS (Intel): 0x23d3a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     CustomMusicCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x150d50
     * @note[short] iOS: 0x138050
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomMusicCell();

    /**
     * @note[short] MacOS (ARM): 0x1d63ec
     * @note[short] MacOS (Intel): 0x229b50
     * @note[short] Windows: 0x150df0
     * @note[short] Android
     */
    void loadFromObject(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1d6520
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
};
