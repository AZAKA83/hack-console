
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SliderThumb.hpp>

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

SliderThumb::~SliderThumb() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SliderThumb*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x83f10, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SliderThumb(geode::CutoffConstructor, sizeof(SliderThumb));
		geode::DestructorLock::addLock(this);
	}
}

auto SliderThumb::getRawValue() -> decltype(getRawValue()) {
	using FunctionType = decltype(getRawValue())(*)(SliderThumb*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SliderThumb::getValue() -> decltype(getValue()) {
	using FunctionType = decltype(getValue())(*)(SliderThumb*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x83f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SliderThumb::setValue(float value) -> decltype(setValue(value)) {
	using FunctionType = decltype(setValue(value))(*)(SliderThumb*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x840c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value);
}
