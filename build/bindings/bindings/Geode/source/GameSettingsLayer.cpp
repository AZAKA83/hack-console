
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameSettingsLayer.hpp>

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

GameSettingsLayer::~GameSettingsLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GameSettingsLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x2c2530, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GameSettingsLayer(geode::CutoffConstructor, sizeof(GameSettingsLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto GameSettingsLayer::create(GJBaseGameLayer* p0, int p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(GJBaseGameLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c2640, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto GameSettingsLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GameSettingsLayer::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(GameSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c7e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GameSettingsLayer::onCustomButton(cocos2d::CCObject* sender) -> decltype(onCustomButton(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&GameSettingsLayer::onCustomButton), this);
	using FunctionType = decltype(onCustomButton(sender))(*)(GameSettingsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c7ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto GameSettingsLayer::valueDidChange(int p0, float p1) -> decltype(valueDidChange(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<int, float>::func(&GameSettingsLayer::valueDidChange), this);
	using FunctionType = decltype(valueDidChange(p0, p1))(*)(GameSettingsLayer*, int, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c70b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto GameSettingsLayer::getValue(int p0) -> decltype(getValue(p0)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameSettingsLayer::getValue), this);
	using FunctionType = decltype(getValue(p0))(*)(GameSettingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c6d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GameSettingsLayer::showTab(int tab) -> decltype(showTab(tab)) {
	auto self = addresser::thunkAdjust(Resolve<int>::func(&GameSettingsLayer::showTab), this);
	using FunctionType = decltype(showTab(tab))(*)(GameSettingsLayer*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c8420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, tab);
}

auto GameSettingsLayer::dropDownLayerWillClose(GJDropDownLayer* p0) -> decltype(dropDownLayerWillClose(p0)) {
	auto self = addresser::thunkAdjust(Resolve<GJDropDownLayer*>::func(&GameSettingsLayer::dropDownLayerWillClose), this);
	using FunctionType = decltype(dropDownLayerWillClose(p0))(*)(GameSettingsLayer*, GJDropDownLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c7e10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto GameSettingsLayer::addSpecialContent() -> decltype(addSpecialContent()) {
	using FunctionType = decltype(addSpecialContent())(*)(GameSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c5200, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameSettingsLayer::addToggle(char const* name, int id, char const* desc, bool disabled) -> decltype(addToggle(name, id, desc, disabled)) {
	using FunctionType = decltype(addToggle(name, id, desc, disabled))(*)(GameSettingsLayer*, char const*, int, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c6720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, name, id, desc, disabled);
}

auto GameSettingsLayer::buildTabContent() -> decltype(buildTabContent()) {
	using FunctionType = decltype(buildTabContent())(*)(GameSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c2df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameSettingsLayer::didChangeGV(char const* p0, bool p1) -> decltype(didChangeGV(p0, p1)) {
	using FunctionType = decltype(didChangeGV(p0, p1))(*)(GameSettingsLayer*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c74a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameSettingsLayer::setupTabs() -> decltype(setupTabs()) {
	using FunctionType = decltype(setupTabs())(*)(GameSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2c2920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
