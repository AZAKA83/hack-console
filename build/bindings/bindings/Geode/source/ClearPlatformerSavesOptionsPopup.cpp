
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/ClearPlatformerSavesOptionsPopup.hpp>

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

ClearPlatformerSavesOptionsPopup::~ClearPlatformerSavesOptionsPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(ClearPlatformerSavesOptionsPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x60ac50, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) ClearPlatformerSavesOptionsPopup(geode::CutoffConstructor, sizeof(ClearPlatformerSavesOptionsPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto ClearPlatformerSavesOptionsPopup::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&ClearPlatformerSavesOptionsPopup::init), this);
	using FunctionType = decltype(init())(*)(ClearPlatformerSavesOptionsPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa4510, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto ClearPlatformerSavesOptionsPopup::onBackupToggle(cocos2d::CCObject* sender) -> decltype(onBackupToggle(sender)) {
	using FunctionType = decltype(onBackupToggle(sender))(*)(ClearPlatformerSavesOptionsPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa4aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
