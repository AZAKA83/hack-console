
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/NumberInputLayer.hpp>

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

NumberInputLayer::NumberInputLayer() : NumberInputLayer(geode::CutoffConstructor, sizeof(NumberInputLayer)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	NumberInputLayer::~NumberInputLayer();

	using FunctionType = void(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1060, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

NumberInputLayer::~NumberInputLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(NumberInputLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4a11a0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) NumberInputLayer(geode::CutoffConstructor, sizeof(NumberInputLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto NumberInputLayer::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NumberInputLayer::init), this);
	using FunctionType = decltype(init())(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NumberInputLayer::registerWithTouchDispatcher() -> decltype(registerWithTouchDispatcher()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NumberInputLayer::registerWithTouchDispatcher), this);
	using FunctionType = decltype(registerWithTouchDispatcher())(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5bab0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NumberInputLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&NumberInputLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto NumberInputLayer::onDone(cocos2d::CCObject* sender) -> decltype(onDone(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&NumberInputLayer::onDone), this);
	using FunctionType = decltype(onDone(sender))(*)(NumberInputLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto NumberInputLayer::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(NumberInputLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NumberInputLayer::onNumber(cocos2d::CCObject* sender) -> decltype(onNumber(sender)) {
	using FunctionType = decltype(onNumber(sender))(*)(NumberInputLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto NumberInputLayer::updateNumberState() -> decltype(updateNumberState()) {
	using FunctionType = decltype(updateNumberState())(*)(NumberInputLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4a1990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
