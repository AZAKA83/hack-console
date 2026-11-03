
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCURLObject.hpp>

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

CCURLObject::~CCURLObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCURLObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x276270, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCURLObject(geode::CutoffConstructor, sizeof(CCURLObject));
		geode::DestructorLock::addLock(this);
	}
}

auto CCURLObject::create(std::string name, std::string url) -> decltype(create(name, url)) {
	using FunctionType = decltype(create(name, url))(*)(std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2760e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(name, url);
}
