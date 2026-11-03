
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJThreadCell.hpp>

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

GJThreadCell::~GJThreadCell() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJThreadCell*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x1592e0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJThreadCell(geode::CutoffConstructor, sizeof(GJThreadCell));
		geode::DestructorLock::addLock(this);
	}
}

auto GJThreadCell::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJThreadCell::init), this);
	using FunctionType = decltype(init())(*)(GJThreadCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ff70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJThreadCell::draw() -> decltype(draw()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJThreadCell::draw), this);
	using FunctionType = decltype(draw())(*)(GJThreadCell*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1487a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJThreadCell::loadFromThread(GJMessageThread* p0) -> decltype(loadFromThread(p0)) {
	using FunctionType = decltype(loadFromThread(p0))(*)(GJThreadCell*, GJMessageThread*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x1597d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJThreadCell::onShowMembers(cocos2d::CCObject* sender) -> decltype(onShowMembers(sender)) {
	using FunctionType = decltype(onShowMembers(sender))(*)(GJThreadCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ab80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJThreadCell::onThreadOptions(cocos2d::CCObject* sender) -> decltype(onThreadOptions(sender)) {
	using FunctionType = decltype(onThreadOptions(sender))(*)(GJThreadCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ac30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJThreadCell::onToggleSelect(cocos2d::CCObject* sender) -> decltype(onToggleSelect(sender)) {
	using FunctionType = decltype(onToggleSelect(sender))(*)(GJThreadCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15abc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJThreadCell::onViewProfile(cocos2d::CCObject* sender) -> decltype(onViewProfile(sender)) {
	using FunctionType = decltype(onViewProfile(sender))(*)(GJThreadCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ab40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto GJThreadCell::onViewThread(cocos2d::CCObject* sender) -> decltype(onViewThread(sender)) {
	using FunctionType = decltype(onViewThread(sender))(*)(GJThreadCell*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x15ab10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
