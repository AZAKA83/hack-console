#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class OptionsCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "OptionsCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsCell, TableViewCell)

    /**
     * @note[short] MacOS (Intel): 0x23d4b0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     OptionsCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x151070
     * @note[short] iOS: 0x138088
     * @note[short] Android: Rebinded
     */
    virtual  ~OptionsCell();

    /**
     * @note[short] Windows: 0x151100
     * @note[short] Android
     */
    void loadFromObject(OptionsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1e8d08
     * @note[short] MacOS (Intel): 0x23d540
     * @note[short] Windows: 0x151520
     * @note[short] Android
     */
    void onToggleOption(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d69cc
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    OptionsObject* m_optionsObject;
};
