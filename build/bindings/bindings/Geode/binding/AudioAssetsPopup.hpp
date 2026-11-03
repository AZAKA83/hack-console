#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>
#include <Geode/binding/MusicDownloadDelegate.hpp>

class AudioAssetsPopup : public SetupTriggerPopup, public MusicDownloadDelegate {
public:
    static constexpr auto CLASS_NAME = "AudioAssetsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(AudioAssetsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0xbdd10
     * @note[short] iOS: 0x4a9378
     * @note[short] Android: Rebinded
     */
    virtual  ~AudioAssetsPopup();

    /**
     * @note[short] Android
     */
    static AudioAssetsPopup* create(int p0, int p1, std::string const& p2, std::string const& p3);

    /**
     * @note[short] MacOS (ARM): 0x7a5234
     * @note[short] MacOS (Intel): 0x8b3e80
     * @note[short] Windows: 0xa6580
     * @note[short] iOS: 0x4a9ae8
     * @note[short] Android
     */
    virtual void keyBackClicked();

    /**
     * @note[short] MacOS (ARM): 0x7a51e8
     * @note[short] MacOS (Intel): 0x8b3e30
     * @note[short] Windows: 0xbe4f0
     * @note[short] iOS: 0x4a9a9c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x7a5150
     * @note[short] MacOS (Intel): 0x8b3da0
     * @note[short] Windows: 0xbe420
     * @note[short] iOS: 0x4a9a48
     * @note[short] Android
     */
    virtual void musicActionFinished(GJMusicAction p0);

    /**
     * @note[short] Windows: 0xbde40
     * @note[short] Android
     */
    bool init(int songID, int officialSongID, std::string const& songList, std::string const& sfxList);
    CustomSongWidget* m_customSongWidget;
};
