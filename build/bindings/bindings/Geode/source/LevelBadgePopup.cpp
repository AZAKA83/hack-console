
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelBadgePopup.hpp>

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

LevelBadgePopup::~LevelBadgePopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelBadgePopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd3380, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelBadgePopup(geode::CutoffConstructor, sizeof(LevelBadgePopup));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelBadgePopup::create(int p0, bool p1) -> decltype(create(p0, p1)) {
	using FunctionType = decltype(create(p0, p1))(*)(int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe5d70, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0, p1);
}

auto LevelBadgePopup::ccTouchBegan(cocos2d::CCTouch* touch, cocos2d::CCEvent* event) -> decltype(ccTouchBegan(touch, event)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCTouch*, cocos2d::CCEvent*>::func(&LevelBadgePopup::ccTouchBegan), this);
	using FunctionType = decltype(ccTouchBegan(touch, event))(*)(LevelBadgePopup*, cocos2d::CCTouch*, cocos2d::CCEvent*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, touch, event);
}

auto LevelBadgePopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBadgePopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelBadgePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBadgePopup::show() -> decltype(show()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelBadgePopup::show), this);
	using FunctionType = decltype(show())(*)(LevelBadgePopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6930, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelBadgePopup::loadLevelsFinished(cocos2d::CCArray* p0, char const* p1, int p2) -> decltype(loadLevelsFinished(p0, p1, p2)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*, int>::func(&LevelBadgePopup::loadLevelsFinished), this);
	using FunctionType = decltype(loadLevelsFinished(p0, p1, p2))(*)(LevelBadgePopup*, cocos2d::CCArray*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1, p2);
}

auto LevelBadgePopup::loadLevelsFailed(char const* p0, int p1) -> decltype(loadLevelsFailed(p0, p1)) {
	auto self = addresser::thunkAdjust(Resolve<char const*, int>::func(&LevelBadgePopup::loadLevelsFailed), this);
	using FunctionType = decltype(loadLevelsFailed(p0, p1))(*)(LevelBadgePopup*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0, p1);
}

auto LevelBadgePopup::buildCell(cocos2d::CCObject* p0) -> decltype(buildCell(p0)) {
	using FunctionType = decltype(buildCell(p0))(*)(LevelBadgePopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe6510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LevelBadgePopup::init(int p0, bool p1) -> decltype(init(p0, p1)) {
	using FunctionType = decltype(init(p0, p1))(*)(LevelBadgePopup*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xe5ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}
