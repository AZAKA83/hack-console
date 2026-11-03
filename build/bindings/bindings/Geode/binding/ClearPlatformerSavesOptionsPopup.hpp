#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class ClearPlatformerSavesOptionsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "ClearPlatformerSavesOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(ClearPlatformerSavesOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~ClearPlatformerSavesOptionsPopup();

    /**
     * @note[short] Android
     */
    static ClearPlatformerSavesOptionsPopup* create();

    /**
     * @note[short] MacOS (ARM): 0x7a6384
     * @note[short] MacOS (Intel): 0x8b51c0
     * @note[short] Windows: 0xa4510
     * @note[short] iOS: 0x4aa978
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Windows: 0xa4aa0
     * @note[short] Android
     */
    void onBackupToggle(cocos2d::CCObject* sender);
};
