
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCTextInputNode.hpp>

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

auto CCTextInputNode::create(float width, float height, char const* placeholder, char const* textFont, int fontSize, char const* labelFont) -> decltype(create(width, height, placeholder, textFont, fontSize, labelFont)) {
	using FunctionType = decltype(create(width, height, placeholder, textFont, fontSize, labelFont))(*)(float, float, char const*, char const*, int, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54260, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(width, height, placeholder, textFont, fontSize, labelFont);
}

auto CCTextInputNode::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCTextInputNode::visit), this);
	using FunctionType = decltype(visit())(*)(CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCTextInputNode::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCTextInputNode::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CCTextInputNode::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCTextInputNode::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CCTextInputNode::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCTextInputNode::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CCTextInputNode::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&CCTextInputNode::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(CCTextInputNode*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58e20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto CCTextInputNode::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCTextInputNode::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59a40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCTextInputNode::textChanged() -> decltype(textChanged()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCTextInputNode::textChanged), this);
	using FunctionType = decltype(textChanged())(*)(CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCTextInputNode::onClickTrackNode(bool selected) -> decltype(onClickTrackNode(selected)) {
	auto self = addresser::thunkAdjust(Resolve<bool>::func(&CCTextInputNode::onClickTrackNode), this);
	using FunctionType = decltype(onClickTrackNode(selected))(*)(CCTextInputNode*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x570f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, selected);
}

auto CCTextInputNode::keyboardWillShow(cocos2d::CCIMEKeyboardNotificationInfo& info) -> decltype(keyboardWillShow(info)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCIMEKeyboardNotificationInfo&>::func(&CCTextInputNode::keyboardWillShow), this);
	using FunctionType = decltype(keyboardWillShow(info))(*)(CCTextInputNode*, cocos2d::CCIMEKeyboardNotificationInfo&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x56f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info);
}

auto CCTextInputNode::keyboardWillHide(cocos2d::CCIMEKeyboardNotificationInfo& info) -> decltype(keyboardWillHide(info)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCIMEKeyboardNotificationInfo&>::func(&CCTextInputNode::keyboardWillHide), this);
	using FunctionType = decltype(keyboardWillHide(info))(*)(CCTextInputNode*, cocos2d::CCIMEKeyboardNotificationInfo&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57030, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, info);
}

auto CCTextInputNode::onTextFieldInsertText(cocos2d::CCTextFieldTTF* pSender, char const* text, int nLen, cocos2d::enumKeyCodes keyCodes) -> decltype(onTextFieldInsertText(pSender, text, nLen, keyCodes)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes>::func(&CCTextInputNode::onTextFieldInsertText), this);
	using FunctionType = decltype(onTextFieldInsertText(pSender, text, nLen, keyCodes))(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x571f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, pSender, text, nLen, keyCodes);
}

auto CCTextInputNode::onTextFieldAttachWithIME(cocos2d::CCTextFieldTTF* tField) -> decltype(onTextFieldAttachWithIME(tField)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTextFieldTTF*>::func(&CCTextInputNode::onTextFieldAttachWithIME), this);
	using FunctionType = decltype(onTextFieldAttachWithIME(tField))(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tField);
}

auto CCTextInputNode::onTextFieldDetachWithIME(cocos2d::CCTextFieldTTF* tField) -> decltype(onTextFieldDetachWithIME(tField)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTextFieldTTF*>::func(&CCTextInputNode::onTextFieldDetachWithIME), this);
	using FunctionType = decltype(onTextFieldDetachWithIME(tField))(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x57e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tField);
}

