
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupKeyframePopup.hpp>

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

SetupKeyframePopup::~SetupKeyframePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupKeyframePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9a70, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupKeyframePopup(geode::CutoffConstructor, sizeof(SetupKeyframePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupKeyframePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupKeyframePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupKeyframePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bc500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupKeyframePopup::onCustomButton(cocos2d::CCObject* sender) -> decltype(onCustomButton(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupKeyframePopup::onCustomButton), this);
	using FunctionType = decltype(onCustomButton(sender))(*)(SetupKeyframePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bbbe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupKeyframePopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupKeyframePopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupKeyframePopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bbb00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupKeyframePopup::onCustomToggleTriggerValue(cocos2d::CCObject* sender) -> decltype(onCustomToggleTriggerValue(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupKeyframePopup::onCustomToggleTriggerValue), this);
	using FunctionType = decltype(onCustomToggleTriggerValue(sender))(*)(SetupKeyframePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bbb20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupKeyframePopup::init(KeyframeGameObject* object, cocos2d::CCArray* objects, LevelEditorLayer* layer) -> decltype(init(object, objects, layer)) {
	using FunctionType = decltype(init(object, objects, layer))(*)(SetupKeyframePopup*, KeyframeGameObject*, cocos2d::CCArray*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5ba870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, layer);
}

auto SetupKeyframePopup::onTimeMode(cocos2d::CCObject* sender) -> decltype(onTimeMode(sender)) {
	using FunctionType = decltype(onTimeMode(sender))(*)(SetupKeyframePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bc400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupKeyframePopup::refreshPreviewArt() -> decltype(refreshPreviewArt()) {
	using FunctionType = decltype(refreshPreviewArt())(*)(SetupKeyframePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bc150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupKeyframePopup::updateTimeModeButtons() -> decltype(updateTimeModeButtons()) {
	using FunctionType = decltype(updateTimeModeButtons())(*)(SetupKeyframePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bc470, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
