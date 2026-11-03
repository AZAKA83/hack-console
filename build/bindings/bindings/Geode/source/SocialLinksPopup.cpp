
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SocialLinksPopup.hpp>

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

SocialLinksPopup::~SocialLinksPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SocialLinksPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3991b0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SocialLinksPopup(geode::CutoffConstructor, sizeof(SocialLinksPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto SocialLinksPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&SocialLinksPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(SocialLinksPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a00c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto SocialLinksPopup::init(GJAccountSettingsLayer* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(SocialLinksPopup*, GJAccountSettingsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39f330, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto SocialLinksPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(SocialLinksPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3a0020, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto SocialLinksPopup::onOK(cocos2d::CCObject* sender) -> decltype(onOK(sender)) {
	using FunctionType = decltype(onOK(sender))(*)(SocialLinksPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x39fe70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
