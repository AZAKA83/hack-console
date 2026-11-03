
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/PlatformerControlsPopup.hpp>

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

PlatformerControlsPopup::~PlatformerControlsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(PlatformerControlsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4502c0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) PlatformerControlsPopup(geode::CutoffConstructor, sizeof(PlatformerControlsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto PlatformerControlsPopup::create(GJGameLevel* p0, bool p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x450060, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto PlatformerControlsPopup::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&PlatformerControlsPopup::update), this);
	using FunctionType = decltype(update(dt))(*)(PlatformerControlsPopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4511a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto PlatformerControlsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&PlatformerControlsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto PlatformerControlsPopup::uploadActionFinished(int p0, int p1) -> decltype(uploadActionFinished(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&PlatformerControlsPopup::uploadActionFinished), this);
	using FunctionType = decltype(uploadActionFinished(p0, p1))(*)(PlatformerControlsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451d20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto PlatformerControlsPopup::uploadActionFailed(int p0, int p1) -> decltype(uploadActionFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&PlatformerControlsPopup::uploadActionFailed), this);
	using FunctionType = decltype(uploadActionFailed(p0, p1))(*)(PlatformerControlsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto PlatformerControlsPopup::onClosePopup(UploadActionPopup* p0) -> decltype(onClosePopup(p0)) {
	auto self = addresser::thunkAdjust(Resolve<UploadActionPopup*>::func(&PlatformerControlsPopup::onClosePopup), this);
	using FunctionType = decltype(onClosePopup(p0))(*)(PlatformerControlsPopup*, UploadActionPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4520f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto PlatformerControlsPopup::onLevelControlsRefreshed(int p0, int p1) -> decltype(onLevelControlsRefreshed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, int>::func(&PlatformerControlsPopup::onLevelControlsRefreshed), this);
	using FunctionType = decltype(onLevelControlsRefreshed(p0, p1))(*)(PlatformerControlsPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto PlatformerControlsPopup::FLAlert_Clicked(FLAlertLayer* p0, bool p1) -> decltype(FLAlert_Clicked(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&PlatformerControlsPopup::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(p0, p1))(*)(PlatformerControlsPopup*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451fa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto PlatformerControlsPopup::ensureCustomDraft() -> decltype(ensureCustomDraft()) {
	using FunctionType = decltype(ensureCustomDraft())(*)(PlatformerControlsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x450470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlatformerControlsPopup::init(GJGameLevel* p0, bool p1) -> decltype(init(p0, p1)) {
	using FunctionType = decltype(init(p0, p1))(*)(PlatformerControlsPopup*, GJGameLevel*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x44f100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto PlatformerControlsPopup::onApplyCreator(cocos2d::CCObject* sender) -> decltype(onApplyCreator(sender)) {
	using FunctionType = decltype(onApplyCreator(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4511f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::onController(cocos2d::CCObject* sender) -> decltype(onController(sender)) {
	using FunctionType = decltype(onController(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::onKeyboard(cocos2d::CCObject* sender) -> decltype(onKeyboard(sender)) {
	using FunctionType = decltype(onKeyboard(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451810, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::onToggleSource(cocos2d::CCObject* sender) -> decltype(onToggleSource(sender)) {
	using FunctionType = decltype(onToggleSource(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::onToggleUpload(cocos2d::CCObject* sender) -> decltype(onToggleUpload(sender)) {
	using FunctionType = decltype(onToggleUpload(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4517c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::onTouch(cocos2d::CCObject* sender) -> decltype(onTouch(sender)) {
	using FunctionType = decltype(onTouch(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4518c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::onUpdate(cocos2d::CCObject* sender) -> decltype(onUpdate(sender)) {
	using FunctionType = decltype(onUpdate(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::onUpload(cocos2d::CCObject* sender) -> decltype(onUpload(sender)) {
	using FunctionType = decltype(onUpload(sender))(*)(PlatformerControlsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto PlatformerControlsPopup::refreshClassUI() -> decltype(refreshClassUI()) {
	using FunctionType = decltype(refreshClassUI())(*)(PlatformerControlsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x450e60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto PlatformerControlsPopup::updateEditLabel() -> decltype(updateEditLabel()) {
	using FunctionType = decltype(updateEditLabel())(*)(PlatformerControlsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x451730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
