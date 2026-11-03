#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJDropDownLayer.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>
#include <Geode/binding/VolumeChangeDelegate.hpp>
#include <Geode/mapping/CCObject.hpp>
#include <Geode/mapping/CCPoint.hpp>

class OptionsLayer : public GJDropDownLayer, public FLAlertLayerProtocol, public VolumeChangeDelegate {
public:
    static constexpr auto CLASS_NAME = "OptionsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(OptionsLayer, GJDropDownLayer)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     OptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x770288
     * @note[short] MacOS (Intel): 0x87a9f0
     * @note[short] Windows: 0x4ca7f0
     * @note[short] iOS: 0x112a64
     * @note[short] Android: Rebinded
     */
    virtual  ~OptionsLayer();

    /**
     * @note[short] MacOS (ARM): 0x770080
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1128f8
     * @note[short] Android
     */
    static OptionsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x7705b0
     * @note[short] MacOS (Intel): 0x87adf0
     * @note[short] Windows: 0x4cae60
     * @note[short] iOS: 0x112af8
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x771bec
     * @note[short] MacOS (Intel): 0x87c610
     * @note[short] Windows: 0x4cc590
     * @note[short] iOS: 0x113a80
     * @note[short] Android
     */
    virtual void layerHidden();

    /**
     * @note[short] MacOS (ARM): 0x771c78
     * @note[short] MacOS (Intel): 0x87c680
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x113b0c
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* layer, bool btn2);

    /**
     * @note[short] MacOS (ARM): 0x770508
     * @note[short] MacOS (Intel): 0x87ad40
     * @note[short] Windows: 0x4cada0
     * @note[short] iOS: 0x112a9c
     * @note[short] Android
     */
    virtual void volumeChanged();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CCMenuItemToggler* createToggleButton(std::string text, cocos2d::SEL_MenuHandler selector, bool toggled, cocos2d::CCMenu* menu, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x771644
     * @note[short] MacOS (Intel): 0x87bea0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void exitLayer();

    /**
     * @note[short] MacOS (ARM): 0x77154c
     * @note[short] MacOS (Intel): 0x87bd90
     * @note[short] Windows: 0x4cbb20
     * @note[short] Android
     */
    void musicSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x770f7c
     * @note[short] MacOS (Intel): 0x87b800
     * @note[short] Windows: 0x4cc4a0
     * @note[short] Android
     */
    void onAccount(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x770f8c
     * @note[short] Windows: 0x4cc570
     * @note[short] Android
     */
    void onHelp(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7715fc
     * @note[short] MacOS (Intel): 0x87b8a0
     * @note[short] Windows: 0x4cba10
     * @note[short] Android
     */
    void onMenuMusic(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x770fa8
     * @note[short] MacOS (Intel): 0x87b840
     * @note[short] Windows: 0x4cbc30
     * @note[short] Android
     */
    void onOptions(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x770ffc
     * @note[short] Windows: 0x4cbc60
     * @note[short] Android
     */
    void onParental(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x87c520
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onProgressBar(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x770fe8
     * @note[short] Windows: 0x4cc4f0
     * @note[short] Android
     */
    void onRate(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x87bb40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onRecordReplays(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x771304
     * @note[short] MacOS (Intel): 0x87bb70
     * @note[short] Windows: 0x4cbd30
     * @note[short] Android
     */
    void onSecretVault(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x771634
     * @note[short] Windows: 0x93e20
     * @note[short] Android
     */
    void onSoundtracks(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x77104c
     * @note[short] MacOS (Intel): 0x87b900
     * @note[short] Windows: 0x4cc450
     * @note[short] Android
     */
    void onSupport(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x770fcc
     * @note[short] MacOS (Intel): 0x87b860
     * @note[short] Windows: 0x4cc430
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onVideo(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7715bc
     * @note[short] MacOS (Intel): 0x87be00
     * @note[short] Windows: 0x182390
     * @note[short] Android
     */
    void sfxSliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (Intel): 0x87c550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryEnableRecord();
    cocos2d::CCMenu* m_optionsMenu;
    void* m_unknown;
    int m_layerChoice;
    bool m_recordReplays;
    Slider* m_musicSlider;
    Slider* m_sfxSlider;
    int m_lastVaultDialog;
};
