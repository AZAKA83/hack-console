
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ButtonSprite.hpp>

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

ButtonSprite::ButtonSprite() : ButtonSprite(geode::CutoffConstructor, sizeof(ButtonSprite)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	ButtonSprite::~ButtonSprite();

	using FunctionType = void(*)(ButtonSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42780, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

ButtonSprite::~ButtonSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ButtonSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x42850, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ButtonSprite(geode::CutoffConstructor, sizeof(ButtonSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto ButtonSprite::create(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height) -> decltype(create(caption, width, minWidth, scale, absolute, font, bg, height)) {
	using FunctionType = decltype(create(caption, width, minWidth, scale, absolute, font, bg, height))(*)(char const*, int, int, float, bool, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42be0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(caption, width, minWidth, scale, absolute, font, bg, height);
}

auto ButtonSprite::create(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG, float unk) -> decltype(create(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG, unk)) {
	using FunctionType = decltype(create(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG, unk))(*)(cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG, unk);
}

auto ButtonSprite::init(char const* caption, int width, int minWidth, float scale, bool absolute, char const* font, char const* bg, float height) -> decltype(init(caption, width, minWidth, scale, absolute, font, bg, height)) {
	using FunctionType = decltype(init(caption, width, minWidth, scale, absolute, font, bg, height))(*)(ButtonSprite*, char const*, int, int, float, bool, char const*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, caption, width, minWidth, scale, absolute, font, bg, height);
}

auto ButtonSprite::init(cocos2d::CCSprite* topSprite, int width, int minWidth, float height, float scale, bool absolute, char const* bgSprite, bool noScaleSpriteForBG, float unk) -> decltype(init(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG, unk)) {
	using FunctionType = decltype(init(topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG, unk))(*)(ButtonSprite*, cocos2d::CCSprite*, int, int, float, float, bool, char const*, bool, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, topSprite, width, minWidth, height, scale, absolute, bgSprite, noScaleSpriteForBG, unk);
}

auto ButtonSprite::setString(char const* text) -> decltype(setString(text)) {
	using FunctionType = decltype(setString(text))(*)(ButtonSprite*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x43550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto ButtonSprite::updateBGImage(char const* filename) -> decltype(updateBGImage(filename)) {
	using FunctionType = decltype(updateBGImage(filename))(*)(ButtonSprite*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x42fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, filename);
}

auto ButtonSprite::updateSpriteBGSize() -> decltype(updateSpriteBGSize()) {
	using FunctionType = decltype(updateSpriteBGSize())(*)(ButtonSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x430e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
