
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FMODLevelVisualizer.hpp>

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

FMODLevelVisualizer::~FMODLevelVisualizer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FMODLevelVisualizer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x80dc0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FMODLevelVisualizer(geode::CutoffConstructor, sizeof(FMODLevelVisualizer));
		geode::DestructorLock::addLock(this);
	}
}

auto FMODLevelVisualizer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a9af0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto FMODLevelVisualizer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FMODLevelVisualizer::init), this);
	using FunctionType = decltype(init())(*)(FMODLevelVisualizer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a9b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FMODLevelVisualizer::updateVisualizer(float volume, float peak, float time) -> decltype(updateVisualizer(volume, peak, time)) {
	using FunctionType = decltype(updateVisualizer(volume, peak, time))(*)(FMODLevelVisualizer*, float, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3aa050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, volume, peak, time);
}
