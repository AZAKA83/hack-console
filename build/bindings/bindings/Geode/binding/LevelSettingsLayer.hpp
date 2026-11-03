#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/FLAlertLayer.hpp>
#include <Geode/binding/ColorSelectDelegate.hpp>
#include <Geode/binding/SelectArtDelegate.hpp>
#include <Geode/binding/SelectSettingDelegate.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/CustomSongLayerDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class LevelSettingsLayer : public FLAlertLayer, public ColorSelectDelegate, public SelectArtDelegate, public SelectSettingDelegate, public FLAlertLayerProtocol, public CustomSongLayerDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelSettingsLayer, FLAlertLayer)

    /**
     * @note[short] Windows: 0x457620
     * @note[short] iOS: 0x20a8b4
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelSettingsLayer();

    /**
     * @note[short] MacOS (ARM): 0x291440
     * @note[short] Android
     */
    static LevelSettingsLayer* create(LevelSettingsObject* object, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2012b0
     * @note[short] MacOS (Intel): 0x258c00
     * @note[short] Windows: 0x45a4d0
     * @note[short] iOS: 0x20d4b0
     * @note[short] Android
     */
    virtual void registerWithTouchDispatcher();

    /**
     * @note[short] MacOS (ARM): 0x201b44
     * @note[short] MacOS (Intel): 0x2595f0
     * @note[short] Windows: 0x45b3d0
     * @note[short] iOS: 0x20d9f4
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x2016f8
     * @note[short] MacOS (Intel): 0x2590a0
     * @note[short] Windows: 0x164f00
     * @note[short] iOS: 0x20d6d4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x201640
     * @note[short] MacOS (Intel): 0x258fc0
     * @note[short] Windows: 0x45ac50
     * @note[short] iOS: 0x20d61c
     * @note[short] Android
     */
    virtual void colorSelectClosed(cocos2d::CCNode* popup);

    /**
     * @note[short] MacOS (ARM): 0x201944
     * @note[short] MacOS (Intel): 0x259380
     * @note[short] Windows: 0x45b070
     * @note[short] iOS: 0x20d7f4
     * @note[short] Android
     */
    virtual void selectArtClosed(SelectArtLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x2010fc
     * @note[short] MacOS (Intel): 0x258a30
     * @note[short] Windows: 0x45a350
     * @note[short] iOS: 0x20d324
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x201304
     * @note[short] MacOS (Intel): 0x258c60
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x20d504
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x201320
     * @note[short] MacOS (Intel): 0x258ca0
     * @note[short] Windows: 0x45a820
     * @note[short] iOS: 0x20d520
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x200ad4
     * @note[short] MacOS (Intel): 0x258350
     * @note[short] Windows: 0x45a560
     * @note[short] Android
     */
    void createToggleButton(std::string label, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x1fe114
     * @note[short] MacOS (Intel): 0x2556c0
     * @note[short] Windows: 0x457b10
     * @note[short] Android
     */
    bool init(LevelSettingsObject* object, LevelEditorLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x200878
     * @note[short] MacOS (Intel): 0x2580b0
     * @note[short] Windows: 0x45ae30
     * @note[short] Android
     */
    void onBGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2009d8
     * @note[short] MacOS (Intel): 0x258240
     * @note[short] Windows: 0x45aa20
     * @note[short] Android
     */
    void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200380
     * @note[short] MacOS (Intel): 0x257b60
     * @note[short] Windows: 0x45ac20
     * @note[short] Android
     */
    void onCol(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x258560
     * @note[short] Windows: 0x45a7c0
     * @note[short] Android
     */
    void onDisable(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20097c
     * @note[short] MacOS (Intel): 0x2581e0
     * @note[short] Windows: 0x45af00
     * @note[short] Android
     */
    void onFGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2006f8
     * @note[short] MacOS (Intel): 0x257f30
     * @note[short] Windows: 0x45a120
     * @note[short] Android
     */
    void onGameplayMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2008b4
     * @note[short] MacOS (Intel): 0x2580f0
     * @note[short] Windows: 0x45ae80
     * @note[short] Android
     */
    void onGArt(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2006b4
     * @note[short] MacOS (Intel): 0x257ef0
     * @note[short] Windows: 0x45ab60
     * @note[short] Android
     */
    void onLiveEdit(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200de8
     * @note[short] MacOS (Intel): 0x258630
     * @note[short] Windows: 0x45a2f0
     * @note[short] Android
     */
    void onMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200d40
     * @note[short] MacOS (Intel): 0x258580
     * @note[short] Windows: 0x45a7e0
     * @note[short] Android
     */
    void onOptionToggle(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2009b8
     * @note[short] MacOS (Intel): 0x258220
     * @note[short] Windows: 0x45af50
     * @note[short] Android
     */
    void onSelectFont(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20141c
     * @note[short] MacOS (Intel): 0x258da0
     * @note[short] Android
     */
    void onSelectMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x2014dc
     * @note[short] MacOS (Intel): 0x258e60
     * @note[short] Android
     */
    void onSelectSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200e24
     * @note[short] MacOS (Intel): 0x258680
     * @note[short] Windows: 0x45a230
     * @note[short] Android
     */
    void onSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20032c
     * @note[short] MacOS (Intel): 0x257b00
     * @note[short] Windows: 0x45abb0
     * @note[short] Android
     */
    void onShowPicker(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x200dac
     * @note[short] MacOS (Intel): 0x2585f0
     * @note[short] Windows: 0x45a2a0
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x20160c
     * @note[short] MacOS (Intel): 0x258f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void showPicker(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x20164c
     * @note[short] MacOS (Intel): 0x258ff0
     * @note[short] Windows: 0x45acd0
     * @note[short] Android
     */
    void updateColorSprite(ColorChannelSprite* sprite);

    /**
     * @note[short] MacOS (ARM): 0x2003a0
     * @note[short] MacOS (Intel): 0x257b80
     * @note[short] Windows: 0x45ac60
     * @note[short] Android
     */
    void updateColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x2007c8
     * @note[short] MacOS (Intel): 0x258000
     * @note[short] Windows: 0x45a160
     * @note[short] Android
     */
    void updateGameplayModeButtons();
    SongSelectNode* m_songSelectNode;
    Speed m_speed;
    ColorChannelSprite* m_bgColorSprite;
    ColorChannelSprite* m_gColorSprite;
    ColorChannelSprite* m_g2ColorSprite;
    ColorChannelSprite* m_lineColorSprite;
    ColorChannelSprite* m_mgColorSprite;
    ColorChannelSprite* m_mg2ColorSprite;
    cocos2d::CCSprite* m_moreColorsSprite;
    cocos2d::CCSprite* m_backgroundSprite;
    cocos2d::CCSprite* m_groundSprite;
    cocos2d::CCSprite* m_middlegroundSprite;
    cocos2d::CCSprite* m_speedSprite;
    cocos2d::CCSprite* m_modeSprite;
    LevelSettingsObject* m_settingsObject;
    void* m_unkPtr;
    cocos2d::CCArray* m_modeToggles;
    cocos2d::CCArray* m_speedButtons;
    LevelSettingsDelegate* m_delegate;
    LevelEditorLayer* m_editorLayer;
    CCTextInputNode* m_orderInput;
    CCTextInputNode* m_channelInput;
    CCMenuItemSpriteExtra* m_classicButton;
    CCMenuItemSpriteExtra* m_platformerButton;
    bool m_disableInput;
};
