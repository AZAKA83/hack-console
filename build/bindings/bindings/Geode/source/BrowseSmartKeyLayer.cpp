
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/BrowseSmartKeyLayer.hpp>

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

BrowseSmartKeyLayer::~BrowseSmartKeyLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(BrowseSmartKeyLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5ec120, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) BrowseSmartKeyLayer(geode::CutoffConstructor, sizeof(BrowseSmartKeyLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto BrowseSmartKeyLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&BrowseSmartKeyLayer::onBack), this);
	using FunctionType = decltype(onBack(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f2190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto BrowseSmartKeyLayer::getAllSelectedBlocks() -> decltype(getAllSelectedBlocks()) {
	using FunctionType = decltype(getAllSelectedBlocks())(*)(BrowseSmartKeyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f1da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto BrowseSmartKeyLayer::init(GJSmartTemplate* smartTemplate, std::string prefabKey) -> decltype(init(smartTemplate, prefabKey)) {
	using FunctionType = decltype(init(smartTemplate, prefabKey))(*)(BrowseSmartKeyLayer*, GJSmartTemplate*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f0f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, smartTemplate, prefabKey);
}

auto BrowseSmartKeyLayer::onButton(cocos2d::CCObject* sender) -> decltype(onButton(sender)) {
	using FunctionType = decltype(onButton(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f1990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartKeyLayer::onPrefabObject(cocos2d::CCObject* sender) -> decltype(onPrefabObject(sender)) {
	using FunctionType = decltype(onPrefabObject(sender))(*)(BrowseSmartKeyLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f20b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto BrowseSmartKeyLayer::updateChanceValues() -> decltype(updateChanceValues()) {
	using FunctionType = decltype(updateChanceValues())(*)(BrowseSmartKeyLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5f1f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