auto CCTextInputNode::onExit() -> decltype(onExit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCTextInputNode::onExit), this);
	using FunctionType = decltype(onExit())(*)(CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x58fb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCTextInputNode::onTextFieldDeleteBackward(cocos2d::CCTextFieldTTF* p0, char const* p1, int p2) -> decltype(onTextFieldDeleteBackward(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTextFieldTTF*, char const*, int>::func(&CCTextInputNode::onTextFieldDeleteBackward), this);
	using FunctionType = decltype(onTextFieldDeleteBackward(p0, p1, p2))(*)(CCTextInputNode*, cocos2d::CCTextFieldTTF*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto CCTextInputNode::scrollWheel(float p0, float p1) -> decltype(scrollWheel(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&CCTextInputNode::scrollWheel), this);
	using FunctionType = decltype(scrollWheel(p0, p1))(*)(CCTextInputNode*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x595c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CCTextInputNode::rightClick(float p0, float p1) -> decltype(rightClick(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&CCTextInputNode::rightClick), this);
	using FunctionType = decltype(rightClick(p0, p1))(*)(CCTextInputNode*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto CCTextInputNode::addTextArea(TextArea* textArea) -> decltype(addTextArea(textArea)) {
	using FunctionType = decltype(addTextArea(textArea))(*)(CCTextInputNode*, TextArea*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, textArea);
}

auto CCTextInputNode::holdTimerFired(float p0) -> decltype(holdTimerFired(p0)) {
	using FunctionType = decltype(holdTimerFired(p0))(*)(CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto CCTextInputNode::init(float width, float height, char const* placeholder, char const* textFont, int fontSize, char const* labelFont) -> decltype(init(width, height, placeholder, textFont, fontSize, labelFont)) {
	using FunctionType = decltype(init(width, height, placeholder, textFont, fontSize, labelFont))(*)(CCTextInputNode*, float, float, char const*, char const*, int, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, width, height, placeholder, textFont, fontSize, labelFont);
}

auto CCTextInputNode::insertAtCursor(std::string p0) -> decltype(insertAtCursor(p0)) {
	using FunctionType = decltype(insertAtCursor(p0))(*)(CCTextInputNode*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54f50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto CCTextInputNode::openEditMenu(cocos2d::CCPoint p0) -> decltype(openEditMenu(p0)) {
	using FunctionType = decltype(openEditMenu(p0))(*)(CCTextInputNode*, cocos2d::CCPoint);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto CCTextInputNode::rawToDisplayIndex(int p0) -> decltype(rawToDisplayIndex(p0)) {
	using FunctionType = decltype(rawToDisplayIndex(p0))(*)(CCTextInputNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto CCTextInputNode::refreshLabel() -> decltype(refreshLabel()) {
	using FunctionType = decltype(refreshLabel())(*)(CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x565a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCTextInputNode::scrollToCursor() -> decltype(scrollToCursor()) {
	using FunctionType = decltype(scrollToCursor())(*)(CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCTextInputNode::setString(std::string text) -> decltype(setString(text)) {
	using FunctionType = decltype(setString(text))(*)(CCTextInputNode*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}

auto CCTextInputNode::showHoldMenu(float p0) -> decltype(showHoldMenu(p0)) {
	using FunctionType = decltype(showHoldMenu(p0))(*)(CCTextInputNode*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x59110, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto CCTextInputNode::updateBlinkLabelToChar(int index) -> decltype(updateBlinkLabelToChar(index)) {
	using FunctionType = decltype(updateBlinkLabelToChar(index))(*)(CCTextInputNode*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x568b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, index);
}

auto CCTextInputNode::updateCursorPosition(cocos2d::CCPoint position, cocos2d::CCRect rect) -> decltype(updateCursorPosition(position, rect)) {
	using FunctionType = decltype(updateCursorPosition(position, rect))(*)(CCTextInputNode*, cocos2d::CCPoint, cocos2d::CCRect);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x583a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, position, rect);
}

auto CCTextInputNode::updateDefaultFontValues(std::string font) -> decltype(updateDefaultFontValues(font)) {
	using FunctionType = decltype(updateDefaultFontValues(font))(*)(CCTextInputNode*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x54c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, font);
}

auto CCTextInputNode::updateLabel(std::string text) -> decltype(updateLabel(text)) {
	using FunctionType = decltype(updateLabel(text))(*)(CCTextInputNode*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, text);
}
