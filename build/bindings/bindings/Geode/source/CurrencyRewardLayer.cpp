
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/CurrencyRewardLayer.hpp>

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

CurrencyRewardLayer::~CurrencyRewardLayer() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(CurrencyRewardLayer*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1399d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) CurrencyRewardLayer(geode::CutoffConstructor, sizeof(CurrencyRewardLayer));
		geode::DestructorLock::addLock(this);
	}
}

auto CurrencyRewardLayer::create(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float yOffset, float time) -> decltype(create(orbs, stars, moons, diamonds, demonKey, keyCount, shardType, shardsCount, position, rewardType, yOffset, time)) {
	using FunctionType = decltype(create(orbs, stars, moons, diamonds, demonKey, keyCount, shardType, shardsCount, position, rewardType, yOffset, time))(*)(int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139bb0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(orbs, stars, moons, diamonds, demonKey, keyCount, shardType, shardsCount, position, rewardType, yOffset, time);
}

auto CurrencyRewardLayer::update(float dt) -> decltype(update(dt)) {
	auto self = addresser::thunkAdjust(Resolve<float>::func(&CurrencyRewardLayer::update), this);
	using FunctionType = decltype(update(dt))(*)(CurrencyRewardLayer*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13c9e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dt);
}

auto CurrencyRewardLayer::createObjectsFull(CurrencySpriteType type, int count, cocos2d::CCSprite* sprite, cocos2d::CCPoint position, float time) -> decltype(createObjectsFull(type, count, sprite, position, time)) {
	using FunctionType = decltype(createObjectsFull(type, count, sprite, position, time))(*)(CurrencyRewardLayer*, CurrencySpriteType, int, cocos2d::CCSprite*, cocos2d::CCPoint, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13bc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, count, sprite, position, time);
}

auto CurrencyRewardLayer::init(int orbs, int stars, int moons, int diamonds, CurrencySpriteType demonKey, int keyCount, CurrencySpriteType shardType, int shardsCount, cocos2d::CCPoint position, CurrencyRewardType rewardType, float yOffset, float time) -> decltype(init(orbs, stars, moons, diamonds, demonKey, keyCount, shardType, shardsCount, position, rewardType, yOffset, time)) {
	using FunctionType = decltype(init(orbs, stars, moons, diamonds, demonKey, keyCount, shardType, shardsCount, position, rewardType, yOffset, time))(*)(CurrencyRewardLayer*, int, int, int, int, CurrencySpriteType, int, CurrencySpriteType, int, cocos2d::CCPoint, CurrencyRewardType, float, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x139e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, orbs, stars, moons, diamonds, demonKey, keyCount, shardType, shardsCount, position, rewardType, yOffset, time);
}

auto CurrencyRewardLayer::pulseSprite(cocos2d::CCSprite* sprite) -> decltype(pulseSprite(sprite)) {
	using FunctionType = decltype(pulseSprite(sprite))(*)(CurrencyRewardLayer*, cocos2d::CCSprite*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x13d380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sprite);
}
