
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ThreadViewPopup.hpp>

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

ThreadViewPopup::~ThreadViewPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ThreadViewPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd3020, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ThreadViewPopup(geode::CutoffConstructor, sizeof(ThreadViewPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto ThreadViewPopup::create(GJMessageThread* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(GJMessageThread*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd92b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto ThreadViewPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe3e40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto ThreadViewPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe3eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto ThreadViewPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe3f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto ThreadViewPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&ThreadViewPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(ThreadViewPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe5390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto ThreadViewPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&ThreadViewPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(ThreadViewPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto ThreadViewPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::show), this);
	using FunctionType = decltype(show())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc39c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::emotePickerKeyDown(EmotePickerPopup* p0, cocos2d::enumKeyCodes p1, double p2) -> decltype(emotePickerKeyDown(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*, cocos2d::enumKeyCodes, double>::func(&ThreadViewPopup::emotePickerKeyDown), this);
	using FunctionType = decltype(emotePickerKeyDown(p0, p1, p2))(*)(ThreadViewPopup*, EmotePickerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::textInputOpened(CCTextInputNode* p0) -> decltype(textInputOpened(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textInputOpened), this);
	using FunctionType = decltype(textInputOpened(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadViewPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(ThreadViewPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2f20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::emotePickerClosed(EmotePickerPopup* p0) -> decltype(emotePickerClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<EmotePickerPopup*>::func(&ThreadViewPopup::emotePickerClosed), this);
	using FunctionType = decltype(emotePickerClosed(p0))(*)(ThreadViewPopup*, EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xde410, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::levelPicked(GJGameLevel* p0) -> decltype(levelPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJGameLevel*>::func(&ThreadViewPopup::levelPicked), this);
	using FunctionType = decltype(levelPicked(p0))(*)(ThreadViewPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdc950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::listPicked(GJLevelList* p0) -> decltype(listPicked(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJLevelList*>::func(&ThreadViewPopup::listPicked), this);
	using FunctionType = decltype(listPicked(p0))(*)(ThreadViewPopup*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdca50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::shareIDPicked(int p0, bool p1) -> decltype(shareIDPicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool>::func(&ThreadViewPopup::shareIDPicked), this);
	using FunctionType = decltype(shareIDPicked(p0, p1))(*)(ThreadViewPopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdcb40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::threadMessagesFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadMessagesFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadViewPopup::threadMessagesFinished), this);
	using FunctionType = decltype(threadMessagesFinished(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdeac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::threadMessagesFailed(int p0) -> decltype(threadMessagesFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::threadMessagesFailed), this);
	using FunctionType = decltype(threadMessagesFailed(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe0060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::threadSearchFinished(int p0, cocos2d::CCArray* p1, bool p2) -> decltype(threadSearchFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCArray*, bool>::func(&ThreadViewPopup::threadSearchFinished), this);
	using FunctionType = decltype(threadSearchFinished(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdbf60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::threadSearchFailed(int p0) -> decltype(threadSearchFailed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::threadSearchFailed), this);
	using FunctionType = decltype(threadSearchFailed(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdc580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::threadSendFinished(int p0, long long p1) -> decltype(threadSendFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, long long>::func(&ThreadViewPopup::threadSendFinished), this);
	using FunctionType = decltype(threadSendFinished(p0, p1))(*)(ThreadViewPopup*, int, long long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xde420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::threadSendFailed() -> decltype(threadSendFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::threadSendFailed), this);
	using FunctionType = decltype(threadSendFailed())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xde840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::threadUpdateFinished(int p0, int p1) -> decltype(threadUpdateFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadViewPopup::threadUpdateFinished), this);
	using FunctionType = decltype(threadUpdateFinished(p0, p1))(*)(ThreadViewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdd240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::threadUpdateFailed(int p0, int p1) -> decltype(threadUpdateFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&ThreadViewPopup::threadUpdateFailed), this);
	using FunctionType = decltype(threadUpdateFailed(p0, p1))(*)(ThreadViewPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdd5f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadViewPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadViewPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&ThreadViewPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(ThreadViewPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadViewPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&ThreadViewPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(ThreadViewPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto ThreadViewPopup::unmountVirtualRow(int p0, cocos2d::CCNode* p1) -> decltype(unmountVirtualRow(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*>::func(&ThreadViewPopup::unmountVirtualRow), this);
	using FunctionType = decltype(unmountVirtualRow(p0, p1))(*)(ThreadViewPopup*, int, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe1670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto ThreadViewPopup::buildMemberButton() -> decltype(buildMemberButton()) {
	using FunctionType = decltype(buildMemberButton())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe34b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ThreadViewPopup::buildRows(bool p0) -> decltype(buildRows(p0)) {
	using FunctionType = decltype(buildRows(p0))(*)(ThreadViewPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ThreadViewPopup::init(GJMessageThread* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(ThreadViewPopup*, GJMessageThread*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xd93b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ThreadViewPopup::insertShareToken(std::string const& p0) -> decltype(insertShareToken(p0)) {
	using FunctionType = decltype(insertShareToken(p0))(*)(ThreadViewPopup*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdcc30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ThreadViewPopup::layoutComposeBar() -> decltype(layoutComposeBar()) {
	using FunctionType = decltype(layoutComposeBar())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe3960, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ThreadViewPopup::layoutRows() -> decltype(layoutRows()) {
	using FunctionType = decltype(layoutRows())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe0190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ThreadViewPopup::layoutTitleRow() -> decltype(layoutTitleRow()) {
	using FunctionType = decltype(layoutTitleRow())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ThreadViewPopup::measureBody(GJThreadMessage* p0) -> decltype(measureBody(p0)) {
	using FunctionType = decltype(measureBody(p0))(*)(ThreadViewPopup*, GJThreadMessage*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe08d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ThreadViewPopup::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdbaa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe2da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onEmotes(cocos2d::CCObject* sender) -> decltype(onEmotes(sender)) {
	using FunctionType = decltype(onEmotes(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xde2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onJumpToLatest(cocos2d::CCObject* sender) -> decltype(onJumpToLatest(sender)) {
	using FunctionType = decltype(onJumpToLatest(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdb8e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onJumpToMessage(cocos2d::CCObject* sender) -> decltype(onJumpToMessage(sender)) {
	using FunctionType = decltype(onJumpToMessage(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdbab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onLoadEarlier(cocos2d::CCObject* sender) -> decltype(onLoadEarlier(sender)) {
	using FunctionType = decltype(onLoadEarlier(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdb760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onLoadNewer(cocos2d::CCObject* sender) -> decltype(onLoadNewer(sender)) {
	using FunctionType = decltype(onLoadNewer(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdb8c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onMessageOptions(cocos2d::CCObject* sender) -> decltype(onMessageOptions(sender)) {
	using FunctionType = decltype(onMessageOptions(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdc720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onRefresh(cocos2d::CCObject* sender) -> decltype(onRefresh(sender)) {
	using FunctionType = decltype(onRefresh(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdb590, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onScrollToBottom(cocos2d::CCObject* sender) -> decltype(onScrollToBottom(sender)) {
	using FunctionType = decltype(onScrollToBottom(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdffd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdb910, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onSend(cocos2d::CCObject* sender) -> decltype(onSend(sender)) {
	using FunctionType = decltype(onSend(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xddac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onSenderProfile(cocos2d::CCObject* sender) -> decltype(onSenderProfile(sender)) {
	using FunctionType = decltype(onSenderProfile(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdc6e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onShareLevel(cocos2d::CCObject* sender) -> decltype(onShareLevel(sender)) {
	using FunctionType = decltype(onShareLevel(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdc8f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onShowDescription(cocos2d::CCObject* sender) -> decltype(onShowDescription(sender)) {
	using FunctionType = decltype(onShowDescription(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdcfe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onShowMembers(cocos2d::CCObject* sender) -> decltype(onShowMembers(sender)) {
	using FunctionType = decltype(onShowMembers(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdd200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::onThreadOptions(cocos2d::CCObject* sender) -> decltype(onThreadOptions(sender)) {
	using FunctionType = decltype(onThreadOptions(sender))(*)(ThreadViewPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdc6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadViewPopup::refreshDMSubLabel() -> decltype(refreshDMSubLabel()) {
	using FunctionType = decltype(refreshDMSubLabel())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdaca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ThreadViewPopup::refreshLockNotice() -> decltype(refreshLockNotice()) {
	using FunctionType = decltype(refreshLockNotice())(*)(ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdad40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ThreadViewPopup::requestDeleteMessage(long long p0) -> decltype(requestDeleteMessage(p0)) {
	using FunctionType = decltype(requestDeleteMessage(p0))(*)(ThreadViewPopup*, long long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe50e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ThreadViewPopup::setPollInterval(float p0) -> decltype(setPollInterval(p0)) {
	using FunctionType = decltype(setPollInterval(p0))(*)(ThreadViewPopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdb480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ThreadViewPopup::setUnseenBelow(bool p0) -> decltype(setUnseenBelow(p0)) {
	using FunctionType = decltype(setUnseenBelow(p0))(*)(ThreadViewPopup*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xdff30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}
