
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SelectArtLayer.hpp>

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

SelectArtLayer::~SelectArtLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SelectArtLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x457750, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SelectArtLayer(geode::CutoffConstructor, sizeof(SelectArtLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto SelectArtLayer::create(SelectArtType type, int index) -> decltype(create(type, index)) {
	using FunctionType = decltype(create(type, index))(*)(SelectArtType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45b3e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(type, index);
}

auto SelectArtLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SelectArtLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SelectArtLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SelectArtLayer::init(SelectArtType type, int index) -> decltype(init(type, index)) {
	using FunctionType = decltype(init(type, index))(*)(SelectArtLayer*, SelectArtType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45b500, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, index);
}

auto SelectArtLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SelectArtLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectArtLayer::onSelectCustom(cocos2d::CCObject* sender) -> decltype(onSelectCustom(sender)) {
	using FunctionType = decltype(onSelectCustom(sender))(*)(SelectArtLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SelectArtLayer::selectArt(cocos2d::CCObject* sender) -> decltype(selectArt(sender)) {
	using FunctionType = decltype(selectArt(sender))(*)(SelectArtLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x45c0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
