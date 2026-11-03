#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCAnimatedSprite.hpp>

class AnimatedShopKeeper : public CCAnimatedSprite {
public:
    static constexpr auto CLASS_NAME = "AnimatedShopKeeper";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AnimatedShopKeeper, CCAnimatedSprite)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     AnimatedShopKeeper();

    /**
     * @note[short] Windows: 0x3af7d0
     * @note[short] iOS: 0x1ccef0
     * @note[short] Android: Rebinded
     */
    virtual  ~AnimatedShopKeeper();

    /**
     * @note[short] MacOS (ARM): 0x2a2ad4
     * @note[short] MacOS (Intel): 0x30fdd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static AnimatedShopKeeper* create(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a6490
     * @note[short] MacOS (Intel): 0x313ed0
     * @note[short] Windows: 0x3b62d0
     * @note[short] iOS: 0x1ccfa8
     * @note[short] Android
     */
    virtual void animationFinished(char const* key);

    /**
     * @note[short] MacOS (ARM): 0x2a63dc
     * @note[short] MacOS (Intel): 0x313e20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(ShopType type);

    /**
     * @note[short] MacOS (ARM): 0x2a5370
     * @note[short] MacOS (Intel): 0x312b20
     * @note[short] Windows: 0x3b5fa0
     * @note[short] Android
     */
    void playReactAnimation();

    /**
     * @note[short] MacOS (ARM): 0x2a2c18
     * @note[short] MacOS (Intel): 0x30ff40
     * @note[short] Windows: 0x3b6240
     * @note[short] Android
     */
    void startAnimating();
    ShopType m_type;
    int m_idleInt1;
    int m_idleInt2;
    bool m_looking;
    bool m_reacting;
    int m_reactCount;
    int m_gruntIndex;
};
