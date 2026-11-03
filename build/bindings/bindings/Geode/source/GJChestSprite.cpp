
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJChestSprite.hpp>

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

GJChestSprite::~GJChestSprite() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJChestSprite*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x561c30, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJChestSprite(geode::CutoffConstructor, sizeof(GJChestSprite));
		geode::DestructorLock::addLock(this);
	}
}

auto GJChestSprite::create(int chestType) -> decltype(create(chestType)) {
	using FunctionType = decltype(create(chestType))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x566f50, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(chestType);
}

auto GJChestSprite::setOpacity(unsigned char opacity) -> decltype(setOpacity(opacity)) {
	auto self = addresser::thunkAdjust(Resolve<unsigned char>::func(&GJChestSprite::setOpacity), this);
	using FunctionType = decltype(setOpacity(opacity))(*)(GJChestSprite*, unsigned char);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x5670e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, opacity);
}

auto GJChestSprite::setColor(cocos2d::ccColor3B const& color) -> decltype(setColor(color)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::ccColor3B const&>::func(&GJChestSprite::setColor), this);
	using FunctionType = decltype(setColor(color))(*)(GJChestSprite*, cocos2d::ccColor3B const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, color);
}

auto GJChestSprite::switchToState(ChestSpriteState state, bool noGlow) -> decltype(switchToState(state, noGlow)) {
	using FunctionType = decltype(switchToState(state, noGlow))(*)(GJChestSprite*, ChestSpriteState, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x567150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, state, noGlow);
}
