
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJSmartBlockPreview.hpp>

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

GJSmartBlockPreview::~GJSmartBlockPreview() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJSmartBlockPreview*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3b6b50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJSmartBlockPreview(geode::CutoffConstructor, sizeof(GJSmartBlockPreview));
		geode::DestructorLock::addLock(this);
	}
}

auto GJSmartBlockPreview::create(std::string key) -> decltype(create(key)) {
	using FunctionType = decltype(create(key))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bbef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSmartBlockPreview::addChance(int count, int total) -> decltype(addChance(count, total)) {
	using FunctionType = decltype(addChance(count, total))(*)(GJSmartBlockPreview*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bccf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, count, total);
}

auto GJSmartBlockPreview::addPreview(std::string key, std::string data, LevelEditorLayer* layer) -> decltype(addPreview(key, data, layer)) {
	using FunctionType = decltype(addPreview(key, data, layer))(*)(GJSmartBlockPreview*, std::string, std::string, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bcb70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, data, layer);
}

auto GJSmartBlockPreview::addTemplateGuide(SmartPrefabResult result, float opacity) -> decltype(addTemplateGuide(result, opacity)) {
	using FunctionType = decltype(addTemplateGuide(result, opacity))(*)(GJSmartBlockPreview*, SmartPrefabResult, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bc2d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, result, opacity);
}

auto GJSmartBlockPreview::addTemplateGuide(std::string key, int type) -> decltype(addTemplateGuide(key, type)) {
	using FunctionType = decltype(addTemplateGuide(key, type))(*)(GJSmartBlockPreview*, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3bc030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, type);
}
