
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ColorAction.hpp>

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

ColorAction::~ColorAction() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ColorAction*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3623d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ColorAction(geode::CutoffConstructor, sizeof(ColorAction));
		geode::DestructorLock::addLock(this);
	}
}

auto ColorAction::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363310, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto ColorAction::setupFromMap(std::map<std::string, std::string>& setup) -> decltype(setupFromMap(setup)) {
	using FunctionType = decltype(setupFromMap(setup))(*)(ColorAction*, std::map<std::string, std::string>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, setup);
}

auto ColorAction::setupFromString(std::string setup) -> decltype(setupFromString(setup)) {
	using FunctionType = decltype(setupFromString(setup))(*)(ColorAction*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x363ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, setup);
}

auto ColorAction::step(float dt) -> decltype(step(dt)) {
	using FunctionType = decltype(step(dt))(*)(ColorAction*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3633f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
