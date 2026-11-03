#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCMenuItemSpriteExtra.hpp>
#include <Geode/mapping/CCObject.hpp>

class CreateMenuItem : public CCMenuItemSpriteExtra {
public:
    static constexpr auto CLASS_NAME = "CreateMenuItem";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CreateMenuItem, CCMenuItemSpriteExtra)

    /**
     * @note[short] Windows: 0x19f0f0
     * @note[short] Android: Rebinded
     */
    virtual  ~CreateMenuItem();

    /**
     * @note[short] MacOS (ARM): 0x548d90
     * @note[short] MacOS (Intel): 0x603cd0
     * @note[short] Windows: 0x19f300
     * @note[short] Android
     */
    static CreateMenuItem* create(cocos2d::CCNode* normal, cocos2d::CCNode* selected, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler selector);

    /**
     * @note[short] MacOS (Intel): 0x97c410
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(cocos2d::CCNode* normal, cocos2d::CCNode* selected, cocos2d::CCObject* target, cocos2d::SEL_MenuHandler selector);
    std::string m_spriteFileName;
    int m_objectID;
    int m_pageIndex;
    int m_tabIndex;
};
