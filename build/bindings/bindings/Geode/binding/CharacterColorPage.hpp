#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/mapping/CCPoint.hpp>

class CharacterColorPage : public FLAlertLayer {
public:
    static constexpr auto CLASS_NAME = "CharacterColorPage";
    GEODE_CUSTOM_CONSTRUCTOR_GD(CharacterColorPage, FLAlertLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     CharacterColorPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x15261c
     * @note[short] Android: Rebinded
     */
     ~CharacterColorPage();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static CharacterColorPage* create();

    /**
     * @note[short] MacOS (ARM): 0x649ac0
     * @note[short] MacOS (Intel): 0x73c1f0
     * @note[short] Windows: 0xa0800
     * @note[short] iOS: 0x152718
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x64b970
     * @note[short] MacOS (Intel): 0x73e0c0
     * @note[short] Windows: 0x46290
     * @note[short] iOS: 0x153f90
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x64b8c4
     * @note[short] MacOS (Intel): 0x73e020
     * @note[short] Windows: 0xa30e0
     * @note[short] iOS: 0x153f34
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x64b738
     * @note[short] MacOS (Intel): 0x73de90
     * @note[short] Windows: 0x9eec0
     * @note[short] iOS: 0x153dbc
     * @note[short] Android
     */
    virtual void show();

    /**
     * @note[short] MacOS (ARM): 0x64b660
     * @note[short] MacOS (Intel): 0x73dde0
     * @note[short] Windows: 0xa1d20
     * @note[short] Android
     */
    int activeColorForMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x64b6d0
     * @note[short] MacOS (Intel): 0x73de40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool checkColor(int id, UnlockType type);

    /**
     * @note[short] MacOS (ARM): 0x64b3b0
     * @note[short] MacOS (Intel): 0x73db00
     * @note[short] Windows: 0xa2990
     * @note[short] Android
     */
    int colorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x64aac0
     * @note[short] MacOS (Intel): 0x73d1d0
     * @note[short] Windows: 0xa1710
     * @note[short] Android
     */
    void createColorMenu();

    /**
     * @note[short] MacOS (ARM): 0x64b8c0
     * @note[short] MacOS (Intel): 0x73e010
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x64b60c
     * @note[short] MacOS (Intel): 0x73dd70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint offsetForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x64a678
     * @note[short] MacOS (Intel): 0x73cdb0
     * @note[short] Windows: 0xa30a0
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64a794
     * @note[short] MacOS (Intel): 0x73ceb0
     * @note[short] Windows: 0xa1e30
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64b3d0
     * @note[short] MacOS (Intel): 0x67110
     * @note[short] Windows: 0xa2680
     * @note[short] Android
     */
    void onPlayerColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64ae98
     * @note[short] MacOS (Intel): 0x73d5b0
     * @note[short] Windows: 0xa16a0
     * @note[short] Android
     */
    void toggleGlow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64b35c
     * @note[short] MacOS (Intel): 0x73dab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGlowItems(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x64a6cc
     * @note[short] MacOS (Intel): 0x73ce00
     * @note[short] Windows: 0xa1570
     * @note[short] Android
     */
    void toggleShip(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64aed0
     * @note[short] MacOS (Intel): 0x73d5f0
     * @note[short] Windows: 0xa20e0
     * @note[short] Android
     */
    void updateColorMode(int mode);

    /**
     * @note[short] MacOS (ARM): 0x64a980
     * @note[short] MacOS (Intel): 0x73d070
     * @note[short] Windows: 0xa2e80
     * @note[short] Android
     */
    void updateIconColors();
    int m_colorMode;
    float m_height;
    float m_width;
    cocos2d::CCArray* m_playerObjects;
    cocos2d::CCArray* m_modeButtons;
    cocos2d::CCDictionary* m_colorButtons;
    cocos2d::CCArray* m_cursors;
    CharacterColorDelegate* m_delegate;
    CCMenuItemToggler* m_glowToggler;
    cocos2d::CCLabelBMFont* m_glowLabel;
};
