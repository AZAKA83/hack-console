
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelControlConfig.hpp>

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

auto LevelControlConfig::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44a1d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto LevelControlConfig::bindGlobalBinds(KeybindSource* target, bool controller) -> decltype(bindGlobalBinds(target, controller)) {
	using FunctionType = decltype(bindGlobalBinds(target, controller))(*)(KeybindSource*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(target, controller);
}

auto LevelControlConfig::bindDefaultController(KeybindSource* target) -> decltype(bindDefaultController(target)) {
	using FunctionType = decltype(bindDefaultController(target))(*)(KeybindSource*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b2b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(target);
}

auto LevelControlConfig::bindDefaultKeyboard(KeybindSource* target) -> decltype(bindDefaultKeyboard(target)) {
	using FunctionType = decltype(bindDefaultKeyboard(target))(*)(KeybindSource*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b210, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(target);
}

auto LevelControlConfig::createFromB64(std::string const& data) -> decltype(createFromB64(data)) {
	using FunctionType = decltype(createFromB64(data))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b0f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(data);
}

auto LevelControlConfig::createFromGlobal(bool dualMode) -> decltype(createFromGlobal(dualMode)) {
	using FunctionType = decltype(createFromGlobal(dualMode))(*)(bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b6d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dualMode);
}

auto LevelControlConfig::decode(std::string const& data) -> decltype(decode(data)) {
	using FunctionType = decltype(decode(data))(*)(LevelControlConfig*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44aa20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, data);
}

auto LevelControlConfig::encode() const  -> decltype(encode()) {
	using FunctionType = decltype(encode())(*)(LevelControlConfig const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44a430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelControlConfig::resolveSlot(LevelTouchSlot const& slot, cocos2d::CCSize const& winSize) const  -> decltype(resolveSlot(slot, winSize)) {
	using FunctionType = decltype(resolveSlot(slot, winSize))(*)(LevelControlConfig const *, LevelTouchSlot const&, cocos2d::CCSize const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44bad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, slot, winSize);
}

auto LevelControlConfig::seedBase() -> decltype(seedBase()) {
	using FunctionType = decltype(seedBase())(*)(LevelControlConfig*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44b640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
