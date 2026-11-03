
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/IDNameInput.hpp>

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

IDNameInput::~IDNameInput() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(IDNameInput*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3c72b0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) IDNameInput(geode::CutoffConstructor, sizeof(IDNameInput));
		geode::DestructorLock::addLock(this);
	}
}

auto IDNameInput::idNameBrowserClosed(IDNameBrowserPopup* p0, int p1) -> decltype(idNameBrowserClosed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<IDNameBrowserPopup*, int>::func(&IDNameInput::idNameBrowserClosed), this);
	using FunctionType = decltype(idNameBrowserClosed(p0, p1))(*)(IDNameInput*, IDNameBrowserPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c9640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto IDNameInput::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cabe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::textInputOpened(CCTextInputNode* p0) -> decltype(textInputOpened(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cafc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cada0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::textInputShouldOffset(CCTextInputNode* p0, float p1) -> decltype(textInputShouldOffset(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*, float>::func(&IDNameInput::textInputShouldOffset), this);
	using FunctionType = decltype(textInputShouldOffset(p0, p1))(*)(IDNameInput*, CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cafe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto IDNameInput::textInputReturn(CCTextInputNode* p0) -> decltype(textInputReturn(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::textInputReturn), this);
	using FunctionType = decltype(textInputReturn(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::allowTextInput(CCTextInputNode* p0) -> decltype(allowTextInput(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::allowTextInput), this);
	using FunctionType = decltype(allowTextInput(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::enterPressed(CCTextInputNode* p0) -> decltype(enterPressed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameInput::enterPressed), this);
	using FunctionType = decltype(enterPressed(p0))(*)(IDNameInput*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::dropdownListPopupClosed(DropdownListPopup* p0) -> decltype(dropdownListPopupClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<DropdownListPopup*>::func(&IDNameInput::dropdownListPopupClosed), this);
	using FunctionType = decltype(dropdownListPopupClosed(p0))(*)(IDNameInput*, DropdownListPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameInput::onArrowLeft(cocos2d::CCObject* sender) -> decltype(onArrowLeft(sender)) {
	using FunctionType = decltype(onArrowLeft(sender))(*)(IDNameInput*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameInput::onArrowRight(cocos2d::CCObject* sender) -> decltype(onArrowRight(sender)) {
	using FunctionType = decltype(onArrowRight(sender))(*)(IDNameInput*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameInput::onAutocompleteRow(cocos2d::CCObject* sender) -> decltype(onAutocompleteRow(sender)) {
	using FunctionType = decltype(onAutocompleteRow(sender))(*)(IDNameInput*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cb060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameInput::onBrowser(cocos2d::CCObject* sender) -> decltype(onBrowser(sender)) {
	using FunctionType = decltype(onBrowser(sender))(*)(IDNameInput*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8af0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameInput::onNextFree(cocos2d::CCObject* sender) -> decltype(onNextFree(sender)) {
	using FunctionType = decltype(onNextFree(sender))(*)(IDNameInput*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c8dd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
