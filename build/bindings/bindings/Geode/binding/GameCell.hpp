#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GameCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GameCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GameCell, TableViewCell)

    /**
     * @note[short] MacOS (ARM): 0x28c8c4
     * @note[short] MacOS (Intel): 0x2f7e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Rebinded
     */
     GameCell(char const* identifier, float width, float height);

    /**
     * @note[short] Windows: 0x89d10
     * @note[short] iOS: 0x26877c
     * @note[short] Android: Rebinded
     */
    virtual  ~GameCell();

    /**
     * @note[short] MacOS (ARM): 0x28c910
     * @note[short] MacOS (Intel): 0x2f7e90
     * @note[short] Windows: 0x400c0
     * @note[short] iOS: 0x268668
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x28c9e4
     * @note[short] MacOS (Intel): 0x2f7f50
     * @note[short] Windows: 0x404f0
     * @note[short] iOS: 0x2686ac
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x28c4d0
     * @note[short] MacOS (Intel): 0x2f7960
     * @note[short] Windows: 0x400d0
     * @note[short] Android
     */
    void loadFromString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x28c91c
     * @note[short] MacOS (Intel): 0x2f7eb0
     * @note[short] Windows: 0x404b0
     * @note[short] Android
     */
    void onTouch(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x28c968
     * @note[short] MacOS (Intel): 0x2f7ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateBGColor(int index);
    void* m_unk230;
    std::string m_gameLink;
};
