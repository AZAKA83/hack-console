#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelAreaLayer : public cocos2d::CCLayer, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelAreaLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelAreaLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelAreaLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e21d4
     * @note[short] Android: Rebinded
     */
     ~LevelAreaLayer();

    /**
     * @note[short] MacOS (ARM): 0x20c79c
     * @note[short] MacOS (Intel): 0x2651b0
     * @note[short] Windows: 0x3deb90
     * @note[short] Android
     */
    static void addTorch(cocos2d::CCNode* parent, cocos2d::CCPoint position, int fireType, float scale, int zOrder, bool noTorch, int colorType, cocos2d::CCArray* nodes);

    /**
     * @note[short] MacOS (Intel): 0x263e10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelAreaLayer* create();

    /**
     * @note[short] MacOS (Intel): 0x263d20
     * @note[short] Windows: 0x3dd570
     * @note[short] Android
     */
    static cocos2d::CCScene* scene();

    /**
     * @note[short] MacOS (ARM): 0x20b504
     * @note[short] MacOS (Intel): 0x263ee0
     * @note[short] Windows: 0x3dd680
     * @note[short] iOS: 0x3e22f8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x20d6e8
     * @note[short] MacOS (Intel): 0x266080
     * @note[short] Windows: 0x3df6f0
     * @note[short] iOS: 0x3e3d98
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x20d460
     * @note[short] MacOS (Intel): 0x265de0
     * @note[short] Windows: 0x3de8b0
     * @note[short] iOS: 0x3e3bb4
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x20d694
     * @note[short] MacOS (Intel): 0x266030
     * @note[short] Windows: 0x3df6a0
     * @note[short] iOS: 0x3e3d44
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x20c480
     * @note[short] MacOS (Intel): 0x264e80
     * @note[short] Windows: 0x3df240
     * @note[short] Android
     */
    void addGodRay(float startOpacity, float midOpacity, float endOpacity, float fadeDuration, float scaleY, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x20d470
     * @note[short] MacOS (Intel): 0x265e00
     * @note[short] Windows: 0x3dea30
     * @note[short] Android
     */
    void fadeInsideTower();

    /**
     * @note[short] MacOS (ARM): 0x20c2d0
     * @note[short] MacOS (Intel): 0x264cc0
     * @note[short] Windows: 0x3df5f0
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20c338
     * @note[short] MacOS (Intel): 0x264d30
     * @note[short] Windows: 0x3de8c0
     * @note[short] Android
     */
    void onClickDoor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20d51c
     * @note[short] MacOS (Intel): 0x265ea0
     * @note[short] Windows: 0x3dead0
     * @note[short] Android
     */
    bool onEnterTower();

    /**
     * @note[short] MacOS (ARM): 0x20d210
     * @note[short] MacOS (Intel): 0x265bb0
     * @note[short] Windows: 0x3de580
     * @note[short] Android
     */
    void showDialog();
    cocos2d::CCSprite* m_towerSprite;
    cocos2d::CCArray* m_godRays;
    bool m_enteringTower;
    bool m_exiting;
};
