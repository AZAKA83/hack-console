#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class FontPreviewCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "FontPreviewCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(FontPreviewCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     FontPreviewCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x89d10
     * @note[short] iOS: 0x13ba14
     * @note[short] Android: Rebinded
     */
    virtual  ~FontPreviewCell();

    /**
     * @note[short] MacOS (ARM): 0x84ba00
     * @note[short] MacOS (Intel): 0x96f8a0
     * @note[short] Windows: 0x3ff70
     * @note[short] iOS: 0x315a0c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x84bd94
     * @note[short] MacOS (Intel): 0x96fc60
     * @note[short] Windows: 0x58dd60
     * @note[short] iOS: 0x315d98
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Windows: 0x58d9c0
     * @note[short] Android
     */
    TodoReturn loadFromIndex(int p0, int p1);

    /**
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateBGColor(int p0);
};
