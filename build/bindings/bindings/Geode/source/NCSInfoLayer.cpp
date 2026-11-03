
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/NCSInfoLayer.hpp>

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

NCSInfoLayer::~NCSInfoLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(NCSInfoLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3f0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) NCSInfoLayer(geode::CutoffConstructor, sizeof(NCSInfoLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto NCSInfoLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NCSInfoLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NCSInfoLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NCSInfoLayer::init(CustomSongLayer* layer) -> decltype(init(layer)) {
	using FunctionType = decltype(init(layer))(*)(NCSInfoLayer*, CustomSongLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, layer);
}

auto NCSInfoLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(NCSInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NCSInfoLayer::onLibrary(cocos2d::CCObject* sender) -> decltype(onLibrary(sender)) {
	using FunctionType = decltype(onLibrary(sender))(*)(NCSInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NCSInfoLayer::onNCS(cocos2d::CCObject* sender) -> decltype(onNCS(sender)) {
	using FunctionType = decltype(onNCS(sender))(*)(NCSInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NCSInfoLayer::onNCSIO(cocos2d::CCObject* sender) -> decltype(onNCSIO(sender)) {
	using FunctionType = decltype(onNCSIO(sender))(*)(NCSInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NCSInfoLayer::onNCSUsage(cocos2d::CCObject* sender) -> decltype(onNCSUsage(sender)) {
	using FunctionType = decltype(onNCSUsage(sender))(*)(NCSInfoLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x167b90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
