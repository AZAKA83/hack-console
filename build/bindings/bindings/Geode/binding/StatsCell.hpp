#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class StatsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "StatsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(StatsCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1e7684
     * @note[short] MacOS (Intel): 0x23ba90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     StatsCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x89d10
     * @note[short] Android: Rebinded
     */
    virtual  ~StatsCell();

    /**
     * @note[short] MacOS (ARM): 0x1e76c4
     * @note[short] MacOS (Intel): 0x23bb00
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1370c4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e82c0
     * @note[short] MacOS (Intel): 0x23c5d0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x137834
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e76cc
     * @note[short] MacOS (Intel): 0x23bb10
     * @note[short] Windows: 0x14eb90
     * @note[short] Android
     */
    const char* getTitleFromKey(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x1d90f0
     * @note[short] MacOS (Intel): 0x22a130
     * @note[short] Windows: 0x14e920
     * @note[short] Android
     */
    void loadFromObject(StatsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1d93f4
     * @note[short] MacOS (Intel): 0x22ca00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
};
