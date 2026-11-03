
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GroupCommandObject2.hpp>

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

GroupCommandObject2::GroupCommandObject2() {
	using FunctionType = void(*)(GroupCommandObject2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x361b40, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GroupCommandObject2::reset() -> decltype(reset()) {
	using FunctionType = decltype(reset())(*)(GroupCommandObject2*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x361bb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GroupCommandObject2::step(float dt) -> decltype(step(dt)) {
	using FunctionType = decltype(step(dt))(*)(GroupCommandObject2*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x361db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto GroupCommandObject2::updateAction(int type, float value) -> decltype(updateAction(type, value)) {
	using FunctionType = decltype(updateAction(type, value))(*)(GroupCommandObject2*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x361e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, value);
}
