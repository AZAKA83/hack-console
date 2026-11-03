#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/BoomListView.hpp>

class CustomListView : public BoomListView {
public:
    static constexpr auto CLASS_NAME = "CustomListView";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CustomListView, BoomListView)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CustomListView();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static CustomListView* create(cocos2d::CCArray* entries, BoomListType type, float height, float width);

    /**
     * @note[short] MacOS (ARM): 0x1d3228
     * @note[short] MacOS (Intel): 0x225cd0
     * @note[short] Windows: 0x144910
     * @note[short] Android
     */
    static CustomListView* create(cocos2d::CCArray* entries, TableViewCellDelegate* delegate, float height, float width, int page, BoomListType type, float y);

    /**
     * @note[short] MacOS (ARM): 0x1d3ed0
     * @note[short] MacOS (Intel): 0x227220
     * @note[short] Windows: 0x145920
     * @note[short] Android
     */
    static float getCellHeight(BoomListType type);

    /**
     * @note[short] MacOS (ARM): 0x1e1700
     * @note[short] MacOS (Intel): 0x235260
     * @note[short] Windows: 0x146240
     * @note[short] iOS: 0x131dc0
     * @note[short] Android
     */
    virtual void setupList(float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x1d3338
     * @note[short] MacOS (Intel): 0x225e10
     * @note[short] Windows: 0x144a40
     * @note[short] iOS: 0x125540
     * @note[short] Android
     */
    virtual TableViewCell* getListCell(char const* identifier);

    /**
     * @note[short] MacOS (ARM): 0x1d4608
     * @note[short] MacOS (Intel): 0x227da0
     * @note[short] Windows: 0x145a40
     * @note[short] iOS: 0x125e60
     * @note[short] Android
     */
    virtual void loadCell(TableViewCell* cell, int index);

    /**
     * @note[short] MacOS (ARM): 0x582ce8
     * @note[short] MacOS (Intel): 0x235bb0
     * @note[short] Windows: 0x146ac0
     * @note[short] Android
     */
    void reloadAll();
    int m_cellMode;
};
