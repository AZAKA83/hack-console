
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupSpawnPopup.hpp>

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

SetupSpawnPopup::~SetupSpawnPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupSpawnPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5f3c90, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupSpawnPopup(geode::CutoffConstructor, sizeof(SetupSpawnPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupSpawnPopup::create(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(create(object, objects)) {
	using FunctionType = decltype(create(object, objects))(*)(EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f3d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects);
}

auto SetupSpawnPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&SetupSpawnPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(SetupSpawnPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5b9920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto SetupSpawnPopup::addRemap(int oldID, int newID) -> decltype(addRemap(oldID, newID)) {
	using FunctionType = decltype(addRemap(oldID, newID))(*)(SetupSpawnPopup*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f4d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, oldID, newID);
}

auto SetupSpawnPopup::init(EffectGameObject* object, cocos2d::CCArray* objects) -> decltype(init(object, objects)) {
	using FunctionType = decltype(init(object, objects))(*)(SetupSpawnPopup*, EffectGameObject*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f3eb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects);
}

auto SetupSpawnPopup::onAddRemap(cocos2d::CCObject* sender) -> decltype(onAddRemap(sender)) {
	using FunctionType = decltype(onAddRemap(sender))(*)(SetupSpawnPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f4ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSpawnPopup::onDeleteRemap(cocos2d::CCObject* sender) -> decltype(onDeleteRemap(sender)) {
	using FunctionType = decltype(onDeleteRemap(sender))(*)(SetupSpawnPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f4e50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSpawnPopup::onPasteRemap(cocos2d::CCObject* sender) -> decltype(onPasteRemap(sender)) {
	using FunctionType = decltype(onPasteRemap(sender))(*)(SetupSpawnPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f4ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSpawnPopup::onSelectRemap(cocos2d::CCObject* sender) -> decltype(onSelectRemap(sender)) {
	using FunctionType = decltype(onSelectRemap(sender))(*)(SetupSpawnPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f58c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SetupSpawnPopup::queueUpdateButtons() -> decltype(queueUpdateButtons()) {
	using FunctionType = decltype(queueUpdateButtons())(*)(SetupSpawnPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SetupSpawnPopup::updateRemapButtons(float dt) -> decltype(updateRemapButtons(dt)) {
	using FunctionType = decltype(updateRemapButtons(dt))(*)(SetupSpawnPopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f5090, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dt);
}
