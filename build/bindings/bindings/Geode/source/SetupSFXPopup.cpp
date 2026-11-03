
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupSFXPopup.hpp>

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

SetupSFXPopup::~SetupSFXPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupSFXPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5da2b0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupSFXPopup(geode::CutoffConstructor, sizeof(SetupSFXPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupSFXPopup::create(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, int p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(SFXTriggerGameObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dc5a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto SetupSFXPopup::pageChanged() -> decltype(pageChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupSFXPopup::pageChanged), this);
	using FunctionType = decltype(pageChanged())(*)(SetupSFXPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dd970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupSFXPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupSFXPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupSFXPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dd9e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupSFXPopup::onPlusButton(cocos2d::CCObject* sender) -> decltype(onPlusButton(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupSFXPopup::onPlusButton), this);
	using FunctionType = decltype(onPlusButton(sender))(*)(SetupSFXPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5de640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupSFXPopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupSFXPopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupSFXPopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5de520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupSFXPopup::getActiveSFXID() -> decltype(getActiveSFXID()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupSFXPopup::getActiveSFXID), this);
	using FunctionType = decltype(getActiveSFXID())(*)(SetupSFXPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5de420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupSFXPopup::overridePlaySFX(SFXInfoObject* object) -> decltype(overridePlaySFX(object)) {
	auto self = addresser::thunkAdjust(Resolve<SFXInfoObject*>::func(&SetupSFXPopup::overridePlaySFX), this);
	using FunctionType = decltype(overridePlaySFX(object))(*)(SetupSFXPopup*, SFXInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5de460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, object);
}

auto SetupSFXPopup::sfxBrowserClosed(SFXBrowser* browser) -> decltype(sfxBrowserClosed(browser)) {
	auto self = addresser::thunkAdjust(Resolve<SFXBrowser*>::func(&SetupSFXPopup::sfxBrowserClosed), this);
	using FunctionType = decltype(sfxBrowserClosed(browser))(*)(SetupSFXPopup*, SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dea90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, browser);
}

auto SetupSFXPopup::getActiveCustomSFXID() -> decltype(getActiveCustomSFXID()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetupSFXPopup::getActiveCustomSFXID), this);
	using FunctionType = decltype(getActiveCustomSFXID())(*)(SetupSFXPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5de430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetupSFXPopup::createSFXWidget() -> decltype(createSFXWidget()) {
	using FunctionType = decltype(createSFXWidget())(*)(SetupSFXPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dde10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupSFXPopup::init(SFXTriggerGameObject* p0, cocos2d::CCArray* p1, int p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(SetupSFXPopup*, SFXTriggerGameObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dc700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto SetupSFXPopup::onBrowseSFX(cocos2d::CCObject* sender) -> decltype(onBrowseSFX(sender)) {
	using FunctionType = decltype(onBrowseSFX(sender))(*)(SetupSFXPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dea10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSFXPopup::updateLength() -> decltype(updateLength()) {
	using FunctionType = decltype(updateLength())(*)(SetupSFXPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ddd80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
