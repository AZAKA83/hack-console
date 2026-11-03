
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TimeSpeedControl.hpp>

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

TimeSpeedControl::~TimeSpeedControl() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(TimeSpeedControl*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x47080, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) TimeSpeedControl(geode::CutoffConstructor, sizeof(TimeSpeedControl));
		geode::DestructorLock::addLock(this);
	}
}

auto TimeSpeedControl::create(GJBaseGameLayer* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66d6e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto TimeSpeedControl::init(GJBaseGameLayer* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(TimeSpeedControl*, GJBaseGameLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66d790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto TimeSpeedControl::onAudioTimeSpeedToggle(cocos2d::CCObject* sender) -> decltype(onAudioTimeSpeedToggle(sender)) {
	using FunctionType = decltype(onAudioTimeSpeedToggle(sender))(*)(TimeSpeedControl*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66ddd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto TimeSpeedControl::timeSliderChanged(cocos2d::CCObject* p0) -> decltype(timeSliderChanged(p0)) {
	using FunctionType = decltype(timeSliderChanged(p0))(*)(TimeSpeedControl*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x66dc50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
