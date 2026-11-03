
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FriendPickerPopup.hpp>

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

FriendPickerPopup::~FriendPickerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FriendPickerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd3780, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FriendPickerPopup(geode::CutoffConstructor, sizeof(FriendPickerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto FriendPickerPopup::create(FriendPickerDelegate* p0, bool p1, bool p2, bool p3, bool p4) -> decltype(create(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(create(p0, p1, p2, p3, p4))(*)(FriendPickerDelegate*, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6ab0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2, p3, p4);
}

auto FriendPickerPopup::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendPickerPopup::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(FriendPickerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendPickerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&FriendPickerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto FriendPickerPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FriendPickerPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(FriendPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FriendPickerPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendPickerPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(FriendPickerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendPickerPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&FriendPickerPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(FriendPickerPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto FriendPickerPopup::getUserListFinished(cocos2d::CCArray* p0, UserListType p1) -> decltype(getUserListFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, UserListType>::func(&FriendPickerPopup::getUserListFinished), this);
	using FunctionType = decltype(getUserListFinished(p0, p1))(*)(FriendPickerPopup*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe75e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendPickerPopup::getUserListFailed(UserListType p0, GJErrorCode p1) -> decltype(getUserListFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<UserListType, GJErrorCode>::func(&FriendPickerPopup::getUserListFailed), this);
	using FunctionType = decltype(getUserListFailed(p0, p1))(*)(FriendPickerPopup*, UserListType, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe76b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendPickerPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&FriendPickerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(FriendPickerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendPickerPopup::buildRows() -> decltype(buildRows()) {
	using FunctionType = decltype(buildRows())(*)(FriendPickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto FriendPickerPopup::init(FriendPickerDelegate* p0, bool p1, bool p2, bool p3, bool p4) -> decltype(init(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4))(*)(FriendPickerPopup*, FriendPickerDelegate*, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto FriendPickerPopup::onClearAll(cocos2d::CCObject* sender) -> decltype(onClearAll(sender)) {
	using FunctionType = decltype(onClearAll(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8ae0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendPickerPopup::onDone(cocos2d::CCObject* sender) -> decltype(onDone(sender)) {
	using FunctionType = decltype(onDone(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendPickerPopup::onGlobalSearch(cocos2d::CCObject* sender) -> decltype(onGlobalSearch(sender)) {
	using FunctionType = decltype(onGlobalSearch(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe79e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendPickerPopup::onPickFriend(cocos2d::CCObject* sender) -> decltype(onPickFriend(sender)) {
	using FunctionType = decltype(onPickFriend(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8850, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendPickerPopup::onShowProfile(cocos2d::CCObject* sender) -> decltype(onShowProfile(sender)) {
	using FunctionType = decltype(onShowProfile(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendPickerPopup::onToggleSelectedView(cocos2d::CCObject* sender) -> decltype(onToggleSelectedView(sender)) {
	using FunctionType = decltype(onToggleSelectedView(sender))(*)(FriendPickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe7980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
