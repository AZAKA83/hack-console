
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AchievementNotifier.hpp>

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

AchievementNotifier::~AchievementNotifier() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AchievementNotifier*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x3d4d0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AchievementNotifier(geode::CutoffConstructor, sizeof(AchievementNotifier));
		geode::DestructorLock::addLock(this);
	}
}

auto AchievementNotifier::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d560, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto AchievementNotifier::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AchievementNotifier::init), this);
	using FunctionType = decltype(init())(*)(AchievementNotifier*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AchievementNotifier::achievementDisplayFinished() -> decltype(achievementDisplayFinished()) {
	using FunctionType = decltype(achievementDisplayFinished())(*)(AchievementNotifier*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementNotifier::notifyAchievement(char const* title, char const* desc, char const* icon, bool quest) -> decltype(notifyAchievement(title, desc, icon, quest)) {
	using FunctionType = decltype(notifyAchievement(title, desc, icon, quest))(*)(AchievementNotifier*, char const*, char const*, char const*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, title, desc, icon, quest);
}

auto AchievementNotifier::showNextAchievement() -> decltype(showNextAchievement()) {
	using FunctionType = decltype(showNextAchievement())(*)(AchievementNotifier*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3d720, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
