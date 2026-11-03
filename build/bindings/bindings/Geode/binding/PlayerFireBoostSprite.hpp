#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class PlayerFireBoostSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "PlayerFireBoostSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerFireBoostSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x7e780
     * @note[short] Android: Rebinded
     */
    virtual  ~PlayerFireBoostSprite();

    /**
     * @note[short] MacOS (ARM): 0x367280
     * @note[short] MacOS (Intel): 0x3e9470
     * @note[short] Windows: 0x5023e0
     * @note[short] Android
     */
    static PlayerFireBoostSprite* create();

    /**
     * @note[short] MacOS (ARM): 0x384498
     * @note[short] MacOS (Intel): 0x40a980
     * @note[short] Windows: 0x502480
     * @note[short] iOS: 0x2cb7e8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x37f330
     * @note[short] MacOS (Intel): 0x404c70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void animateFireIn();

    /**
     * @note[short] MacOS (ARM): 0x37f3b0
     * @note[short] MacOS (Intel): 0x404ce0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void animateFireOut();

    /**
     * @note[short] MacOS (ARM): 0x37f060
     * @note[short] MacOS (Intel): 0x404990
     * @note[short] Windows: 0x5024e0
     * @note[short] Android
     */
    void loopFireAnimation();
    float m_size;
};
