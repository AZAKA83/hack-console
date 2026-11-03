
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/LeaderboardsLayer.hpp>

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

auto LeaderboardsLayer::keyBackClicked() -> decltype(keyBackClicked()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LeaderboardsLayer::keyBackClicked), this);
	using FunctionType = decltype(keyBackClicked())(*)(LeaderboardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dd400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LeaderboardsLayer::FLAlert_Clicked(FLAlertLayer* layer, bool btn2) -> decltype(FLAlert_Clicked(layer, btn2)) {
	auto self = addresser::thunkAdjust(Resolve<FLAlertLayer*, bool>::func(&LeaderboardsLayer::FLAlert_Clicked), this);
	using FunctionType = decltype(FLAlert_Clicked(layer, btn2))(*)(LeaderboardsLayer*, FLAlertLayer*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dd350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, layer, btn2);
}

auto LeaderboardsLayer::updateUserScoreFinished() -> decltype(updateUserScoreFinished()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LeaderboardsLayer::updateUserScoreFinished), this);
	using FunctionType = decltype(updateUserScoreFinished())(*)(LeaderboardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dca60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LeaderboardsLayer::updateUserScoreFailed() -> decltype(updateUserScoreFailed()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&LeaderboardsLayer::updateUserScoreFailed), this);
	using FunctionType = decltype(updateUserScoreFailed())(*)(LeaderboardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dca80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto LeaderboardsLayer::loadLeaderboardFinished(cocos2d::CCArray* scores, char const* key) -> decltype(loadLeaderboardFinished(scores, key)) {
	auto self = addresser::thunkAdjust(Resolve<cocos2d::CCArray*, char const*>::func(&LeaderboardsLayer::loadLeaderboardFinished), this);
	using FunctionType = decltype(loadLeaderboardFinished(scores, key))(*)(LeaderboardsLayer*, cocos2d::CCArray*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dca90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, scores, key);
}

auto LeaderboardsLayer::loadLeaderboardFailed(char const* key) -> decltype(loadLeaderboardFailed(key)) {
	auto self = addresser::thunkAdjust(Resolve<char const*>::func(&LeaderboardsLayer::loadLeaderboardFailed), this);
	using FunctionType = decltype(loadLeaderboardFailed(key))(*)(LeaderboardsLayer*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dcb50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, key);
}

auto LeaderboardsLayer::init(LeaderboardType type, LeaderboardStat stat) -> decltype(init(type, stat)) {
	using FunctionType = decltype(init(type, stat))(*)(LeaderboardsLayer*, LeaderboardType, LeaderboardStat);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3da4f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, stat);
}

auto LeaderboardsLayer::isCorrect(std::string key) -> decltype(isCorrect(key)) {
	using FunctionType = decltype(isCorrect(key))(*)(LeaderboardsLayer*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dcce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto LeaderboardsLayer::onBack(cocos2d::CCObject* sender) -> decltype(onBack(sender)) {
	using FunctionType = decltype(onBack(sender))(*)(LeaderboardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dd380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LeaderboardsLayer::onCreators(cocos2d::CCObject* sender) -> decltype(onCreators(sender)) {
	using FunctionType = decltype(onCreators(sender))(*)(LeaderboardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LeaderboardsLayer::onGlobal(cocos2d::CCObject* sender) -> decltype(onGlobal(sender)) {
	using FunctionType = decltype(onGlobal(sender))(*)(LeaderboardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LeaderboardsLayer::onInfo(cocos2d::CCObject* sender) -> decltype(onInfo(sender)) {
	using FunctionType = decltype(onInfo(sender))(*)(LeaderboardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dce30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LeaderboardsLayer::onStat(cocos2d::CCObject* sender) -> decltype(onStat(sender)) {
	using FunctionType = decltype(onStat(sender))(*)(LeaderboardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LeaderboardsLayer::onTop(cocos2d::CCObject* sender) -> decltype(onTop(sender)) {
	using FunctionType = decltype(onTop(sender))(*)(LeaderboardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc3c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LeaderboardsLayer::onWeek(cocos2d::CCObject* sender) -> decltype(onWeek(sender)) {
	using FunctionType = decltype(onWeek(sender))(*)(LeaderboardsLayer*, cocos2d::CCObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc3e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sender);
}

auto LeaderboardsLayer::refreshTabs() -> decltype(refreshTabs()) {
	using FunctionType = decltype(refreshTabs())(*)(LeaderboardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc2e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LeaderboardsLayer::selectLeaderboard(LeaderboardType type, LeaderboardStat stat) -> decltype(selectLeaderboard(type, stat)) {
	using FunctionType = decltype(selectLeaderboard(type, stat))(*)(LeaderboardsLayer*, LeaderboardType, LeaderboardStat);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc440, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, stat);
}

auto LeaderboardsLayer::setupLevelBrowser(cocos2d::CCArray* scores) -> decltype(setupLevelBrowser(scores)) {
	using FunctionType = decltype(setupLevelBrowser(scores))(*)(LeaderboardsLayer*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, scores);
}

auto LeaderboardsLayer::setupTabs() -> decltype(setupTabs()) {
	using FunctionType = decltype(setupTabs())(*)(LeaderboardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3db800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto LeaderboardsLayer::toggleTabButtons() -> decltype(toggleTabButtons()) {
	using FunctionType = decltype(toggleTabButtons())(*)(LeaderboardsLayer*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x3dc7b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
