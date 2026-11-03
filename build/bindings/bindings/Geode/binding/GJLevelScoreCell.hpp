#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GJLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLevelScoreCell, TableViewCell)

    /**
     * @note[short] MacOS (Intel): 0x23ef40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJLevelScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x156ff0
     * @note[short] iOS: 0x13902c
     * @note[short] Android: Rebinded
     */
    virtual  ~GJLevelScoreCell();

    /**
     * @note[short] MacOS (ARM): 0x1ea318
     * @note[short] MacOS (Intel): 0x23efb0
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x139064
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ea35c
     * @note[short] MacOS (Intel): 0x23f000
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x1390a8
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1dd49c
     * @note[short] MacOS (Intel): 0x230e60
     * @note[short] Windows: 0x157080
     * @note[short] Android
     */
    void loadFromScore(GJUserScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1ea324
     * @note[short] MacOS (Intel): 0x23efd0
     * @note[short] Windows: 0x157b80
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1dd41c
     * @note[short] MacOS (Intel): 0x230e00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJUserScore* m_userScore;
};
