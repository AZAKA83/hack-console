
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/NotificationsPage.hpp>

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

NotificationsPage::~NotificationsPage() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(NotificationsPage*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x477bb0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) NotificationsPage(geode::CutoffConstructor, sizeof(NotificationsPage));
		geode::DestructorLock::addLock(this);
	}
}

auto NotificationsPage::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NotificationsPage::init), this);
	using FunctionType = decltype(init())(*)(NotificationsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x477cf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NotificationsPage::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NotificationsPage::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(NotificationsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NotificationsPage::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NotificationsPage::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NotificationsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4787b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NotificationsPage::loadNotificationsFinished(cocos2d::CCArray* p0, int p1, int p2, int p3) -> decltype(loadNotificationsFinished(p0, p1, p2, p3)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, int, int, int>::func(&NotificationsPage::loadNotificationsFinished), this);
	using FunctionType = decltype(loadNotificationsFinished(p0, p1, p2, p3))(*)(NotificationsPage*, cocos2d::CCArray*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2, p3);
}

auto NotificationsPage::loadNotificationsFailed(int p0, GJErrorCode p1) -> decltype(loadNotificationsFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, GJErrorCode>::func(&NotificationsPage::loadNotificationsFailed), this);
	using FunctionType = decltype(loadNotificationsFailed(p0, p1))(*)(NotificationsPage*, int, GJErrorCode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NotificationsPage::notificationRewardFinished(int p0) -> decltype(notificationRewardFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&NotificationsPage::notificationRewardFinished), this);
	using FunctionType = decltype(notificationRewardFinished(p0))(*)(NotificationsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NotificationsPage::notificationRewardFailed(int p0) -> decltype(notificationRewardFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&NotificationsPage::notificationRewardFailed), this);
	using FunctionType = decltype(notificationRewardFailed(p0))(*)(NotificationsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NotificationsPage::notificationMuteFinished(int p0) -> decltype(notificationMuteFinished(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&NotificationsPage::notificationMuteFinished), this);
	using FunctionType = decltype(notificationMuteFinished(p0))(*)(NotificationsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NotificationsPage::notificationMuteFailed(int p0) -> decltype(notificationMuteFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&NotificationsPage::notificationMuteFailed), this);
	using FunctionType = decltype(notificationMuteFailed(p0))(*)(NotificationsPage*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NotificationsPage::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(NotificationsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4786f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationsPage::onFilter(cocos2d::CCObject* sender) -> decltype(onFilter(sender)) {
	using FunctionType = decltype(onFilter(sender))(*)(NotificationsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4784e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationsPage::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(NotificationsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4790d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationsPage::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(NotificationsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4790e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationsPage::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(NotificationsPage*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x478620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
