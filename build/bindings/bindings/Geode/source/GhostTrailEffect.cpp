
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GhostTrailEffect.hpp>

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

GhostTrailEffect::~GhostTrailEffect() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GhostTrailEffect*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x76a40, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GhostTrailEffect(geode::CutoffConstructor, sizeof(GhostTrailEffect));
		geode::DestructorLock::addLock(this);
	}
}

auto GhostTrailEffect::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76a80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GhostTrailEffect::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GhostTrailEffect::init), this);
	using FunctionType = decltype(init())(*)(GhostTrailEffect*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GhostTrailEffect::trailSnapshot(float dt) -> decltype(trailSnapshot(dt)) {
	using FunctionType = decltype(trailSnapshot(dt))(*)(GhostTrailEffect*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x76bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
