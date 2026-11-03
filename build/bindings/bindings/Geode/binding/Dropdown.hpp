#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/binding/DropdownListPopupOwner.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class Dropdown : public cocos2d::CCNode, public DropdownListPopupOwner {
public:
    static constexpr auto CLASS_NAME = "Dropdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(Dropdown, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x120620
     * @note[short] iOS: 0x4c2268
     * @note[short] Android: Rebinded
     */
    virtual  ~Dropdown();

    /**
     * @note[short] Windows: 0x120700
     * @note[short] Android
     */
    static Dropdown* create(FLAlertLayer* parent, cocos2d::CCMenu* menu, std::vector<std::string> const& items, int selectedIndex, float width, DropdownDelegate* delegate, int tag);

    /**
     * @note[short] MacOS (ARM): 0x7c6dac
     * @note[short] MacOS (Intel): 0x8d9f10
     * @note[short] Windows: 0x120c30
     * @note[short] iOS: 0x4c270c
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& p0);

    /**
     * @note[short] MacOS (ARM): 0x7c6e10
     * @note[short] MacOS (Intel): 0x8d9f70
     * @note[short] Windows: 0x120c90
     * @note[short] iOS: 0x4c2770
     * @note[short] Android
     */
    virtual void setVisible(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x7c76b0
     * @note[short] MacOS (Intel): 0x8da870
     * @note[short] Windows: 0x121360
     * @note[short] iOS: 0x4c2d08
     * @note[short] Android
     */
    virtual void dropdownListPopupClosed(DropdownListPopup* p0);

    /**
     * @note[short] Android
     */
    TodoReturn closeList();

    /**
     * @note[short] Windows: 0x120830
     * @note[short] Android
     */
    bool init(FLAlertLayer* parent, cocos2d::CCMenu* menu, std::vector<std::string> const& items, int selectedIndex, float width, DropdownDelegate* delegate, int tag);

    /**
     * @note[short] Windows: 0x121380
     * @note[short] Android
     */
    void onRowSelected(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x120dc0
     * @note[short] Android
     */
    TodoReturn openList();

    /**
     * @note[short] Windows: 0x120d10
     * @note[short] Android
     */
    TodoReturn refreshValueLabel();

    /**
     * @note[short] Android
     */
    void setSelectedIndex(int p0);
};
