
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJCompactUserCell.hpp>

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

GJCompactUserCell::~GJCompactUserCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJCompactUserCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x157bc0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJCompactUserCell(geode::CutoffConstructor, sizeof(GJCompactUserCell));
		geode::DestructorLock::addLock(this);
	}
}

auto GJCompactUserCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJCompactUserCell::init), this);
	using FunctionType = decltype(init())(*)(GJCompactUserCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x400c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJCompactUserCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJCompactUserCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJCompactUserCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1487a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJCompactUserCell::addStat(int p0, char const* p1, cocos2d::CCNode* p2, float& p3, float p4, bool p5) -> decltype(addStat(p0, p1, p2, p3, p4, p5)) {
	using FunctionType = decltype(addStat(p0, p1, p2, p3, p4, p5))(*)(GJCompactUserCell*, int, char const*, cocos2d::CCNode*, float&, float, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x158990, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5);
}

auto GJCompactUserCell::buildUserRow(GJUserScore* p0, cocos2d::CCNode* p1, cocos2d::CCNode* p2, cocos2d::CCObject* p3, cocos2d::SEL_MenuHandler p4, float p5, bool p6, bool p7) -> decltype(buildUserRow(p0, p1, p2, p3, p4, p5, p6, p7)) {
	using FunctionType = decltype(buildUserRow(p0, p1, p2, p3, p4, p5, p6, p7))(*)(GJCompactUserCell*, GJUserScore*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, float, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x157e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7);
}

auto GJCompactUserCell::loadFromScore(GJUserScore* p0) -> decltype(loadFromScore(p0)) {
	using FunctionType = decltype(loadFromScore(p0))(*)(GJCompactUserCell*, GJUserScore*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x157c60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJCompactUserCell::onSendMessage(cocos2d::CCObject* sender) -> decltype(onSendMessage(sender)) {
	using FunctionType = decltype(onSendMessage(sender))(*)(GJCompactUserCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x158c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJCompactUserCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(GJCompactUserCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x157b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
