
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ThreadSearchPopup.hpp>

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

ThreadSearchPopup::~ThreadSearchPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ThreadSearchPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xd3260, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ThreadSearchPopup(geode::CutoffConstructor, sizeof(ThreadSearchPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto ThreadSearchPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ThreadSearchPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(ThreadSearchPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ThreadSearchPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&ThreadSearchPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(ThreadSearchPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfc840, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto ThreadSearchPopup::textChanged(CCTextInputNode* p0) -> decltype(textChanged(p0)) {
	auto self = addresser::thunkAdjust(Resolve<CCTextInputNode*>::func(&ThreadSearchPopup::textChanged), this);
	using FunctionType = decltype(textChanged(p0))(*)(ThreadSearchPopup*, CCTextInputNode*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfbcf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, p0);
}

auto ThreadSearchPopup::init(ThreadViewPopup* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(ThreadSearchPopup*, ThreadViewPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfaff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto ThreadSearchPopup::onGoToDate(cocos2d::CCObject* sender) -> decltype(onGoToDate(sender)) {
	using FunctionType = decltype(onGoToDate(sender))(*)(ThreadSearchPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfc5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto ThreadSearchPopup::onSearch(cocos2d::CCObject* sender) -> decltype(onSearch(sender)) {
	using FunctionType = decltype(onSearch(sender))(*)(ThreadSearchPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xfbf90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
