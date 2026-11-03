
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelBindingsLayer.hpp>

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

auto LevelBindingsLayer::create(KeybindSet* keybindSet, bool controller) -> decltype(create(keybindSet, controller)) {
	using FunctionType = decltype(create(keybindSet, controller))(*)(KeybindSet*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44c580, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(keybindSet, controller);
}

auto LevelBindingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&LevelBindingsLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(LevelBindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44d1a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto LevelBindingsLayer::setupTabs() -> decltype(setupTabs()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBindingsLayer::setupTabs), this);
	using FunctionType = decltype(setupTabs())(*)(LevelBindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44c730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBindingsLayer::actionsToShow(int tab) -> decltype(actionsToShow(tab)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&LevelBindingsLayer::actionsToShow), this);
	using FunctionType = decltype(actionsToShow(tab))(*)(LevelBindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44c8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tab);
}

auto LevelBindingsLayer::openBindingEditor(int action, int chord) -> decltype(openBindingEditor(action, chord)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&LevelBindingsLayer::openBindingEditor), this);
	using FunctionType = decltype(openBindingEditor(action, chord))(*)(LevelBindingsLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44c920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action, chord);
}

auto LevelBindingsLayer::settingsEntries() -> decltype(settingsEntries()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBindingsLayer::settingsEntries), this);
	using FunctionType = decltype(settingsEntries())(*)(LevelBindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44c440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBindingsLayer::onApplyGlobal(cocos2d::CCObject* sender) -> decltype(onApplyGlobal(sender)) {
	using FunctionType = decltype(onApplyGlobal(sender))(*)(LevelBindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44cf50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBindingsLayer::onClear(cocos2d::CCObject* sender) -> decltype(onClear(sender)) {
	using FunctionType = decltype(onClear(sender))(*)(LevelBindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44d090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBindingsLayer::onCopy(cocos2d::CCObject* sender) -> decltype(onCopy(sender)) {
	using FunctionType = decltype(onCopy(sender))(*)(LevelBindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44c960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBindingsLayer::onPaste(cocos2d::CCObject* sender) -> decltype(onPaste(sender)) {
	using FunctionType = decltype(onPaste(sender))(*)(LevelBindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44cbc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelBindingsLayer::onReset(cocos2d::CCObject* sender) -> decltype(onReset(sender)) {
	using FunctionType = decltype(onReset(sender))(*)(LevelBindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44ce30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
