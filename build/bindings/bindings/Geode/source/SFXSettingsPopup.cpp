
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SFXSettingsPopup.hpp>

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

SFXSettingsPopup::~SFXSettingsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SFXSettingsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x39ab40, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SFXSettingsPopup(geode::CutoffConstructor, sizeof(SFXSettingsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SFXSettingsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SFXSettingsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SFXSettingsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61f6f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SFXSettingsPopup::setupOptions() -> decltype(setupOptions()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXSettingsPopup::setupOptions), this);
	using FunctionType = decltype(setupOptions())(*)(SFXSettingsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61f6c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXSettingsPopup::didToggleGV(std::string p0) -> decltype(didToggleGV(p0)) {
	auto self = addresser::thunkAdjust(Resolve<std::string>::func(&SFXSettingsPopup::didToggleGV), this);
	using FunctionType = decltype(didToggleGV(p0))(*)(SFXSettingsPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x61f6e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}
