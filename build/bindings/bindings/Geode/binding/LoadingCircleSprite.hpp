#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCSprite.hpp>

class LoadingCircleSprite : public cocos2d::CCSprite {
public:
    static constexpr auto CLASS_NAME = "LoadingCircleSprite";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LoadingCircleSprite, cocos2d::CCSprite)

    /**
     * @note[short] Windows: 0x78730
     * @note[short] iOS: 0x441958
     * @note[short] Android: Rebinded
     */
    virtual  ~LoadingCircleSprite();

    /**
Create a Loading Circle Sprite with a spinning action

 @param spinSpeed A speed modifier, higher is faster and lower is slow     * @note[short] MacOS (ARM): 0x41ca3c
     * @note[short] MacOS (Intel): 0x4b8420
     * @note[short] Windows: 0x78ba0
     * @note[short] iOS: 0x441844
     * @note[short] Android
     */
    static LoadingCircleSprite* create(float spinSpeed);

    /**
     * @note[short] MacOS (ARM): 0x41cbb8
     * @note[short] MacOS (Intel): 0x4b85c0
     * @note[short] Windows: 0x78ca0
     * @note[short] Android
     */
    cocos2d::CCAction* fadeInCircle(bool resetOpacity, float duration, float opacity);

    /**
     * @note[short] MacOS (ARM): 0x41cc44
     * @note[short] MacOS (Intel): 0x4b8640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void hideCircle();

    /**
     * @note[short] MacOS (ARM): 0x41cb20
     * @note[short] MacOS (Intel): 0x4b8500
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4418dc
     * @note[short] Android
     */
    bool init(float spinSpeed);
};
