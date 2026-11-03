
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/IDNameBrowserPopup.hpp>

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

IDNameBrowserPopup::~IDNameBrowserPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(IDNameBrowserPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3c1580, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) IDNameBrowserPopup(geode::CutoffConstructor, sizeof(IDNameBrowserPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto IDNameBrowserPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto IDNameBrowserPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto IDNameBrowserPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto IDNameBrowserPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&IDNameBrowserPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(IDNameBrowserPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4f30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto IDNameBrowserPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::show), this);
	using FunctionType = decltype(show())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4c90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameBrowserPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(IDNameBrowserPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c35e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameBrowserPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&IDNameBrowserPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(IDNameBrowserPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f5c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameBrowserPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&IDNameBrowserPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto IDNameBrowserPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&IDNameBrowserPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(IDNameBrowserPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c30c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto IDNameBrowserPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&IDNameBrowserPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(IDNameBrowserPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c30d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto IDNameBrowserPopup::init(int p0, int p1, IDNameBrowserDelegate* p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(IDNameBrowserPopup*, int, int, IDNameBrowserDelegate*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c1650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto IDNameBrowserPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::onDeleteRow(cocos2d::CCObject* sender) -> decltype(onDeleteRow(sender)) {
	using FunctionType = decltype(onDeleteRow(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::onEditRow(cocos2d::CCObject* sender) -> decltype(onEditRow(sender)) {
	using FunctionType = decltype(onEditRow(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::onFormAdd(cocos2d::CCObject* sender) -> decltype(onFormAdd(sender)) {
	using FunctionType = decltype(onFormAdd(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::onFormArrowLeft(cocos2d::CCObject* sender) -> decltype(onFormArrowLeft(sender)) {
	using FunctionType = decltype(onFormArrowLeft(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::onFormArrowRight(cocos2d::CCObject* sender) -> decltype(onFormArrowRight(sender)) {
	using FunctionType = decltype(onFormArrowRight(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::onFormNextFree(cocos2d::CCObject* sender) -> decltype(onFormNextFree(sender)) {
	using FunctionType = decltype(onFormNextFree(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::onSelectRow(cocos2d::CCObject* sender) -> decltype(onSelectRow(sender)) {
	using FunctionType = decltype(onSelectRow(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c37a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::onToggleSort(cocos2d::CCObject* sender) -> decltype(onToggleSort(sender)) {
	using FunctionType = decltype(onToggleSort(sender))(*)(IDNameBrowserPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto IDNameBrowserPopup::rebuildList() -> decltype(rebuildList()) {
	using FunctionType = decltype(rebuildList())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c2af0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto IDNameBrowserPopup::setFormID(int p0) -> decltype(setFormID(p0)) {
	using FunctionType = decltype(setFormID(p0))(*)(IDNameBrowserPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto IDNameBrowserPopup::updateConflictLabel() -> decltype(updateConflictLabel()) {
	using FunctionType = decltype(updateConflictLabel())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c3bf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto IDNameBrowserPopup::updateSortButtonLabel() -> decltype(updateSortButtonLabel()) {
	using FunctionType = decltype(updateSortButtonLabel())(*)(IDNameBrowserPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c4790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
