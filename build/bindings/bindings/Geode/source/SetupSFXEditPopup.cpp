
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SetupSFXEditPopup.hpp>

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

SetupSFXEditPopup::~SetupSFXEditPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SetupSFXEditPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5da3a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SetupSFXEditPopup(geode::CutoffConstructor, sizeof(SetupSFXEditPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SetupSFXEditPopup::create(SFXTriggerGameObject* object, cocos2d::CCArray* objects, bool songTrigger) -> decltype(create(object, objects, songTrigger)) {
	using FunctionType = decltype(create(object, objects, songTrigger))(*)(SFXTriggerGameObject*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5deae0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(object, objects, songTrigger);
}

auto SetupSFXEditPopup::init(SFXTriggerGameObject* object, cocos2d::CCArray* objects, bool songTrigger) -> decltype(init(object, objects, songTrigger)) {
	using FunctionType = decltype(init(object, objects, songTrigger))(*)(SetupSFXEditPopup*, SFXTriggerGameObject*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5dec00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object, objects, songTrigger);
}
