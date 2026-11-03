#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class ShardsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "ShardsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ShardsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     ShardsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x4485b8
     * @note[short] Android: Rebinded
     */
     ~ShardsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static ShardsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x4236d8
     * @note[short] MacOS (Intel): 0x4bff00
     * @note[short] Windows: 0x62a980
     * @note[short] iOS: 0x4486b4
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x4253c4
     * @note[short] MacOS (Intel): 0x4c1df0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x44a0b4
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x425348
     * @note[short] MacOS (Intel): 0x4c1d80
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x44a038
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x4251bc
     * @note[short] MacOS (Intel): 0x4c1bf0
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x449ec0
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* alert, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x425070
     * @note[short] MacOS (Intel): 0x4c1ab0
     * @note[short] Windows: 0x62d9a0
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x237cec
     * @note[short] MacOS (Intel): 0x4c1a10
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x424ff8
     * @note[short] MacOS (Intel): 0x4c1a40
     * @note[short] Windows: 0x62d920
     * @note[short] Android
     */
    void onIconInfo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x425030
     * @note[short] MacOS (Intel): 0x4c1a70
     * @note[short] Windows: 0x62d960
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
    cocos2d::CCDictionary* m_pages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    cocos2d::CCSprite* m_tierSprite;
    int m_page;
};
