
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/NotificationFilterPopup.hpp>

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

NotificationFilterPopup::~NotificationFilterPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(NotificationFilterPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x60ac50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) NotificationFilterPopup(geode::CutoffConstructor, sizeof(NotificationFilterPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto NotificationFilterPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NotificationFilterPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NotificationFilterPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NotificationFilterPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&NotificationFilterPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(NotificationFilterPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto NotificationFilterPopup::init(NotificationsPage* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(NotificationFilterPopup*, NotificationsPage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4790f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto NotificationFilterPopup::onDownloadMilestones(cocos2d::CCObject* sender) -> decltype(onDownloadMilestones(sender)) {
	using FunctionType = decltype(onDownloadMilestones(sender))(*)(NotificationFilterPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationFilterPopup::onFollowerMilestones(cocos2d::CCObject* sender) -> decltype(onFollowerMilestones(sender)) {
	using FunctionType = decltype(onFollowerMilestones(sender))(*)(NotificationFilterPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationFilterPopup::onFollowUploads(cocos2d::CCObject* sender) -> decltype(onFollowUploads(sender)) {
	using FunctionType = decltype(onFollowUploads(sender))(*)(NotificationFilterPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479d30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationFilterPopup::onFriendAccepts(cocos2d::CCObject* sender) -> decltype(onFriendAccepts(sender)) {
	using FunctionType = decltype(onFriendAccepts(sender))(*)(NotificationFilterPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479d60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationFilterPopup::onFriendRated(cocos2d::CCObject* sender) -> decltype(onFriendRated(sender)) {
	using FunctionType = decltype(onFriendRated(sender))(*)(NotificationFilterPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationFilterPopup::onFriendUploads(cocos2d::CCObject* sender) -> decltype(onFriendUploads(sender)) {
	using FunctionType = decltype(onFriendUploads(sender))(*)(NotificationFilterPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NotificationFilterPopup::onSocialAlerts(cocos2d::CCObject* sender) -> decltype(onSocialAlerts(sender)) {
	using FunctionType = decltype(onSocialAlerts(sender))(*)(NotificationFilterPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x479d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
