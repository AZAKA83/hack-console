
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SpriteAnimationManager.hpp>

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

auto SpriteAnimationManager::createAnimations(std::string definition) -> decltype(createAnimations(definition)) {
	using FunctionType = decltype(createAnimations(definition))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85e90, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(definition);
}

auto SpriteAnimationManager::animationFinished() -> decltype(animationFinished()) {
	using FunctionType = decltype(animationFinished())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x875b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::callAnimationFinished() -> decltype(callAnimationFinished()) {
	using FunctionType = decltype(callAnimationFinished())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87600, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::executeAnimation(std::string animation) -> decltype(executeAnimation(animation)) {
	using FunctionType = decltype(executeAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86ee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::getPrio(std::string animation) -> decltype(getPrio(animation)) {
	using FunctionType = decltype(getPrio(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::initWithOwner(CCAnimatedSprite* sprite, std::string definition) -> decltype(initWithOwner(sprite, definition)) {
	using FunctionType = decltype(initWithOwner(sprite, definition))(*)(SpriteAnimationManager*, CCAnimatedSprite*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x85150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite, definition);
}

auto SpriteAnimationManager::loadAnimations(std::string definition) -> decltype(loadAnimations(definition)) {
	using FunctionType = decltype(loadAnimations(definition))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x853e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, definition);
}

auto SpriteAnimationManager::overridePrio() -> decltype(overridePrio()) {
	using FunctionType = decltype(overridePrio())(*)(SpriteAnimationManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x87400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SpriteAnimationManager::queueAnimation(std::string animation) -> decltype(queueAnimation(animation)) {
	using FunctionType = decltype(queueAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x874d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::runAnimation(std::string animation) -> decltype(runAnimation(animation)) {
	using FunctionType = decltype(runAnimation(animation))(*)(SpriteAnimationManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, animation);
}

auto SpriteAnimationManager::storeAnimation(cocos2d::CCAnimate* action, cocos2d::CCAnimate* frames, std::string name, int priority, spriteMode type, cocos2d::CCSpriteFrame* first) -> decltype(storeAnimation(action, frames, name, priority, type, first)) {
	using FunctionType = decltype(storeAnimation(action, frames, name, priority, type, first))(*)(SpriteAnimationManager*, cocos2d::CCAnimate*, cocos2d::CCAnimate*, std::string, int, spriteMode, cocos2d::CCSpriteFrame*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x86ac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, action, frames, name, priority, type, first);
}
