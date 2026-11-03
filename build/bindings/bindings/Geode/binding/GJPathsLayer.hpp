#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJPathsLayer : public FLAlertLayer, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJPathsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJPathsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x3921c0
     * @note[short] iOS: 0x45ebcc
     * @note[short] Android: Rebinded
     */
    virtual  ~GJPathsLayer();

    /**
     * @note[short] MacOS (ARM): 0x27f1ac
     * @note[short] MacOS (Intel): 0x2e8d00
     * @note[short] Android
     */
    static GJPathsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x27ef9c
     * @note[short] MacOS (Intel): 0x2e8b20
     * @note[short] Windows: 0x3925b0
     * @note[short] Android
     */
    static std::string nameForPath(int path);

    /**
     * @note[short] MacOS (ARM): 0x27f320
     * @note[short] MacOS (Intel): 0x2e8f00
     * @note[short] Windows: 0x392930
     * @note[short] iOS: 0x45ecc4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x27fa40
     * @note[short] MacOS (Intel): 0x2e9620
     * @note[short] Windows: 0x392e70
     * @note[short] iOS: 0x45f33c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x27fec0
     * @note[short] MacOS (Intel): 0x2e9bb0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x45f4dc
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x27fdf0
     * @note[short] MacOS (Intel): 0x2e9ae0
     * @note[short] Windows: 0x393180
     * @note[short] iOS: 0x45f4d0
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x27fef8
     * @note[short] MacOS (Intel): 0x2e9bf0
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x45f514
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x27fa94
     * @note[short] MacOS (Intel): 0x2e9670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void darkenButtons(bool darken);

    /**
     * @note[short] MacOS (ARM): 0x27f820
     * @note[short] MacOS (Intel): 0x2e9420
     * @note[short] Windows: 0x393120
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x27f9b4
     * @note[short] MacOS (Intel): 0x2e95a0
     * @note[short] Windows: 0x392ec0
     * @note[short] Android
     */
    void onPath(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_closeSprite;
    bool m_exiting;
};
