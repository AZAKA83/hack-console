
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/OptionsObject.hpp>

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

OptionsObject::~OptionsObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(OptionsObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x399c70, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) OptionsObject(geode::CutoffConstructor, sizeof(OptionsObject));
		geode::DestructorLock::addLock(this);
	}
}

auto OptionsObject::create(int id, bool enabled, std::string name, OptionsObjectDelegate* delegate) -> decltype(create(id, enabled, name, delegate)) {
	using FunctionType = decltype(create(id, enabled, name, delegate))(*)(int, bool, std::string, OptionsObjectDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a99e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(id, enabled, name, delegate);
}
