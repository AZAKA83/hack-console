#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenu.hpp>

class CustomSFXRowMenu : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "CustomSFXRowMenu";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CustomSFXRowMenu, cocos2d::CCMenu)

    /**
     * @note[short] Windows: 0x15ff10
     * @note[short] iOS: 0x189760
     * @note[short] Android: Rebinded
     */
    virtual  ~CustomSFXRowMenu();

    /**
     * @note[short] Android
     */
    static CustomSFXRowMenu* create();

    /**
     * @note[short] MacOS (ARM): 0x5ce8a0
     * @note[short] MacOS (Intel): 0x6b5150
     * @note[short] Windows: 0x15ff50
     * @note[short] iOS: 0x38aeb4
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);
};
