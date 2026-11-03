#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <fmod.hpp>
#include <Geode/binding/FMODAudioState.hpp>
#include <Geode/binding/FMODSoundState.hpp>
#include <Geode/binding/FMODMusic.hpp>
#include <Geode/binding/FMODSound.hpp>
#include <Geode/binding/FMODQueuedEffect.hpp>
#include <Geode/binding/FMODQueuedMusic.hpp>
#include <Geode/binding/FMODSoundTween.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class FMODAudioEngine : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "FMODAudioEngine";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(FMODAudioEngine, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5bf90
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FMODAudioEngine();

    /**
     * @note[short] MacOS (ARM): 0x34d7d8
     * @note[short] MacOS (Intel): 0x3c95c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b4bd0
     * @note[short] Android: Rebinded
     */
     ~FMODAudioEngine();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static FMODAudioEngine* get();

    /**
     * @note[short] MacOS (ARM): 0x353438
     * @note[short] MacOS (Intel): 0x3d0aa0
     * @note[short] Windows: 0x5f550
     * @note[short] Android
     */
    static float pitchForIdx(int index);

    /**
     * @note[short] MacOS (ARM): 0x34e82c
     * @note[short] MacOS (Intel): 0x3caac0
     * @note[short] Windows: 0x5da00
     * @note[short] Android
     */
    static std::string reverbToString(FMODReverbPreset preset);

    /**
     * @note[short] MacOS (ARM): 0x34db20
     * @note[short] MacOS (Intel): 0x3c9a70
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1b4be8
     * @note[short] Android
     */
    static FMODAudioEngine* sharedEngine();

    /**
     * @note[short] MacOS (ARM): 0x34f670
     * @note[short] MacOS (Intel): 0x3cbc20
     * @note[short] Windows: 0x5e180
     * @note[short] iOS: 0x1b5b08
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0x35824c
     * @note[short] MacOS (Intel): 0x3d6880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void activateQueuedMusic(int channel);

    /**
     * @note[short] MacOS (ARM): 0x34ef04
     * @note[short] MacOS (Intel): 0x3cb1c0
     * @note[short] Windows: 0x60f50
     * @note[short] Android
     */
    FMOD::Channel* channelForChannelID(int id);

    /**
     * @note[short] MacOS (ARM): 0x355064
     * @note[short] MacOS (Intel): 0x3d2cc0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    FMOD::Channel* channelForUniqueID(int id);

    /**
     * @note[short] MacOS (ARM): 0x35433c
     * @note[short] Windows: 0x60e90
     * @note[short] Android
     */
    int channelIDForUniqueID(int id);

    /**
     * @note[short] MacOS (ARM): 0x35474c
     * @note[short] MacOS (Intel): 0x3d2130
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void channelLinkSound(int id, FMODSound* sound);

    /**
     * @note[short] MacOS (ARM): 0x354d68
     * @note[short] MacOS (Intel): 0x3d28d0
     * @note[short] Windows: 0x60b80
     * @note[short] Android
     */
    void channelStopped(FMOD::Channel* channel, bool remove);

    /**
     * @note[short] MacOS (ARM): 0x354b94
     * @note[short] MacOS (Intel): 0x3d2670
     * @note[short] Windows: 0x609f0
     * @note[short] Android
     */
    void channelUnlinkSound(int id);

    /**
     * @note[short] MacOS (ARM): 0x34f0b8
     * @note[short] MacOS (Intel): 0x3cb420
     * @note[short] Windows: 0x5e0d0
     * @note[short] Android
     */
    void clearAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x352dbc
     * @note[short] MacOS (Intel): 0x3d03b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int countActiveEffects();

    /**
     * @note[short] MacOS (ARM): 0x352e6c
     * @note[short] MacOS (Intel): 0x3d0490
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int countActiveMusic();

    /**
     * @note[short] MacOS (ARM): 0x358cb8
     * @note[short] MacOS (Intel): 0x3d7610
     * @note[short] Windows: 0x25fa30
     * @note[short] Android
     */
    FMOD::Sound* createStream(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x3533b0
     * @note[short] MacOS (Intel): 0x3d0a00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void disableMetering();

    /**
     * @note[short] MacOS (ARM): 0x353390
     * @note[short] MacOS (Intel): 0x3d09d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void enableMetering();

    /**
     * @note[short] MacOS (ARM): 0x355fc8
     * @note[short] MacOS (Intel): 0x2eece0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void fadeInBackgroundMusic(float value);

    /**
     * @note[short] MacOS (ARM): 0x356680
     * @note[short] MacOS (Intel): 0x3d4620
     * @note[short] Windows: 0x65360
     * @note[short] Android
     */
    void fadeInMusic(float duration, int channel);

    /**
     * @note[short] MacOS (ARM): 0x358c10
     * @note[short] MacOS (Intel): 0x3d7530
     * @note[short] Windows: 0x655e0
     * @note[short] Android
     */
    void fadeMusic(float duration, int channel, float startVolume, float endVolume);

    /**
     * @note[short] MacOS (ARM): 0x358b74
     * @note[short] MacOS (Intel): 0x3d7450
     * @note[short] Windows: 0x654a0
     * @note[short] Android
     */
    void fadeOutMusic(float duration, int channel);

    /**
     * @note[short] MacOS (ARM): 0x3562b0
     * @note[short] MacOS (Intel): 0x3d41a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getActiveMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x351cd8
     * @note[short] MacOS (Intel): 0x3cece0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    FMOD::Channel* getActiveMusicChannel(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x356008
     * @note[short] MacOS (Intel): 0x3d3ed0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getBackgroundMusicVolume();

    /**
     * @note[short] MacOS (ARM): 0x3535d8
     * @note[short] MacOS (Intel): 0x3d0c20
     * @note[short] Windows: 0x5f6c0
     * @note[short] Android
     */
    FMOD::ChannelGroup* getChannelGroup(int id, bool reverb);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getEffectsVolume();

    /**
     * @note[short] MacOS (ARM): 0x358f10
     * @note[short] MacOS (Intel): 0x3d78b0
     * @note[short] Android
     */
    std::string getFMODStatus(int unused);

    /**
     * @note[short] MacOS (Intel): 0x3d0a10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getMeteringValue();

    /**
     * @note[short] MacOS (ARM): 0x353f70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getMusicChannelID(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x3586b0
     * @note[short] MacOS (Intel): 0x3d6e10
     * @note[short] Windows: 0x65130
     * @note[short] Android
     */
    unsigned int getMusicLengthMS(int channel);

    /**
     * @note[short] MacOS (ARM): 0x35862c
     * @note[short] MacOS (Intel): 0x3d6d90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getMusicTime(int channel);

    /**
     * @note[short] MacOS (ARM): 0x3585c0
     * @note[short] MacOS (Intel): 0x3d6d20
     * @note[short] Windows: 0x650d0
     * @note[short] Android
     */
    unsigned int getMusicTimeMS(int channel);

    /**
     * @note[short] MacOS (ARM): 0x3547c0
     * @note[short] MacOS (Intel): 0x3d2190
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getNextChannelID();

    /**
     * @note[short] MacOS (Intel): 0x3d0550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    std::map<std::pair<int, int>, FMODSoundTween>& getTweenContainer(AudioTargetType type);

    /**
     * @note[short] MacOS (ARM): 0x35730c
     * @note[short] MacOS (Intel): 0x3d5490
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isAnyPersistentPlaying();

    /**
     * @note[short] MacOS (ARM): 0x354460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isChannelStopping(int channel);

    /**
     * @note[short] MacOS (ARM): 0x354094
     * @note[short] MacOS (Intel): 0x3d1970
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isEffectLoaded(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x356088
     * @note[short] MacOS (Intel): 0x3d3f70
     * @note[short] Windows: 0x62930
     * @note[short] Android
     */
    bool isMusicPlaying(int musicID);

    /**
     * @note[short] MacOS (ARM): 0x3561a8
     * @note[short] MacOS (Intel): 0x3d40a0
     * @note[short] Android
     */
    bool isMusicPlaying(std::string path, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x3567d8
     * @note[short] MacOS (Intel): 0x3d4790
     * @note[short] Windows: 0x639d0
     * @note[short] Android
     */
    bool isPersistentMatchPlaying(std::string path, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x357330
     * @note[short] MacOS (Intel): 0x3d54c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isSoundReady(FMOD::Sound* sound);

    /**
     * @note[short] MacOS (ARM): 0x355d84
     * @note[short] MacOS (Intel): 0x3d3be0
     * @note[short] Windows: 0x626e0
     * @note[short] Android
     */
    int lengthForSound(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x356418
     * @note[short] MacOS (Intel): 0x3d4390
     * @note[short] Windows: 0x62c50
     * @note[short] Android
     */
    void loadAndPlayMusic(std::string path, unsigned int time, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x350b0c
     * @note[short] MacOS (Intel): 0x3cd4f0
     * @note[short] Windows: 0x5eaf0
     * @note[short] Android
     */
    void loadAudioState(FMODAudioState& state);

    /**
     * @note[short] MacOS (ARM): 0x356718
     * @note[short] MacOS (Intel): 0x3d4700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadMusic(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x35161c
     * @note[short] MacOS (Intel): 0x3ce510
     * @note[short] Windows: 0x62ec0
     * @note[short] Android
     */
    void loadMusic(std::string path, float speed, float unknown, float volume, bool shouldLoop, int musicID, int channelID, bool dontReset);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void logLifecycleState(char const* p0);

    /**
     * @note[short] Android
     */
    TodoReturn logMixerProbe();

    /**
     * @note[short] MacOS (Intel): 0x3cb390
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pauseAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x3560d8
     * @note[short] MacOS (Intel): 0x3d3fb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pauseAllMusic(bool force);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pauseEffect(unsigned int effect);

    /**
     * @note[short] MacOS (ARM): 0x358b50
     * @note[short] MacOS (Intel): 0x3d7430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void pauseMusic(int musicChannel);

    /**
     * @note[short] MacOS (ARM): 0x353cd0
     * @note[short] MacOS (Intel): 0x3d1590
     * @note[short] Windows: 0x5f980
     * @note[short] iOS: 0x1b85cc
     * @note[short] Android
     */
    int playEffect(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x353d80
     * @note[short] MacOS (Intel): 0x3d1620
     * @note[short] Windows: 0x5fa00
     * @note[short] iOS: 0x1b8668
     * @note[short] Android
     */
    int playEffect(std::string path, float speed, float unknown, float volume);

    /**
     * @note[short] MacOS (ARM): 0x351e14
     * @note[short] MacOS (Intel): 0x3ceea0
     * @note[short] Windows: 0x5faf0
     * @note[short] iOS: 0x1b7374
     * @note[short] Android
     */
    int playEffectAdvanced(std::string path, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int effectID, bool override, bool noPreload, int channelID, int uniqueID, float minInterval, int sfxGroup);

    /**
     * @note[short] MacOS (ARM): 0x353e88
     * @note[short] MacOS (Intel): 0x3d1710
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int playEffectAsync(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x3564fc
     * @note[short] MacOS (Intel): 0x3d4460
     * @note[short] Windows: 0x62d50
     * @note[short] Android
     */
    void playMusic(std::string path, bool shouldLoop, float fadeInTime, int channel);

    /**
     * @note[short] Android
     */
    TodoReturn playUIEffect(std::string p0, float p1, float p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0x34e3a8
     * @note[short] MacOS (Intel): 0x3ca5a0
     * @note[short] Windows: 0x61e80
     * @note[short] iOS: 0x1b5170
     * @note[short] Android
     */
    FMODSound* preloadEffect(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x3547d4
     * @note[short] MacOS (Intel): 0x3d21b0
     * @note[short] Windows: 0x622b0
     * @note[short] Android
     */
    FMOD::Sound* preloadEffectAsync(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x356904
     * @note[short] MacOS (Intel): 0x3d48b0
     * @note[short] Windows: 0x65730
     * @note[short] Android
     */
    FMOD::Sound* preloadMusic(std::string path, bool noRelease, int musicID);

    /**
     * @note[short] MacOS (Intel): 0x2456c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void printResult(FMOD_RESULT result);

    /**
     * @note[short] MacOS (ARM): 0x35738c
     * @note[short] MacOS (Intel): 0x3d5500
     * @note[short] Windows: 0x63cf0
     * @note[short] Android
     */
    void queuedEffectFinishedLoading(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x3540b4
     * @note[short] MacOS (Intel): 0x3d1990
     * @note[short] Windows: 0x60500
     * @note[short] Android
     */
    int queuePlayEffect(std::string audioFilename, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int start, int end, int fadeIn, int fadeOut, bool loop, int effectID, bool override, int uniqueID, float minInterval, int group);

    /**
     * @note[short] MacOS (ARM): 0x357094
     * @note[short] MacOS (Intel): 0x3d51b0
     * @note[short] Windows: 0x636f0
     * @note[short] Android
     */
    void queueStartMusic(std::string audioFilename, float pitch, float unknown, float volume, bool loop, int start, int end, int fadeIn, int fadeOut, int musicID, bool p10, int channelID, bool noPrepare, bool dontReset);

    /**
     * @note[short] MacOS (ARM): 0x3545d0
     * @note[short] MacOS (Intel): 0x3d1fa0
     * @note[short] Windows: 0x606d0
     * @note[short] Android
     */
    int registerChannel(FMOD::Channel* channel, int channelID, int effectID);

    /**
     * @note[short] MacOS (ARM): 0x34fec0
     * @note[short] MacOS (Intel): 0x3cc560
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void releaseRemovedSounds();

    /**
     * @note[short] MacOS (Intel): 0x3cb3e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeAllAudio();

    /**
     * @note[short] MacOS (ARM): 0x356154
     * @note[short] MacOS (Intel): 0x3d4040
     * @note[short] Windows: 0x62ab0
     * @note[short] Android
     */
    void resumeAllMusic();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (Intel): 0xc3e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resumeEffect(unsigned int effect);

    /**
     * @note[short] MacOS (ARM): 0x351cb4
     * @note[short] MacOS (Intel): 0x3cecc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeMusic(int musicChannel);

    /**
     * @note[short] Windows: 0x5e030
     * @note[short] Android
     */
    TodoReturn resumeSuspendedAudio();

    /**
     * @note[short] MacOS (ARM): 0x3506ec
     * @note[short] MacOS (Intel): 0x3ccec0
     * @note[short] Windows: 0x5e6d0
     * @note[short] Android
     */
    void saveAudioState(FMODAudioState& state);

    /**
     * @note[short] MacOS (ARM): 0x356010
     * @note[short] MacOS (Intel): 0x3d3ee0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setBackgroundMusicVolume(float volume);

    /**
     * @note[short] MacOS (ARM): 0x353270
     * @note[short] MacOS (Intel): 0x3d08a0
     * @note[short] Windows: 0x61d70
     * @note[short] Android
     */
    void setChannelPitch(int id, AudioTargetType type, float pitch);

    /**
     * @note[short] Windows: 0x619d0
     * @note[short] Android
     */
    void setChannelVolume(int id, AudioTargetType type, float volume);

    /**
     * @note[short] Windows: 0x61ba0
     * @note[short] Android
     */
    void setChannelVolumeMod(int id, AudioTargetType type, float volumeMod);

    /**
     * @note[short] MacOS (ARM): 0x356030
     * @note[short] MacOS (Intel): 0x3d3f20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setEffectsVolume(float volume);

    /**
     * @note[short] MacOS (ARM): 0x3527f0
     * @note[short] MacOS (Intel): 0x3cfbf0
     * @note[short] Windows: 0x64fa0
     * @note[short] Android
     */
    void setMusicTimeMS(unsigned int time, bool dontWait, int musicID);

    /**
     * @note[short] MacOS (ARM): 0x34dd28
     * @note[short] MacOS (Intel): 0x3c9e30
     * @note[short] Windows: 0x5c8c0
     * @note[short] iOS: 0x1b4c48
     * @note[short] Android
     */
    void setup();

    /**
     * @note[short] MacOS (ARM): 0x34e118
     * @note[short] MacOS (Intel): 0x3ca280
     * @note[short] Windows: 0x5cdc0
     * @note[short] iOS: 0x1b4ed4
     * @note[short] Android
     */
    void setupAudioEngine();

    /**
     * @note[short] Windows: 0x5dfc0
     * @note[short] Android
     */
    void start();

    /**
     * @note[short] MacOS (ARM): 0x356c14
     * @note[short] MacOS (Intel): 0x3d4c00
     * @note[short] Windows: 0x63270
     * @note[short] Android
     */
    void startMusic(int start, int end, int fadeIn, int fadeOut, bool loop, int musicID, bool noResume, bool dontReset);

    /**
     * @note[short] MacOS (Intel): 0x3cb390
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stop();

    /**
     * @note[short] MacOS (ARM): 0x34f168
     * @note[short] MacOS (Intel): 0x3cb500
     * @note[short] Windows: 0x62520
     * @note[short] Android
     */
    void stopAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x34f420
     * @note[short] MacOS (Intel): 0x3cb930
     * @note[short] Windows: 0x629a0
     * @note[short] iOS: 0x1b5a18
     * @note[short] Android
     */
    void stopAllMusic(bool clear);

    /**
     * @note[short] MacOS (ARM): 0x355600
     * @note[short] MacOS (Intel): 0x3d3470
     * @note[short] Windows: 0x61620
     * @note[short] Android
     */
    float stopAndGetFade(FMOD::Channel* channel);

    /**
     * @note[short] MacOS (ARM): 0x3588d8
     * @note[short] MacOS (Intel): 0x3d70d0
     * @note[short] Windows: 0x65a30
     * @note[short] Android
     */
    void stopAndRemoveMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x354544
     * @note[short] MacOS (Intel): 0x3d1f20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopChannel(int id);

    /**
     * @note[short] MacOS (ARM): 0x3554cc
     * @note[short] MacOS (Intel): 0x3d32b0
     * @note[short] Windows: 0x61410
     * @note[short] Android
     */
    void stopChannel(FMOD::Channel* channel, bool loop, float delay);

    /**
     * @note[short] MacOS (ARM): 0x35508c
     * @note[short] MacOS (Intel): 0x3d2ce0
     * @note[short] Windows: 0x61010
     * @note[short] Android
     */
    void stopChannel(int id, AudioTargetType type, bool loop, float delay);

    /**
     * @note[short] MacOS (ARM): 0x352f3c
     * @note[short] MacOS (Intel): 0x3d0580
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopChannelTween(int id, AudioTargetType target, AudioModType mod);

    /**
     * @note[short] MacOS (ARM): 0x353050
     * @note[short] MacOS (Intel): 0x3d0670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopChannelTweens(int id, AudioTargetType target);

    /**
     * @note[short] MacOS (ARM): 0x35766c
     * @note[short] MacOS (Intel): 0x3d5900
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopMusic(int id);

    /**
     * @note[short] MacOS (ARM): 0x358730
     * @note[short] MacOS (Intel): 0x3d6ea0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopMusicNotInSet(std::unordered_set<int>& musicIDs);

    /**
     * @note[short] MacOS (ARM): 0x355c3c
     * @note[short] MacOS (Intel): 0x3d3aa0
     * @note[short] Windows: 0x62170
     * @note[short] iOS: 0x1b9980
     * @note[short] Android
     */
    FMODSound* storeEffect(FMOD::Sound* sound, std::string path);

    /**
     * @note[short] MacOS (ARM): 0x357670
     * @note[short] MacOS (Intel): 0x3d5910
     * @note[short] Windows: 0x64b00
     * @note[short] Android
     */
    void swapMusicIndex(int musicID, int channelID);

    /**
     * @note[short] MacOS (Intel): 0x368ef0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void testFunction(int unknown);

    /**
     * @note[short] MacOS (ARM): 0x35291c
     * @note[short] MacOS (Intel): 0x3cfd10
     * @note[short] Windows: 0x64620
     * @note[short] Android
     */
    void triggerQueuedMusic(FMODQueuedMusic music);

    /**
     * @note[short] MacOS (ARM): 0x355de0
     * @note[short] MacOS (Intel): 0x3d3c50
     * @note[short] Windows: 0x627b0
     * @note[short] Android
     */
    void unloadAllEffects();

    /**
     * @note[short] MacOS (ARM): 0x355ddc
     * @note[short] MacOS (Intel): 0x3d3c40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unloadEffect(std::string path);

    /**
     * @note[short] MacOS (ARM): 0x354a04
     * @note[short] MacOS (Intel): 0x3d2450
     * @note[short] Windows: 0x60800
     * @note[short] Android
     */
    void unregisterChannel(int id);

    /**
     * @note[short] MacOS (ARM): 0x350304
     * @note[short] MacOS (Intel): 0x3ccaa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBackgroundFade();

    /**
     * @note[short] MacOS (ARM): 0x3556fc
     * @note[short] MacOS (Intel): 0x3d35c0
     * @note[short] Windows: 0x61760
     * @note[short] Android
     */
    void updateChannel(int channel, AudioTargetType target, AudioModType mod, float duration, float value);

    /**
     * @note[short] MacOS (ARM): 0x3504f8
     * @note[short] MacOS (Intel): 0x3cccb0
     * @note[short] Windows: 0x5f370
     * @note[short] Android
     */
    void updateChannelTweens(float dt);

    /**
     * @note[short] MacOS (ARM): 0x350390
     * @note[short] MacOS (Intel): 0x3ccb50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMetering();

    /**
     * @note[short] MacOS (ARM): 0x34fadc
     * @note[short] MacOS (Intel): 0x3cc110
     * @note[short] Windows: 0x63b30
     * @note[short] Android
     */
    void updateQueuedEffects();

    /**
     * @note[short] MacOS (ARM): 0x34ff98
     * @note[short] MacOS (Intel): 0x3cc640
     * @note[short] Windows: 0x64320
     * @note[short] Android
     */
    void updateQueuedMusic();

    /**
     * @note[short] MacOS (ARM): 0x34e628
     * @note[short] MacOS (Intel): 0x3ca870
     * @note[short] Windows: 0x5d140
     * @note[short] iOS: 0x1b5344
     * @note[short] Android
     */
    void updateReverb(FMODReverbPreset preset, bool force);

    /**
     * @note[short] Android
     */
    TodoReturn updateSystemPitch(float p0);

    /**
     * @note[short] MacOS (ARM): 0x34fc80
     * @note[short] MacOS (Intel): 0x3cc2f0
     * @note[short] Windows: 0x64090
     * @note[short] Android
     */
    void updateTemporaryEffects();

    /**
     * @note[short] MacOS (ARM): 0x358528
     * @note[short] MacOS (Intel): 0x3d6c80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    FMOD_OPENSTATE waitUntilSoundReady(FMOD::Sound* sound);
    std::unordered_map<int, FMODMusic> m_fmodMusic;
    std::unordered_map<std::string, FMODSound> m_fmodSounds;
    std::unordered_set<std::string> m_temporarySoundPaths;
    float m_musicVolume;
    float m_sfxVolume;
    float m_backgroundMusicFade;
    float m_musicFadeStart;
    float m_pulse1;
    float m_pulse2;
    float m_pulse3;
    int m_pulseCounter;
    bool m_metering;
    FMOD::ChannelGroup* m_backgroundMusicChannel;
    FMOD::System* m_system;
    FMOD::DSP* m_mainDSP;
    FMOD::DSP* m_globalChannelDSP;
    FMOD::ChannelGroup* m_globalChannel;
    FMOD::ChannelGroup* m_reverbChannel;
    FMOD::ChannelGroup* m_unkChannel;
    FMOD_RESULT m_lastResult;
    int m_sampleRate;
    bool m_reducedQuality;
    bool m_allAudioPaused;
    int m_musicOffset;
    bool m_stopped;
    bool m_globalChannelPaused;
    std::vector<int> m_stoppedChannelIDs;
    FMODAudioState m_audioState;
    std::vector<FMOD::Sound*> m_removedSounds;
    std::unordered_map<int, FMOD::DSP*> m_channelIDToDSP;
    std::unordered_map<int, FMOD::Channel*> m_channelIDToChannel;
    std::unordered_set<int> m_stoppedChannels;
    FMODReverbPreset m_reverbPreset;
    std::unordered_map<int, int> m_channelIDToEffectID;
    std::unordered_map<int, int> m_effectIDToChannelID;
    std::unordered_map<int, std::string> m_channelIDToSoundPath;
    std::vector<FMODQueuedEffect> m_queuedEffects;
    std::unordered_map<std::string, FMOD::Sound*> m_soundPathToSound;
    std::unordered_map<int, FMOD::ChannelGroup*> m_globalChannelGroups;
    std::unordered_map<int, FMOD::ChannelGroup*> m_reverbChannelGroups;
    bool m_showAudioVisualizer;
    float m_musicVisualizerTime;
    float m_musicVisualizerPeak;
    float m_musicVisualizerVolume;
    float m_sfxVisualizerTime;
    float m_sfxVisualizerPeak;
    float m_sfxVisualizerVolume;
};
