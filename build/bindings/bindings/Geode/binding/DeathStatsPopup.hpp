#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class DeathStatsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "DeathStatsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(DeathStatsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x11e320
     * @note[short] iOS: 0x4b808c
     * @note[short] Android: Rebinded
     */
    virtual  ~DeathStatsPopup();

    /**
     * @note[short] Android
     */
    static DeathStatsPopup* create(LevelEditorLayer* p0);

    /**
     * @note[short] MacOS (ARM): 0x7b86f4
     * @note[short] MacOS (Intel): 0x8c9fd0
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x4b91b8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7b8668
     * @note[short] MacOS (Intel): 0x8c9f40
     * @note[short] Windows: 0x11fb20
     * @note[short] iOS: 0x4b9128
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11e430
     * @note[short] Android
     */
    bool init(LevelEditorLayer* p0);

    /**
     * @note[short] Windows: 0x11faa0
     * @note[short] Android
     */
    void onClearFetched(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11fa10
     * @note[short] Android
     */
    void onClearLocal(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11ef00
     * @note[short] Android
     */
    void onFetch(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x11f210
     * @note[short] Android
     */
    TodoReturn pollFetch(float p0);

    /**
     * @note[short] Android
     */
    void setStatus(char const* p0);

    /**
     * @note[short] Windows: 0x11f2f0
     * @note[short] Android
     */
    TodoReturn showResult();
};
