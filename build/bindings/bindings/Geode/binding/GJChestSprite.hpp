#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GJChestSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GJChestSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJChestSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x561c30
     * @note[short] iOS: 0x25dcb4
     * @note[short] Android: Rebinded
     */
    virtual  ~GJChestSprite();

    /**
     * @note[short] MacOS (ARM): 0x1b14d8
     * @note[short] MacOS (Intel): 0x200390
     * @note[short] Windows: 0x566f50
     * @note[short] Android
     */
    static GJChestSprite* create(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x1b3fd4
     * @note[short] MacOS (Intel): 0x2030a0
     * @note[short] Windows: 0x5670e0
     * @note[short] iOS: 0x25de04
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x1b3efc
     * @note[short] MacOS (Intel): 0x202fb0
     * @note[short] Windows: 0x567020
     * @note[short] iOS: 0x25dd30
     * @note[short] Android
     */
    virtual void setColor(cocos2d::ccColor3B const& color);

    /**
     * @note[short] MacOS (ARM): 0x1b3ea0
     * @note[short] MacOS (Intel): 0x202f60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int chestType);

    /**
     * @note[short] MacOS (ARM): 0x1b28e4
     * @note[short] MacOS (Intel): 0x2019b0
     * @note[short] Windows: 0x567150
     * @note[short] Android
     */
    void switchToState(ChestSpriteState state, bool noGlow);
    int m_chestType;
    ChestSpriteState m_spriteState;
    bool m_dark;
};
