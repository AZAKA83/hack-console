#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/CCSpritePlus.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CurrencySprite : public CCSpritePlus {
public:
    static constexpr auto CLASS_NAME = "CurrencySprite";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CurrencySprite, CCSpritePlus)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x139a70
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CurrencySprite();

    /**
     * @note[short] MacOS (ARM): 0x781478
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3bf9a8
     * @note[short] Android: Rebinded
     */
     ~CurrencySprite();

    /**
     * @note[short] MacOS (ARM): 0x77f798
     * @note[short] MacOS (Intel): 0x88aee0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CurrencySprite* create(CurrencySpriteType type, bool burst);

    /**
     * @note[short] MacOS (ARM): 0x780480
     * @note[short] MacOS (Intel): 0x88bcf0
     * @note[short] Windows: 0x13ec10
     * @note[short] Android
     */
    static CurrencySprite* createWithSprite(cocos2d::CCSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x781fd8
     * @note[short] MacOS (Intel): 0x88daf0
     * @note[short] Windows: 0x13edf0
     * @note[short] Android
     */
    static CurrencySpriteType rewardToSpriteType(int rewardType);

    /**
     * @note[short] MacOS (Intel): 0x88ade0
     * @note[short] Windows: 0x13eea0
     * @note[short] Android
     */
    static std::string spriteTypeToStat(CurrencySpriteType type);

    /**
     * @note[short] MacOS (ARM): 0x781560
     * @note[short] MacOS (Intel): 0x88d000
     * @note[short] Windows: 0x13d450
     * @note[short] Android
     */
    bool init(CurrencySpriteType type, bool burst);

    /**
     * @note[short] MacOS (ARM): 0x781e28
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool initWithSprite(cocos2d::CCSprite* sprite);
    float m_unkFloat1;
    float m_unkFloat2;
    float m_unkFloat3;
    float m_remaining;
    int m_count;
    cocos2d::CCParticleSystemQuad* m_particleSystem;
    CurrencySpriteType m_spriteType;
    cocos2d::CCPoint m_position;
    cocos2d::CCSprite* m_burstSprite;
};
