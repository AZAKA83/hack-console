
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SelectSettingLayer.hpp>

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

SelectSettingLayer::~SelectSettingLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SelectSettingLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x457830, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SelectSettingLayer(geode::CutoffConstructor, sizeof(SelectSettingLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SelectSettingLayer::create(SelectSettingType type, int value) -> decltype(create(type, value)) {
	using FunctionType = decltype(create(type, value))(*)(SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c2e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, value);
}

auto SelectSettingLayer::frameForItem(SelectSettingType type, int index) -> decltype(frameForItem(type, index)) {
	using FunctionType = decltype(frameForItem(type, index))(*)(SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45cb30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, index);
}

auto SelectSettingLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectSettingLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SelectSettingLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45d0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SelectSettingLayer::init(SelectSettingType type, int value) -> decltype(init(type, value)) {
	using FunctionType = decltype(init(type, value))(*)(SelectSettingLayer*, SelectSettingType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, value);
}

auto SelectSettingLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SelectSettingLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45d060, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectSettingLayer::onSelect(cocos2d::CCObject* sender) -> decltype(onSelect(sender)) {
	using FunctionType = decltype(onSelect(sender))(*)(SelectSettingLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45cfb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
