#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/ccTypes.hpp>

class PriceLabel : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PriceLabel";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PriceLabel, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x41ccf0
     * @note[short] MacOS (Intel): 0x4b86e0
     * @note[short] Android
     */
    static PriceLabel* create(int price);

    /**
     * @note[short] MacOS (ARM): 0x41ce14
     * @note[short] MacOS (Intel): 0x4b8800
     * @note[short] Android
     */
    bool init(int price);

    /**
     * @note[short] MacOS (ARM): 0x41d030
     * @note[short] MacOS (Intel): 0x4b8a40
     * @note[short] Android
     */
    void setColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x41d088
     * @note[short] MacOS (Intel): 0x4b8a90
     * @note[short] Android
     */
    void setOpacity(float opacity);

    /**
     * @note[short] MacOS (ARM): 0x41cefc
     * @note[short] MacOS (Intel): 0x4b88e0
     * @note[short] Android
     */
    void setPrice(int price);
    cocos2d::CCLabelBMFont* m_priceLabel;
    cocos2d::CCSprite* m_coinSprite;
};
