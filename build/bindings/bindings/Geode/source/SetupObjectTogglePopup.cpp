
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupObjectTogglePopup.hpp>

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

SetupObjectTogglePopup::~SetupObjectTogglePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupObjectTogglePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5beea0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupObjectTogglePopup(geode::CutoffConstructor, sizeof(SetupObjectTogglePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupObjectTogglePopup::create(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer) -> decltype(create(object, objects, platformer)) {
	using FunctionType = decltype(create(object, objects, platformer))(*)(EffectGameObject*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bef70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, platformer);
}

auto SetupObjectTogglePopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupObjectTogglePopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupObjectTogglePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupObjectTogglePopup::valueDidChange(int tag, float value) -> decltype(valueDidChange(tag, value)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&SetupObjectTogglePopup::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(tag, value))(*)(SetupObjectTogglePopup*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bfa60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tag, value);
}

auto SetupObjectTogglePopup::init(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer) -> decltype(init(object, objects, platformer)) {
	using FunctionType = decltype(init(object, objects, platformer))(*)(SetupObjectTogglePopup*, EffectGameObject*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bf090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, platformer);
}
