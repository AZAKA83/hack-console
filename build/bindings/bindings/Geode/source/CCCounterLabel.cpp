
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCCounterLabel.hpp>

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

CCCounterLabel::~CCCounterLabel() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCCounterLabel*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x46de0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCCounterLabel(geode::CutoffConstructor, sizeof(CCCounterLabel));
		geode::DestructorLock::addLock(this);
	}
}

auto CCCounterLabel::setTargetCount(int count) -> decltype(setTargetCount(count)) {
	using FunctionType = decltype(setTargetCount(count))(*)(CCCounterLabel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, count);
}

auto CCCounterLabel::updateCounter(float dt) -> decltype(updateCounter(dt)) {
	using FunctionType = decltype(updateCounter(dt))(*)(CCCounterLabel*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}

auto CCCounterLabel::updateString() -> decltype(updateString()) {
	using FunctionType = decltype(updateString())(*)(CCCounterLabel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
