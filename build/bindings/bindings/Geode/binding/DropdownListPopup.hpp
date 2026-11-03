#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/vector.hpp>

class DropdownListPopup : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "DropdownListPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DropdownListPopup, FLAlertLayer)

    /**
     * @note[short] Windows: 0x1204f0
     * @note[short] iOS: 0x4c2df8
     * @note[short] Android: Rebinded
     */
    virtual  ~DropdownListPopup();

    /**
     * @note[short] Android
     */
    static DropdownListPopup* create(std::vector<DropdownListRow> const& p0, cocos2d::CCPoint p1, DropdownListStyle const& p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4);

    /**
     * @note[short] MacOS (ARM): 0x7c8424
     * @note[short] MacOS (Intel): 0x8db890
     * @note[short] Windows: 0x1222c0
     * @note[short] iOS: 0x4c3854
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7c8578
     * @note[short] MacOS (Intel): 0x8db9e0
     * @note[short] Windows: 0x1223c0
     * @note[short] iOS: 0x4c395c
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7c86e8
     * @note[short] MacOS (Intel): 0x8dbb60
     * @note[short] Windows: 0x122480
     * @note[short] iOS: 0x4c3a1c
     * @note[short] Android
     */
    virtual void ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7c8830
     * @note[short] MacOS (Intel): 0x8dbc80
     * @note[short] Windows: 0x122520
     * @note[short] iOS: 0x4c3ab0
     * @note[short] Android
     */
    virtual void ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x7c8910
     * @note[short] MacOS (Intel): 0x8dbd60
     * @note[short] Windows: 0x1225c0
     * @note[short] iOS: 0x4c3b28
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Android
     */
    TodoReturn buildRows();

    /**
     * @note[short] Android
     */
    TodoReturn closeSelf();

    /**
     * @note[short] Android
     */
    bool init(std::vector<DropdownListRow> const& p0, cocos2d::CCPoint p1, DropdownListStyle const& p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4);

    /**
     * @note[short] Android
     */
    void onRowSelected(cocos2d::CCObject* sender);
};
