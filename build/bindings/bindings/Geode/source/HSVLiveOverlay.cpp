
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/HSVLiveOverlay.hpp>

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

auto HSVLiveOverlay::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HSVLiveOverlay::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c1430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HSVLiveOverlay::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&HSVLiveOverlay::show), this);
	using FunctionType = decltype(show())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1262f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto HSVLiveOverlay::hsvChanged(ConfigureHSVWidget* widget) -> decltype(hsvChanged(widget)) {
	auto self = addresser::thunkAdjust(Resolve<ConfigureHSVWidget*>::func(&HSVLiveOverlay::hsvChanged), this);
	using FunctionType = decltype(hsvChanged(widget))(*)(HSVLiveOverlay*, ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c1480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, widget);
}

auto HSVLiveOverlay::closeColorSelect(cocos2d::CCObject* sender) -> decltype(closeColorSelect(sender)) {
	using FunctionType = decltype(closeColorSelect(sender))(*)(HSVLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c11f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto HSVLiveOverlay::createHSVWidget(int tab) -> decltype(createHSVWidget(tab)) {
	using FunctionType = decltype(createHSVWidget(tab))(*)(HSVLiveOverlay*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c1270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tab);
}

auto HSVLiveOverlay::determineStartValues() -> decltype(determineStartValues()) {
	using FunctionType = decltype(determineStartValues())(*)(HSVLiveOverlay*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c0ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto HSVLiveOverlay::init(GameObject* p0, cocos2d::CCArray* p1, cocos2d::ccColor3B p2, cocos2d::ccColor3B p3) -> decltype(init(p0, p1, p2, p3)) {
	using FunctionType = decltype(init(p0, p1, p2, p3))(*)(HSVLiveOverlay*, GameObject*, cocos2d::CCArray*, cocos2d::ccColor3B, cocos2d::ccColor3B);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c0b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto HSVLiveOverlay::onSelectTab(cocos2d::CCObject* sender) -> decltype(onSelectTab(sender)) {
	using FunctionType = decltype(onSelectTab(sender))(*)(HSVLiveOverlay*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c1240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
