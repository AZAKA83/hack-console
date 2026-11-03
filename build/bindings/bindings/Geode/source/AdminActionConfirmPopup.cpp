
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AdminActionConfirmPopup.hpp>

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

AdminActionConfirmPopup::~AdminActionConfirmPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AdminActionConfirmPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0xa5190, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AdminActionConfirmPopup(geode::CutoffConstructor, sizeof(AdminActionConfirmPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto AdminActionConfirmPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AdminActionConfirmPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(AdminActionConfirmPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AdminActionConfirmPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCObject*>::func(&AdminActionConfirmPopup::onClose), this);
	using FunctionType = decltype(onClose(sender))(*)(AdminActionConfirmPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, sender);
}

auto AdminActionConfirmPopup::createContentDelete(AdminActionConfirmDelegate* p0, int p1, char const* p2, std::string const& p3, int p4) -> decltype(createContentDelete(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(createContentDelete(p0, p1, p2, p3, p4))(*)(AdminActionConfirmPopup*, AdminActionConfirmDelegate*, int, char const*, std::string const&, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa53b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto AdminActionConfirmPopup::onConfirm(cocos2d::CCObject* sender) -> decltype(onConfirm(sender)) {
	using FunctionType = decltype(onConfirm(sender))(*)(AdminActionConfirmPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
