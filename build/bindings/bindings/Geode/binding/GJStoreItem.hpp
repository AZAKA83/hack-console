#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/SeedValue.hpp>

class GJStoreItem : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJStoreItem";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJStoreItem, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GJStoreItem();

    /**
     * @note[short] Windows: 0x2d6850
     * @note[short] Android: Rebinded
     */
    virtual  ~GJStoreItem();

    /**
     * @note[short] MacOS (ARM): 0x26228
     * @note[short] MacOS (Intel): 0x2bf10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GJStoreItem* create(int index, int typeID, int unlockType, int price, ShopType shopType);

    /**
     * @note[short] MacOS (ARM): 0x2660c
     * @note[short] MacOS (Intel): 0x2c2e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getCurrencyKey();

    /**
     * @note[short] MacOS (ARM): 0x501dc
     * @note[short] MacOS (Intel): 0x56620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool init(int index, int typeID, int unlockType, int price, ShopType shopType);
    geode::SeedValueRSV m_index;
    geode::SeedValueRSV m_typeID;
    geode::SeedValueRSV m_unlockType;
    geode::SeedValueRSV m_price;
    ShopType m_shopType;
};
