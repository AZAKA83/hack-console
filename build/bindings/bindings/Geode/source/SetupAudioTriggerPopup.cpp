
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupAudioTriggerPopup.hpp>

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

SetupAudioTriggerPopup::~SetupAudioTriggerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupAudioTriggerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5da470, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupAudioTriggerPopup(geode::CutoffConstructor, sizeof(SetupAudioTriggerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupAudioTriggerPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupAudioTriggerPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupAudioTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dbae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupAudioTriggerPopup::addProxVolControls(int page) -> decltype(addProxVolControls(page)) {
	using FunctionType = decltype(addProxVolControls(page))(*)(SetupAudioTriggerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5da8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto SetupAudioTriggerPopup::addTimeControls(int page, float yOffset) -> decltype(addTimeControls(page, yOffset)) {
	using FunctionType = decltype(addTimeControls(page, yOffset))(*)(SetupAudioTriggerPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5da530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, yOffset);
}

auto SetupAudioTriggerPopup::onProxMode(cocos2d::CCObject* sender) -> decltype(onProxMode(sender)) {
	using FunctionType = decltype(onProxMode(sender))(*)(SetupAudioTriggerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5db980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupAudioTriggerPopup::updateSpecialGroup() -> decltype(updateSpecialGroup()) {
	using FunctionType = decltype(updateSpecialGroup())(*)(SetupAudioTriggerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dba60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
