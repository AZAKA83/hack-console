
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TextStyleSection.hpp>

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

TextStyleSection::~TextStyleSection() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(TextStyleSection*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x78dd0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) TextStyleSection(geode::CutoffConstructor, sizeof(TextStyleSection));
		geode::DestructorLock::addLock(this);
	}
}

auto TextStyleSection::create(int start, int end, TextStyleType type) -> decltype(create(start, end, type)) {
	using FunctionType = decltype(create(start, end, type))(*)(int, int, TextStyleType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7b1c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(start, end, type);
}
