
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/Standalones.hpp>


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

bool isSpecialSnapObject(int id) {
	using FunctionType = decltype(isSpecialSnapObject(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1a1a50, tulip::hook::TulipConvention::Cdecl);
	return reinterpret_cast<FunctionType>(func)(id);
}

cocos2d::CCPoint offsetForKey(int id) {
	using FunctionType = decltype(offsetForKey(id))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19f3e0, tulip::hook::TulipConvention::Cdecl);
	return reinterpret_cast<FunctionType>(func)(id);
}
