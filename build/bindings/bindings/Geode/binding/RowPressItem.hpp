#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/mapping/CCObject.hpp>

class RowPressItem : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "RowPressItem";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RowPressItem, CCMenuItemSpriteExtra)

    /**
     * @note[short] Windows: 0x159440
     * @note[short] iOS: 0x13ba4c
     * @note[short] Android: Rebinded
     */
    virtual  ~RowPressItem();

    /**
     * @note[short] Windows: 0x159380
     * @note[short] Android
     */
    static RowPressItem* create(cocos2d::CCNode* p0, cocos2d::CCObject* p1, cocos2d::SEL_MenuHandler p2);

    /**
     * @note[short] MacOS (ARM): 0x1ebc88
     * @note[short] MacOS (Intel): 0x240d70
     * @note[short] Windows: 0x1594b0
     * @note[short] iOS: 0x13a33c
     * @note[short] Android
     */
    virtual void selected();

    /**
     * @note[short] MacOS (ARM): 0x1ebcc8
     * @note[short] MacOS (Intel): 0x240db0
     * @note[short] Windows: 0x1594f0
     * @note[short] iOS: 0x13a37c
     * @note[short] Android
     */
    virtual void unselected();
};
