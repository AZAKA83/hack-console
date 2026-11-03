#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAudioTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAudioTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5da470
     * @note[short] iOS: 0x211060
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAudioTriggerPopup();

    /**
     * @note[short] MacOS (ARM): 0x415dd8
     * @note[short] MacOS (Intel): 0x4b0bb0
     * @note[short] Windows: 0x5dbae0
     * @note[short] iOS: 0x211f20
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x850824
     * @note[short] MacOS (Intel): 0x4afd70
     * @note[short] Windows: 0x5da8f0
     * @note[short] Android
     */
    void addProxVolControls(int page);

    /**
     * @note[short] MacOS (ARM): 0x414d98
     * @note[short] MacOS (Intel): 0x4af9d0
     * @note[short] Windows: 0x5da530
     * @note[short] Android
     */
    void addTimeControls(int page, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0x415c88
     * @note[short] MacOS (Intel): 0x4b0a70
     * @note[short] Windows: 0x5db980
     * @note[short] Android
     */
    void onProxMode(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x415d54
     * @note[short] MacOS (Intel): 0x4b0b30
     * @note[short] Windows: 0x5dba60
     * @note[short] Android
     */
    void updateSpecialGroup();
    cocos2d::CCArray* m_proximityButtons;
};
