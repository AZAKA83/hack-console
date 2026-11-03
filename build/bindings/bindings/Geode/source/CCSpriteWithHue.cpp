
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CCSpriteWithHue.hpp>

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

CCSpriteWithHue::~CCSpriteWithHue() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CCSpriteWithHue*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x4c570, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CCSpriteWithHue(geode::CutoffConstructor, sizeof(CCSpriteWithHue));
		geode::DestructorLock::addLock(this);
	}
}

auto CCSpriteWithHue::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteWithHue::draw), this);
	using FunctionType = decltype(draw())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ccf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* texture) -> decltype(initWithTexture(texture)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*>::func(&CCSpriteWithHue::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture))(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, texture);
}

auto CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect) -> decltype(initWithTexture(texture, rect)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&>::func(&CCSpriteWithHue::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture, rect))(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*, cocos2d::CCRect const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c770, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, texture, rect);
}

auto CCSpriteWithHue::initWithTexture(cocos2d::CCTexture2D* texture, cocos2d::CCRect const& rect, bool rotated) -> decltype(initWithTexture(texture, rect, rotated)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool>::func(&CCSpriteWithHue::initWithTexture), this);
	using FunctionType = decltype(initWithTexture(texture, rect, rotated))(*)(CCSpriteWithHue*, cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c6b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, texture, rect, rotated);
}

auto CCSpriteWithHue::initWithSpriteFrame(cocos2d::CCSpriteFrame* frame) -> decltype(initWithSpriteFrame(frame)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCSpriteFrame*>::func(&CCSpriteWithHue::initWithSpriteFrame), this);
	using FunctionType = decltype(initWithSpriteFrame(frame))(*)(CCSpriteWithHue*, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c780, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, frame);
}

auto CCSpriteWithHue::getShaderName() -> decltype(getShaderName()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteWithHue::getShaderName), this);
	using FunctionType = decltype(getShaderName())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteWithHue::shaderBody() -> decltype(shaderBody()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteWithHue::shaderBody), this);
	using FunctionType = decltype(shaderBody())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ca30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteWithHue::updateColor() -> decltype(updateColor()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&CCSpriteWithHue::updateColor), this);
	using FunctionType = decltype(updateColor())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ca40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto CCSpriteWithHue::initShader() -> decltype(initShader()) {
	using FunctionType = decltype(initShader())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4c7f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto CCSpriteWithHue::updateColorMatrix() -> decltype(updateColorMatrix()) {
	using FunctionType = decltype(updateColorMatrix())(*)(CCSpriteWithHue*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4ca60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
