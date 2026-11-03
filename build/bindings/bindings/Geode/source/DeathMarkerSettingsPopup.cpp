
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DeathMarkerSettingsPopup.hpp>

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

DeathMarkerSettingsPopup::~DeathMarkerSettingsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(DeathMarkerSettingsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x60ac50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) DeathMarkerSettingsPopup(geode::CutoffConstructor, sizeof(DeathMarkerSettingsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto DeathMarkerSettingsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DeathMarkerSettingsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DeathMarkerSettingsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DeathMarkerSettingsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&DeathMarkerSettingsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto DeathMarkerSettingsPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&DeathMarkerSettingsPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(DeathMarkerSettingsPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11d600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto DeathMarkerSettingsPopup::init(GJGameLevel* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(DeathMarkerSettingsPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11bea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DeathMarkerSettingsPopup::onClearMarkers(cocos2d::CCObject* sender) -> decltype(onClearMarkers(sender)) {
	using FunctionType = decltype(onClearMarkers(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11d490, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onFrequencySlider(cocos2d::CCObject* sender) -> decltype(onFrequencySlider(sender)) {
	using FunctionType = decltype(onFrequencySlider(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11d840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onTimescaleSlider(cocos2d::CCObject* sender) -> decltype(onTimescaleSlider(sender)) {
	using FunctionType = decltype(onTimescaleSlider(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11daa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleAnimation(cocos2d::CCObject* sender) -> decltype(onToggleAnimation(sender)) {
	using FunctionType = decltype(onToggleAnimation(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11dd70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleColor(cocos2d::CCObject* sender) -> decltype(onToggleColor(sender)) {
	using FunctionType = decltype(onToggleColor(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11dd20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleDisabled(cocos2d::CCObject* sender) -> decltype(onToggleDisabled(sender)) {
	using FunctionType = decltype(onToggleDisabled(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11dfa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleGlobal(cocos2d::CCObject* sender) -> decltype(onToggleGlobal(sender)) {
	using FunctionType = decltype(onToggleGlobal(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11df00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleLabels(cocos2d::CCObject* sender) -> decltype(onToggleLabels(sender)) {
	using FunctionType = decltype(onToggleLabels(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11e130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleLimited(cocos2d::CCObject* sender) -> decltype(onToggleLimited(sender)) {
	using FunctionType = decltype(onToggleLimited(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11de10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleLive(cocos2d::CCObject* sender) -> decltype(onToggleLive(sender)) {
	using FunctionType = decltype(onToggleLive(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11e270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleLocal(cocos2d::CCObject* sender) -> decltype(onToggleLocal(sender)) {
	using FunctionType = decltype(onToggleLocal(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11de60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathMarkerSettingsPopup::onToggleSound(cocos2d::CCObject* sender) -> decltype(onToggleSound(sender)) {
	using FunctionType = decltype(onToggleSound(sender))(*)(DeathMarkerSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11ddc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
