
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongUsagePopup.hpp>

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

SongUsagePopup::~SongUsagePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SongUsagePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x101c00, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SongUsagePopup(geode::CutoffConstructor, sizeof(SongUsagePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SongUsagePopup::create(int p0, std::string const& p1, std::string const& p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(int, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x101d30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto SongUsagePopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SongUsagePopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SongUsagePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SongUsagePopup::songUsageFinished(int p0, std::string p1) -> decltype(songUsageFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::string>::func(&SongUsagePopup::songUsageFinished), this);
	using FunctionType = decltype(songUsageFinished(p0, p1))(*)(SongUsagePopup*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102570, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto SongUsagePopup::songUsageFailed(int p0) -> decltype(songUsageFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&SongUsagePopup::songUsageFailed), this);
	using FunctionType = decltype(songUsageFailed(p0))(*)(SongUsagePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x102ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto SongUsagePopup::buildUsageGrid(std::vector<SongUsageEntry> const& p0) -> decltype(buildUsageGrid(p0)) {
	using FunctionType = decltype(buildUsageGrid(p0))(*)(SongUsagePopup*, std::vector<SongUsageEntry> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x103030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto SongUsagePopup::init(int p0, std::string const& p1, std::string const& p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(SongUsagePopup*, int, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x101e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto SongUsagePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SongUsagePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
