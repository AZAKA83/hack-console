#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class DeathTrackerOptionsPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "DeathTrackerOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DeathTrackerOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathTrackerOptionsPopup();

    /**
     * @note[short] Android
     */
    static DeathTrackerOptionsPopup* create(GJGameLevel* p0, DeathTrackerPopup* p1);

    /**
     * @note[short] MacOS (ARM): 0x7b8efc
     * @note[short] MacOS (Intel): 0x8ca850
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x4b992c
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7b8ec0
     * @note[short] MacOS (Intel): 0x8ca820
     * @note[short] Windows: 0x99f60
     * @note[short] iOS: 0x4b98f0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7b8d60
     * @note[short] MacOS (Intel): 0x8ca6d0
     * @note[short] Windows: 0x120230
     * @note[short] iOS: 0x4b97bc
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0x11fbc0
     * @note[short] Android
     */
    bool init(GJGameLevel* p0, DeathTrackerPopup* p1);

    /**
     * @note[short] Windows: 0x1200c0
     * @note[short] Android
     */
    void onClearData(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x120070
     * @note[short] Android
     */
    void onToggleAutoScroll(cocos2d::CCObject* sender);
};
