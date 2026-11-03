
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/TextArea.hpp>

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

TextArea::~TextArea() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(TextArea*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x89db0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) TextArea(geode::CutoffConstructor, sizeof(TextArea));
		geode::DestructorLock::addLock(this);
	}
}

auto TextArea::create(std::string str, char const* font, float scale, float width, cocos2d::CCPoint anchor, float lineHeight, bool disableColor, int maxEmoji) -> decltype(create(str, font, scale, width, anchor, lineHeight, disableColor, maxEmoji)) {
	using FunctionType = decltype(create(str, font, scale, width, anchor, lineHeight, disableColor, maxEmoji))(*)(std::string, char const*, float, float, cocos2d::CCPoint, float, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x89e30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str, font, scale, width, anchor, lineHeight, disableColor, maxEmoji);
}

auto TextArea::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&TextArea::update), this);
	using FunctionType = decltype(update(dt))(*)(TextArea*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto TextArea::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&TextArea::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(TextArea*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto TextArea::colorAllCharactersTo(cocos2d::ccColor3B color) -> decltype(colorAllCharactersTo(color)) {
	using FunctionType = decltype(colorAllCharactersTo(color))(*)(TextArea*, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, color);
}

auto TextArea::fadeInCharacters(float duration, float charDuration, bool fadeOut, TextFadeInStyle style) -> decltype(fadeInCharacters(duration, charDuration, fadeOut, style)) {
	using FunctionType = decltype(fadeInCharacters(duration, charDuration, fadeOut, style))(*)(TextArea*, float, float, bool, TextFadeInStyle);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8ab40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, duration, charDuration, fadeOut, style);
}

auto TextArea::finishFade() -> decltype(finishFade()) {
	using FunctionType = decltype(finishFade())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto TextArea::setString(std::string text) -> decltype(setString(text)) {
	using FunctionType = decltype(setString(text))(*)(TextArea*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto TextArea::stopAllCharacterActions() -> decltype(stopAllCharacterActions()) {
	using FunctionType = decltype(stopAllCharacterActions())(*)(TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x8a770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
