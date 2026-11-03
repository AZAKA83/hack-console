#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCNode.hpp>

class BonusDropdown : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "BonusDropdown";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(BonusDropdown, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x3f3974
     * @note[short] MacOS (Intel): 0x48a300
     * @note[short] Android
     */
    static BonusDropdown* create(std::string text, int price);

    /**
     * @note[short] MacOS (ARM): 0x3f3a4c
     * @note[short] MacOS (Intel): 0x48a3e0
     * @note[short] Android
     */
    bool init(std::string text, int price);

    /**
     * @note[short] MacOS (ARM): 0x3f3d00
     * @note[short] MacOS (Intel): 0x48a680
     * @note[short] Android
     */
    void show();
    cocos2d::CCLayerColor* m_layerColor;
    float m_yPosition;
    cocos2d::CCScene* m_scene;
};
