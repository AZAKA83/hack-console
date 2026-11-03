
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ScrollableContentLayer.hpp>

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

ScrollableContentLayer::~ScrollableContentLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ScrollableContentLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x80bf0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ScrollableContentLayer(geode::CutoffConstructor, sizeof(ScrollableContentLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto ScrollableContentLayer::create(cocos2d::CCSize size) -> decltype(create(size)) {
	using FunctionType = decltype(create(size))(*)(cocos2d::CCSize);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x80ef0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(size);
}

auto ScrollableContentLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&ScrollableContentLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(ScrollableContentLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x82040, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto ScrollableContentLayer::visit() -> decltype(visit()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ScrollableContentLayer::visit), this);
	using FunctionType = decltype(visit())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ScrollableContentLayer::touchInsideClip(cocos2d::CCPoint const& point) -> decltype(touchInsideClip(point)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCPoint const&>::func(&ScrollableContentLayer::touchInsideClip), this);
	using FunctionType = decltype(touchInsideClip(point))(*)(ScrollableContentLayer*, cocos2d::CCPoint const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81ea0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, point);
}

auto ScrollableContentLayer::scrollWheel(float y, float x) -> decltype(scrollWheel(y, x)) {
	auto self = addresser::thunkAdjust(Resolve<float, float>::func(&ScrollableContentLayer::scrollWheel), this);
	using FunctionType = decltype(scrollWheel(y, x))(*)(ScrollableContentLayer*, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, y, x);
}

auto ScrollableContentLayer::applyContentPosition() -> decltype(applyContentPosition()) {
	using FunctionType = decltype(applyContentPosition())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81140, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ScrollableContentLayer::clampOffset() -> decltype(clampOffset()) {
	using FunctionType = decltype(clampOffset())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x810d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ScrollableContentLayer::ensureScrollThumb() -> decltype(ensureScrollThumb()) {
	using FunctionType = decltype(ensureScrollThumb())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto ScrollableContentLayer::handleTouchBegan(cocos2d::CCTouch* touch) -> decltype(handleTouchBegan(touch)) {
	using FunctionType = decltype(handleTouchBegan(touch))(*)(ScrollableContentLayer*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x817b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, touch);
}

auto ScrollableContentLayer::handleTouchEnded(cocos2d::CCTouch* touch) -> decltype(handleTouchEnded(touch)) {
	using FunctionType = decltype(handleTouchEnded(touch))(*)(ScrollableContentLayer*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, touch);
}

auto ScrollableContentLayer::handleTouchMoved(cocos2d::CCTouch* touch) -> decltype(handleTouchMoved(touch)) {
	using FunctionType = decltype(handleTouchMoved(touch))(*)(ScrollableContentLayer*, cocos2d::CCTouch*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x819a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, touch);
}

auto ScrollableContentLayer::restoreScrollOffset(std::string const& key) -> decltype(restoreScrollOffset(key)) {
	using FunctionType = decltype(restoreScrollOffset(key))(*)(ScrollableContentLayer*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81000, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto ScrollableContentLayer::updateScrollThumb() -> decltype(updateScrollThumb()) {
	using FunctionType = decltype(updateScrollThumb())(*)(ScrollableContentLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x81420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
