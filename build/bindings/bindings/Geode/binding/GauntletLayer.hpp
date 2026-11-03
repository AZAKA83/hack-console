#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/LevelManagerDelegate.hpp>

class GauntletLayer : public cocos2d::CCLayer, public LevelManagerDelegate {
public:
    static constexpr auto CLASS_NAME = "GauntletLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GauntletLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     GauntletLayer();

    /**
     * @note[short] MacOS (Intel): 0x37d400
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2ce1f4
     * @note[short] Android: Rebinded
     */
     ~GauntletLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static GauntletLayer* create(GauntletType type);

    /**
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x30b1dc
     * @note[short] MacOS (Intel): 0x37fb90
     * @note[short] Windows: 0x2fd280
     * @note[short] iOS: 0x2cff1c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x30a6c4
     * @note[short] MacOS (Intel): 0x37f140
     * @note[short] Windows: 0x2fb6a0
     * @note[short] iOS: 0x2cf87c
     * @note[short] Android
     */
    virtual void loadLevelsFinished(cocos2d::CCArray* levels, char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x30a858
     * @note[short] MacOS (Intel): 0x37f2e0
     * @note[short] Windows: 0x2fb8e0
     * @note[short] iOS: 0x2cf950
     * @note[short] Android
     */
    virtual void loadLevelsFailed(char const* key, int type);

    /**
     * @note[short] MacOS (ARM): 0x309150
     * @note[short] MacOS (Intel): 0x37da00
     * @note[short] Windows: 0x2faeb0
     * @note[short] Android
     */
    bool init(GauntletType type);

    /**
     * @note[short] MacOS (ARM): 0x3097b0
     * @note[short] MacOS (Intel): 0x37e070
     * @note[short] Windows: 0x2fd230
     * @note[short] Android
     */
    void onBack(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x30ab14
     * @note[short] MacOS (Intel): 0x37f550
     * @note[short] Windows: 0x2fcb90
     * @note[short] Android
     */
    void onLevel(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x3097f8
     * @note[short] MacOS (Intel): 0x37e0c0
     * @note[short] Windows: 0x2fbb10
     * @note[short] Android
     */
    void setupGauntlet(cocos2d::CCArray* levels);

    /**
     * @note[short] MacOS (ARM): 0x30ab58
     * @note[short] MacOS (Intel): 0x37f590
     * @note[short] Windows: 0x2fcc00
     * @note[short] Android
     */
    void unlockActiveItem();
    cocos2d::CCArray* m_levels;
    LoadingCircle* m_loadingCircle;
    GauntletType m_gauntletType;
    cocos2d::CCSprite* m_backgroundSprite;
    void* m_unkPtr;
    CCMenuItemSpriteExtra* m_activeItemButton;
    cocos2d::CCArray* m_activeObjects;
    TextArea* m_tryAgainText;
};
