#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class DeathMarkerSettingsPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DeathMarkerSettingsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DeathMarkerSettingsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathMarkerSettingsPopup();

    /**
     * @note[short] Android
     */
    static DeathMarkerSettingsPopup* create(GJGameLevel* p0);

    /**
     * @note[short] MacOS (ARM): 0x7b6fb4
     * @note[short] MacOS (Intel): 0x8c8540
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x4b7f94
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7b6f78
     * @note[short] MacOS (Intel): 0x8c8510
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: 0x4b7f58
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7b6dd4
     * @note[short] MacOS (Intel): 0x8c8360
     * @note[short] Windows: 0x11d600
     * @note[short] iOS: 0x4b7de4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x11bea0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0);

    /**
     * @note[short] Windows: 0x11d490
     * @note[short] Android
     */
    void onClearMarkers(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11d840
     * @note[short] Android
     */
    void onFrequencySlider(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11daa0
     * @note[short] Android
     */
    void onTimescaleSlider(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11dd70
     * @note[short] Android
     */
    void onToggleAnimation(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11dd20
     * @note[short] Android
     */
    void onToggleColor(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11dfa0
     * @note[short] Android
     */
    void onToggleDisabled(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11df00
     * @note[short] Android
     */
    void onToggleGlobal(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11e130
     * @note[short] Android
     */
    void onToggleLabels(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11de10
     * @note[short] Android
     */
    void onToggleLimited(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11e270
     * @note[short] Android
     */
    void onToggleLive(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11de60
     * @note[short] Android
     */
    void onToggleLocal(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11ddc0
     * @note[short] Android
     */
    void onToggleSound(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn updateFrequencyLabel(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateTimescaleLabel(int p0);
};
