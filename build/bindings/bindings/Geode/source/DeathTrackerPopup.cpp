
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DeathTrackerPopup.hpp>

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

DeathTrackerPopup::~DeathTrackerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(DeathTrackerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x103af0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) DeathTrackerPopup(geode::CutoffConstructor, sizeof(DeathTrackerPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto DeathTrackerPopup::create(GJGameLevel* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x104370, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto DeathTrackerPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DeathTrackerPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(DeathTrackerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DeathTrackerPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DeathTrackerPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(DeathTrackerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10eac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DeathTrackerPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DeathTrackerPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(DeathTrackerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10eb70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DeathTrackerPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&DeathTrackerPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(DeathTrackerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10ec00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto DeathTrackerPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DeathTrackerPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e8c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DeathTrackerPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&DeathTrackerPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(DeathTrackerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e8d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto DeathTrackerPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DeathTrackerPopup::show), this);
	using FunctionType = decltype(show())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xc39c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DeathTrackerPopup::setIDPopupClosed(SetIDPopup* p0, int p1) -> decltype(setIDPopupClosed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<SetIDPopup*, int>::func(&DeathTrackerPopup::setIDPopupClosed), this);
	using FunctionType = decltype(setIDPopupClosed(p0, p1))(*)(DeathTrackerPopup*, SetIDPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto DeathTrackerPopup::virtualRowCount() -> decltype(virtualRowCount()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DeathTrackerPopup::virtualRowCount), this);
	using FunctionType = decltype(virtualRowCount())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10ccc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DeathTrackerPopup::virtualRowHeight(int p0) -> decltype(virtualRowHeight(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&DeathTrackerPopup::virtualRowHeight), this);
	using FunctionType = decltype(virtualRowHeight(p0))(*)(DeathTrackerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10ccf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto DeathTrackerPopup::mountVirtualRow(int p0, cocos2d::CCNode* p1, cocos2d::CCMenu* p2) -> decltype(mountVirtualRow(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<int, cocos2d::CCNode*, cocos2d::CCMenu*>::func(&DeathTrackerPopup::mountVirtualRow), this);
	using FunctionType = decltype(mountVirtualRow(p0, p1, p2))(*)(DeathTrackerPopup*, int, cocos2d::CCNode*, cocos2d::CCMenu*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10cd10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto DeathTrackerPopup::buildHistory() -> decltype(buildHistory()) {
	using FunctionType = decltype(buildHistory())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10c270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DeathTrackerPopup::buildStatRow(std::vector<DTStatSeg> const& p0, cocos2d::CCNode* p1) -> decltype(buildStatRow(p0, p1)) {
	using FunctionType = decltype(buildStatRow(p0, p1))(*)(DeathTrackerPopup*, std::vector<DTStatSeg> const&, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x107e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto DeathTrackerPopup::init(GJGameLevel* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(DeathTrackerPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1045d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DeathTrackerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::onJumpCurrent(cocos2d::CCObject* sender) -> decltype(onJumpCurrent(sender)) {
	using FunctionType = decltype(onJumpCurrent(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10d890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::onJumpSession(cocos2d::CCObject* sender) -> decltype(onJumpSession(sender)) {
	using FunctionType = decltype(onJumpSession(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e4c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::onJumpSummary(cocos2d::CCObject* sender) -> decltype(onJumpSummary(sender)) {
	using FunctionType = decltype(onJumpSummary(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10e4a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::onNextSession(cocos2d::CCObject* sender) -> decltype(onNextSession(sender)) {
	using FunctionType = decltype(onNextSession(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10d810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::onOptions(cocos2d::CCObject* sender) -> decltype(onOptions(sender)) {
	using FunctionType = decltype(onOptions(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10da80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::onPanelButton(cocos2d::CCObject* sender) -> decltype(onPanelButton(sender)) {
	using FunctionType = decltype(onPanelButton(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10de50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::onPrevSession(cocos2d::CCObject* sender) -> decltype(onPrevSession(sender)) {
	using FunctionType = decltype(onPrevSession(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10d780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::onToggleGlobal(cocos2d::CCObject* sender) -> decltype(onToggleGlobal(sender)) {
	using FunctionType = decltype(onToggleGlobal(sender))(*)(DeathTrackerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10d8c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathTrackerPopup::refreshGlobal() -> decltype(refreshGlobal()) {
	using FunctionType = decltype(refreshGlobal())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x108b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DeathTrackerPopup::refreshView() -> decltype(refreshView()) {
	using FunctionType = decltype(refreshView())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x106a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto DeathTrackerPopup::setView(int p0) -> decltype(setView(p0)) {
	using FunctionType = decltype(setView(p0))(*)(DeathTrackerPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10dbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DeathTrackerPopup::updatePanel() -> decltype(updatePanel()) {
	using FunctionType = decltype(updatePanel())(*)(DeathTrackerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x10dfb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
