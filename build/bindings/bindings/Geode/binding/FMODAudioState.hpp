#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <fmod.hpp>
#include <Geode/binding/FMODSoundTween.hpp>
#include <Geode/binding/FMODQueuedMusic.hpp>
#include <Geode/binding/FMODSoundState.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>

class FMODAudioState {
public:
    static constexpr auto CLASS_NAME = "FMODAudioState";

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x5bdc0
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     FMODAudioState();
    float m_interval;
    float m_elapsed;
    std::map<std::pair<int,int>,FMODSoundTween> m_tweensForEffectChannels;
    std::map<std::pair<int,int>,FMODSoundTween> m_tweensForEffectGroups;
    std::map<std::pair<int,int>,FMODSoundTween> m_tweensForMusicChannels;
    std::unordered_map<int,float> m_volumeForEffectChannels;
    std::unordered_map<int,float> m_volumeModForEffectChannels;
    std::unordered_map<int,float> m_pitchForEffectChannels;
    std::unordered_map<int,float> m_volumeForEffectGroups;
    std::unordered_map<int,float> m_volumeModForEffectGroups;
    std::unordered_map<int,float> m_pitchForEffectGroups;
    std::unordered_map<int,float> m_volumeForMusicChannels;
    std::unordered_map<int,float> m_volumeModForMusicChannels;
    std::unordered_map<int,float> m_pitchForMusicChannels;
    std::unordered_map<int,float> m_intervalForEffects;
    std::unordered_map<int,FMODQueuedMusic> m_queuedMusicForChannels1;
    std::unordered_map<int,FMODQueuedMusic> m_queuedMusicForChannels2;
    std::unordered_map<int,FMODSoundState> m_soundStateForChannels;
    uint64_t m_unkUint64_1;
};
