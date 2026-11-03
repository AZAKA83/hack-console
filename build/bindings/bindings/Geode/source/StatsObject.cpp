
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/StatsObject.hpp>

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

StatsObject::~StatsObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(StatsObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x14e8e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) StatsObject(geode::CutoffConstructor, sizeof(StatsObject));
		geode::DestructorLock::addLock(this);
	}
}

auto StatsObject::create(char const* key, int value) -> decltype(create(key, value)) {
	using FunctionType = decltype(create(key, value))(*)(char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x14e7a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, value);
}
