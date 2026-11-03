#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupAudioTriggerPopup.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>
#include <Geode/binding/SongPlaybackDelegate.hpp>

class SetupSongTriggerPopup : public SetupAudioTriggerPopup, public MusicDownloadDelegate, public SongPlaybackDelegate {
public:
    static constexpr auto CLASS_NAME = "SetupSongTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupSongTriggerPopup, SetupAudioTriggerPopup)

    /**
     * @note[short] Windows: 0x5f2340
     * @note[short] iOS: 0x25837c
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupSongTriggerPopup();

    /**
     * @note[short] Windows: 0x5f2480
     * @note[short] Android
     */
    static SetupSongTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x260c6c
     * @note[short] MacOS (Intel): 0x2c0e10
     * @note[short] Windows: 0x5f3aa0
     * @note[short] iOS: 0x25924c
     * @note[short] Android
     */
    virtual void pageChanged();

    /**
     * @note[short] MacOS (ARM): 0x260d00
     * @note[short] MacOS (Intel): 0x2c0ea0
     * @note[short] Windows: 0x5f3b20
     * @note[short] iOS: 0x2592e0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260b6c
     * @note[short] MacOS (Intel): 0x2c0d10
     * @note[short] Windows: 0x5f3950
     * @note[short] iOS: 0x2591b8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x260958
     * @note[short] MacOS (Intel): 0x2c0ad0
     * @note[short] Windows: 0x5f3390
     * @note[short] iOS: 0x258fb0
     * @note[short] Android
     */
    virtual void onPlayback(SongInfoObject* object);

    /**
     * @note[short] MacOS (ARM): 0x25fcc0
     * @note[short] Windows: 0x5f25c0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x260b60
     * @note[short] MacOS (Intel): 0x2c0cf0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void onResetSongTime(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260704
     * @note[short] MacOS (Intel): 0x2c08a0
     * @note[short] Windows: 0x5f37b0
     * @note[short] Android
     */
    void onSavePlaybackPos(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x260914
     * @note[short] MacOS (Intel): 0x2c0a90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateApplyPrepare(bool hideAll);

    /**
     * @note[short] MacOS (ARM): 0x2606ac
     * @note[short] MacOS (Intel): 0x2c0850
     * @note[short] Windows: 0x5f3120
     * @note[short] Android
     */
    void updateLength();

    /**
     * @note[short] MacOS (ARM): 0x260838
     * @note[short] MacOS (Intel): 0x2c09a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSongTimeSlider();
    SongSelectNode* m_selectNode;
};
