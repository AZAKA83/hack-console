
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LevelStatsInfoPopup.hpp>

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

LevelStatsInfoPopup::~LevelStatsInfoPopup() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(LevelStatsInfoPopup*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x5a3f0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) LevelStatsInfoPopup(geode::CutoffConstructor, sizeof(LevelStatsInfoPopup));
		geode::DestructorLock::addLock(this);
	}
}

auto LevelStatsInfoPopup::create(GJGameLevel* p0) -> decltype(create(p0)) {
	using FunctionType = decltype(create(p0))(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4267b0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(p0);
}

auto LevelStatsInfoPopup::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LevelStatsInfoPopup::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LevelStatsInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4281a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LevelStatsInfoPopup::buildInfoText() -> decltype(buildInfoText()) {
	using FunctionType = decltype(buildInfoText())(*)(LevelStatsInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x427250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelStatsInfoPopup::buildStatsText() -> decltype(buildStatsText()) {
	using FunctionType = decltype(buildStatsText())(*)(LevelStatsInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LevelStatsInfoPopup::init(GJGameLevel* p0) -> decltype(init(p0)) {
	using FunctionType = decltype(init(p0))(*)(LevelStatsInfoPopup*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x426920, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto LevelStatsInfoPopup::onClose(cocos2d::CCObject* sender) -> decltype(onClose(sender)) {
	using FunctionType = decltype(onClose(sender))(*)(LevelStatsInfoPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428190, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelStatsInfoPopup::onNextPage(cocos2d::CCObject* sender) -> decltype(onNextPage(sender)) {
	using FunctionType = decltype(onNextPage(sender))(*)(LevelStatsInfoPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelStatsInfoPopup::onPrevPage(cocos2d::CCObject* sender) -> decltype(onPrevPage(sender)) {
	using FunctionType = decltype(onPrevPage(sender))(*)(LevelStatsInfoPopup*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x428180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LevelStatsInfoPopup::updatePage() -> decltype(updatePage()) {
	using FunctionType = decltype(updatePage())(*)(LevelStatsInfoPopup*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x427e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
