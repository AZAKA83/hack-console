#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class AchievementCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "AchievementCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AchievementCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1e288c
     * @note[short] MacOS (Intel): 0x236720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     AchievementCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x89d10
     * @note[short] Android: Rebinded
     */
    virtual  ~AchievementCell();

    /**
     * @note[short] MacOS (ARM): 0x1e28cc
     * @note[short] MacOS (Intel): 0x236790
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x132ae4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e28d4
     * @note[short] MacOS (Intel): 0x2367a0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x132aec
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d4cc8
     * @note[short] MacOS (Intel): 0x228490
     * @note[short] Windows: 0x1470f0
     * @note[short] Android
     */
    void loadFromDict(cocos2d::CCDictionary* dict);

    /**
     * @note[short] MacOS (ARM): 0x1d6154
     * @note[short] MacOS (Intel): 0x2298f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
};
