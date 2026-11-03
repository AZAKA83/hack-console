
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AccountLoginLayer.hpp>

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

AccountLoginLayer::~AccountLoginLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AccountLoginLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x8c010, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AccountLoginLayer(geode::CutoffConstructor, sizeof(AccountLoginLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto AccountLoginLayer::create(std::string username) -> decltype(create(username)) {
	using FunctionType = decltype(create(username))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90960, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(username);
}

auto AccountLoginLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLoginLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(AccountLoginLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x46290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLoginLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AccountLoginLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AccountLoginLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AccountLoginLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&AccountLoginLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(AccountLoginLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto AccountLoginLayer::textInputClosed(CCTextInputNode* node) -> decltype(textInputClosed(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&AccountLoginLayer::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(node))(*)(AccountLoginLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto AccountLoginLayer::loginAccountFinished(int accountID, int userID) -> decltype(loginAccountFinished(accountID, userID)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&AccountLoginLayer::loginAccountFinished), this);
	using FunctionType = decltype(loginAccountFinished(accountID, userID))(*)(AccountLoginLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, accountID, userID);
}

auto AccountLoginLayer::loginAccountFailed(AccountError errorType) -> decltype(loginAccountFailed(errorType)) {
	auto self = addresser::thunkAdjust(Resolve<AccountError>::func(&AccountLoginLayer::loginAccountFailed), this);
	using FunctionType = decltype(loginAccountFailed(errorType))(*)(AccountLoginLayer*, AccountError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x919c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, errorType);
}

auto AccountLoginLayer::createTextBackground(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size) -> decltype(createTextBackground(position, text, size)) {
	using FunctionType = decltype(createTextBackground(position, text, size))(*)(AccountLoginLayer*, cocos2d::CCPoint, char const*, cocos2d::CCSize);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x914b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, text, size);
}

auto AccountLoginLayer::createTextInput(cocos2d::CCPoint position, cocos2d::CCSize size, char const* text, int tag) -> decltype(createTextInput(position, size, text, tag)) {
	using FunctionType = decltype(createTextInput(position, size, text, tag))(*)(AccountLoginLayer*, cocos2d::CCPoint, cocos2d::CCSize, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, size, text, tag);
}

auto AccountLoginLayer::createTextLabel(cocos2d::CCPoint position, char const* text, cocos2d::CCSize size) -> decltype(createTextLabel(position, text, size)) {
	using FunctionType = decltype(createTextLabel(position, text, size))(*)(AccountLoginLayer*, cocos2d::CCPoint, char const*, cocos2d::CCSize);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, text, size);
}

auto AccountLoginLayer::init(std::string username) -> decltype(init(username)) {
	using FunctionType = decltype(init(username))(*)(AccountLoginLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x90b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, username);
}

auto AccountLoginLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(AccountLoginLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x92010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLoginLayer::onForgotPassword(cocos2d::CCObject* sender) -> decltype(onForgotPassword(sender)) {
	using FunctionType = decltype(onForgotPassword(sender))(*)(AccountLoginLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLoginLayer::onForgotUser(cocos2d::CCObject* sender) -> decltype(onForgotUser(sender)) {
	using FunctionType = decltype(onForgotUser(sender))(*)(AccountLoginLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLoginLayer::onSubmit(cocos2d::CCObject* sender) -> decltype(onSubmit(sender)) {
	using FunctionType = decltype(onSubmit(sender))(*)(AccountLoginLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto AccountLoginLayer::resetLabel(int tag) -> decltype(resetLabel(tag)) {
	using FunctionType = decltype(resetLabel(tag))(*)(AccountLoginLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91b40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto AccountLoginLayer::toggleUI(bool enable) -> decltype(toggleUI(enable)) {
	using FunctionType = decltype(toggleUI(enable))(*)(AccountLoginLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x920c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, enable);
}

auto AccountLoginLayer::updateLabel(AccountError type) -> decltype(updateLabel(type)) {
	using FunctionType = decltype(updateLabel(type))(*)(AccountLoginLayer*, AccountError);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x91a00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}
