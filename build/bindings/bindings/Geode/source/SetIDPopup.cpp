
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetIDPopup.hpp>

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

SetIDPopup::SetIDPopup() : SetIDPopup(geode::CutoffConstructor, sizeof(SetIDPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	SetIDPopup::~SetIDPopup();

	using FunctionType = void(*)(SetIDPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x399900, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

SetIDPopup::~SetIDPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetIDPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3a5340, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetIDPopup(geode::CutoffConstructor, sizeof(SetIDPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetIDPopup::create(int current, int begin, int end, std::string title, std::string button, bool resetButton, int defaultValue, float offset, bool numberInput, bool arrows) -> decltype(create(current, begin, end, title, button, resetButton, defaultValue, offset, numberInput, arrows)) {
	using FunctionType = decltype(create(current, begin, end, title, button, resetButton, defaultValue, offset, numberInput, arrows))(*)(int, int, int, std::string, std::string, bool, int, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a53e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(current, begin, end, title, button, resetButton, defaultValue, offset, numberInput, arrows);
}

auto SetIDPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetIDPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SetIDPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a6340, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetIDPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SetIDPopup::show), this);
	using FunctionType = decltype(show())(*)(SetIDPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a6160, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SetIDPopup::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetIDPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(SetIDPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1265d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetIDPopup::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&SetIDPopup::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(SetIDPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a5f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto SetIDPopup::init(int current, int begin, int end, std::string title, std::string button, bool resetButton, int defaultValue, float offset, bool numberInput, bool arrows) -> decltype(init(current, begin, end, title, button, resetButton, defaultValue, offset, numberInput, arrows)) {
	using FunctionType = decltype(init(current, begin, end, title, button, resetButton, defaultValue, offset, numberInput, arrows))(*)(SetIDPopup*, int, int, int, std::string, std::string, bool, int, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a5520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, current, begin, end, title, button, resetButton, defaultValue, offset, numberInput, arrows);
}

auto SetIDPopup::onCancel(cocos2d::CCObject* sender) -> decltype(onCancel(sender)) {
	using FunctionType = decltype(onCancel(sender))(*)(SetIDPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a61f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetIDPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SetIDPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a62a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetIDPopup::onItemIDArrow(cocos2d::CCObject* sender) -> decltype(onItemIDArrow(sender)) {
	using FunctionType = decltype(onItemIDArrow(sender))(*)(SetIDPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a5ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetIDPopup::onResetValue(cocos2d::CCObject* sender) -> decltype(onResetValue(sender)) {
	using FunctionType = decltype(onResetValue(sender))(*)(SetIDPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a5f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetIDPopup::updateTextInputLabel() -> decltype(updateTextInputLabel()) {
	using FunctionType = decltype(updateTextInputLabel())(*)(SetIDPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a60b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
