#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class TutorialLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "TutorialLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(TutorialLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x66f030
     * @note[short] iOS: 0x252c90
     * @note[short] Android: Rebinded
     */
    virtual  ~TutorialLayer();

    /**
     * @note[short] Windows: 0x66f0e0
     * @note[short] Android
     */
    static TutorialLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x438548
     * @note[short] MacOS (Intel): 0x4d7830
     * @note[short] Windows: 0x66f200
     * @note[short] iOS: 0x252d8c
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x438fe0
     * @note[short] MacOS (Intel): 0x4d8260
     * @note[short] Windows: 0x66fe50
     * @note[short] iOS: 0x253688
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x438b18
     * @note[short] MacOS (Intel): 0x4d7db0
     * @note[short] Windows: 0x66f780
     * @note[short] Android
     */
    void loadPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x4389d0
     * @note[short] MacOS (Intel): 0x4d7c90
     * @note[short] Windows: 0x66fdd0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x438a64
     * @note[short] MacOS (Intel): 0x4d7d10
     * @note[short] Windows: 0x66f760
     * @note[short] Android
     */
    void onNext(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x438f94
     * @note[short] MacOS (Intel): 0x4d8220
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeTutorialTexture();
    cocos2d::CCLayer* m_tutorialLayer;
    int m_page;
    CCMenuItemSpriteExtra* m_nextButton;
    CCMenuItemSpriteExtra* m_exitButton;
};
