
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountLayer.hpp>

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

AccountLayer::~AccountLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AccountLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x929e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AccountLayer(geode::CutoffConstructor, sizeof(AccountLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto AccountLayer::create() -> decltype(create()) {
	using FunctionType = decltype(create())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92c50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto AccountLayer::customSetup() -> decltype(customSetup()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLayer::customSetup), this);
	using FunctionType = decltype(customSetup())(*)(AccountLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLayer::layerHidden() -> decltype(layerHidden()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLayer::layerHidden), this);
	using FunctionType = decltype(layerHidden())(*)(AccountLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLayer::backupAccountFinished() -> decltype(backupAccountFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLayer::backupAccountFinished), this);
	using FunctionType = decltype(backupAccountFinished())(*)(AccountLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLayer::backupAccountFailed(BackupAccountError errorType, int response) -> decltype(backupAccountFailed(errorType, response)) {
	auto self = addresser::thunkAdjust(Resolve<BackupAccountError, int>::func(&AccountLayer::backupAccountFailed), this);
	using FunctionType = decltype(backupAccountFailed(errorType, response))(*)(AccountLayer*, BackupAccountError, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x943f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, errorType, response);
}

auto AccountLayer::syncAccountFinished() -> decltype(syncAccountFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLayer::syncAccountFinished), this);
	using FunctionType = decltype(syncAccountFinished())(*)(AccountLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLayer::syncAccountFailed(BackupAccountError errorType, int response) -> decltype(syncAccountFailed(errorType, response)) {
	auto self = addresser::thunkAdjust(Resolve<BackupAccountError, int>::func(&AccountLayer::syncAccountFailed), this);
	using FunctionType = decltype(syncAccountFailed(errorType, response))(*)(AccountLayer*, BackupAccountError, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x948c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, errorType, response);
}

auto AccountLayer::accountStatusChanged() -> decltype(accountStatusChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLayer::accountStatusChanged), this);
	using FunctionType = decltype(accountStatusChanged())(*)(AccountLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AccountLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(AccountLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x94a50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto AccountLayer::onBackup(cocos2d::CCObject* sender) -> decltype(onBackup(sender)) {
	using FunctionType = decltype(onBackup(sender))(*)(AccountLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x936e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLayer::onHelp(cocos2d::CCObject* sender) -> decltype(onHelp(sender)) {
	using FunctionType = decltype(onHelp(sender))(*)(AccountLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLayer::onLogin(cocos2d::CCObject* sender) -> decltype(onLogin(sender)) {
	using FunctionType = decltype(onLogin(sender))(*)(AccountLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLayer::onMore(cocos2d::CCObject* sender) -> decltype(onMore(sender)) {
	using FunctionType = decltype(onMore(sender))(*)(AccountLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLayer::onRegister(cocos2d::CCObject* sender) -> decltype(onRegister(sender)) {
	using FunctionType = decltype(onRegister(sender))(*)(AccountLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLayer::onSync(cocos2d::CCObject* sender) -> decltype(onSync(sender)) {
	using FunctionType = decltype(onSync(sender))(*)(AccountLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLayer::updatePage(bool changed) -> decltype(updatePage(changed)) {
	using FunctionType = decltype(updatePage(changed))(*)(AccountLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x93e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, changed);
}
