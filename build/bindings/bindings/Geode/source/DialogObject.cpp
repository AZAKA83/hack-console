
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DialogObject.hpp>

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

DialogObject::~DialogObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(DialogObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1747e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) DialogObject(geode::CutoffConstructor, sizeof(DialogObject));
		geode::DestructorLock::addLock(this);
	}
}

auto DialogObject::create(std::string character, std::string text, int characterFrame, float textScale, bool unskippable, cocos2d::ccColor3B nameColor) -> decltype(create(character, text, characterFrame, textScale, unskippable, nameColor)) {
	using FunctionType = decltype(create(character, text, characterFrame, textScale, unskippable, nameColor))(*)(std::string, std::string, int, float, bool, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x174920, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(character, text, characterFrame, textScale, unskippable, nameColor);
}
