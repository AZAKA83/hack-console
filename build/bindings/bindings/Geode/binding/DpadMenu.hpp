#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCMenu.hpp>
#include <Geode/mapping/CCPoint.hpp>

class DpadMenu : public cocos2d::CCMenu {
public:
    static constexpr auto CLASS_NAME = "DpadMenu";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(DpadMenu, cocos2d::CCMenu)

    /**
     * @note[short] Windows: 0x1f3370
     * @note[short] Android: Rebinded
     */
    virtual  ~DpadMenu();

    /**
     * @note[short] Android
     */
    static DpadMenu* create(cocos2d::CCPoint p0, cocos2d::CCSize p1, cocos2d::CCSize p2);

    /**
     * @note[short] MacOS (ARM): 0x57af7c
     * @note[short] MacOS (Intel): 0x63eca0
     * @note[short] Windows: 0x1f3100
     * @note[short] iOS: 0x189778
     * @note[short] Android
     */
    virtual bool ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] MacOS (ARM): 0x57b0c4
     * @note[short] MacOS (Intel): 0x63ede0
     * @note[short] Windows: 0x1f31f0
     * @note[short] iOS: 0x1898c0
     * @note[short] Android
     */
    virtual void ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    TodoReturn arrowForTouch(cocos2d::CCTouch* p0);
};
