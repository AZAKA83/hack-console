#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class RateLevelLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "RateLevelLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(RateLevelLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     RateLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x67198
     * @note[short] Android: Rebinded
     */
     ~RateLevelLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static RateLevelLayer* create(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4e51c8
     * @note[short] MacOS (Intel): 0x5953e0
     * @note[short] Windows: 0x55e340
     * @note[short] iOS: 0x677dc
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4e494c
     * @note[short] MacOS (Intel): 0x594ba0
     * @note[short] Windows: 0x55dc40
     * @note[short] Android
     */
    bool init(int levelID);

    /**
     * @note[short] MacOS (ARM): 0x4e5104
     * @note[short] MacOS (Intel): 0x595340
     * @note[short] Windows: 0x55e300
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e5160
     * @note[short] MacOS (Intel): 0x595390
     * @note[short] Windows: 0x55e2b0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4e4fe8
     * @note[short] MacOS (Intel): 0x595260
     * @note[short] Windows: 0x55e160
     * @note[short] Android
     */
    void selectRating(cocos2d::CCObject* sender);
    CCMenuItemSpriteExtra* m_submitButton;
    cocos2d::CCArray* m_difficulties;
    int m_levelID;
    int m_levelRate;
    RateLevelDelegate* m_delegate;
};
