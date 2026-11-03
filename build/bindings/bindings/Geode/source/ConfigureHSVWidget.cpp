
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ConfigureHSVWidget.hpp>

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

ConfigureHSVWidget::~ConfigureHSVWidget() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ConfigureHSVWidget*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x12f4a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ConfigureHSVWidget(geode::CutoffConstructor, sizeof(ConfigureHSVWidget));
		geode::DestructorLock::addLock(this);
	}
}

auto ConfigureHSVWidget::create(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs) -> decltype(create(hsv, noBackground, addInputs)) {
	using FunctionType = decltype(create(hsv, noBackground, addInputs))(*)(cocos2d::ccHSVValue, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12fad0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(hsv, noBackground, addInputs);
}

auto ConfigureHSVWidget::getHSV(GameObject* object, cocos2d::CCArray* objects, int mode) -> decltype(getHSV(object, objects, mode)) {
	using FunctionType = decltype(getHSV(object, objects, mode))(*)(GameObject*, cocos2d::CCArray*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1313d0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, mode);
}

auto ConfigureHSVWidget::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1265d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ConfigureHSVWidget::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1307e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto ConfigureHSVWidget::textInputShouldOffset(CCTextInputNode* p0, float p1) -> decltype(textInputShouldOffset(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&ConfigureHSVWidget::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(p0, p1))(*)(ConfigureHSVWidget*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1306f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ConfigureHSVWidget::textInputReturn(CCTextInputNode* p0) -> decltype(textInputReturn(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ConfigureHSVWidget::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(p0))(*)(ConfigureHSVWidget*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x130730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ConfigureHSVWidget::createTextInputNode(cocos2d::CCPoint position, int tag) -> decltype(createTextInputNode(position, tag)) {
	using FunctionType = decltype(createTextInputNode(position, tag))(*)(ConfigureHSVWidget*, cocos2d::CCPoint, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1304a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, tag);
}

auto ConfigureHSVWidget::init(cocos2d::ccHSVValue hsv, bool noBackground, bool addInputs) -> decltype(init(hsv, noBackground, addInputs)) {
	using FunctionType = decltype(init(hsv, noBackground, addInputs))(*)(ConfigureHSVWidget*, cocos2d::ccHSVValue, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x12fbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, hsv, noBackground, addInputs);
}

auto ConfigureHSVWidget::onResetHSV(cocos2d::CCObject* sender) -> decltype(onResetHSV(sender)) {
	using FunctionType = decltype(onResetHSV(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x130de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::onToggleSConst(cocos2d::CCObject* sender) -> decltype(onToggleSConst(sender)) {
	using FunctionType = decltype(onToggleSConst(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x130ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::onToggleVConst(cocos2d::CCObject* sender) -> decltype(onToggleVConst(sender)) {
	using FunctionType = decltype(onToggleVConst(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x130d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::sliderChanged(cocos2d::CCObject* sender) -> decltype(sliderChanged(sender)) {
	using FunctionType = decltype(sliderChanged(sender))(*)(ConfigureHSVWidget*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x130bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ConfigureHSVWidget::updateLabels() -> decltype(updateLabels()) {
	using FunctionType = decltype(updateLabels())(*)(ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x130e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ConfigureHSVWidget::updateSliders() -> decltype(updateSliders()) {
	using FunctionType = decltype(updateSliders())(*)(ConfigureHSVWidget*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x130ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
