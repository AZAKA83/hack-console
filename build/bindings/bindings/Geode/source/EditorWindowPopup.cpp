
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorWindowPopup.hpp>

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

EditorWindowPopup::EditorWindowPopup() : EditorWindowPopup(geode::CutoffConstructor, sizeof(EditorWindowPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	EditorWindowPopup::~EditorWindowPopup();

	using FunctionType = void(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123530, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto EditorWindowPopup::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::onExit), this);
	using FunctionType = decltype(onExit())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17fcc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorWindowPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17eca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorWindowPopup::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17f360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorWindowPopup::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17f7c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorWindowPopup::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorWindowPopup::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17f980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorWindowPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EditorWindowPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EditorWindowPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17faf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EditorWindowPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::show), this);
	using FunctionType = decltype(show())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17fcb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorWindowPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorWindowPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorWindowPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17fd00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorWindowPopup::textInputClosed(CCTextInputNode* p0) -> decltype(textInputClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EditorWindowPopup::textInputClosed), this);
	using FunctionType = decltype(textInputClosed(p0))(*)(EditorWindowPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17fc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorWindowPopup::handleAction(int action, bool down, double timestamp) -> decltype(handleAction(action, down, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<int, bool, double>::func(&EditorWindowPopup::handleAction), this);
	using FunctionType = decltype(handleAction(action, down, timestamp))(*)(EditorWindowPopup*, int, bool, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17fba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action, down, timestamp);
}

auto EditorWindowPopup::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	throw std::runtime_error("EditorWindowPopup::onBuildWindowContent not implemented");
}

auto EditorWindowPopup::onFieldEnter() -> decltype(onFieldEnter()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorWindowPopup::onFieldEnter), this);
	using FunctionType = decltype(onFieldEnter())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17fc70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorWindowPopup::initWindow(EditorUI* editorUI, float width, float height, int windowID, int unused) -> decltype(initWindow(editorUI, width, height, windowID, unused)) {
	using FunctionType = decltype(initWindow(editorUI, width, height, windowID, unused))(*)(EditorWindowPopup*, EditorUI*, float, float, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17dde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, editorUI, width, height, windowID, unused);
}

auto EditorWindowPopup::beginTouch(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(beginTouch(touch, event)) {
	using FunctionType = decltype(beginTouch(touch, event))(*)(EditorWindowPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17edd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, touch, event);
}

auto EditorWindowPopup::isInCloseButton(cocos2d::CCPoint point) -> decltype(isInCloseButton(point)) {
	using FunctionType = decltype(isInCloseButton(point))(*)(EditorWindowPopup*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, point);
}

auto EditorWindowPopup::applyWindowSize() -> decltype(applyWindowSize()) {
	using FunctionType = decltype(applyWindowSize())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorWindowPopup::clampWindowCenter(cocos2d::CCPoint p0) -> decltype(clampWindowCenter(p0)) {
	using FunctionType = decltype(clampWindowCenter(p0))(*)(EditorWindowPopup*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorWindowPopup::clampWindowOnScreen(cocos2d::CCPoint p0) -> decltype(clampWindowOnScreen(p0)) {
	using FunctionType = decltype(clampWindowOnScreen(p0))(*)(EditorWindowPopup*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17eaa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto EditorWindowPopup::contentCenter() -> decltype(contentCenter()) {
	using FunctionType = decltype(contentCenter())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorWindowPopup::dismissDropdowns() -> decltype(dismissDropdowns()) {
	using FunctionType = decltype(dismissDropdowns())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17ec40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorWindowPopup::layoutWindow() -> decltype(layoutWindow()) {
	using FunctionType = decltype(layoutWindow())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EditorWindowPopup::syncWindowCenter() -> decltype(syncWindowCenter()) {
	using FunctionType = decltype(syncWindowCenter())(*)(EditorWindowPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x17e4a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
