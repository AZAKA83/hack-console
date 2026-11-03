#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/TableViewCell.hpp>

class GJThreadCell : public TableViewCell {
public:
    static constexpr auto CLASS_NAME = "GJThreadCell";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJThreadCell, TableViewCell)

    /**
     * @note[short] Android: Rebinded
     */
     GJThreadCell(char const* p0, float p1, float p2);

    /**
     * @note[short] Windows: 0x1592e0
     * @note[short] iOS: 0x13a200
     * @note[short] Android: Rebinded
     */
    virtual  ~GJThreadCell();

    /**
     * @note[short] MacOS (ARM): 0x1ebb70
     * @note[short] MacOS (Intel): 0x240ca0
     * @note[short] Windows: 0x3ff70
     * @note[short] iOS: 0x13a238
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x1ebf60
     * @note[short] MacOS (Intel): 0x241050
     * @note[short] Windows: 0x1487a0
     * @note[short] iOS: 0x13a648
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x1df140
     * @note[short] MacOS (Intel): 0x232ab0
     * @note[short] Windows: 0x1597d0
     * @note[short] Android
     */
    void loadFromThread(GJMessageThread* p0);

    /**
     * @note[short] Windows: 0x15ab80
     * @note[short] Android
     */
    void onShowMembers(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x15ac30
     * @note[short] Android
     */
    void onThreadOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x15abc0
     * @note[short] Android
     */
    void onToggleSelect(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x15ab40
     * @note[short] Android
     */
    void onViewProfile(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x15ab10
     * @note[short] Android
     */
    void onViewThread(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void updateBGColor(int p0);
    GJMessageThread* m_thread;
    CCMenuItemToggler* m_toggler;
};
