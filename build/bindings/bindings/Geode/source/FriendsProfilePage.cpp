
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/FriendsProfilePage.hpp>

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

FriendsProfilePage::~FriendsProfilePage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(FriendsProfilePage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x213240, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) FriendsProfilePage(geode::CutoffConstructor, sizeof(FriendsProfilePage));
		geode::DestructorLock::addLock(this);
	}
}

auto FriendsProfilePage::create(UserListType type) -> decltype(create(type)) {
	using FunctionType = decltype(create(type))(*)(UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213430, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type);
}

auto FriendsProfilePage::getUserListFinished(cocos2d::CCArray* scores, UserListType type) -> decltype(getUserListFinished(scores, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, UserListType>::func(&FriendsProfilePage::getUserListFinished), this);
	using FunctionType = decltype(getUserListFinished(scores, type))(*)(FriendsProfilePage*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scores, type);
}

auto FriendsProfilePage::getUserListFailed(UserListType type, GJErrorCode errorType) -> decltype(getUserListFailed(type, errorType)) {
	auto self = addresser::thunkAdjust(Resolve<UserListType, GJErrorCode>::func(&FriendsProfilePage::getUserListFailed), this);
	using FunctionType = decltype(getUserListFailed(type, errorType))(*)(FriendsProfilePage*, UserListType, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x215600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type, errorType);
}

auto FriendsProfilePage::userListChanged(cocos2d::CCArray* scores, UserListType type) -> decltype(userListChanged(scores, type)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, UserListType>::func(&FriendsProfilePage::userListChanged), this);
	using FunctionType = decltype(userListChanged(scores, type))(*)(FriendsProfilePage*, cocos2d::CCArray*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1265d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scores, type);
}

auto FriendsProfilePage::forceReloadList(UserListType type) -> decltype(forceReloadList(type)) {
	auto self = addresser::thunkAdjust(Resolve<UserListType>::func(&FriendsProfilePage::forceReloadList), this);
	using FunctionType = decltype(forceReloadList(type))(*)(FriendsProfilePage*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2156d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, type);
}

auto FriendsProfilePage::requestPage(int p0) -> decltype(requestPage(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendsProfilePage::requestPage), this);
	using FunctionType = decltype(requestPage(p0))(*)(FriendsProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendsProfilePage::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&FriendsProfilePage::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(FriendsProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto FriendsProfilePage::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&FriendsProfilePage::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(FriendsProfilePage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendsProfilePage::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&FriendsProfilePage::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(FriendsProfilePage*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto FriendsProfilePage::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&FriendsProfilePage::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(FriendsProfilePage*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x215f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendsProfilePage::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&FriendsProfilePage::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(FriendsProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendsProfilePage::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&FriendsProfilePage::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(FriendsProfilePage*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2161e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto FriendsProfilePage::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&FriendsProfilePage::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(FriendsProfilePage*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2162b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendsProfilePage::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&FriendsProfilePage::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(FriendsProfilePage*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto FriendsProfilePage::init(UserListType type) -> decltype(init(type)) {
	using FunctionType = decltype(init(type))(*)(FriendsProfilePage*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x213620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto FriendsProfilePage::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x217060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onGlobalSearch(cocos2d::CCObject* sender) -> decltype(onGlobalSearch(sender)) {
	using FunctionType = decltype(onGlobalSearch(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onSendMessage(cocos2d::CCObject* sender) -> decltype(onSendMessage(sender)) {
	using FunctionType = decltype(onSendMessage(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2157c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onSwitchList(cocos2d::CCObject* sender) -> decltype(onSwitchList(sender)) {
	using FunctionType = decltype(onSwitchList(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onToggleSort(cocos2d::CCObject* sender) -> decltype(onToggleSort(sender)) {
	using FunctionType = decltype(onToggleSort(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214ba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onToggleSortDir(cocos2d::CCObject* sender) -> decltype(onToggleSortDir(sender)) {
	using FunctionType = decltype(onToggleSortDir(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x214c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onUnblock(cocos2d::CCObject* sender) -> decltype(onUnblock(sender)) {
	using FunctionType = decltype(onUnblock(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x215cc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onUnfollow(cocos2d::CCObject* sender) -> decltype(onUnfollow(sender)) {
	using FunctionType = decltype(onUnfollow(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x215840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onUnmute(cocos2d::CCObject* sender) -> decltype(onUnmute(sender)) {
	using FunctionType = decltype(onUnmute(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x215a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x216e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(FriendsProfilePage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe8810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto FriendsProfilePage::updateCountLabel() -> decltype(updateCountLabel()) {
	using FunctionType = decltype(updateCountLabel())(*)(FriendsProfilePage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2145a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
