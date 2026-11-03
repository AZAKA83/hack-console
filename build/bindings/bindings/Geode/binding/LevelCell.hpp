#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "LevelCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelCell, TableViewCell)

    /**
     * @note[short] Windows: 0x148990
     * @note[short] Android: Rebinded
     */
     LevelCell(char const* identifier, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e2984
     * @note[short] MacOS (Intel): 0x236880
     * @note[short] Windows: 0x148870
     * @note[short] iOS: 0x132b98
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1e29bc
     * @note[short] MacOS (Intel): 0x236900
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelCell* create(float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x1e2b50
     * @note[short] MacOS (Intel): 0x236ad0
     * @note[short] Windows: 0x148a50
     * @note[short] iOS: 0x132cec
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e6c4c
     * @note[short] MacOS (Intel): 0x23aee0
     * @note[short] Windows: 0x14d560
     * @note[short] iOS: 0x136974
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] Android
     */
    TodoReturn inRecallMode();

    /**
     * @note[short] MacOS (ARM): 0x1e34c4
     * @note[short] MacOS (Intel): 0x2373e0
     * @note[short] Windows: 0x149120
     * @note[short] iOS: 0x13362c
     * @note[short] Android
     */
    void loadCustomLevelCell();

    /**
     * @note[short] MacOS (ARM): 0x1d6cf0
     * @note[short] MacOS (Intel): 0x22a390
     * @note[short] Windows: 0x148a80
     * @note[short] Android
     */
    void loadFromLevel(GJGameLevel* level);

    /**
     * @note[short] MacOS (ARM): 0x1e2b70
     * @note[short] MacOS (Intel): 0x236b10
     * @note[short] Windows: 0x14c7f0
     * @note[short] Android
     */
    void loadLocalLevelCell();

    /**
     * @note[short] Windows: 0x14d200
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x302d20
     * @note[short] Windows: 0x148c70
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e6c10
     * @note[short] MacOS (Intel): 0x23aeb0
     * @note[short] Windows: 0x14d520
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x148d30
     * @note[short] Android
     */
    TodoReturn playRecallUnlock();

    /**
     * @note[short] Android
     */
    TodoReturn recallChestReady();

    /**
     * @note[short] MacOS (ARM): 0x1e65ac
     * @note[short] MacOS (Intel): 0x23a8b0
     * @note[short] Windows: 0x148cc0
     * @note[short] iOS: 0x1363bc
     * @note[short] Android
     */
    GJGameLevel* recallLevel();

    /**
     * @note[short] Android
     */
    TodoReturn recallSavedLevel();

    /**
     * @note[short] MacOS (ARM): 0x1d6ec8
     * @note[short] MacOS (Intel): 0x22a580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);

    /**
     * @note[short] MacOS (ARM): 0x1e25d4
     * @note[short] MacOS (Intel): 0x2364a0
     * @note[short] Windows: 0x14d050
     * @note[short] Android
     */
    void updateCellMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x1e25b8
     * @note[short] MacOS (Intel): 0x236280
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateToggle();
    CCMenuItemSpriteExtra* m_button;
    GJGameLevel* m_level;
    bool m_cellDrawn;
    CCMenuItemToggler* m_toggler;
    cocos2d::CCPoint m_point;
    cocos2d::CCMenu* m_mainMenu;
    bool m_compactView;
    int m_cellMode;
};
