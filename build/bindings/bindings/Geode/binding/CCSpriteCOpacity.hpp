#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class CCSpriteCOpacity : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "CCSpriteCOpacity";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCSpriteCOpacity, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCSpriteCOpacity();

    /**
     * @note[short] MacOS (ARM): 0x3e1790
     * @note[short] MacOS (Intel): 0x476ba0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteCOpacity* createWithSpriteFrame(cocos2d::CCSpriteFrame* frame);

    /**
     * @note[short] MacOS (ARM): 0x3e1830
     * @note[short] MacOS (Intel): 0x476c30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    static CCSpriteCOpacity* createWithSpriteFrameName(char const* frameName);

    /**
     * @note[short] MacOS (ARM): 0x3e18e0
     * @note[short] MacOS (Intel): 0x476cd0
     * @note[short] Windows: 0x4c4e0
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);
};
