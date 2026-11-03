#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>

class SecretNumberLayer : public cocos2d::CCLayer {
public:
    static constexpr auto CLASS_NAME = "SecretNumberLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(SecretNumberLayer, cocos2d::CCLayer)

    /**
     * @note[short] Windows: 0x577b60
     * @note[short] iOS: 0x3aa900
     * @note[short] Android: Rebinded
     */
    virtual  ~SecretNumberLayer();

    /**
     * @note[short] MacOS (Intel): 0x49a200
     * @note[short] Windows: 0x57f540
     * @note[short] Android
     */
    static SecretNumberLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x4042b8
     * @note[short] MacOS (Intel): 0x49c210
     * @note[short] Windows: 0x426e0
     * @note[short] iOS: 0x3aa938
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x402280
     * @note[short] MacOS (Intel): 0x49a2b0
     * @note[short] Windows: 0x57f600
     * @note[short] Android
     */
    void playNumberEffect(int secretNumber);
};
