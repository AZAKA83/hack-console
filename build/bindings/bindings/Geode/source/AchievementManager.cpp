
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/AchievementManager.hpp>

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

AchievementManager::~AchievementManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(AchievementManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x9db0, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) AchievementManager(geode::CutoffConstructor, sizeof(AchievementManager));
		geode::DestructorLock::addLock(this);
	}
}

auto AchievementManager::sharedState() -> decltype(sharedState()) {
	using FunctionType = decltype(sharedState())(*)();
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa000, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)();
}

auto AchievementManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&AchievementManager::init), this);
	using FunctionType = decltype(init())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa0c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto AchievementManager::achievementForUnlock(int id, UnlockType type) -> decltype(achievementForUnlock(id, type)) {
	using FunctionType = decltype(achievementForUnlock(id, type))(*)(AchievementManager*, int, UnlockType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ca10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto AchievementManager::addAchievement(std::string identifier, std::string title, std::string achievedDescription, std::string unachievedDescription, std::string icon, int limits) -> decltype(addAchievement(identifier, title, achievedDescription, unachievedDescription, icon, limits)) {
	using FunctionType = decltype(addAchievement(identifier, title, achievedDescription, unachievedDescription, icon, limits))(*)(AchievementManager*, std::string, std::string, std::string, std::string, std::string, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, identifier, title, achievedDescription, unachievedDescription, icon, limits);
}

auto AchievementManager::addManualAchievements() -> decltype(addManualAchievements()) {
	using FunctionType = decltype(addManualAchievements())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0xa6d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto AchievementManager::getAchievementsWithID(char const* id) -> decltype(getAchievementsWithID(id)) {
	using FunctionType = decltype(getAchievementsWithID(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::getAllAchievementsSorted(bool available) -> decltype(getAllAchievementsSorted(available)) {
	using FunctionType = decltype(getAllAchievementsSorted(available))(*)(AchievementManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, available);
}

auto AchievementManager::isAchievementEarned(char const* ach) -> decltype(isAchievementEarned(ach)) {
	using FunctionType = decltype(isAchievementEarned(ach))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c230, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, ach);
}

auto AchievementManager::notifyAchievementWithID(char const* id) -> decltype(notifyAchievementWithID(id)) {
	using FunctionType = decltype(notifyAchievementWithID(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3ccb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::percentForAchievement(char const* id) -> decltype(percentForAchievement(id)) {
	using FunctionType = decltype(percentForAchievement(id))(*)(AchievementManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto AchievementManager::reportAchievementWithID(char const* id, int percent, bool dontNotify) -> decltype(reportAchievementWithID(id, percent, dontNotify)) {
	using FunctionType = decltype(reportAchievementWithID(id, percent, dontNotify))(*)(AchievementManager*, char const*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3cff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, percent, dontNotify);
}

auto AchievementManager::storeAchievementUnlocks() -> decltype(storeAchievementUnlocks()) {
	using FunctionType = decltype(storeAchievementUnlocks())(*)(AchievementManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3c630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
