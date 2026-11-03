
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LoadingCircleSprite.hpp>

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

LoadingCircleSprite::~LoadingCircleSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LoadingCircleSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x78730, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LoadingCircleSprite(geode::CutoffConstructor, sizeof(LoadingCircleSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto LoadingCircleSprite::create(float spinSpeed) -> decltype(create(spinSpeed)) {
	using FunctionType = decltype(create(spinSpeed))(*)(float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78ba0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(spinSpeed);
}

auto LoadingCircleSprite::fadeInCircle(bool resetOpacity, float duration, float opacity) -> decltype(fadeInCircle(resetOpacity, duration, opacity)) {
	using FunctionType = decltype(fadeInCircle(resetOpacity, duration, opacity))(*)(LoadingCircleSprite*, bool, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x78ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, resetOpacity, duration, opacity);
}
