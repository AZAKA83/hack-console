#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class MapPackCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "MapPackCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MapPackCell, TableViewCell)

    /**
     * @note[short] MacOS (Intel): 0x23b2c0
     * @note[short] Windows: Out of line
     * @note[short] Android: Rebinded
     */
     MapPackCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x136a90
     * @note[short] Android: Rebinded
     */
     ~MapPackCell();

    /**
     * @note[short] MacOS (ARM): 0x1e6fa4
     * @note[short] MacOS (Intel): 0x23b380
     * @note[short] Windows: 0x14d700
     * @note[short] iOS: 0x136b30
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1e7460
     * @note[short] MacOS (Intel): 0x23b830
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x136f1c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1d6f48
     * @note[short] MacOS (Intel): 0x22a5e0
     * @note[short] Windows: 0x14d760
     * @note[short] Android
     */
    void loadFromMapPack(GJMapPack* pack);

    /**
     * @note[short] MacOS (ARM): 0x1e719c
     * @note[short] MacOS (Intel): 0x1dfa30
     * @note[short] Windows: 0x14e3f0
     * @note[short] Android
     */
    void onClaimReward(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e6fec
     * @note[short] MacOS (Intel): 0x23b3d0
     * @note[short] Windows: 0x14e2c0
     * @note[short] Android
     */
    void onClick(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1e7218
     * @note[short] MacOS (Intel): 0x23b600
     * @note[short] Windows: 0x14e4a0
     * @note[short] Android
     */
    void playCompleteEffect();

    /**
     * @note[short] MacOS (ARM): 0x1e23f8
     * @note[short] MacOS (Intel): 0x236260
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void reloadCell();

    /**
     * @note[short] MacOS (ARM): 0x1d7a34
     * @note[short] MacOS (Intel): 0x22b140
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJMapPack* m_mapPack;
    CCMenuItemSpriteExtra* m_viewButton;
    CCMenuItemSpriteExtra* m_rewardButton;
    cocos2d::CCArray* m_rewardLabels;
    cocos2d::CCArray* m_rewardSprites;
};
