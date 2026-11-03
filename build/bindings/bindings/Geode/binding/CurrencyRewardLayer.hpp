#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CurrencyRewardLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "CurrencyRewardLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CurrencyRewardLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x77d56c
     * @note[short] MacOS (Intel): 0x888bd0
     * @note[short] Windows: 0x1399d0
     * @note[short] iOS: 0x3bc3ac
     * @note[short] Android: Rebinded
     */
    virtual  ~CurrencyRewardLayer();

    /**
     * @note[short] MacOS (ARM): 0x77d6e4
     * @note[short] MacOS (Intel): 0x888de0
     * @note[short] Windows: 0x139bb0
     * @note[short] Android
     */
    static CurrencyRewardLayer* create(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float yOffset, float time);

    /**
     * @note[short] MacOS (ARM): 0x780568
     * @note[short] MacOS (Intel): 0x88bdf0
     * @note[short] Windows: 0x13c9e0
     * @note[short] iOS: 0x3beca0
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x77f894
     * @note[short] MacOS (Intel): 0x88aff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createObjects(CurrencySpriteType type, int count, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x77f958
     * @note[short] MacOS (Intel): 0x88b090
     * @note[short] Windows: 0x13bc80
     * @note[short] Android
     */
    void createObjectsFull(CurrencySpriteType type, int count, cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time);

    /**
     * @note[short] MacOS (ARM): 0x77f8fc
     * @note[short] MacOS (Intel): 0x88b040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createUnlockObject(cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementCount(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementDiamondsCount(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementMoonsCount(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementSpecialCount1(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementSpecialCount2(int count);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementStarsCount(int count);

    /**
     * @note[short] MacOS (Intel): 0x888ec0
     * @note[short] Windows: 0x139e00
     * @note[short] Android
     */
    bool init(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float yOffset, float time);

    /**
     * @note[short] MacOS (ARM): 0x781398
     * @note[short] MacOS (Intel): 0x88ce20
     * @note[short] Windows: 0x13d380
     * @note[short] Android
     */
    void pulseSprite(cocos2d::CCSprite* sprite);
    CurrencyRewardDelegate* m_delegate;
    cocos2d::CCArray* m_objects;
    cocos2d::CCLabelBMFont* m_orbsLabel;
    cocos2d::CCLabelBMFont* m_starsLabel;
    cocos2d::CCLabelBMFont* m_moonsLabel;
    cocos2d::CCLabelBMFont* m_diamondsLabel;
    cocos2d::CCLabelBMFont* m_keysLabel;
    cocos2d::CCLabelBMFont* m_shardsLabel;
    cocos2d::CCSprite* m_orbsSprite;
    cocos2d::CCSprite* m_starsSprite;
    cocos2d::CCSprite* m_moonsSprite;
    cocos2d::CCSprite* m_diamondsSprite;
    CurrencySprite* m_keysSprite;
    CurrencySprite* m_shardsSprite;
    cocos2d::CCSpriteBatchNode* m_currencyBatchNode;
    cocos2d::CCSpriteBatchNode* m_orbBatchNode;
    int m_orbs;
    int m_stars;
    int m_moons;
    int m_diamonds;
    int m_keys;
    int m_shards;
    float m_elapsed;
    float m_unknown;
    float m_time;
    cocos2d::CCPoint m_orbsPosition;
    cocos2d::CCPoint m_starsPosition;
    cocos2d::CCPoint m_moonsPosition;
    cocos2d::CCPoint m_diamondsPosition;
    cocos2d::CCPoint m_keysPosition;
    cocos2d::CCPoint m_shardsPosition;
    bool m_particlesAdded;
    bool m_objectsAdded;
    cocos2d::CCNode* m_mainNode;
    int m_rewardCount;
    CurrencyRewardType m_rewardType;
};
