
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DeathStatsPopup.hpp>

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

DeathStatsPopup::~DeathStatsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(DeathStatsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x11e320, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) DeathStatsPopup(geode::CutoffConstructor, sizeof(DeathStatsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto DeathStatsPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DeathStatsPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DeathStatsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DeathStatsPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&DeathStatsPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(DeathStatsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11fb20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto DeathStatsPopup::init(LevelEditorLayer* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(DeathStatsPopup*, LevelEditorLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11e430, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DeathStatsPopup::onClearFetched(cocos2d::CCObject* sender) -> decltype(onClearFetched(sender)) {
	using FunctionType = decltype(onClearFetched(sender))(*)(DeathStatsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11faa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathStatsPopup::onClearLocal(cocos2d::CCObject* sender) -> decltype(onClearLocal(sender)) {
	using FunctionType = decltype(onClearLocal(sender))(*)(DeathStatsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11fa10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathStatsPopup::onFetch(cocos2d::CCObject* sender) -> decltype(onFetch(sender)) {
	using FunctionType = decltype(onFetch(sender))(*)(DeathStatsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11ef00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto DeathStatsPopup::pollFetch(float p0) -> decltype(pollFetch(p0)) {
	using FunctionType = decltype(pollFetch(p0))(*)(DeathStatsPopup*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto DeathStatsPopup::showResult() -> decltype(showResult()) {
	using FunctionType = decltype(showResult())(*)(DeathStatsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x11f2f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
