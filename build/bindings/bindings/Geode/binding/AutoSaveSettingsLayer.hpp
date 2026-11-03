#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class AutoSaveSettingsLayer : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "AutoSaveSettingsLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AutoSaveSettingsLayer, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x9ad80
     * @note[short] iOS: 0x167578
     * @note[short] Android: Rebinded
     */
    virtual  ~AutoSaveSettingsLayer();

    /**
     * @note[short] Windows: 0x9ae60
     * @note[short] Android
     */
    static AutoSaveSettingsLayer* create();

    /**
     * @note[short] MacOS (ARM): 0x508c1c
     * @note[short] MacOS (Intel): 0x5bc3e0
     * @note[short] Windows: 0x9afa0
     * @note[short] iOS: 0x167624
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x50a860
     * @note[short] MacOS (Intel): 0x5be0a0
     * @note[short] Windows: 0x9d560
     * @note[short] iOS: 0x168534
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x50a3f4
     * @note[short] MacOS (Intel): 0x5bdc90
     * @note[short] Windows: 0x9c2b0
     * @note[short] iOS: 0x1682a8
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x50a2fc
     * @note[short] MacOS (Intel): 0x5bdbb0
     * @note[short] Windows: 0x9bfa0
     * @note[short] iOS: 0x1681c0
     * @note[short] Android
     */
    virtual float getValue(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn getBackupCap();

    /**
     * @note[short] Android
     */
    TodoReturn getBackupDirectory();

    /**
     * @note[short] Android
     */
    TodoReturn getCustomBackupDirectory();

    /**
     * @note[short] Windows: 0x9d260
     * @note[short] Android
     */
    void onAdvanced(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9c830
     * @note[short] Android
     */
    void onOpenBackupDir(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x9c610
     * @note[short] Android
     */
    void onSelectBackupDir(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    TodoReturn openBackupDirectory();

    /**
     * @note[short] Android
     */
    void setBackupCap(int p0);

    /**
     * @note[short] Android
     */
    void setBackupDirectory(std::string p0);

    /**
     * @note[short] Android
     */
    TodoReturn updateBackupDirLabel();
};
