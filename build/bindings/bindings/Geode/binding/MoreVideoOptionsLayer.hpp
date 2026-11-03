#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class MoreVideoOptionsLayer : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "MoreVideoOptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(MoreVideoOptionsLayer, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     MoreVideoOptionsLayer();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x115280
     * @note[short] Android: Rebinded
     */
     ~MoreVideoOptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x263a48
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static MoreVideoOptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x777060
     * @note[short] MacOS (Intel): 0x882100
     * @note[short] Windows: 0x4ce990
     * @note[short] iOS: 0x1152b8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x77908c
     * @note[short] MacOS (Intel): 0x884240
     * @note[short] Windows: 0x4d13a0
     * @note[short] iOS: 0x116708
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] Windows: 0x4cf450
     * @note[short] Android
     */
    void addToggle(char const* label, char const* key, char const* description);

    /**
     * @note[short] Windows: 0x4cfb00
     * @note[short] Android
     */
    int countForPage(int page);

    /**
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementCountForPage(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* infoKey(int index);

    /**
     * @note[short] Windows: 0x4cfdb0
     * @note[short] Android
     */
    cocos2d::CCLayer* layerForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x778e28
     * @note[short] MacOS (Intel): 0x883fe0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* layerKey(int page);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint nextPosition(int page);

    /**
     * @note[short] MacOS (ARM): 0x778e00
     * @note[short] MacOS (Intel): 0x883fc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* objectKey(int page);

    /**
     * @note[short] Windows: 0x4cfbf0
     * @note[short] Android
     */
    cocos2d::CCArray* objectsForPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x778ed8
     * @note[short] MacOS (Intel): 0x6e8790
     * @note[short] Windows: 0x4d0e60
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onApplyFPS(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7779f8
     * @note[short] MacOS (Intel): 0x882b10
     * @note[short] Windows: 0x4d1350
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onNextPage(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onPrevPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x778140
     * @note[short] MacOS (Intel): 0x883300
     * @note[short] Windows: 0x4d03f0
     * @note[short] Android
     */
    void onToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x778dd8
     * @note[short] MacOS (Intel): 0x883fa0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* pageKey(int page);

    /**
     * @note[short] MacOS (ARM): 0x778e50
     * @note[short] MacOS (Intel): 0x884000
     * @note[short] Windows: 0x4d0d80
     * @note[short] Android
     */
    void updateFPSButtons();
    int m_page;
    int m_toggleCount;
    int m_pageCount;
    cocos2d::CCDictionary* m_values;
    cocos2d::CCDictionary* m_variables;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    CCTextInputNode* m_fpsInput;
    cocos2d::CCArray* m_fpsNodes;
};
