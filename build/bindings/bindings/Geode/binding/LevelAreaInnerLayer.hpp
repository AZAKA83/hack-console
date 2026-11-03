#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>

class LevelAreaInnerLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaInnerLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaInnerLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelAreaInnerLayer();

    /**
     * @note[short] Windows: 0x3dd4d0
     * @note[short] iOS: 0x3e3da4
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelAreaInnerLayer();

    /**
     * @note[short] MacOS (ARM): 0x20d7fc
     * @note[short] MacOS (Intel): 0x2661f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelAreaInnerLayer* create(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x20d5b4
     * @note[short] MacOS (Intel): 0x265f20
     * @note[short] Windows: 0x3df700
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x20f650
     * @note[short] MacOS (Intel): 0x268180
     * @note[short] Windows: 0x3e1a90
     * @note[short] iOS: 0x3e5560
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x20f428
     * @note[short] MacOS (Intel): 0x267f50
     * @note[short] Windows: 0x3e0ee0
     * @note[short] iOS: 0x3e53bc
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x20f5fc
     * @note[short] MacOS (Intel): 0x268130
     * @note[short] Windows: 0x3e1a40
     * @note[short] iOS: 0x3e550c
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x20d8bc
     * @note[short] MacOS (Intel): 0x2662d0
     * @note[short] Windows: 0x3df810
     * @note[short] Android
     */
    bool init(bool returning);

    /**
     * @note[short] MacOS (ARM): 0x20e688
     * @note[short] MacOS (Intel): 0x267110
     * @note[short] Windows: 0x3e19e0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e6d8
     * @note[short] MacOS (Intel): 0x267160
     * @note[short] Windows: 0x3e14f0
     * @note[short] Android
     */
    void onDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e990
     * @note[short] MacOS (Intel): 0x2673f0
     * @note[short] Windows: 0x3e0f60
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e80c
     * @note[short] MacOS (Intel): 0x267290
     * @note[short] Windows: 0x3e0800
     * @note[short] Android
     */
    void onNextFloor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20e8cc
     * @note[short] MacOS (Intel): 0x267340
     * @note[short] Windows: 0x3e1800
     * @note[short] Android
     */
    void onOnlineVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20f540
     * @note[short] MacOS (Intel): 0x268060
     * @note[short] Windows: 0x3e16c0
     * @note[short] Android
     */
    bool playStep1();

    /**
     * @note[short] MacOS (ARM): 0x20ef1c
     * @note[short] MacOS (Intel): 0x2679f0
     * @note[short] Windows: 0x3e0900
     * @note[short] Android
     */
    void showFloor1CompleteDialog();

    /**
     * @note[short] MacOS (ARM): 0x20e900
     * @note[short] MacOS (Intel): 0x267380
     * @note[short] Windows: 0x3e1450
     * @note[short] Android
     */
    void tryResumeTowerMusic();

    /**
     * @note[short] MacOS (ARM): 0x20f408
     * @note[short] MacOS (Intel): 0x267f30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();
    CCMenuItemSpriteExtra* m_nextFloorButton;
    bool m_enteringLevel;
    int m_levelID;
    bool m_exiting;
};
