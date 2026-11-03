
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AudioAssetsPopup.hpp>

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

AudioAssetsPopup::~AudioAssetsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AudioAssetsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xbdd10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AudioAssetsPopup(geode::CutoffConstructor, sizeof(AudioAssetsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto AudioAssetsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AudioAssetsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AudioAssetsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AudioAssetsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AudioAssetsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AudioAssetsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbe4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AudioAssetsPopup::musicActionFinished(GJMusicAction p0) -> decltype(musicActionFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJMusicAction>::func(&AudioAssetsPopup::musicActionFinished), this);
	using FunctionType = decltype(musicActionFinished(p0))(*)(AudioAssetsPopup*, GJMusicAction);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbe420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AudioAssetsPopup::init(int songID, int officialSongID, std::string const& songList, std::string const& sfxList) -> decltype(init(songID, officialSongID, songList, sfxList)) {
	using FunctionType = decltype(init(songID, officialSongID, songList, sfxList))(*)(AudioAssetsPopup*, int, int, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xbde40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songID, officialSongID, songList, sfxList);
}
