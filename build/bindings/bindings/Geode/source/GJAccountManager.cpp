
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJAccountManager.hpp>

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

GJAccountManager::~GJAccountManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJAccountManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3050d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJAccountManager(geode::CutoffConstructor, sizeof(GJAccountManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GJAccountManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305170, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto GJAccountManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJAccountManager::init), this);
	using FunctionType = decltype(init())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3057d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJAccountManager::addDLToActive(char const* tag) -> decltype(addDLToActive(tag)) {
	using FunctionType = decltype(addDLToActive(tag))(*)(GJAccountManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GJAccountManager::backupAccount(std::string url) -> decltype(backupAccount(url)) {
	using FunctionType = decltype(backupAccount(url))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3074d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::getAccountBackupURL() -> decltype(getAccountBackupURL()) {
	using FunctionType = decltype(getAccountBackupURL())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x306e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::getAccountSyncURL() -> decltype(getAccountSyncURL()) {
	using FunctionType = decltype(getAccountSyncURL())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307ef0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::getShaPassword(std::string password) -> decltype(getShaPassword(password)) {
	using FunctionType = decltype(getShaPassword(password))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x30a0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, password);
}

auto GJAccountManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GJAccountManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GJAccountManager::linkToAccount(std::string username, std::string gjp2, int accountID, int userID) -> decltype(linkToAccount(username, gjp2, accountID, userID)) {
	using FunctionType = decltype(linkToAccount(username, gjp2, accountID, userID))(*)(GJAccountManager*, std::string, std::string, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x309590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2, accountID, userID);
}

auto GJAccountManager::loginAccount(std::string username, std::string gjp2) -> decltype(loginAccount(username, gjp2)) {
	using FunctionType = decltype(loginAccount(username, gjp2))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3065e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, username, gjp2);
}

auto GJAccountManager::onBackupAccountCompleted(std::string response, std::string tag) -> decltype(onBackupAccountCompleted(response, tag)) {
	using FunctionType = decltype(onBackupAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x307ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onGetAccountBackupURLCompleted(std::string response, std::string tag) -> decltype(onGetAccountBackupURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountBackupURLCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3071e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onGetAccountSyncURLCompleted(std::string response, std::string tag) -> decltype(onGetAccountSyncURLCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountSyncURLCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onLoginAccountCompleted(std::string response, std::string tag) -> decltype(onLoginAccountCompleted(response, tag)) {
	using FunctionType = decltype(onLoginAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x306a60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GJAccountManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GJAccountManager::onRegisterAccountCompleted(std::string response, std::string tag) -> decltype(onRegisterAccountCompleted(response, tag)) {
	using FunctionType = decltype(onRegisterAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x306190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onSyncAccountCompleted(std::string response, std::string tag) -> decltype(onSyncAccountCompleted(response, tag)) {
	using FunctionType = decltype(onSyncAccountCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3087e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::onUpdateAccountSettingsCompleted(std::string response, std::string tag) -> decltype(onUpdateAccountSettingsCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateAccountSettingsCompleted(response, tag))(*)(GJAccountManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x309f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GJAccountManager::openRegister() -> decltype(openRegister()) {
	using FunctionType = decltype(openRegister())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x306330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::ProcessHttpRequest(std::string url, std::string params, std::string tag, GJHttpType type) -> decltype(ProcessHttpRequest(url, params, tag, type)) {
	using FunctionType = decltype(ProcessHttpRequest(url, params, tag, type))(*)(GJAccountManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3052b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url, params, tag, type);
}

auto GJAccountManager::registerAccount(std::string response, std::string tag, std::string data) -> decltype(registerAccount(response, tag, data)) {
	using FunctionType = decltype(registerAccount(response, tag, data))(*)(GJAccountManager*, std::string, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x305e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag, data);
}

auto GJAccountManager::showAccountNeededAlert(char const* p0) -> decltype(showAccountNeededAlert(p0)) {
	using FunctionType = decltype(showAccountNeededAlert(p0))(*)(GJAccountManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x309820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJAccountManager::syncAccount(std::string url) -> decltype(syncAccount(url)) {
	using FunctionType = decltype(syncAccount(url))(*)(GJAccountManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x308550, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, url);
}

auto GJAccountManager::unlinkFromAccount() -> decltype(unlinkFromAccount()) {
	using FunctionType = decltype(unlinkFromAccount())(*)(GJAccountManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x309900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJAccountManager::updateAccountSettings(int p0, int p1, int p2, int p3, int p4, std::string p5, std::string p6, std::string p7, std::string p8, std::string p9, std::string p10, std::string p11) -> decltype(updateAccountSettings(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11)) {
	using FunctionType = decltype(updateAccountSettings(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11))(*)(GJAccountManager*, int, int, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x309ab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11);
}
