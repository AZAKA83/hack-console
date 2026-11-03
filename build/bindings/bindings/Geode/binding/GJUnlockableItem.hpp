#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCObject.hpp>

class GJUnlockableItem : public cocos2d::CCObject {
public:
    static constexpr auto CLASS_NAME = "GJUnlockableItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJUnlockableItem, cocos2d::CCObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJUnlockableItem();

    /**
     * @note[short] Windows: 0x2f9b60
     * @note[short] Android: Rebinded
     */
    virtual  ~GJUnlockableItem();

    /**
     * @note[short] MacOS (ARM): 0x25ce4
     * @note[short] MacOS (Intel): 0x2b990
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJUnlockableItem* create();

    /**
     * @note[short] MacOS (ARM): 0x502cc
     * @note[short] MacOS (Intel): 0x56750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init();
};
