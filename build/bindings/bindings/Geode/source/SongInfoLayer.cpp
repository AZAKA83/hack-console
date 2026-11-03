
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongInfoLayer.hpp>

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

SongInfoLayer::~SongInfoLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SongInfoLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x633980, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SongInfoLayer(geode::CutoffConstructor, sizeof(SongInfoLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SongInfoLayer::create(SongInfoObject* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6346c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto SongInfoLayer::create(int artistID) -> decltype(create(artistID)) {
	using FunctionType = decltype(create(artistID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x634300, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(artistID);
}

auto SongInfoLayer::create(std::string p0, std::string p1, std::vector<GJLinkObject> p2, std::vector<GJLinkObject> p3, int p4, std::string p5, int p6) -> decltype(create(p0, p1, p2, p3, p4, p5, p6)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4, p5, p6))(*)(std::string, std::string, std::vector<GJLinkObject>, std::vector<GJLinkObject>, int, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x634980, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4, p5, p6);
}

auto SongInfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongInfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SongInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongInfoLayer::addLinkRows(std::vector<GJLinkObject> const& p0, float p1, int p2) -> decltype(addLinkRows(p0, p1, p2)) {
	using FunctionType = decltype(addLinkRows(p0, p1, p2))(*)(SongInfoLayer*, std::vector<GJLinkObject> const&, float, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6363d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto SongInfoLayer::init(std::string p0, std::string p1, std::vector<GJLinkObject> p2, std::vector<GJLinkObject> p3, int p4, std::string p5, int p6) -> decltype(init(p0, p1, p2, p3, p4, p5, p6)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6))(*)(SongInfoLayer*, std::string, std::string, std::vector<GJLinkObject>, std::vector<GJLinkObject>, int, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x634c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6);
}

auto SongInfoLayer::onBPM(cocos2d::CCObject* sender) -> decltype(onBPM(sender)) {
	using FunctionType = decltype(onBPM(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x636750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onCopySongID(cocos2d::CCObject* sender) -> decltype(onCopySongID(sender)) {
	using FunctionType = decltype(onCopySongID(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x635b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onLink(cocos2d::CCObject* sender) -> decltype(onLink(sender)) {
	using FunctionType = decltype(onLink(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x6366e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onMenuMusic(cocos2d::CCObject* sender) -> decltype(onMenuMusic(sender)) {
	using FunctionType = decltype(onMenuMusic(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x636230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onPracticeMusic(cocos2d::CCObject* sender) -> decltype(onPracticeMusic(sender)) {
	using FunctionType = decltype(onPracticeMusic(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x636300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::onSongUsage(cocos2d::CCObject* sender) -> decltype(onSongUsage(sender)) {
	using FunctionType = decltype(onSongUsage(sender))(*)(SongInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x636800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SongInfoLayer::showCustomMusicUnlockInfo() -> decltype(showCustomMusicUnlockInfo()) {
	using FunctionType = decltype(showCustomMusicUnlockInfo())(*)(SongInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x635c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
