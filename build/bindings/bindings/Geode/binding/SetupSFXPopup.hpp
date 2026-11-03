#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAudioTriggerPopup.hpp>
#include <Geode/binding/CustomSFXDelegate.hpp>
#include <Geode/binding/SFXBrowserDelegate.hpp>

class SetupSFXPopup : public SetupAudioTriggerPopup, public CustomSFXDelegate, public SFXBrowserDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSFXPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSFXPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x5da2b0
     * @note[short] iOS: 0x21279c
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSFXPopup();

    /**
     * @note[short] Windows: 0x5dc5a0
     * @note[short] Android
     */
    static SetupSFXPopup* create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x417fa0
     * @note[short] MacOS (Intel): 0x4b32f0
     * @note[short] Windows: 0x5dd970
     * @note[short] iOS: 0x213aec
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x417ff8
     * @note[short] MacOS (Intel): 0x4b3350
     * @note[short] Windows: 0x5dd9e0
     * @note[short] iOS: 0x213b44
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41849c
     * @note[short] MacOS (Intel): 0x4b3860
     * @note[short] Windows: 0x5de640
     * @note[short] iOS: 0x213f5c
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x418370
     * @note[short] MacOS (Intel): 0x4b3740
     * @note[short] Windows: 0x5de520
     * @note[short] iOS: 0x213e6c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x418270
     * @note[short] MacOS (Intel): 0x4b3610
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x213da0
     * @note[short] Android
     */
    virtual void sfxObjectSelected(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x418278
     * @note[short] MacOS (Intel): 0x4b3630
     * @note[short] Windows: 0x5de420
     * @note[short] iOS: 0x213da8
     * @note[short] Android
     */
    virtual int getActiveSFXID();

    /**
     * @note[short] MacOS (ARM): 0x4182d4
     * @note[short] MacOS (Intel): 0x4b36a0
     * @note[short] Windows: 0x5de460
     * @note[short] iOS: 0x213e04
     * @note[short] Android
     */
    virtual bool overridePlaySFX(SFXInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x418690
     * @note[short] MacOS (Intel): 0x4b3aa0
     * @note[short] Windows: 0x5dea90
     * @note[short] iOS: 0x214058
     * @note[short] Android
     */
    virtual void sfxBrowserClosed(SFXBrowser* browser);

    /**
     * @note[short] MacOS (ARM): 0x418288
     * @note[short] MacOS (Intel): 0x4b3650
     * @note[short] Windows: 0x5de430
     * @note[short] iOS: 0x213db8
     * @note[short] Android
     */
    virtual int getActiveCustomSFXID();

    /**
     * @note[short] MacOS (Intel): 0x941a80
     * @note[short] Windows: 0x5dde10
     * @note[short] Android
     */
    void createSFXWidget();

    /**
     * @note[short] MacOS (ARM): 0x15ec
     * @note[short] Windows: 0x5dc700
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0x417ba4
     * @note[short] Windows: 0x5dea10
     * @note[short] Android
     */
    void onBrowseSFX(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x41821c
     * @note[short] MacOS (Intel): 0x4b35c0
     * @note[short] Windows: 0x5ddd80
     * @note[short] Android
     */
    void updateLength();
    int m_sfxID;
    CustomSFXWidget* m_sfxWidget;
    int m_sfxLength;
};
