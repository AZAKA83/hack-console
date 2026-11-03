#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/BoomScrollLayerDelegate.hpp>
#include <Geode/binding/DynamicScrollDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/enumKeyCodes.hpp>

class LevelSelectLayer : public cocos2d::CCLayer, public BoomScrollLayerDelegate, public DynamicScrollDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSelectLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(LevelSelectLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     LevelSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x396e8c
     * @note[short] MacOS (Intel): 0x41f0c0
     * @note[short] Windows: 0x4413b0
     * @note[short] iOS: 0x482074
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelSelectLayer();

    /**
     * @note[short] MacOS (ARM): 0x3163e0
     * @note[short] MacOS (Intel): 0x41f270
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static LevelSelectLayer* create(int page);

    /**
     * @note[short] MacOS (Intel): 0x41f140
     * @note[short] Windows: 0x441560
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(int page);

    /**
     * @note[short] MacOS (ARM): 0x399cf0
     * @note[short] MacOS (Intel): 0x4220f0
     * @note[short] Windows: 0x442e70
     * @note[short] iOS: 0x4841d8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x399d84
     * @note[short] MacOS (Intel): 0x422190
     * @note[short] Windows: 0x442ec0
     * @note[short] iOS: 0x4841e4
     * @note[short] Android
     */
    virtual void keyDown(cocos2d::enumKeyCodes key, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x397f8c
     * @note[short] MacOS (Intel): 0x4203e0
     * @note[short] Windows: 0x4425b0
     * @note[short] iOS: 0x482d44
     * @note[short] Android
     */
    virtual void updatePageWithObject(cocos2d::CCObject* layer, cocos2d::CCObject* object);

    /**
     * @note[short] MacOS (ARM): 0x3997f4
     * @note[short] MacOS (Intel): 0x421ba0
     * @note[short] Windows: 0x442620
     * @note[short] iOS: 0x483ea8
     * @note[short] Android
     */
    virtual void scrollLayerMoved(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x399c60
     * @note[short] MacOS (Intel): 0x422070
     * @note[short] Windows: 0x442960
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x3999bc
     * @note[short] MacOS (Intel): 0x421dc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B getColorValue(int page1, int page2, float progress);

    /**
     * @note[short] MacOS (ARM): 0x39707c
     * @note[short] MacOS (Intel): 0x41f370
     * @note[short] Windows: 0x4416a0
     * @note[short] Android
     */
    bool init(int page);

    /**
     * @note[short] MacOS (ARM): 0x397e08
     * @note[short] MacOS (Intel): 0x420250
     * @note[short] Windows: 0x442e20
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x443010
     * @note[short] Android
     */
    void onDeathTracker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x397d50
     * @note[short] MacOS (Intel): 0x4201a0
     * @note[short] Windows: 0x442550
     * @note[short] Android
     */
    void onDownload(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x4202a0
     * @note[short] Windows: 0x442fa0
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x397dd8
     * @note[short] MacOS (Intel): 0x420220
     * @note[short] Windows: 0x442d20
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x399e7c
     * @note[short] MacOS (Intel): 0x422340
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x397da8
     * @note[short] MacOS (Intel): 0x4201f0
     * @note[short] Windows: 0x442da0
     * @note[short] Android
     */
    void onPrev(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x397f6c
     * @note[short] MacOS (Intel): 0x4203c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryShowAd();

    /**
     * @note[short] Windows: 0x4430b0
     * @note[short] Android
     */
    void updateDeathButton(int page);
    float m_width;
    cocos2d::CCSprite* m_backgroundSprite;
    GJGroundLayer* m_groundLayer;
    BoomScrollLayer* m_scrollLayer;
    int m_unknown;
    int m_scrolls;
    bool m_masterDetectiveUnlocked;
    CCMenuItemSpriteExtra* m_deathTrackerButton;
};
