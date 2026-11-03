
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FMODAudioEngine.hpp>

using namespace geode;
using namespace geode::modifier;

#if !defined(GEODE_WRAP_FUNCTION)
#define GEODE_WRAP_FUNCTION
template <class F>
static auto wrapFunction(uintptr_t address, tulip::hook::TulipConvention convention) {
	auto wrapped = geode::hook::createWrapper(reinterpret_cast<void*>(address), tulip::hook::WrapperMetadata{
		.m_convention = geode::hook::createConvention(convention),
		.m_abstract = tulip::hook::AbstractFunction::from(F(nullptr)),
	});
	if (wrapped.isErr()) {
		throw std::runtime_error(wrapped.unwrapErr());
	}
	return wrapped.unwrap();
}
#endif

FMODAudioEngine::FMODAudioEngine() : FMODAudioEngine(geode::CutoffConstructor, sizeof(FMODAudioEngine)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	FMODAudioEngine::~FMODAudioEngine();

	using FunctionType = void(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bf90, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::pitchForIdx(int index) -> decltype(pitchForIdx(index)) {
	using FunctionType = decltype(pitchForIdx(index))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f550, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(index);
}

auto FMODAudioEngine::reverbToString(FMODReverbPreset preset) -> decltype(reverbToString(preset)) {
	using FunctionType = decltype(reverbToString(preset))(*)(FMODReverbPreset);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5da00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(preset);
}

auto FMODAudioEngine::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&FMODAudioEngine::update), this);
	using FunctionType = decltype(update(dt))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto FMODAudioEngine::channelForChannelID(int id) -> decltype(channelForChannelID(id)) {
	using FunctionType = decltype(channelForChannelID(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::channelIDForUniqueID(int id) -> decltype(channelIDForUniqueID(id)) {
	using FunctionType = decltype(channelIDForUniqueID(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::channelStopped(FMOD::Channel* channel, bool remove) -> decltype(channelStopped(channel, remove)) {
	using FunctionType = decltype(channelStopped(channel, remove))(*)(FMODAudioEngine*, FMOD::Channel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel, remove);
}

auto FMODAudioEngine::channelUnlinkSound(int id) -> decltype(channelUnlinkSound(id)) {
	using FunctionType = decltype(channelUnlinkSound(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x609f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::clearAllAudio() -> decltype(clearAllAudio()) {
	using FunctionType = decltype(clearAllAudio())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e0d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::createStream(std::string path) -> decltype(createStream(path)) {
	using FunctionType = decltype(createStream(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25fa30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::fadeInMusic(float duration, int channel) -> decltype(fadeInMusic(duration, channel)) {
	using FunctionType = decltype(fadeInMusic(duration, channel))(*)(FMODAudioEngine*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel);
}

auto FMODAudioEngine::fadeMusic(float duration, int channel, float startVolume, float endVolume) -> decltype(fadeMusic(duration, channel, startVolume, endVolume)) {
	using FunctionType = decltype(fadeMusic(duration, channel, startVolume, endVolume))(*)(FMODAudioEngine*, float, int, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x655e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel, startVolume, endVolume);
}

auto FMODAudioEngine::fadeOutMusic(float duration, int channel) -> decltype(fadeOutMusic(duration, channel)) {
	using FunctionType = decltype(fadeOutMusic(duration, channel))(*)(FMODAudioEngine*, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x654a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, channel);
}

auto FMODAudioEngine::getChannelGroup(int id, bool reverb) -> decltype(getChannelGroup(id, reverb)) {
	using FunctionType = decltype(getChannelGroup(id, reverb))(*)(FMODAudioEngine*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, reverb);
}

auto FMODAudioEngine::getMusicLengthMS(int channel) -> decltype(getMusicLengthMS(channel)) {
	using FunctionType = decltype(getMusicLengthMS(channel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::getMusicTimeMS(int channel) -> decltype(getMusicTimeMS(channel)) {
	using FunctionType = decltype(getMusicTimeMS(channel))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x650d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::isMusicPlaying(int musicID) -> decltype(isMusicPlaying(musicID)) {
	using FunctionType = decltype(isMusicPlaying(musicID))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, musicID);
}

auto FMODAudioEngine::isPersistentMatchPlaying(std::string path, int musicID) -> decltype(isPersistentMatchPlaying(path, musicID)) {
	using FunctionType = decltype(isPersistentMatchPlaying(path, musicID))(*)(FMODAudioEngine*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x639d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, musicID);
}

auto FMODAudioEngine::lengthForSound(std::string path) -> decltype(lengthForSound(path)) {
	using FunctionType = decltype(lengthForSound(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x626e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::loadAndPlayMusic(std::string path, unsigned int time, int musicID) -> decltype(loadAndPlayMusic(path, time, musicID)) {
	using FunctionType = decltype(loadAndPlayMusic(path, time, musicID))(*)(FMODAudioEngine*, std::string, unsigned int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, time, musicID);
}

auto FMODAudioEngine::loadAudioState(FMODAudioState& state) -> decltype(loadAudioState(state)) {
	using FunctionType = decltype(loadAudioState(state))(*)(FMODAudioEngine*, FMODAudioState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5eaf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto FMODAudioEngine::loadMusic(std::string path, float speed, float unknown, float volume, bool shouldLoop, int musicID, int channelID, bool dontReset) -> decltype(loadMusic(path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset)) {
	using FunctionType = decltype(loadMusic(path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset))(*)(FMODAudioEngine*, std::string, float, float, float, bool, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62ec0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume, shouldLoop, musicID, channelID, dontReset);
}

auto FMODAudioEngine::playEffect(std::string path) -> decltype(playEffect(path)) {
	using FunctionType = decltype(playEffect(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::playEffect(std::string path, float speed, float unknown, float volume) -> decltype(playEffect(path, speed, unknown, volume)) {
	using FunctionType = decltype(playEffect(path, speed, unknown, volume))(*)(FMODAudioEngine*, std::string, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5fa00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume);
}

auto FMODAudioEngine::playEffectAdvanced(std::string path, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int startMillis, int endMillis, int fadeIn, int fadeOut, bool loopEnabled, int effectID, bool override, bool noPreload, int channelID, int uniqueID, float minInterval, int sfxGroup) -> decltype(playEffectAdvanced(path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup)) {
	using FunctionType = decltype(playEffectAdvanced(path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup))(*)(FMODAudioEngine*, std::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, bool, int, int, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5faf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, speed, unknown, volume, pitch, fastFourierTransform, reverb, startMillis, endMillis, fadeIn, fadeOut, loopEnabled, effectID, override, noPreload, channelID, uniqueID, minInterval, sfxGroup);
}

auto FMODAudioEngine::playMusic(std::string path, bool shouldLoop, float fadeInTime, int channel) -> decltype(playMusic(path, shouldLoop, fadeInTime, channel)) {
	using FunctionType = decltype(playMusic(path, shouldLoop, fadeInTime, channel))(*)(FMODAudioEngine*, std::string, bool, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, shouldLoop, fadeInTime, channel);
}

auto FMODAudioEngine::preloadEffect(std::string path) -> decltype(preloadEffect(path)) {
	using FunctionType = decltype(preloadEffect(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::preloadEffectAsync(std::string path) -> decltype(preloadEffectAsync(path)) {
	using FunctionType = decltype(preloadEffectAsync(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x622b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::preloadMusic(std::string path, bool noRelease, int musicID) -> decltype(preloadMusic(path, noRelease, musicID)) {
	using FunctionType = decltype(preloadMusic(path, noRelease, musicID))(*)(FMODAudioEngine*, std::string, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path, noRelease, musicID);
}

auto FMODAudioEngine::queuedEffectFinishedLoading(std::string path) -> decltype(queuedEffectFinishedLoading(path)) {
	using FunctionType = decltype(queuedEffectFinishedLoading(path))(*)(FMODAudioEngine*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto FMODAudioEngine::queuePlayEffect(std::string audioFilename, float speed, float unknown, float volume, float pitch, bool fastFourierTransform, bool reverb, int start, int end, int fadeIn, int fadeOut, bool loop, int effectID, bool override, int uniqueID, float minInterval, int group) -> decltype(queuePlayEffect(audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group)) {
	using FunctionType = decltype(queuePlayEffect(audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group))(*)(FMODAudioEngine*, std::string, float, float, float, float, bool, bool, int, int, int, int, bool, int, bool, int, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, audioFilename, speed, unknown, volume, pitch, fastFourierTransform, reverb, start, end, fadeIn, fadeOut, loop, effectID, override, uniqueID, minInterval, group);
}

auto FMODAudioEngine::queueStartMusic(std::string audioFilename, float pitch, float unknown, float volume, bool loop, int start, int end, int fadeIn, int fadeOut, int musicID, bool p10, int channelID, bool noPrepare, bool dontReset) -> decltype(queueStartMusic(audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset)) {
	using FunctionType = decltype(queueStartMusic(audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset))(*)(FMODAudioEngine*, std::string, float, float, float, bool, int, int, int, int, int, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x636f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, audioFilename, pitch, unknown, volume, loop, start, end, fadeIn, fadeOut, musicID, p10, channelID, noPrepare, dontReset);
}

auto FMODAudioEngine::registerChannel(FMOD::Channel* channel, int channelID, int effectID) -> decltype(registerChannel(channel, channelID, effectID)) {
	using FunctionType = decltype(registerChannel(channel, channelID, effectID))(*)(FMODAudioEngine*, FMOD::Channel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x606d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel, channelID, effectID);
}

auto FMODAudioEngine::resumeAllMusic() -> decltype(resumeAllMusic()) {
	using FunctionType = decltype(resumeAllMusic())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::resumeSuspendedAudio() -> decltype(resumeSuspendedAudio()) {
	using FunctionType = decltype(resumeSuspendedAudio())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::saveAudioState(FMODAudioState& state) -> decltype(saveAudioState(state)) {
	using FunctionType = decltype(saveAudioState(state))(*)(FMODAudioEngine*, FMODAudioState&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5e6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state);
}

auto FMODAudioEngine::setChannelPitch(int id, AudioTargetType type, float pitch) -> decltype(setChannelPitch(id, type, pitch)) {
	using FunctionType = decltype(setChannelPitch(id, type, pitch))(*)(FMODAudioEngine*, int, AudioTargetType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, pitch);
}

auto FMODAudioEngine::setChannelVolume(int id, AudioTargetType type, float volume) -> decltype(setChannelVolume(id, type, volume)) {
	using FunctionType = decltype(setChannelVolume(id, type, volume))(*)(FMODAudioEngine*, int, AudioTargetType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x619d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, volume);
}

auto FMODAudioEngine::setChannelVolumeMod(int id, AudioTargetType type, float volumeMod) -> decltype(setChannelVolumeMod(id, type, volumeMod)) {
	using FunctionType = decltype(setChannelVolumeMod(id, type, volumeMod))(*)(FMODAudioEngine*, int, AudioTargetType, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, volumeMod);
}

auto FMODAudioEngine::setMusicTimeMS(unsigned int time, bool dontWait, int musicID) -> decltype(setMusicTimeMS(time, dontWait, musicID)) {
	using FunctionType = decltype(setMusicTimeMS(time, dontWait, musicID))(*)(FMODAudioEngine*, unsigned int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, time, dontWait, musicID);
}

auto FMODAudioEngine::setup() -> decltype(setup()) {
	using FunctionType = decltype(setup())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5c8c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::setupAudioEngine() -> decltype(setupAudioEngine()) {
	using FunctionType = decltype(setupAudioEngine())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5cdc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::start() -> decltype(start()) {
	using FunctionType = decltype(start())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dfc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::startMusic(int start, int end, int fadeIn, int fadeOut, bool loop, int musicID, bool noResume, bool dontReset) -> decltype(startMusic(start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset)) {
	using FunctionType = decltype(startMusic(start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset))(*)(FMODAudioEngine*, int, int, int, int, bool, int, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, start, end, fadeIn, fadeOut, loop, musicID, noResume, dontReset);
}

auto FMODAudioEngine::stopAllEffects() -> decltype(stopAllEffects()) {
	using FunctionType = decltype(stopAllEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::stopAllMusic(bool clear) -> decltype(stopAllMusic(clear)) {
	using FunctionType = decltype(stopAllMusic(clear))(*)(FMODAudioEngine*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x629a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, clear);
}

auto FMODAudioEngine::stopAndGetFade(FMOD::Channel* channel) -> decltype(stopAndGetFade(channel)) {
	using FunctionType = decltype(stopAndGetFade(channel))(*)(FMODAudioEngine*, FMOD::Channel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel);
}

auto FMODAudioEngine::stopAndRemoveMusic(int id) -> decltype(stopAndRemoveMusic(id)) {
	using FunctionType = decltype(stopAndRemoveMusic(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x65a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::stopChannel(FMOD::Channel* channel, bool loop, float delay) -> decltype(stopChannel(channel, loop, delay)) {
	using FunctionType = decltype(stopChannel(channel, loop, delay))(*)(FMODAudioEngine*, FMOD::Channel*, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel, loop, delay);
}

auto FMODAudioEngine::stopChannel(int id, AudioTargetType type, bool loop, float delay) -> decltype(stopChannel(id, type, loop, delay)) {
	using FunctionType = decltype(stopChannel(id, type, loop, delay))(*)(FMODAudioEngine*, int, AudioTargetType, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, loop, delay);
}

auto FMODAudioEngine::storeEffect(FMOD::Sound* sound, std::string path) -> decltype(storeEffect(sound, path)) {
	using FunctionType = decltype(storeEffect(sound, path))(*)(FMODAudioEngine*, FMOD::Sound*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x62170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sound, path);
}

auto FMODAudioEngine::swapMusicIndex(int musicID, int channelID) -> decltype(swapMusicIndex(musicID, channelID)) {
	using FunctionType = decltype(swapMusicIndex(musicID, channelID))(*)(FMODAudioEngine*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, musicID, channelID);
}

auto FMODAudioEngine::triggerQueuedMusic(FMODQueuedMusic music) -> decltype(triggerQueuedMusic(music)) {
	using FunctionType = decltype(triggerQueuedMusic(music))(*)(FMODAudioEngine*, FMODQueuedMusic);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, music);
}

auto FMODAudioEngine::unloadAllEffects() -> decltype(unloadAllEffects()) {
	using FunctionType = decltype(unloadAllEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x627b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::unregisterChannel(int id) -> decltype(unregisterChannel(id)) {
	using FunctionType = decltype(unregisterChannel(id))(*)(FMODAudioEngine*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x60800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto FMODAudioEngine::updateChannel(int channel, AudioTargetType target, AudioModType mod, float duration, float value) -> decltype(updateChannel(channel, target, mod, duration, value)) {
	using FunctionType = decltype(updateChannel(channel, target, mod, duration, value))(*)(FMODAudioEngine*, int, AudioTargetType, AudioModType, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, channel, target, mod, duration, value);
}

auto FMODAudioEngine::updateChannelTweens(float dt) -> decltype(updateChannelTweens(dt)) {
	using FunctionType = decltype(updateChannelTweens(dt))(*)(FMODAudioEngine*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f370, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto FMODAudioEngine::updateQueuedEffects() -> decltype(updateQueuedEffects()) {
	using FunctionType = decltype(updateQueuedEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x63b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::updateQueuedMusic() -> decltype(updateQueuedMusic()) {
	using FunctionType = decltype(updateQueuedMusic())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FMODAudioEngine::updateReverb(FMODReverbPreset preset, bool force) -> decltype(updateReverb(preset, force)) {
	using FunctionType = decltype(updateReverb(preset, force))(*)(FMODAudioEngine*, FMODReverbPreset, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5d140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, preset, force);
}

auto FMODAudioEngine::updateTemporaryEffects() -> decltype(updateTemporaryEffects()) {
	using FunctionType = decltype(updateTemporaryEffects())(*)(FMODAudioEngine*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x64090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
