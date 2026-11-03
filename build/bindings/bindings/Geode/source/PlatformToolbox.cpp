
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PlatformToolbox.hpp>

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

auto PlatformToolbox::copyToClipboard(std::string str) -> decltype(copyToClipboard(str)) {
	using FunctionType = decltype(copyToClipboard(str))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8bc20, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto PlatformToolbox::getDisplaySize() -> decltype(getDisplaySize()) {
	using FunctionType = decltype(getDisplaySize())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8bb90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto PlatformToolbox::getUniqueUserID() -> decltype(getUniqueUserID()) {
	using FunctionType = decltype(getUniqueUserID())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8b7f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}
