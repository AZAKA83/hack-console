
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AnimatedShopKeeper.hpp>

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

AnimatedShopKeeper::~AnimatedShopKeeper() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AnimatedShopKeeper*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3af7d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AnimatedShopKeeper(geode::CutoffConstructor, sizeof(AnimatedShopKeeper));
		geode::DestructorLock::addLock(this);
	}
}

auto AnimatedShopKeeper::animationFinished(char const* key) -> decltype(animationFinished(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&AnimatedShopKeeper::animationFinished), this);
	using FunctionType = decltype(animationFinished(key))(*)(AnimatedShopKeeper*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b62d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto AnimatedShopKeeper::playReactAnimation() -> decltype(playReactAnimation()) {
	using FunctionType = decltype(playReactAnimation())(*)(AnimatedShopKeeper*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b5fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AnimatedShopKeeper::startAnimating() -> decltype(startAnimating()) {
	using FunctionType = decltype(startAnimating())(*)(AnimatedShopKeeper*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3b6240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
