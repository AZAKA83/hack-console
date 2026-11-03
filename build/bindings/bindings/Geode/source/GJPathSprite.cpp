
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJPathSprite.hpp>

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

GJPathSprite::~GJPathSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJPathSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x7e780, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJPathSprite(geode::CutoffConstructor, sizeof(GJPathSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto GJPathSprite::create(int path) -> decltype(create(path)) {
	using FunctionType = decltype(create(path))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x396e70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(path);
}

auto GJPathSprite::addShardSprite() -> decltype(addShardSprite()) {
	using FunctionType = decltype(addShardSprite())(*)(GJPathSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPathSprite::changeToLockedArt() -> decltype(changeToLockedArt()) {
	using FunctionType = decltype(changeToLockedArt())(*)(GJPathSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPathSprite::updateState() -> decltype(updateState()) {
	using FunctionType = decltype(updateState())(*)(GJPathSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
