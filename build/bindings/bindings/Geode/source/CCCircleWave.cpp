
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCCircleWave.hpp>

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

CCCircleWave::~CCCircleWave() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCCircleWave*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x46470, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCCircleWave(geode::CutoffConstructor, sizeof(CCCircleWave));
		geode::DestructorLock::addLock(this);
	}
}

auto CCCircleWave::create(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut) -> decltype(create(startRadius, endRadius, duration, fadeIn, easeOut)) {
	using FunctionType = decltype(create(startRadius, endRadius, duration, fadeIn, easeOut))(*)(float, float, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x464d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(startRadius, endRadius, duration, fadeIn, easeOut);
}

auto CCCircleWave::setPosition(cocos2d::CCPoint const& position) -> decltype(setPosition(position)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&CCCircleWave::setPosition), this);
	using FunctionType = decltype(setPosition(position))(*)(CCCircleWave*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x467c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, position);
}

auto CCCircleWave::removeMeAndCleanup() -> decltype(removeMeAndCleanup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCCircleWave::removeMeAndCleanup), this);
	using FunctionType = decltype(removeMeAndCleanup())(*)(CCCircleWave*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCCircleWave::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCCircleWave::draw), this);
	using FunctionType = decltype(draw())(*)(CCCircleWave*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCCircleWave::updateTweenAction(float value, char const* key) -> decltype(updateTweenAction(value, key)) {
	auto self = addresser::thunkAdjust(Resolve<float, char const*>::func(&CCCircleWave::updateTweenAction), this);
	using FunctionType = decltype(updateTweenAction(value, key))(*)(CCCircleWave*, float, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, value, key);
}

auto CCCircleWave::init(float startRadius, float endRadius, float duration, bool fadeIn, bool easeOut) -> decltype(init(startRadius, endRadius, duration, fadeIn, easeOut)) {
	using FunctionType = decltype(init(startRadius, endRadius, duration, fadeIn, easeOut))(*)(CCCircleWave*, float, float, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, startRadius, endRadius, duration, fadeIn, easeOut);
}

auto CCCircleWave::updatePosition(float dt) -> decltype(updatePosition(dt)) {
	using FunctionType = decltype(updatePosition(dt))(*)(CCCircleWave*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
