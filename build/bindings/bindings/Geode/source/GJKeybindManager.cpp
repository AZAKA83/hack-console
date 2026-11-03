
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJKeybindManager.hpp>

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

auto GJKeybindManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388320, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJKeybindManager::actionToString(int action) -> decltype(actionToString(action)) {
	using FunctionType = decltype(actionToString(action))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38a0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(action);
}

auto GJKeybindManager::chordToString(int chord) -> decltype(chordToString(chord)) {
	using FunctionType = decltype(chordToString(chord))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x389bc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(chord);
}

auto GJKeybindManager::handleGlobalAudioAction(int action, bool down) -> decltype(handleGlobalAudioAction(action, down)) {
	using FunctionType = decltype(handleGlobalAudioAction(action, down))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388cc0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(action, down);
}

auto GJKeybindManager::actionsForKey(cocos2d::enumKeyCodes key, bool ctrl, bool alt, bool shift) -> decltype(actionsForKey(key, ctrl, alt, shift)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, bool, bool, bool>::func(&GJKeybindManager::actionsForKey), this);
	using FunctionType = decltype(actionsForKey(key, ctrl, alt, shift))(*)(GJKeybindManager*, cocos2d::enumKeyCodes, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, ctrl, alt, shift);
}

auto GJKeybindManager::handleGlobalAction(int action, bool down) -> decltype(handleGlobalAction(action, down)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&GJKeybindManager::handleGlobalAction), this);
	using FunctionType = decltype(handleGlobalAction(action, down))(*)(GJKeybindManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action, down);
}

auto GJKeybindManager::actionsForChord(int chord) -> decltype(actionsForChord(chord)) {
	using FunctionType = decltype(actionsForChord(chord))(*)(GJKeybindManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chord);
}

auto GJKeybindManager::applyMovementOverride(KeybindSource* keyboardSource, KeybindSource* controllerSource) -> decltype(applyMovementOverride(keyboardSource, controllerSource)) {
	using FunctionType = decltype(applyMovementOverride(keyboardSource, controllerSource))(*)(GJKeybindManager*, KeybindSource*, KeybindSource*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, keyboardSource, controllerSource);
}

auto GJKeybindManager::applyNewDefaults(int version) -> decltype(applyNewDefaults(version)) {
	using FunctionType = decltype(applyNewDefaults(version))(*)(GJKeybindManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38bc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, version);
}

auto GJKeybindManager::bindChord(int chord, int action) -> decltype(bindChord(chord, action)) {
	using FunctionType = decltype(bindChord(chord, action))(*)(GJKeybindManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chord, action);
}

auto GJKeybindManager::buildBindsBlob() -> decltype(buildBindsBlob()) {
	using FunctionType = decltype(buildBindsBlob())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::chordsForAction(int action) -> decltype(chordsForAction(action)) {
	using FunctionType = decltype(chordsForAction(action))(*)(GJKeybindManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x388790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action);
}

auto GJKeybindManager::clearMovementOverride() -> decltype(clearMovementOverride()) {
	using FunctionType = decltype(clearMovementOverride())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3896b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::exportBindingsToFile() -> decltype(exportBindingsToFile()) {
	using FunctionType = decltype(exportBindingsToFile())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38bfb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::loadDefaults() -> decltype(loadDefaults()) {
	using FunctionType = decltype(loadDefaults())(*)(GJKeybindManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38ab70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJKeybindManager::parseBindsBlob(std::string const& blob, bool apply, int* outApplied, int* outUnknown) -> decltype(parseBindsBlob(blob, apply, outApplied, outUnknown)) {
	using FunctionType = decltype(parseBindsBlob(blob, apply, outApplied, outUnknown))(*)(GJKeybindManager*, std::string const&, bool, int*, int*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38b840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, blob, apply, outApplied, outUnknown);
}

auto GJKeybindManager::parseImportFile(std::string& outBlob, int& outApplied, int& outUnknown, int& outExtra) -> decltype(parseImportFile(outBlob, outApplied, outUnknown, outExtra)) {
	using FunctionType = decltype(parseImportFile(outBlob, outApplied, outUnknown, outExtra))(*)(GJKeybindManager*, std::string&, int&, int&, int&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x38c590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, outBlob, outApplied, outUnknown, outExtra);
}

auto GJKeybindManager::unbindChord(int chord, int action) -> decltype(unbindChord(chord, action)) {
	using FunctionType = decltype(unbindChord(chord, action))(*)(GJKeybindManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x389a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, chord, action);
}
