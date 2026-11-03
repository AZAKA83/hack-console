
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSFXManager.hpp>

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

auto EditorSFXManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x185140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto EditorSFXManager::actionToString(int p0) -> decltype(actionToString(p0)) {
	using FunctionType = decltype(actionToString(p0))(*)(EditorSFXManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x185f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorSFXManager::applyMyConfig(int p0, bool p1, std::string* p2) -> decltype(applyMyConfig(p0, p1, p2)) {
	using FunctionType = decltype(applyMyConfig(p0, p1, p2))(*)(EditorSFXManager*, int, bool, std::string*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18bf10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto EditorSFXManager::dataLoaded(DS_Dictionary* p0) -> decltype(dataLoaded(p0)) {
	using FunctionType = decltype(dataLoaded(p0))(*)(EditorSFXManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18af20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorSFXManager::encodeDataTo(DS_Dictionary* p0) -> decltype(encodeDataTo(p0)) {
	using FunctionType = decltype(encodeDataTo(p0))(*)(EditorSFXManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18ab70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorSFXManager::importFromString(std::string const& p0, EditorSFXImportOptions const& p1, std::string* p2) -> decltype(importFromString(p0, p1, p2)) {
	using FunctionType = decltype(importFromString(p0, p1, p2))(*)(EditorSFXManager*, std::string const&, EditorSFXImportOptions const&, std::string*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18b3d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto EditorSFXManager::overwriteMyConfigFromLive(int p0, std::string* p1) -> decltype(overwriteMyConfigFromLive(p0, p1)) {
	using FunctionType = decltype(overwriteMyConfigFromLive(p0, p1))(*)(EditorSFXManager*, int, std::string*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x18bd70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EditorSFXManager::playAction(int p0) -> decltype(playAction(p0)) {
	using FunctionType = decltype(playAction(p0))(*)(EditorSFXManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1855c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorSFXManager::serializeAll() -> decltype(serializeAll()) {
	using FunctionType = decltype(serializeAll())(*)(EditorSFXManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x188850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
