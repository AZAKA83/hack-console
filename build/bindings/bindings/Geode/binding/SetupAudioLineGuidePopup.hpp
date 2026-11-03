#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/SelectSettingDelegate.hpp>

class SetupAudioLineGuidePopup : public SetupTriggerPopup, public SelectSettingDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupAudioLineGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAudioLineGuidePopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupAudioLineGuidePopup();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAudioLineGuidePopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupAudioLineGuidePopup* create(AudioLineGuideGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fe530
     * @note[short] MacOS (Intel): 0x5b08c0
     * @note[short] Windows: 0x6070e0
     * @note[short] iOS: 0x490aac
     * @note[short] Android
     */
    virtual void selectSettingClosed(SelectSettingLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x4fde88
     * @note[short] Windows: 0x606940
     * @note[short] Android
     */
    bool init(AudioLineGuideGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4fe4e8
     * @note[short] MacOS (Intel): 0x5b0870
     * @note[short] Windows: 0x607080
     * @note[short] Android
     */
    void onSpeed(cocos2d::CCObject* sender);
    cocos2d::CCSprite* m_speedSprite;
};
