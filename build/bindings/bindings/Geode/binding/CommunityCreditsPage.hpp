#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>

class CommunityCreditsPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CommunityCreditsPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CommunityCreditsPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CommunityCreditsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x23523c
     * @note[short] Android: Rebinded
     */
     ~CommunityCreditsPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CommunityCreditsPage* create();

    /**
     * @note[short] MacOS (ARM): 0x29d204
     * @note[short] MacOS (Intel): 0x309df0
     * @note[short] Windows: 0x12cff0
     * @note[short] iOS: 0x235338
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x29f50c
     * @note[short] MacOS (Intel): 0x30c350
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x23790c
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x29f490
     * @note[short] MacOS (Intel): 0x30c2e0
     * @note[short] Windows: 0x99f90
     * @note[short] iOS: 0x237890
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x29f304
     * @note[short] MacOS (Intel): 0x30c150
     * @note[short] Windows: 0x12f240
     * @note[short] iOS: 0x237718
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
     * @note[short] MacOS (ARM): 0x29f1f0
     * @note[short] MacOS (Intel): 0x30c040
     * @note[short] Windows: 0x12f120
     * @note[short] Android
     */
    void goToPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x29f174
     * @note[short] MacOS (Intel): 0x30bfd0
     * @note[short] Windows: 0x99f60
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x29f1b0
     * @note[short] MacOS (Intel): 0x30c000
     * @note[short] Windows: 0x12f0e0
     * @note[short] Android
     */
    void onSwitchPage(cocos2d::CCObject* sender);
    cocos2d::CCDictionary* m_pageObjects;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    int m_page;
};
