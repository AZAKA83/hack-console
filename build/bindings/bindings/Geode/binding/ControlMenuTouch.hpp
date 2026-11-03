#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/vector.hpp>

class ControlMenuTouch {
public:
    static constexpr auto CLASS_NAME = "ControlMenuTouch";

    /**
     * @note[short] Android
     */
    void addMenu(cocos2d::CCMenu* menu);

    /**
     * @note[short] Android
     */
    bool began(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    void cancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    void ended(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    void moved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event);

    /**
     * @note[short] Android
     */
    bool tracking();
    std::vector<cocos2d::CCMenu*> m_menus;
    cocos2d::CCMenu* m_activeMenu;
};
