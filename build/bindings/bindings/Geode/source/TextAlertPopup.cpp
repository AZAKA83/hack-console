
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TextAlertPopup.hpp>

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

TextAlertPopup::~TextAlertPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(TextAlertPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x399b80, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) TextAlertPopup(geode::CutoffConstructor, sizeof(TextAlertPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto TextAlertPopup::create(std::string text, float delay, float scale, int opacity, std::string font) -> decltype(create(text, delay, scale, opacity, font)) {
	using FunctionType = decltype(create(text, delay, scale, opacity, font))(*)(std::string, float, float, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a8760, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(text, delay, scale, opacity, font);
}

auto TextAlertPopup::init(std::string text, float delay, float scale, int opacity, std::string font) -> decltype(init(text, delay, scale, opacity, font)) {
	using FunctionType = decltype(init(text, delay, scale, opacity, font))(*)(TextAlertPopup*, std::string, float, float, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a8890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text, delay, scale, opacity, font);
}
