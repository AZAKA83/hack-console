
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SFXFolderPickerPopup.hpp>

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

SFXFolderPickerPopup::~SFXFolderPickerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SFXFolderPickerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xc3c00, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SFXFolderPickerPopup(geode::CutoffConstructor, sizeof(SFXFolderPickerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SFXFolderPickerPopup::create(SFXFolderPickerMode p0, std::string const& p1, std::set<int> const& p2, SFXFolderPickerDelegate* p3, int p4) -> decltype(create(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4))(*)(SFXFolderPickerMode, std::string const&, std::set<int> const&, SFXFolderPickerDelegate*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3ce0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

auto SFXFolderPickerPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SFXFolderPickerPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(SFXFolderPickerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SFXFolderPickerPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SFXFolderPickerPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(SFXFolderPickerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SFXFolderPickerPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SFXFolderPickerPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(SFXFolderPickerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SFXFolderPickerPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&SFXFolderPickerPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(SFXFolderPickerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto SFXFolderPickerPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SFXFolderPickerPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SFXFolderPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc68c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SFXFolderPickerPopup::setTextPopupClosed(SetTextPopup* p0, std::string p1) -> decltype(setTextPopupClosed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<SetTextPopup*, std::string>::func(&SFXFolderPickerPopup::setTextPopupClosed), this);
	using FunctionType = decltype(setTextPopupClosed(p0, p1))(*)(SFXFolderPickerPopup*, SetTextPopup*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto SFXFolderPickerPopup::init(SFXFolderPickerMode p0, std::string const& p1, std::set<int> const& p2, SFXFolderPickerDelegate* p3, int p4) -> decltype(init(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4))(*)(SFXFolderPickerPopup*, SFXFolderPickerMode, std::string const&, std::set<int> const&, SFXFolderPickerDelegate*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc3eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto SFXFolderPickerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SFXFolderPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXFolderPickerPopup::onConfirm(cocos2d::CCObject* sender) -> decltype(onConfirm(sender)) {
	using FunctionType = decltype(onConfirm(sender))(*)(SFXFolderPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXFolderPickerPopup::onNewFolder(cocos2d::CCObject* sender) -> decltype(onNewFolder(sender)) {
	using FunctionType = decltype(onNewFolder(sender))(*)(SFXFolderPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXFolderPickerPopup::onPickFolder(cocos2d::CCObject* sender) -> decltype(onPickFolder(sender)) {
	using FunctionType = decltype(onPickFolder(sender))(*)(SFXFolderPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXFolderPickerPopup::onSave(cocos2d::CCObject* sender) -> decltype(onSave(sender)) {
	using FunctionType = decltype(onSave(sender))(*)(SFXFolderPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc6560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXFolderPickerPopup::onSelectAll(cocos2d::CCObject* sender) -> decltype(onSelectAll(sender)) {
	using FunctionType = decltype(onSelectAll(sender))(*)(SFXFolderPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc65d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SFXFolderPickerPopup::rebuildList() -> decltype(rebuildList()) {
	using FunctionType = decltype(rebuildList())(*)(SFXFolderPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc4e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SFXFolderPickerPopup::refreshList() -> decltype(refreshList()) {
	using FunctionType = decltype(refreshList())(*)(SFXFolderPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc5da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SFXFolderPickerPopup::updateActionBtn() -> decltype(updateActionBtn()) {
	using FunctionType = decltype(updateActionBtn())(*)(SFXFolderPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc5fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SFXFolderPickerPopup::updateShareHint() -> decltype(updateShareHint()) {
	using FunctionType = decltype(updateShareHint())(*)(SFXFolderPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc5e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
