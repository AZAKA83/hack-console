
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/KeybindingsLayer.hpp>

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

KeybindingsLayer::~KeybindingsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(KeybindingsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3d53a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) KeybindingsLayer(geode::CutoffConstructor, sizeof(KeybindingsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto KeybindingsLayer::create(GameSettingsLayer* settings) -> decltype(create(settings)) {
	using FunctionType = decltype(create(settings))(*)(GameSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d5650, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(settings);
}

auto KeybindingsLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(KeybindingsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto KeybindingsLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(KeybindingsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto KeybindingsLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(KeybindingsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto KeybindingsLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&KeybindingsLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(KeybindingsLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d88e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto KeybindingsLayer::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x19e0f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&KeybindingsLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto KeybindingsLayer::textChanged(CCTextInputNode* node) -> decltype(textChanged(node)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&KeybindingsLayer::textChanged), this);
	using FunctionType = decltype(textChanged(node))(*)(KeybindingsLayer*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, node);
}

auto KeybindingsLayer::showTab(int tab) -> decltype(showTab(tab)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindingsLayer::showTab), this);
	using FunctionType = decltype(showTab(tab))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d77e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tab);
}

auto KeybindingsLayer::setupTabs() -> decltype(setupTabs()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::setupTabs), this);
	using FunctionType = decltype(setupTabs())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::actionsToShow(int tab) -> decltype(actionsToShow(tab)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindingsLayer::actionsToShow), this);
	using FunctionType = decltype(actionsToShow(tab))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tab);
}

auto KeybindingsLayer::nameForAction(int action) -> decltype(nameForAction(action)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&KeybindingsLayer::nameForAction), this);
	using FunctionType = decltype(nameForAction(action))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d80a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action);
}

auto KeybindingsLayer::openBindingEditor(int action, int chord) -> decltype(openBindingEditor(action, chord)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&KeybindingsLayer::openBindingEditor), this);
	using FunctionType = decltype(openBindingEditor(action, chord))(*)(KeybindingsLayer*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d80f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, action, chord);
}

auto KeybindingsLayer::showControllerChords() -> decltype(showControllerChords()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::showControllerChords), this);
	using FunctionType = decltype(showControllerChords())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::settingsEntries() -> decltype(settingsEntries()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&KeybindingsLayer::settingsEntries), this);
	using FunctionType = decltype(settingsEntries())(*)(KeybindingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto KeybindingsLayer::buildContentForTab(int tab) -> decltype(buildContentForTab(tab)) {
	using FunctionType = decltype(buildContentForTab(tab))(*)(KeybindingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tab);
}

auto KeybindingsLayer::init(GameSettingsLayer* settings) -> decltype(init(settings)) {
	using FunctionType = decltype(init(settings))(*)(KeybindingsLayer*, GameSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d57f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, settings);
}

auto KeybindingsLayer::onAddBinding(cocos2d::CCObject* sender) -> decltype(onAddBinding(sender)) {
	using FunctionType = decltype(onAddBinding(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindingsLayer::onClearSearch(cocos2d::CCObject* sender) -> decltype(onClearSearch(sender)) {
	using FunctionType = decltype(onClearSearch(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindingsLayer::onEditBinding(cocos2d::CCObject* sender) -> decltype(onEditBinding(sender)) {
	using FunctionType = decltype(onEditBinding(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d7cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindingsLayer::onSettings(cocos2d::CCObject* sender) -> decltype(onSettings(sender)) {
	using FunctionType = decltype(onSettings(sender))(*)(KeybindingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d8230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto KeybindingsLayer::buildControllerGlyph(int key, bool& isPlayer2) -> decltype(buildControllerGlyph(key, isPlayer2)) {
	using FunctionType = decltype(buildControllerGlyph(key, isPlayer2))(*)(int, bool&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d6350, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key, isPlayer2);
}
