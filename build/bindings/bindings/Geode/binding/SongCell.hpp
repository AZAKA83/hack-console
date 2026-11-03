#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class SongCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SongCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SongCell, TableViewCell)

    /**
     * @note[short] MacOS (Intel): 0x23c7b0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     SongCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x14fd50
     * @note[short] iOS: 0x13794c
     * @note[short] Android: Rebinded
     */
    virtual  ~SongCell();

    /**
     * @note[short] MacOS (ARM): 0x1e8464
     * @note[short] MacOS (Intel): 0x23c820
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x137984
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e8494
     * @note[short] MacOS (Intel): 0x23c860
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x1379b4
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d9460
     * @note[short] MacOS (Intel): 0x22ca50
     * @note[short] Windows: 0x14fde0
     * @note[short] Android
     */
    void loadFromObject(SongObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e8470
     * @note[short] MacOS (Intel): 0x23c840
     * @note[short] Windows: 0x150200
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d98a4
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    SongObject* m_songObject;
};
