#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class SmartTemplateCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "SmartTemplateCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SmartTemplateCell, TableViewCell)

    /**
     * @note[short] MacOS (Intel): 0x242bd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     SmartTemplateCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x15dbb0
     * @note[short] iOS: 0x13b460
     * @note[short] Android: Rebinded
     */
    virtual  ~SmartTemplateCell();

    /**
     * @note[short] MacOS (ARM): 0x1ed73c
     * @note[short] MacOS (Intel): 0x242c40
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x13b498
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ed7f8
     * @note[short] MacOS (Intel): 0x242d10
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x13b548
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1e131c
     * @note[short] MacOS (Intel): 0x234e70
     * @note[short] Windows: 0x15dc40
     * @note[short] Android
     */
    void loadFromObject(GJSmartTemplate* smartTemplate);

    /**
     * @note[short] MacOS (ARM): 0x1ed748
     * @note[short] MacOS (Intel): 0x242c60
     * @note[short] Windows: 0x15e130
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e1630
     * @note[short] MacOS (Intel): 0x2351b0
     * @note[short] Windows: 0x15e040
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJSmartTemplate* m_smartTemplate;
};
