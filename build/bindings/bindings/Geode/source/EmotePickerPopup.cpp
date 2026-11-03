
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EmotePickerPopup.hpp>

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

EmotePickerPopup::~EmotePickerPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EmotePickerPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1236e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EmotePickerPopup(geode::CutoffConstructor, sizeof(EmotePickerPopup));
		geode::DestructorLock::addLock(this);
	}
}

EmotePickerPopup::EmotePickerPopup() : EmotePickerPopup(geode::CutoffConstructor, sizeof(EmotePickerPopup)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	EmotePickerPopup::~EmotePickerPopup();

	using FunctionType = void(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123430, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto EmotePickerPopup::buttonAnchor(cocos2d::CCNode* p0) -> decltype(buttonAnchor(p0)) {
	using FunctionType = decltype(buttonAnchor(p0))(*)(cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1237e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto EmotePickerPopup::openAt(EmotePickerPopup* p0, EmotePickerDelegate* p1, cocos2d::CCNode* p2) -> decltype(openAt(p0, p1, p2)) {
	using FunctionType = decltype(openAt(p0, p1, p2))(*)(EmotePickerPopup*, EmotePickerDelegate*, cocos2d::CCNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1, p2);
}

auto EmotePickerPopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EmotePickerPopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(EmotePickerPopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EmotePickerPopup::keyDown(cocos2d::enumKeyCodes key, double timestamp) -> decltype(keyDown(key, timestamp)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::enumKeyCodes, double>::func(&EmotePickerPopup::keyDown), this);
	using FunctionType = decltype(keyDown(key, timestamp))(*)(EmotePickerPopup*, cocos2d::enumKeyCodes, double);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124a30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key, timestamp);
}

auto EmotePickerPopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EmotePickerPopup::show), this);
	using FunctionType = decltype(show())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124b00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EmotePickerPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EmotePickerPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EmotePickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EmotePickerPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&EmotePickerPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(EmotePickerPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EmotePickerPopup::onBuildWindowContent() -> decltype(onBuildWindowContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EmotePickerPopup::onBuildWindowContent), this);
	using FunctionType = decltype(onBuildWindowContent())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EmotePickerPopup::onWindowResized() -> decltype(onWindowResized()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EmotePickerPopup::onWindowResized), this);
	using FunctionType = decltype(onWindowResized())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EmotePickerPopup::addCell(EmoteDef const* p0, int p1) -> decltype(addCell(p0, p1)) {
	using FunctionType = decltype(addCell(p0, p1))(*)(EmotePickerPopup*, EmoteDef const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EmotePickerPopup::canAddEmote() -> decltype(canAddEmote()) {
	using FunctionType = decltype(canAddEmote())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EmotePickerPopup::init(CCTextInputNode* p0, cocos2d::CCPoint p1, int p2, int p3) -> decltype(init(p0, p1, p2, p3)) {
	using FunctionType = decltype(init(p0, p1, p2, p3))(*)(EmotePickerPopup*, CCTextInputNode*, cocos2d::CCPoint, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x123970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto EmotePickerPopup::layoutEmoteGrid() -> decltype(layoutEmoteGrid()) {
	using FunctionType = decltype(layoutEmoteGrid())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto EmotePickerPopup::onPickEmote(cocos2d::CCObject* sender) -> decltype(onPickEmote(sender)) {
	using FunctionType = decltype(onPickEmote(sender))(*)(EmotePickerPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EmotePickerPopup::refreshEnabled() -> decltype(refreshEnabled()) {
	using FunctionType = decltype(refreshEnabled())(*)(EmotePickerPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x124640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
