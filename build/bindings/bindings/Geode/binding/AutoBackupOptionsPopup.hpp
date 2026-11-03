#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/FLAlertLayerProtocol.hpp>

class AutoBackupOptionsPopup : public SetupTriggerPopup, public FLAlertLayerProtocol {
public:
    static constexpr auto CLASS_NAME = "AutoBackupOptionsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AutoBackupOptionsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~AutoBackupOptionsPopup();

    /**
     * @note[short] Android
     */
    static AutoBackupOptionsPopup* create(AutoBackupOptionsDelegate* p0);

    /**
     * @note[short] MacOS (ARM): 0x85cf98
     * @note[short] MacOS (Intel): 0x983450
     * @note[short] Windows: 0xce2a0
     * @note[short] iOS: 0x5335b0
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x85cf74
     * @note[short] MacOS (Intel): 0x983430
     * @note[short] Windows: 0xce270
     * @note[short] iOS: 0x53358c
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] MacOS (ARM): 0x85cfac
     * @note[short] MacOS (Intel): 0x983470
     * @note[short] Windows: 0xcf000
     * @note[short] iOS: 0x5335c4
     * @note[short] Android
     */
    virtual void FLAlert_Clicked(FLAlertLayer* p0, bool p1);

    /**
     * @note[short] Windows: 0xcda10
     * @note[short] Android
     */
    bool init(AutoBackupOptionsDelegate* p0);

    /**
     * @note[short] Windows: 0xcea60
     * @note[short] Android
     */
    void onDeleteAll(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0xce640
     * @note[short] Android
     */
    void onPrune(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn refreshStats();
};
