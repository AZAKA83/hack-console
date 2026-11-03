
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EmoteSprite.hpp>

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

EmoteSprite::~EmoteSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EmoteSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x7e780, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EmoteSprite(geode::CutoffConstructor, sizeof(EmoteSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto EmoteSprite::createWithDef(EmoteDef const* p0) -> decltype(createWithDef(p0)) {
	using FunctionType = decltype(createWithDef(p0))(*)(EmoteDef const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7f0e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto EmoteSprite::attachToLabel(cocos2d::CCLabelBMFont* p0, cocos2d::CCNode* p1, std::vector<EmoteToken> const& p2, float p3) -> decltype(attachToLabel(p0, p1, p2, p3)) {
	using FunctionType = decltype(attachToLabel(p0, p1, p2, p3))(*)(cocos2d::CCLabelBMFont*, cocos2d::CCNode*, std::vector<EmoteToken> const&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80140, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3);
}

auto EmoteSprite::defForName(std::string const& p0) -> decltype(defForName(p0)) {
	using FunctionType = decltype(defForName(p0))(*)(std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7efa0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto EmoteSprite::setColor(cocos2d::ccColor3B const& p0) -> decltype(setColor(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&EmoteSprite::setColor), this);
	using FunctionType = decltype(setColor(p0))(*)(EmoteSprite*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f5c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EmoteSprite::effectiveLength(std::string const& p0, int p1) -> decltype(effectiveLength(p0, p1)) {
	using FunctionType = decltype(effectiveLength(p0, p1))(*)(EmoteSprite*, std::string const&, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fc10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EmoteSprite::fitToHeight(float p0, float p1) -> decltype(fitToHeight(p0, p1)) {
	using FunctionType = decltype(fitToHeight(p0, p1))(*)(EmoteSprite*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7f200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EmoteSprite::parseTokens(std::string const& p0, std::vector<EmoteToken>* p1, int p2) -> decltype(parseTokens(p0, p1, p2)) {
	using FunctionType = decltype(parseTokens(p0, p1, p2))(*)(EmoteSprite*, std::string const&, std::vector<EmoteToken>*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7f9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto EmoteSprite::replaceTokens(std::string const& p0, std::vector<EmoteToken>& p1, float p2) -> decltype(replaceTokens(p0, p1, p2)) {
	using FunctionType = decltype(replaceTokens(p0, p1, p2))(*)(EmoteSprite*, std::string const&, std::vector<EmoteToken>&, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7fd40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto EmoteSprite::translateUnicodeEmoji(std::string const& p0) -> decltype(translateUnicodeEmoji(p0)) {
	using FunctionType = decltype(translateUnicodeEmoji(p0))(*)(EmoteSprite*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x7f330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
