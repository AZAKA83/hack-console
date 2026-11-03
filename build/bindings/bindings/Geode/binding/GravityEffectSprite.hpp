#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>
#include <Geode/mapping/ccTypes.hpp>

class GravityEffectSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "GravityEffectSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GravityEffectSprite, cocos2d::CCSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GravityEffectSprite();

    /**
     * @note[short] Windows: 0x51b5a0
     * @note[short] Android: Rebinded
     */
    virtual  ~GravityEffectSprite();

    /**
     * @note[short] MacOS (ARM): 0x719ac
     * @note[short] MacOS (Intel): 0x7a190
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13ebac
     * @note[short] Android
     */
    static GravityEffectSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x83374
     * @note[short] MacOS (Intel): 0x8de90
     * @note[short] Windows: 0x51b5e0
     * @note[short] iOS: 0x14c894
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x83578
     * @note[short] MacOS (Intel): 0x8e0f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14ca98
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0x7d110
     * @note[short] MacOS (Intel): 0x86f90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSpritesColor(cocos2d::ccColor3B color);
};
