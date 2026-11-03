#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class LevelListCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelListCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelListCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x1edb14
     * @note[short] Windows: 0x15e2b0
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     LevelListCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b650
     * @note[short] Android: Rebinded
     */
     ~LevelListCell();

    /**
     * @note[short] MacOS (ARM): 0x1eda78
     * @note[short] MacOS (Intel): 0x243080
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static LevelListCell* create(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1edb5c
     * @note[short] MacOS (Intel): 0x2431d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13b724
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1edca0
     * @note[short] MacOS (Intel): 0x243340
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x13b868
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d7ab4
     * @note[short] MacOS (Intel): 0x22b1a0
     * @note[short] Windows: 0x15e330
     * @note[short] Android
     */
    void loadFromList(GJLevelList* list);

    /**
     * @note[short] MacOS (ARM): 0x1edb64
     * @note[short] MacOS (Intel): 0x2431e0
     * @note[short] Windows: 0x15f850
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1edc90
     * @note[short] MacOS (Intel): 0x243320
     * @note[short] Windows: 0x15fa50
     * @note[short] Android
     */
    void onListInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1edc5c
     * @note[short] MacOS (Intel): 0x2432f0
     * @note[short] Windows: 0x15fa70
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1d9070
     * @note[short] MacOS (Intel): 0x22a0d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJLevelList* m_levelList;
    bool m_addingLevel;
};
