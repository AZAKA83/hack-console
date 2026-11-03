
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountBanPopup.hpp>

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

auto AccountBanPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::pageChanged() -> decltype(pageChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::pageChanged), this);
	using FunctionType = decltype(pageChanged())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa7990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::onClose(cocos2d::CCObject* p0) -> decltype(onClose(p0)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AccountBanPopup::onClose), this);
	using FunctionType = decltype(onClose(p0))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xabc00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountBanPopup::adminActionConfirmed(int p0, std::vector<int> const& p1, std::string const& p2) -> decltype(adminActionConfirmed(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, std::vector<int> const&, std::string const&>::func(&AccountBanPopup::adminActionConfirmed), this);
	using FunctionType = decltype(adminActionConfirmed(p0, p1, p2))(*)(AccountBanPopup*, int, std::vector<int> const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa95e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto AccountBanPopup::adminCommentBanFinished() -> decltype(adminCommentBanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminCommentBanFinished), this);
	using FunctionType = decltype(adminCommentBanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaaf20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminCommentBanFailed() -> decltype(adminCommentBanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminCommentBanFailed), this);
	using FunctionType = decltype(adminCommentBanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminCommentUnbanFinished() -> decltype(adminCommentUnbanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminCommentUnbanFinished), this);
	using FunctionType = decltype(adminCommentUnbanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminCommentUnbanFailed() -> decltype(adminCommentUnbanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminCommentUnbanFailed), this);
	using FunctionType = decltype(adminCommentUnbanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUploadBanFinished() -> decltype(adminUploadBanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUploadBanFinished), this);
	using FunctionType = decltype(adminUploadBanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUploadBanFailed() -> decltype(adminUploadBanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUploadBanFailed), this);
	using FunctionType = decltype(adminUploadBanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUploadUnbanFinished() -> decltype(adminUploadUnbanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUploadUnbanFinished), this);
	using FunctionType = decltype(adminUploadUnbanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab1f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUploadUnbanFailed() -> decltype(adminUploadUnbanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUploadUnbanFailed), this);
	using FunctionType = decltype(adminUploadUnbanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminMessageBanFinished() -> decltype(adminMessageBanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminMessageBanFinished), this);
	using FunctionType = decltype(adminMessageBanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminMessageBanFailed() -> decltype(adminMessageBanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminMessageBanFailed), this);
	using FunctionType = decltype(adminMessageBanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminMessageUnbanFinished() -> decltype(adminMessageUnbanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminMessageUnbanFinished), this);
	using FunctionType = decltype(adminMessageUnbanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminMessageUnbanFailed() -> decltype(adminMessageUnbanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminMessageUnbanFailed), this);
	using FunctionType = decltype(adminMessageUnbanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminFreezeFinished() -> decltype(adminFreezeFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminFreezeFinished), this);
	using FunctionType = decltype(adminFreezeFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab4b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminFreezeFailed() -> decltype(adminFreezeFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminFreezeFailed), this);
	using FunctionType = decltype(adminFreezeFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUnfreezeFinished() -> decltype(adminUnfreezeFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUnfreezeFinished), this);
	using FunctionType = decltype(adminUnfreezeFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab5a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminUnfreezeFailed() -> decltype(adminUnfreezeFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminUnfreezeFailed), this);
	using FunctionType = decltype(adminUnfreezeFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminTrendingBanFinished() -> decltype(adminTrendingBanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminTrendingBanFinished), this);
	using FunctionType = decltype(adminTrendingBanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminTrendingBanFailed() -> decltype(adminTrendingBanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminTrendingBanFailed), this);
	using FunctionType = decltype(adminTrendingBanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminTrendingUnbanFinished() -> decltype(adminTrendingUnbanFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminTrendingUnbanFinished), this);
	using FunctionType = decltype(adminTrendingUnbanFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminTrendingUnbanFailed() -> decltype(adminTrendingUnbanFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminTrendingUnbanFailed), this);
	using FunctionType = decltype(adminTrendingUnbanFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminNameLockFinished() -> decltype(adminNameLockFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminNameLockFinished), this);
	using FunctionType = decltype(adminNameLockFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminNameLockFailed() -> decltype(adminNameLockFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminNameLockFailed), this);
	using FunctionType = decltype(adminNameLockFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminNameUnlockFinished() -> decltype(adminNameUnlockFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminNameUnlockFinished), this);
	using FunctionType = decltype(adminNameUnlockFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab940, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminNameUnlockFailed() -> decltype(adminNameUnlockFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminNameUnlockFailed), this);
	using FunctionType = decltype(adminNameUnlockFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminQueueMuteFinished() -> decltype(adminQueueMuteFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminQueueMuteFinished), this);
	using FunctionType = decltype(adminQueueMuteFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xaba30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminQueueMuteFailed() -> decltype(adminQueueMuteFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminQueueMuteFailed), this);
	using FunctionType = decltype(adminQueueMuteFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminQueueUnmuteFinished() -> decltype(adminQueueUnmuteFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminQueueUnmuteFinished), this);
	using FunctionType = decltype(adminQueueUnmuteFinished())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xabb20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::adminQueueUnmuteFailed() -> decltype(adminQueueUnmuteFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountBanPopup::adminQueueUnmuteFailed), this);
	using FunctionType = decltype(adminQueueUnmuteFailed())(*)(AccountBanPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xab000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountBanPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&AccountBanPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(AccountBanPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xabbb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto AccountBanPopup::init(int p0, std::string const& p1, int p2, int p3, int p4, int p5, int p6, int p7) -> decltype(init(p0, p1, p2, p3, p4, p5, p6, p7)) {
	using FunctionType = decltype(init(p0, p1, p2, p3, p4, p5, p6, p7))(*)(AccountBanPopup*, int, std::string const&, int, int, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7);
}

auto AccountBanPopup::onCommentBan(cocos2d::CCObject* sender) -> decltype(onCommentBan(sender)) {
	using FunctionType = decltype(onCommentBan(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa7cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onCommentUnban(cocos2d::CCObject* sender) -> decltype(onCommentUnban(sender)) {
	using FunctionType = decltype(onCommentUnban(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa7f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onFreeze(cocos2d::CCObject* sender) -> decltype(onFreeze(sender)) {
	using FunctionType = decltype(onFreeze(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa8760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onLevelUploadBan(cocos2d::CCObject* sender) -> decltype(onLevelUploadBan(sender)) {
	using FunctionType = decltype(onLevelUploadBan(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa7e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onLevelUploadUnban(cocos2d::CCObject* sender) -> decltype(onLevelUploadUnban(sender)) {
	using FunctionType = decltype(onLevelUploadUnban(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa81b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onMessageBan(cocos2d::CCObject* sender) -> decltype(onMessageBan(sender)) {
	using FunctionType = decltype(onMessageBan(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa83d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onMessageUnban(cocos2d::CCObject* sender) -> decltype(onMessageUnban(sender)) {
	using FunctionType = decltype(onMessageUnban(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa8540, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onQueueMute(cocos2d::CCObject* sender) -> decltype(onQueueMute(sender)) {
	using FunctionType = decltype(onQueueMute(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa9080, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onQueueUnmute(cocos2d::CCObject* sender) -> decltype(onQueueUnmute(sender)) {
	using FunctionType = decltype(onQueueUnmute(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa93c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onTrendingBan(cocos2d::CCObject* sender) -> decltype(onTrendingBan(sender)) {
	using FunctionType = decltype(onTrendingBan(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa8b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onTrendingUnban(cocos2d::CCObject* sender) -> decltype(onTrendingUnban(sender)) {
	using FunctionType = decltype(onTrendingUnban(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa8e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountBanPopup::onUnfreeze(cocos2d::CCObject* sender) -> decltype(onUnfreeze(sender)) {
	using FunctionType = decltype(onUnfreeze(sender))(*)(AccountBanPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa88f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
