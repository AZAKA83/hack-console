#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GJLocalLevelScoreCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJLocalLevelScoreCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJLocalLevelScoreCell, TableViewCell)

    /**
     * @note[short] MacOS (Intel): 0x23ed50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GJLocalLevelScoreCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x156b90
     * @note[short] iOS: 0x138f3c
     * @note[short] Android: Rebinded
     */
    virtual  ~GJLocalLevelScoreCell();

    /**
     * @note[short] MacOS (ARM): 0x1ea1e0
     * @note[short] MacOS (Intel): 0x23edc0
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x138f74
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ea1ec
     * @note[short] MacOS (Intel): 0x23ede0
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x138f80
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1dde74
     * @note[short] MacOS (Intel): 0x231860
     * @note[short] Windows: 0x156c20
     * @note[short] Android
     */
    void loadFromScore(GJLocalScore* score);

    /**
     * @note[short] MacOS (ARM): 0x1de0e8
     * @note[short] MacOS (Intel): 0x231a90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    GJLocalScore* m_localScore;
};
