
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJPathRewardPopup.hpp>

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

GJPathRewardPopup::~GJPathRewardPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJPathRewardPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3f0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJPathRewardPopup(geode::CutoffConstructor, sizeof(GJPathRewardPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto GJPathRewardPopup::closePopup() -> decltype(closePopup()) {
	using FunctionType = decltype(closePopup())(*)(GJPathRewardPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x393120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJPathRewardPopup::init(int path) -> decltype(init(path)) {
	using FunctionType = decltype(init(path))(*)(GJPathRewardPopup*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x397d90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, path);
}

auto GJPathRewardPopup::onClaim(cocos2d::CCObject* sender) -> decltype(onClaim(sender)) {
	using FunctionType = decltype(onClaim(sender))(*)(GJPathRewardPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x398260, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
