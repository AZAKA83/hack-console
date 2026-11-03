#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayerColor.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>

class CCContentLayer : public cocos2d::CCLayerColor {
public:
    static constexpr auto CLASS_NAME = "CCContentLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(CCContentLayer, cocos2d::CCLayerColor)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CCContentLayer();

    /**
     * @note[short] MacOS (ARM): 0x79ca10
     * @note[short] MacOS (Intel): 0x8aa220
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CCContentLayer* create(cocos2d::ccColor4B const& color, float width, float height);

    /**
     * @note[short] MacOS (ARM): 0x79caf4
     * @note[short] MacOS (Intel): 0x8aa320
     * @note[short] Windows: 0x46c80
     * @note[short] iOS: 0x221cf8
     * @note[short] Android
     */
    virtual void setPosition(cocos2d::CCPoint const& position);
};
