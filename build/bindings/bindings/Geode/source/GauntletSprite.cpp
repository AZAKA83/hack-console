
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GauntletSprite.hpp>

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

GauntletSprite::~GauntletSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GauntletSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x80dc0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GauntletSprite(geode::CutoffConstructor, sizeof(GauntletSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto GauntletSprite::addLockedSprite() -> decltype(addLockedSprite()) {
	using FunctionType = decltype(addLockedSprite())(*)(GauntletSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2fd2d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GauntletSprite::toggleLockedSprite(bool locked) -> decltype(toggleLockedSprite(locked)) {
	using FunctionType = decltype(toggleLockedSprite(locked))(*)(GauntletSprite*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1ae790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, locked);
}
