
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/mapping/CCLightning.hpp>

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

cocos2d::CCLightning::CCLightning() : cocos2d::CCLightning(geode::CutoffConstructor, sizeof(cocos2d::CCLightning)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	cocos2d::CCLightning::~CCLightning();

	using FunctionType = void(*)(cocos2d::CCLightning*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48130, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto cocos2d::CCLightning::lightningWithStrikePoint(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2) -> decltype(lightningWithStrikePoint(p0, p1, p2)) {
	using FunctionType = decltype(lightningWithStrikePoint(p0, p1, p2))(*)(cocos2d::CCPoint, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48270, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto cocos2d::CCLightning::draw() -> decltype(draw()) {
	throw std::runtime_error("cocos2d::CCLightning::draw not implemented");
}

auto cocos2d::CCLightning::isOpacityModifyRGB() -> decltype(isOpacityModifyRGB()) {
	throw std::runtime_error("cocos2d::CCLightning::isOpacityModifyRGB not implemented");
}

auto cocos2d::CCLightning::setOpacityModifyRGB(bool p0) -> decltype(setOpacityModifyRGB(p0)) {
	throw std::runtime_error("cocos2d::CCLightning::setOpacityModifyRGB not implemented");
}

auto cocos2d::CCLightning::getOpacity() -> decltype(getOpacity()) {
	throw std::runtime_error("cocos2d::CCLightning::getOpacity not implemented");
}

auto cocos2d::CCLightning::getDisplayedOpacity() -> decltype(getDisplayedOpacity()) {
	throw std::runtime_error("cocos2d::CCLightning::getDisplayedOpacity not implemented");
}

auto cocos2d::CCLightning::setOpacity(unsigned char p0) -> decltype(setOpacity(p0)) {
	throw std::runtime_error("cocos2d::CCLightning::setOpacity not implemented");
}

auto cocos2d::CCLightning::updateDisplayedOpacity(unsigned char p0) -> decltype(updateDisplayedOpacity(p0)) {
	throw std::runtime_error("cocos2d::CCLightning::updateDisplayedOpacity not implemented");
}

auto cocos2d::CCLightning::isCascadeOpacityEnabled() -> decltype(isCascadeOpacityEnabled()) {
	throw std::runtime_error("cocos2d::CCLightning::isCascadeOpacityEnabled not implemented");
}

auto cocos2d::CCLightning::setCascadeOpacityEnabled(bool p0) -> decltype(setCascadeOpacityEnabled(p0)) {
	throw std::runtime_error("cocos2d::CCLightning::setCascadeOpacityEnabled not implemented");
}

auto cocos2d::CCLightning::getColor() -> decltype(getColor()) {
	throw std::runtime_error("cocos2d::CCLightning::getColor not implemented");
}

auto cocos2d::CCLightning::getDisplayedColor() -> decltype(getDisplayedColor()) {
	throw std::runtime_error("cocos2d::CCLightning::getDisplayedColor not implemented");
}

auto cocos2d::CCLightning::setColor(cocos2d::ccColor3B const& p0) -> decltype(setColor(p0)) {
	throw std::runtime_error("cocos2d::CCLightning::setColor not implemented");
}

auto cocos2d::CCLightning::updateDisplayedColor(cocos2d::ccColor3B const& p0) -> decltype(updateDisplayedColor(p0)) {
	throw std::runtime_error("cocos2d::CCLightning::updateDisplayedColor not implemented");
}

auto cocos2d::CCLightning::isCascadeColorEnabled() -> decltype(isCascadeColorEnabled()) {
	throw std::runtime_error("cocos2d::CCLightning::isCascadeColorEnabled not implemented");
}

auto cocos2d::CCLightning::setCascadeColorEnabled(bool p0) -> decltype(setCascadeColorEnabled(p0)) {
	throw std::runtime_error("cocos2d::CCLightning::setCascadeColorEnabled not implemented");
}

auto cocos2d::CCLightning::initWithStrikePoint(cocos2d::CCPoint p0, cocos2d::CCPoint p1, float p2) -> decltype(initWithStrikePoint(p0, p1, p2)) {
	using FunctionType = decltype(initWithStrikePoint(p0, p1, p2))(*)(cocos2d::CCLightning*, cocos2d::CCPoint, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x48310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto cocos2d::CCLightning::strike() -> decltype(strike()) {
	throw std::runtime_error("cocos2d::CCLightning::strike not implemented");
}
