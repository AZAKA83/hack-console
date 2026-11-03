
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/DemonInfoPopup.hpp>

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

DemonInfoPopup::~DemonInfoPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(DemonInfoPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3f0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) DemonInfoPopup(geode::CutoffConstructor, sizeof(DemonInfoPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto DemonInfoPopup::create(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet) -> decltype(create(easyClassic, mediumClassic, hardClassic, insaneClassic, extremeClassic, easyPlatformer, mediumPlatformer, hardPlatformer, insanePlatformer, extremePlatformer, weekly, gauntlet)) {
	using FunctionType = decltype(create(easyClassic, mediumClassic, hardClassic, insaneClassic, extremeClassic, easyPlatformer, mediumPlatformer, hardPlatformer, insanePlatformer, extremePlatformer, weekly, gauntlet))(*)(int, int, int, int, int, int, int, int, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55ae80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(easyClassic, mediumClassic, hardClassic, insaneClassic, extremeClassic, easyPlatformer, mediumPlatformer, hardPlatformer, insanePlatformer, extremePlatformer, weekly, gauntlet);
}

auto DemonInfoPopup::createFromString(std::string str) -> decltype(createFromString(str)) {
	using FunctionType = decltype(createFromString(str))(*)(std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55aa80, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(str);
}

auto DemonInfoPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&DemonInfoPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(DemonInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto DemonInfoPopup::init(int easyClassic, int mediumClassic, int hardClassic, int insaneClassic, int extremeClassic, int easyPlatformer, int mediumPlatformer, int hardPlatformer, int insanePlatformer, int extremePlatformer, int weekly, int gauntlet) -> decltype(init(easyClassic, mediumClassic, hardClassic, insaneClassic, extremeClassic, easyPlatformer, mediumPlatformer, hardPlatformer, insanePlatformer, extremePlatformer, weekly, gauntlet)) {
	using FunctionType = decltype(init(easyClassic, mediumClassic, hardClassic, insaneClassic, extremeClassic, easyPlatformer, mediumPlatformer, hardPlatformer, insanePlatformer, extremePlatformer, weekly, gauntlet))(*)(DemonInfoPopup*, int, int, int, int, int, int, int, int, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x55aff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, easyClassic, mediumClassic, hardClassic, insaneClassic, extremeClassic, easyPlatformer, mediumPlatformer, hardPlatformer, insanePlatformer, extremePlatformer, weekly, gauntlet);
}

auto DemonInfoPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(DemonInfoPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x99f60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}
