
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCAnimateFrameCache.hpp>

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

CCAnimateFrameCache::~CCAnimateFrameCache() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCAnimateFrameCache*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x44f00, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCAnimateFrameCache(geode::CutoffConstructor, sizeof(CCAnimateFrameCache));
		geode::DestructorLock::addLock(this);
	}
}

auto CCAnimateFrameCache::sharedSpriteFrameCache() -> decltype(sharedSpriteFrameCache()) {
	using FunctionType = decltype(sharedSpriteFrameCache())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44fe0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto CCAnimateFrameCache::addDict(DS_Dictionary* dict, char const* filename) -> decltype(addDict(dict, filename)) {
	using FunctionType = decltype(addDict(dict, filename))(*)(CCAnimateFrameCache*, DS_Dictionary*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict, filename);
}

auto CCAnimateFrameCache::addSpriteFramesWithFile(char const* filename) -> decltype(addSpriteFramesWithFile(filename)) {
	using FunctionType = decltype(addSpriteFramesWithFile(filename))(*)(CCAnimateFrameCache*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, filename);
}

auto CCAnimateFrameCache::spriteFrameByName(char const* name) -> decltype(spriteFrameByName(name)) {
	using FunctionType = decltype(spriteFrameByName(name))(*)(CCAnimateFrameCache*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, name);
}
