
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/EditorSFXActionConfigLayer.hpp>

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

EditorSFXActionConfigLayer::~EditorSFXActionConfigLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(EditorSFXActionConfigLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x183430, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) EditorSFXActionConfigLayer(geode::CutoffConstructor, sizeof(EditorSFXActionConfigLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto EditorSFXActionConfigLayer::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(EditorSFXActionConfigLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorSFXActionConfigLayer::ccTouchMoved(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchMoved(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchMoved), this);
	using FunctionType = decltype(ccTouchMoved(touch, event))(*)(EditorSFXActionConfigLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorSFXActionConfigLayer::ccTouchEnded(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchEnded(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchEnded), this);
	using FunctionType = decltype(ccTouchEnded(touch, event))(*)(EditorSFXActionConfigLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorSFXActionConfigLayer::ccTouchCancelled(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchCancelled(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&EditorSFXActionConfigLayer::ccTouchCancelled), this);
	using FunctionType = decltype(ccTouchCancelled(touch, event))(*)(EditorSFXActionConfigLayer*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x185090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto EditorSFXActionConfigLayer::rebuildContent() -> decltype(rebuildContent()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&EditorSFXActionConfigLayer::rebuildContent), this);
	using FunctionType = decltype(rebuildContent())(*)(EditorSFXActionConfigLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184c40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto EditorSFXActionConfigLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&EditorSFXActionConfigLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(EditorSFXActionConfigLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto EditorSFXActionConfigLayer::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&EditorSFXActionConfigLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(EditorSFXActionConfigLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3f5c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto EditorSFXActionConfigLayer::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&EditorSFXActionConfigLayer::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(EditorSFXActionConfigLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSFXActionConfigLayer::sfxBrowserClosed(SFXBrowser* p0) -> decltype(sfxBrowserClosed(p0)) {
	auto self = addresser::thunkAdjust(Resolve<SFXBrowser*>::func(&EditorSFXActionConfigLayer::sfxBrowserClosed), this);
	using FunctionType = decltype(sfxBrowserClosed(p0))(*)(EditorSFXActionConfigLayer*, SFXBrowser*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto EditorSFXActionConfigLayer::init(int p0, EditorSoundsLayer* p1) -> decltype(init(p0, p1)) {
	using FunctionType = decltype(init(p0, p1))(*)(EditorSFXActionConfigLayer*, int, EditorSoundsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x183510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto EditorSFXActionConfigLayer::onAddSound(cocos2d::CCObject* sender) -> decltype(onAddSound(sender)) {
	using FunctionType = decltype(onAddSound(sender))(*)(EditorSFXActionConfigLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSFXActionConfigLayer::onDeleteSound(cocos2d::CCObject* sender) -> decltype(onDeleteSound(sender)) {
	using FunctionType = decltype(onDeleteSound(sender))(*)(EditorSFXActionConfigLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184bd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSFXActionConfigLayer::onEditSound(cocos2d::CCObject* sender) -> decltype(onEditSound(sender)) {
	using FunctionType = decltype(onEditSound(sender))(*)(EditorSFXActionConfigLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSFXActionConfigLayer::onOpenSettings(cocos2d::CCObject* sender) -> decltype(onOpenSettings(sender)) {
	using FunctionType = decltype(onOpenSettings(sender))(*)(EditorSFXActionConfigLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSFXActionConfigLayer::onPreviewSound(cocos2d::CCObject* sender) -> decltype(onPreviewSound(sender)) {
	using FunctionType = decltype(onPreviewSound(sender))(*)(EditorSFXActionConfigLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSFXActionConfigLayer::onToggleMode(cocos2d::CCObject* sender) -> decltype(onToggleMode(sender)) {
	using FunctionType = decltype(onToggleMode(sender))(*)(EditorSFXActionConfigLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1848c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto EditorSFXActionConfigLayer::refreshModeButtons() -> decltype(refreshModeButtons()) {
	using FunctionType = decltype(refreshModeButtons())(*)(EditorSFXActionConfigLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x184830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
