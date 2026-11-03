
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/NewThreadPopup.hpp>

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

NewThreadPopup::~NewThreadPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(NewThreadPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd3a60, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) NewThreadPopup(geode::CutoffConstructor, sizeof(NewThreadPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto NewThreadPopup::create(int p0, std::string const& p1, std::string const& p2) -> decltype(create(p0, p1, p2)) {
	using FunctionType = decltype(create(p0, p1, p2))(*)(int, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeeda0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto NewThreadPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewThreadPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NewThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf3e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewThreadPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&NewThreadPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(NewThreadPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto NewThreadPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewThreadPopup::show), this);
	using FunctionType = decltype(show())(*)(NewThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf3d00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewThreadPopup::emotePickerKeyDown(EmotePickerPopup* p0, cocos2d::enumKeyCodes p1, double p2) -> decltype(emotePickerKeyDown(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*, cocos2d::enumKeyCodes, double>::func(&NewThreadPopup::emotePickerKeyDown), this);
	using FunctionType = decltype(emotePickerKeyDown(p0, p1, p2))(*)(NewThreadPopup*, EmotePickerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto NewThreadPopup::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&NewThreadPopup::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(NewThreadPopup*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf06f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewThreadPopup::emotePicked(EmotePickerPopup* p0, EmoteDef const* p1) -> decltype(emotePicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*, EmoteDef const*>::func(&NewThreadPopup::emotePicked), this);
	using FunctionType = decltype(emotePicked(p0, p1))(*)(NewThreadPopup*, EmotePickerPopup*, EmoteDef const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewThreadPopup::levelPicked(GJGameLevel* p0) -> decltype(levelPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&NewThreadPopup::levelPicked), this);
	using FunctionType = decltype(levelPicked(p0))(*)(NewThreadPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewThreadPopup::listPicked(GJLevelList* p0) -> decltype(listPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJLevelList*>::func(&NewThreadPopup::listPicked), this);
	using FunctionType = decltype(listPicked(p0))(*)(NewThreadPopup*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewThreadPopup::shareIDPicked(int p0, bool p1) -> decltype(shareIDPicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&NewThreadPopup::shareIDPicked), this);
	using FunctionType = decltype(shareIDPicked(p0, p1))(*)(NewThreadPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewThreadPopup::friendPicked(GJUserScore* p0) -> decltype(friendPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJUserScore*>::func(&NewThreadPopup::friendPicked), this);
	using FunctionType = decltype(friendPicked(p0))(*)(NewThreadPopup*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewThreadPopup::isRecipientSelected(int p0) -> decltype(isRecipientSelected(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&NewThreadPopup::isRecipientSelected), this);
	using FunctionType = decltype(isRecipientSelected(p0))(*)(NewThreadPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1a20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewThreadPopup::selectedRecipientCount() -> decltype(selectedRecipientCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewThreadPopup::selectedRecipientCount), this);
	using FunctionType = decltype(selectedRecipientCount())(*)(NewThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf19f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewThreadPopup::selectedRecipients() -> decltype(selectedRecipients()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewThreadPopup::selectedRecipients), this);
	using FunctionType = decltype(selectedRecipients())(*)(NewThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewThreadPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&NewThreadPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(NewThreadPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf10d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto NewThreadPopup::threadSendFinished(int p0, long long p1) -> decltype(threadSendFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, long long>::func(&NewThreadPopup::threadSendFinished), this);
	using FunctionType = decltype(threadSendFinished(p0, p1))(*)(NewThreadPopup*, int, long long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf33e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto NewThreadPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NewThreadPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(NewThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf3c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NewThreadPopup::applyMode() -> decltype(applyMode()) {
	using FunctionType = decltype(applyMode())(*)(NewThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto NewThreadPopup::init(int p0, std::string const& p1, std::string const& p2) -> decltype(init(p0, p1, p2)) {
	using FunctionType = decltype(init(p0, p1, p2))(*)(NewThreadPopup*, int, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xeefd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto NewThreadPopup::insertShareToken(std::string const& p0) -> decltype(insertShareToken(p0)) {
	using FunctionType = decltype(insertShareToken(p0))(*)(NewThreadPopup*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto NewThreadPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(NewThreadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf3d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewThreadPopup::onEmotes(cocos2d::CCObject* sender) -> decltype(onEmotes(sender)) {
	using FunctionType = decltype(onEmotes(sender))(*)(NewThreadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf05a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewThreadPopup::onOpenPicker(cocos2d::CCObject* sender) -> decltype(onOpenPicker(sender)) {
	using FunctionType = decltype(onOpenPicker(sender))(*)(NewThreadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewThreadPopup::onPickIcon(cocos2d::CCObject* sender) -> decltype(onPickIcon(sender)) {
	using FunctionType = decltype(onPickIcon(sender))(*)(NewThreadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewThreadPopup::onSend(cocos2d::CCObject* sender) -> decltype(onSend(sender)) {
	using FunctionType = decltype(onSend(sender))(*)(NewThreadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf2020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewThreadPopup::onShareLevel(cocos2d::CCObject* sender) -> decltype(onShareLevel(sender)) {
	using FunctionType = decltype(onShareLevel(sender))(*)(NewThreadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf12f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewThreadPopup::onToggleMode(cocos2d::CCObject* sender) -> decltype(onToggleMode(sender)) {
	using FunctionType = decltype(onToggleMode(sender))(*)(NewThreadPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf0700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NewThreadPopup::setSendPending(bool p0) -> decltype(setSendPending(p0)) {
	using FunctionType = decltype(setSendPending(p0))(*)(NewThreadPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto NewThreadPopup::updateRecipientLabel() -> decltype(updateRecipientLabel()) {
	using FunctionType = decltype(updateRecipientLabel())(*)(NewThreadPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xf1aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
