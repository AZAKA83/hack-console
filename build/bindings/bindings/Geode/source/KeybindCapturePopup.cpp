
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeybindCapturePopup.hpp>

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

auto KeybindCapturePopup::create(KeybindSource* source, int action, int chord, KeybindingsLayer* layer, KeybindCaptureMode mode) -> decltype(create(source, action, chord, layer, mode)) {
	using FunctionType = decltype(create(source, action, chord, layer, mode))(*)(KeybindSource*, int, int, KeybindingsLayer*, KeybindCaptureMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44e090, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(source, action, chord, layer, mode);
}

auto KeybindCapturePopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&KeybindCapturePopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(KeybindCapturePopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44ee50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto KeybindCapturePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&KeybindCapturePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(KeybindCapturePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44ee00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto KeybindCapturePopup::inputKeySelected(int chord) -> decltype(inputKeySelected(chord)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindCapturePopup::inputKeySelected), this);
	using FunctionType = decltype(inputKeySelected(chord))(*)(KeybindCapturePopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44e380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, chord);
}

auto KeybindCapturePopup::keyUp(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyUp(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&KeybindCapturePopup::keyUp), this);
	using FunctionType = decltype(keyUp(key, timestamp))(*)(KeybindCapturePopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44f0c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto KeybindCapturePopup::fadeButtonSprite(ButtonSprite* sprite, bool enabled) -> decltype(fadeButtonSprite(sprite, enabled)) {
	using FunctionType = decltype(fadeButtonSprite(sprite, enabled))(*)(KeybindCapturePopup*, ButtonSprite*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44eb30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite, enabled);
}

auto KeybindCapturePopup::init(KeybindSource* source, int action, int chord, KeybindingsLayer* layer, KeybindCaptureMode mode) -> decltype(init(source, action, chord, layer, mode)) {
	using FunctionType = decltype(init(source, action, chord, layer, mode))(*)(KeybindCapturePopup*, KeybindSource*, int, int, KeybindingsLayer*, KeybindCaptureMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44d2c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, source, action, chord, layer, mode);
}

auto KeybindCapturePopup::onRemove(cocos2d::CCObject* sender) -> decltype(onRemove(sender)) {
	using FunctionType = decltype(onRemove(sender))(*)(KeybindCapturePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44ecf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindCapturePopup::onSet(cocos2d::CCObject* sender) -> decltype(onSet(sender)) {
	using FunctionType = decltype(onSet(sender))(*)(KeybindCapturePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44ec20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindCapturePopup::onToggleController(cocos2d::CCObject* sender) -> decltype(onToggleController(sender)) {
	using FunctionType = decltype(onToggleController(sender))(*)(KeybindCapturePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44ed50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindCapturePopup::updateChordDisplay() -> decltype(updateChordDisplay()) {
	using FunctionType = decltype(updateChordDisplay())(*)(KeybindCapturePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44e3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto KeybindCapturePopup::updateConflictLabel() -> decltype(updateConflictLabel()) {
	using FunctionType = decltype(updateConflictLabel())(*)(KeybindCapturePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44e510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
