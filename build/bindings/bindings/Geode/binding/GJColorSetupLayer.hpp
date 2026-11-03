#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class GJColorSetupLayer : public FLAlertLayer, public ColorSelectDelegate, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "GJColorSetupLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(GJColorSetupLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x35e900
     * @note[short] iOS: 0x220dbc
     * @note[short] Android: Rebinded
     */
    virtual  ~GJColorSetupLayer();

    /**
     * @note[short] Windows: 0x35ea10
     * @note[short] Android
     */
    static GJColorSetupLayer* create(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1a1508
     * @note[short] MacOS (Intel): 0x1ef440
     * @note[short] Windows: 0x35f850
     * @note[short] iOS: 0x221830
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x1a14fc
     * @note[short] MacOS (Intel): 0x1ef410
     * @note[short] Windows: 0x35f790
     * @note[short] iOS: 0x221824
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x1a09dc
     * @note[short] MacOS (Intel): 0x1ee8b0
     * @note[short] Windows: 0x35eb60
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1a1390
     * @note[short] MacOS (Intel): 0x1ef2b0
     * @note[short] Windows: 0x35f800
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a1098
     * @note[short] MacOS (Intel): 0x1eefc0
     * @note[short] Windows: 0x35f6c0
     * @note[short] Android
     */
    void onColor(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a12f8
     * @note[short] MacOS (Intel): 0x1ef210
     * @note[short] Windows: 0x35f670
     * @note[short] Android
     */
    void onPage(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x1a13f0
     * @note[short] MacOS (Intel): 0x1ef300
     * @note[short] Windows: 0x35f7a0
     * @note[short] Android
     */
    void showPage(int page);

    /**
     * @note[short] MacOS (ARM): 0x1a1454
     * @note[short] MacOS (Intel): 0x1ef370
     * @note[short] Windows: 0x35f500
     * @note[short] Android
     */
    void updateSpriteColor(ColorChannelSprite* sprite, cocos2d::CCLabelBMFont* label, int id);

    /**
     * @note[short] MacOS (ARM): 0x1a1160
     * @note[short] MacOS (Intel): 0x1ef080
     * @note[short] Windows: 0x35f3e0
     * @note[short] Android
     */
    void updateSpriteColors();
    LevelSettingsObject* m_settingsObject;
    cocos2d::CCDictionary* m_unk290;
    cocos2d::CCDictionary* m_unk298;
    cocos2d::CCArray* m_colorLabels;
    cocos2d::CCArray* m_colorSprites;
    int m_page;
    int m_colorsPerPage;
    int m_totalPages;
    CCMenuItemSpriteExtra* m_prevButton;
    CCMenuItemSpriteExtra* m_nextButton;
    bool m_closeOnSelect;
    ColorSetupDelegate* m_delegate;
    int m_colorID;
};
