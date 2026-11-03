
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GameLevelManager.hpp>

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

GameLevelManager::GameLevelManager() : GameLevelManager(geode::CutoffConstructor, sizeof(GameLevelManager)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GameLevelManager::~GameLevelManager();

	using FunctionType = void(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x217310, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

GameLevelManager::~GameLevelManager() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GameLevelManager*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x21b720, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GameLevelManager(geode::CutoffConstructor, sizeof(GameLevelManager));
		geode::DestructorLock::addLock(this);
	}
}

auto GameLevelManager::responseToDict(std::string response, bool colon) -> decltype(responseToDict(response, colon)) {
	using FunctionType = decltype(responseToDict(response, colon))(*)(std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261840, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(response, colon);
}

auto GameLevelManager::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GameLevelManager::init), this);
	using FunctionType = decltype(init())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21b9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GameLevelManager::acceptFriendRequest(int accountID, int requestID) -> decltype(acceptFriendRequest(accountID, requestID)) {
	using FunctionType = decltype(acceptFriendRequest(accountID, requestID))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x255710, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, requestID);
}

auto GameLevelManager::addDLToActive(char const* key) -> decltype(addDLToActive(key)) {
	using FunctionType = decltype(addDLToActive(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221aa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::adminClearReportedContent(int p0, std::string const& p1) -> decltype(adminClearReportedContent(p0, p1)) {
	using FunctionType = decltype(adminClearReportedContent(p0, p1))(*)(GameLevelManager*, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x244390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::adminCloseCase(int p0, int p1, std::string const& p2) -> decltype(adminCloseCase(p0, p1, p2)) {
	using FunctionType = decltype(adminCloseCase(p0, p1, p2))(*)(GameLevelManager*, int, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x247bc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::adminGetAbuseInfo(int p0, int p1, int p2) -> decltype(adminGetAbuseInfo(p0, p1, p2)) {
	using FunctionType = decltype(adminGetAbuseInfo(p0, p1, p2))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x245560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::adminGetAccountReview(int p0) -> decltype(adminGetAccountReview(p0)) {
	using FunctionType = decltype(adminGetAccountReview(p0))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x246d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::adminGetReportedContent(int p0, int p1, int p2, int p3) -> decltype(adminGetReportedContent(p0, p1, p2, p3)) {
	using FunctionType = decltype(adminGetReportedContent(p0, p1, p2, p3))(*)(GameLevelManager*, int, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x242e00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto GameLevelManager::adminGetReportQueue(int p0, int p1, int p2) -> decltype(adminGetReportQueue(p0, p1, p2)) {
	using FunctionType = decltype(adminGetReportQueue(p0, p1, p2))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x244880, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::adminGetUserHistory(int p0, int p1) -> decltype(adminGetUserHistory(p0, p1)) {
	using FunctionType = decltype(adminGetUserHistory(p0, p1))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x241fc0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::appendModReason(std::string& p0, std::string const& p1, std::vector<int> const& p2) -> decltype(appendModReason(p0, p1, p2)) {
	using FunctionType = decltype(appendModReason(p0, p1, p2))(*)(GameLevelManager*, std::string&, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2417b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::blockUser(int accountID) -> decltype(blockUser(accountID)) {
	using FunctionType = decltype(blockUser(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::claimNotificationReward(int p0) -> decltype(claimNotificationReward(p0)) {
	using FunctionType = decltype(claimNotificationReward(p0))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251df0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::cleanupDailyLevels() -> decltype(cleanupDailyLevels()) {
	using FunctionType = decltype(cleanupDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224050, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createAndGetCommentsFull(std::string p0, int p1, bool p2, CommentKeyType p3) -> decltype(createAndGetCommentsFull(p0, p1, p2, p3)) {
	using FunctionType = decltype(createAndGetCommentsFull(p0, p1, p2, p3))(*)(GameLevelManager*, std::string, int, bool, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23d680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto GameLevelManager::createAndGetLevelLists(std::string str) -> decltype(createAndGetLevelLists(str)) {
	using FunctionType = decltype(createAndGetLevelLists(str))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::createAndGetLevels(std::string str) -> decltype(createAndGetLevels(str)) {
	using FunctionType = decltype(createAndGetLevels(str))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e130, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::createAndGetMapPacks(std::string str) -> decltype(createAndGetMapPacks(str)) {
	using FunctionType = decltype(createAndGetMapPacks(str))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str);
}

auto GameLevelManager::createAndGetScores(std::string str, GJScoreType type) -> decltype(createAndGetScores(str, type)) {
	using FunctionType = decltype(createAndGetScores(str, type))(*)(GameLevelManager*, std::string, GJScoreType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21ec40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, type);
}

auto GameLevelManager::createNewLevel() -> decltype(createNewLevel()) {
	using FunctionType = decltype(createNewLevel())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21bff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::createNewLevelList() -> decltype(createNewLevelList()) {
	using FunctionType = decltype(createNewLevelList())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21cb30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x225150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::deleteComment(int id, CommentType type, int parentID) -> decltype(deleteComment(id, type, parentID)) {
	using FunctionType = decltype(deleteComment(id, type, parentID))(*)(GameLevelManager*, int, CommentType, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type, parentID);
}

auto GameLevelManager::deleteComments(CommentType p0, std::vector<BulkCommentKey> const& p1, std::string const& p2, std::vector<int> const& p3) -> decltype(deleteComments(p0, p1, p2, p3)) {
	using FunctionType = decltype(deleteComments(p0, p1, p2, p3))(*)(GameLevelManager*, CommentType, std::vector<BulkCommentKey> const&, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x240b30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto GameLevelManager::deleteFriendRequests(int accountID, cocos2d::CCArray* accounts, bool sent) -> decltype(deleteFriendRequests(accountID, accounts, sent)) {
	using FunctionType = decltype(deleteFriendRequests(accountID, accounts, sent))(*)(GameLevelManager*, int, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2550e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, accounts, sent);
}

auto GameLevelManager::deleteLevel(GJGameLevel* level) -> decltype(deleteLevel(level)) {
	using FunctionType = decltype(deleteLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21c870, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::deleteLevelControls(int p0) -> decltype(deleteLevelControls(p0)) {
	using FunctionType = decltype(deleteLevelControls(p0))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x259650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::deleteLevelList(GJLevelList* list) -> decltype(deleteLevelList(list)) {
	using FunctionType = decltype(deleteLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21d120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::deleteServerEditorSound(int p0, std::string const& p1, std::vector<int> const& p2) -> decltype(deleteServerEditorSound(p0, p1, p2)) {
	using FunctionType = decltype(deleteServerEditorSound(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22fb80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::deleteServerLevel(int p0, std::string const& p1, std::vector<int> const& p2) -> decltype(deleteServerLevel(p0, p1, p2)) {
	using FunctionType = decltype(deleteServerLevel(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x234980, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::deleteServerLevelList(int p0, std::string const& p1, std::vector<int> const& p2) -> decltype(deleteServerLevelList(p0, p1, p2)) {
	using FunctionType = decltype(deleteServerLevelList(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22d7a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::deleteUserMessages(GJUserMessage* message, cocos2d::CCArray* messages, bool isSender) -> decltype(deleteUserMessages(message, messages, isSender)) {
	using FunctionType = decltype(deleteUserMessages(message, messages, isSender))(*)(GameLevelManager*, GJUserMessage*, cocos2d::CCArray*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b9a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, message, messages, isSender);
}

auto GameLevelManager::downloadEditorSoundConfig(int p0) -> decltype(downloadEditorSoundConfig(p0)) {
	using FunctionType = decltype(downloadEditorSoundConfig(p0))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22f3f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::downloadLevel(int id, bool gauntletLevel, int dailyID) -> decltype(downloadLevel(id, gauntletLevel, dailyID)) {
	using FunctionType = decltype(downloadLevel(id, gauntletLevel, dailyID))(*)(GameLevelManager*, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x231c00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, gauntletLevel, dailyID);
}

auto GameLevelManager::downloadUserMessage(int id, bool sent) -> decltype(downloadUserMessage(id, sent)) {
	using FunctionType = decltype(downloadUserMessage(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b3a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::dropIgnoredRequestLists() -> decltype(dropIgnoredRequestLists()) {
	using FunctionType = decltype(dropIgnoredRequestLists())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23dc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::encodeDataTo(DS_Dictionary* dict) -> decltype(encodeDataTo(dict)) {
	using FunctionType = decltype(encodeDataTo(dict))(*)(GameLevelManager*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::firstSetup() -> decltype(firstSetup()) {
	using FunctionType = decltype(firstSetup())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2247a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::followUserOnline(int p0, bool p1) -> decltype(followUserOnline(p0, p1)) {
	using FunctionType = decltype(followUserOnline(p0, p1))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x250db0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::getAccountComments(int accountID, int page, int total) -> decltype(getAccountComments(accountID, page, total)) {
	using FunctionType = decltype(getAccountComments(accountID, page, total))(*)(GameLevelManager*, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23cee0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, page, total);
}

auto GameLevelManager::getBasePostString() -> decltype(getBasePostString()) {
	using FunctionType = decltype(getBasePostString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2264e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedDailyLevels() -> decltype(getCompletedDailyLevels()) {
	using FunctionType = decltype(getCompletedDailyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2202d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getCompletedEventLevels(int minStars, int maxStars) -> decltype(getCompletedEventLevels(minStars, maxStars)) {
	using FunctionType = decltype(getCompletedEventLevels(minStars, maxStars))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2204e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, minStars, maxStars);
}

auto GameLevelManager::getCompletedLevels(bool useOrbCompletion) -> decltype(getCompletedLevels(useOrbCompletion)) {
	using FunctionType = decltype(getCompletedLevels(useOrbCompletion))(*)(GameLevelManager*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, useOrbCompletion);
}

auto GameLevelManager::getCompletedWeeklyLevels() -> decltype(getCompletedWeeklyLevels()) {
	using FunctionType = decltype(getCompletedWeeklyLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2200b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDeathData(int p0, int p1, bool p2) -> decltype(getDeathData(p0, p1, p2)) {
	using FunctionType = decltype(getDeathData(p0, p1, p2))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2283a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::getDemonLevelsString() -> decltype(getDemonLevelsString()) {
	using FunctionType = decltype(getDemonLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getDifficultyStr(bool isNA, bool isEasy, bool isNormal, bool isHard, bool isHarder, bool isInsane, bool isDemon, bool isAuto) -> decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto)) {
	using FunctionType = decltype(getDifficultyStr(isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a3b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, isNA, isEasy, isNormal, isHard, isHarder, isInsane, isDemon, isAuto);
}

auto GameLevelManager::getEditorSoundConfigs(GJSearchObject* p0) -> decltype(getEditorSoundConfigs(p0)) {
	using FunctionType = decltype(getEditorSoundConfigs(p0))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22e9d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::getFolderName(int id, bool local) -> decltype(getFolderName(id, local)) {
	using FunctionType = decltype(getFolderName(id, local))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, local);
}

auto GameLevelManager::getFollowing() -> decltype(getFollowing()) {
	using FunctionType = decltype(getFollowing())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getFriendRequests(bool p0, int p1, int p2, std::string const& p3, bool p4) -> decltype(getFriendRequests(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(getFriendRequests(p0, p1, p2, p3, p4))(*)(GameLevelManager*, bool, int, int, std::string const&, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254070, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto GameLevelManager::getGauntletLevels(int id) -> decltype(getGauntletLevels(id)) {
	using FunctionType = decltype(getGauntletLevels(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2318f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getGauntlets() -> decltype(getGauntlets()) {
	using FunctionType = decltype(getGauntlets())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x230cd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGJChallenges() -> decltype(getGJChallenges()) {
	using FunctionType = decltype(getGJChallenges())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25e270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGJContentStatus() -> decltype(getGJContentStatus()) {
	using FunctionType = decltype(getGJContentStatus())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2313d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getGJDailyLevelState(GJTimedLevelType type) -> decltype(getGJDailyLevelState(type)) {
	using FunctionType = decltype(getGJDailyLevelState(type))(*)(GameLevelManager*, GJTimedLevelType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25f690, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getGJRewards(int type) -> decltype(getGJRewards(type)) {
	using FunctionType = decltype(getGJRewards(type))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25ce00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getGJSecretReward(std::string key) -> decltype(getGJSecretReward(key)) {
	using FunctionType = decltype(getGJSecretReward(key))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25be60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getGJUserInfo(int id) -> decltype(getGJUserInfo(id)) {
	using FunctionType = decltype(getGJUserInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getLeaderboardScores(LeaderboardType type, LeaderboardStat stat) -> decltype(getLeaderboardScores(type, stat)) {
	using FunctionType = decltype(getLeaderboardScores(type, stat))(*)(GameLevelManager*, LeaderboardType, LeaderboardStat);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2380b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, stat);
}

auto GameLevelManager::getLengthStr(bool isTiny, bool isShort, bool isMedium, bool isLong, bool isXL, bool isPlat) -> decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat)) {
	using FunctionType = decltype(getLengthStr(isTiny, isShort, isMedium, isLong, isXL, isPlat))(*)(GameLevelManager*, bool, bool, bool, bool, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a660, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, isTiny, isShort, isMedium, isLong, isXL, isPlat);
}

auto GameLevelManager::getLevelComments(int ID, int page, int total, int mode, CommentKeyType keytype) -> decltype(getLevelComments(ID, page, total, mode, keytype)) {
	using FunctionType = decltype(getLevelComments(ID, page, total, mode, keytype))(*)(GameLevelManager*, int, int, int, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23c2f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, ID, page, total, mode, keytype);
}

auto GameLevelManager::getLevelControls(int p0) -> decltype(getLevelControls(p0)) {
	using FunctionType = decltype(getLevelControls(p0))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x259cb0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::getLevelLeaderboard(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode) -> decltype(getLevelLeaderboard(level, type, mode)) {
	using FunctionType = decltype(getLevelLeaderboard(level, type, mode))(*)(GameLevelManager*, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x238790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level, type, mode);
}

auto GameLevelManager::getLevelLists(GJSearchObject* object) -> decltype(getLevelLists(object)) {
	using FunctionType = decltype(getLevelLists(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22db00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getLevelRateInfo(int id) -> decltype(getLevelRateInfo(id)) {
	using FunctionType = decltype(getLevelRateInfo(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2538d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getLevelSaveData() -> decltype(getLevelSaveData()) {
	using FunctionType = decltype(getLevelSaveData())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22bfa0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getLocalLevel(int uniqueID) -> decltype(getLocalLevel(uniqueID)) {
	using FunctionType = decltype(getLocalLevel(uniqueID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21bf80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID);
}

auto GameLevelManager::getLocalLevelList(int uniqueID) -> decltype(getLocalLevelList(uniqueID)) {
	using FunctionType = decltype(getLocalLevelList(uniqueID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21cac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, uniqueID);
}

auto GameLevelManager::getMainLevel(int levelID, bool dontGetLevelString) -> decltype(getMainLevel(levelID, dontGetLevelString)) {
	using FunctionType = decltype(getMainLevel(levelID, dontGetLevelString))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21bba0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levelID, dontGetLevelString);
}

auto GameLevelManager::getMapPacks(GJSearchObject* object) -> decltype(getMapPacks(object)) {
	using FunctionType = decltype(getMapPacks(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c6f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getNextLevelName(std::string name) -> decltype(getNextLevelName(name)) {
	using FunctionType = decltype(getNextLevelName(name))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21c300, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, name);
}

auto GameLevelManager::getNotifications(int p0, int p1) -> decltype(getNotifications(p0, p1)) {
	using FunctionType = decltype(getNotifications(p0, p1))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::getOnlineLevels(GJSearchObject* object) -> decltype(getOnlineLevels(object)) {
	using FunctionType = decltype(getOnlineLevels(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22ab80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::getPageInfo(char const* key) -> decltype(getPageInfo(key)) {
	using FunctionType = decltype(getPageInfo(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2218d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getSavedDailyLevel(int dailyID) -> decltype(getSavedDailyLevel(dailyID)) {
	using FunctionType = decltype(getSavedDailyLevel(dailyID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2207e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dailyID);
}

auto GameLevelManager::getSavedGauntletLevel(int id) -> decltype(getSavedGauntletLevel(id)) {
	using FunctionType = decltype(getSavedGauntletLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2208c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getSavedLevel(int id) -> decltype(getSavedLevel(id)) {
	using FunctionType = decltype(getSavedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x220700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::getSavedLevelLists(int folder) -> decltype(getSavedLevelLists(folder)) {
	using FunctionType = decltype(getSavedLevelLists(folder))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, folder);
}

auto GameLevelManager::getSavedLevels(bool favorite, int folder) -> decltype(getSavedLevels(favorite, folder)) {
	using FunctionType = decltype(getSavedLevels(favorite, folder))(*)(GameLevelManager*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21ef40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, favorite, folder);
}

auto GameLevelManager::getSongUsage(int p0) -> decltype(getSongUsage(p0)) {
	using FunctionType = decltype(getSongUsage(p0))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x253d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::getSplitIntFromKey(char const* key, int index) -> decltype(getSplitIntFromKey(key, index)) {
	using FunctionType = decltype(getSplitIntFromKey(key, index))(*)(GameLevelManager*, char const*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23dde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, index);
}

auto GameLevelManager::getStarLevelsString() -> decltype(getStarLevelsString()) {
	using FunctionType = decltype(getStarLevelsString())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getStoredLevelComments(char const* key) -> decltype(getStoredLevelComments(key)) {
	using FunctionType = decltype(getStoredLevelComments(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getStoredOnlineLevels(char const* key) -> decltype(getStoredOnlineLevels(key)) {
	using FunctionType = decltype(getStoredOnlineLevels(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2217d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::getStoredUserList(UserListType type) -> decltype(getStoredUserList(type)) {
	using FunctionType = decltype(getStoredUserList(type))(*)(GameLevelManager*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257b80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getThreadInvites() -> decltype(getThreadInvites()) {
	using FunctionType = decltype(getThreadInvites())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24e560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::getThreadMessages(int p0, long long p1, long long p2, int p3, long long p4, std::string const& p5) -> decltype(getThreadMessages(p0, p1, p2, p3, p4, p5)) {
	using FunctionType = decltype(getThreadMessages(p0, p1, p2, p3, p4, p5))(*)(GameLevelManager*, int, long long, long long, int, long long, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24b350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5);
}

auto GameLevelManager::getThreads(int p0, std::string const& p1, int p2, std::string const& p3) -> decltype(getThreads(p0, p1, p2, p3)) {
	using FunctionType = decltype(getThreads(p0, p1, p2, p3))(*)(GameLevelManager*, int, std::string const&, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24a250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3);
}

auto GameLevelManager::getTimeLeft(char const* key, float length) -> decltype(getTimeLeft(key, length)) {
	using FunctionType = decltype(getTimeLeft(key, length))(*)(GameLevelManager*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221e90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, length);
}

auto GameLevelManager::getTopArtists(int page, int total) -> decltype(getTopArtists(page, total)) {
	using FunctionType = decltype(getTopArtists(page, total))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239730, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page, total);
}

auto GameLevelManager::getUserList(UserListType type) -> decltype(getUserList(type)) {
	using FunctionType = decltype(getUserList(type))(*)(GameLevelManager*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257250, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::getUserMessages(bool sent, int page, int total) -> decltype(getUserMessages(sent, page, total)) {
	using FunctionType = decltype(getUserMessages(sent, page, total))(*)(GameLevelManager*, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23aac0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent, page, total);
}

auto GameLevelManager::getUsers(GJSearchObject* object) -> decltype(getUsers(object)) {
	using FunctionType = decltype(getUsers(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239f10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}

auto GameLevelManager::gotoLevelPage(GJGameLevel* level) -> decltype(gotoLevelPage(level)) {
	using FunctionType = decltype(gotoLevelPage(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221390, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::handleIt(bool success, std::string response, std::string tag, GJHttpType type) -> decltype(handleIt(success, response, tag, type)) {
	using FunctionType = decltype(handleIt(success, response, tag, type))(*)(GameLevelManager*, bool, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x219750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, success, response, tag, type);
}

auto GameLevelManager::hasDownloadedLevel(int id) -> decltype(hasDownloadedLevel(id)) {
	using FunctionType = decltype(hasDownloadedLevel(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233a80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasLikedAccountItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedAccountItem(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedAccountItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25bd70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasLikedItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(hasLikedItem(type, id, liked, parentID)) {
	using FunctionType = decltype(hasLikedItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25bd70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::hasLikedItemFullCheck(LikeItemType p0, int p1, int p2) -> decltype(hasLikedItemFullCheck(p0, p1, p2)) {
	using FunctionType = decltype(hasLikedItemFullCheck(p0, p1, p2))(*)(GameLevelManager*, LikeItemType, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25bce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::hasRatedDemon(int id) -> decltype(hasRatedDemon(id)) {
	using FunctionType = decltype(hasRatedDemon(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2348a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::hasRatedLevelStars(int id) -> decltype(hasRatedLevelStars(id)) {
	using FunctionType = decltype(hasRatedLevelStars(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2347c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::invalidateMessages(bool sent, bool reload) -> decltype(invalidateMessages(sent, reload)) {
	using FunctionType = decltype(invalidateMessages(sent, reload))(*)(GameLevelManager*, bool, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23c1a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, sent, reload);
}

auto GameLevelManager::isDLActive(char const* tag) -> decltype(isDLActive(tag)) {
	using FunctionType = decltype(isDLActive(tag))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2219d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tag);
}

auto GameLevelManager::isFollowingUser(int id) -> decltype(isFollowingUser(id)) {
	using FunctionType = decltype(isFollowingUser(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224320, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::isTimeValid(char const* key, float length) -> decltype(isTimeValid(key, length)) {
	using FunctionType = decltype(isTimeValid(key, length))(*)(GameLevelManager*, char const*, float);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221d40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key, length);
}

auto GameLevelManager::keyHasTimer(char const* key) -> decltype(keyHasTimer(key)) {
	using FunctionType = decltype(keyHasTimer(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::levelIDFromCommentKey(char const* key) -> decltype(levelIDFromCommentKey(key)) {
	using FunctionType = decltype(levelIDFromCommentKey(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23def0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::likeItem(LikeItemType type, int id, bool liked, int parentID) -> decltype(likeItem(type, id, liked, parentID)) {
	using FunctionType = decltype(likeItem(type, id, liked, parentID))(*)(GameLevelManager*, LikeItemType, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25a9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type, id, liked, parentID);
}

auto GameLevelManager::limitSavedLevels() -> decltype(limitSavedLevels()) {
	using FunctionType = decltype(limitSavedLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x222220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::makeTimeStamp(char const* key) -> decltype(makeTimeStamp(key)) {
	using FunctionType = decltype(makeTimeStamp(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221c30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::markItemAsLiked(LikeItemType type, int id, bool liked, int parentID) -> decltype(markItemAsLiked(type, id, liked, parentID)) {
	throw std::runtime_error("GameLevelManager::markItemAsLiked not implemented");
}

auto GameLevelManager::markLevelAsDownloaded(int id) -> decltype(markLevelAsDownloaded(id)) {
	using FunctionType = decltype(markLevelAsDownloaded(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::messageWasRemoved(int id, bool sent) -> decltype(messageWasRemoved(id, sent)) {
	using FunctionType = decltype(messageWasRemoved(id, sent))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23bfd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, sent);
}

auto GameLevelManager::muteUser(int p0, bool p1) -> decltype(muteUser(p0, p1)) {
	using FunctionType = decltype(muteUser(p0, p1))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24f700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::onBanUserCompleted(std::string response, std::string tag) -> decltype(onBanUserCompleted(response, tag)) {
	using FunctionType = decltype(onBanUserCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x234f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onBlockUserCompleted(std::string response, std::string tag) -> decltype(onBlockUserCompleted(response, tag)) {
	using FunctionType = decltype(onBlockUserCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256950, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteCommentCompleted(std::string response, std::string tag) -> decltype(onDeleteCommentCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteCommentCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2407f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteFriendRequestCompleted(std::string response, std::string tag) -> decltype(onDeleteFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteFriendRequestCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2554f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteServerLevelCompleted(std::string response, std::string tag) -> decltype(onDeleteServerLevelCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteServerLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x234de0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDeleteUserMessagesCompleted(std::string response, std::string tag) -> decltype(onDeleteUserMessagesCompleted(response, tag)) {
	using FunctionType = decltype(onDeleteUserMessagesCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23bdf0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onDownloadUserMessageCompleted(std::string response, std::string tag) -> decltype(onDownloadUserMessageCompleted(response, tag)) {
	using FunctionType = decltype(onDownloadUserMessageCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b5e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetAccountCommentsCompleted(std::string response, std::string tag) -> decltype(onGetAccountCommentsCompleted(response, tag)) {
	using FunctionType = decltype(onGetAccountCommentsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23c890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetFollowingCompleted(std::string p0, std::string p1) -> decltype(onGetFollowingCompleted(p0, p1)) {
	using FunctionType = decltype(onGetFollowingCompleted(p0, p1))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2518e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::onGetFriendRequestsCompleted(std::string response, std::string tag) -> decltype(onGetFriendRequestsCompleted(response, tag)) {
	using FunctionType = decltype(onGetFriendRequestsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGauntletsCompleted(std::string response, std::string tag) -> decltype(onGetGauntletsCompleted(response, tag)) {
	using FunctionType = decltype(onGetGauntletsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x230ff0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJChallengesCompleted(std::string response, std::string tag) -> decltype(onGetGJChallengesCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJChallengesCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25e700, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJDailyLevelStateCompleted(std::string response, std::string tag) -> decltype(onGetGJDailyLevelStateCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJDailyLevelStateCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2602d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJRewardsCompleted(std::string response, std::string tag) -> decltype(onGetGJRewardsCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJRewardsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25d450, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetGJUserInfoCompleted(std::string response, std::string tag) -> decltype(onGetGJUserInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetGJUserInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a830, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLeaderboardScoresCompleted(std::string response, std::string tag) -> decltype(onGetLeaderboardScoresCompleted(response, tag)) {
	using FunctionType = decltype(onGetLeaderboardScoresCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2384c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelCommentsCompleted(std::string response, std::string tag) -> decltype(onGetLevelCommentsCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelCommentsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23d100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelLeaderboardCompleted(std::string response, std::string tag) -> decltype(onGetLevelLeaderboardCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelLeaderboardCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelListsCompleted(std::string response, std::string tag) -> decltype(onGetLevelListsCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelListsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22dd90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelRateInfoCompleted(std::string response, std::string tag) -> decltype(onGetLevelRateInfoCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelRateInfoCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x253c10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetLevelSaveDataCompleted(std::string response, std::string tag) -> decltype(onGetLevelSaveDataCompleted(response, tag)) {
	using FunctionType = decltype(onGetLevelSaveDataCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetMapPacksCompleted(std::string response, std::string tag) -> decltype(onGetMapPacksCompleted(response, tag)) {
	using FunctionType = decltype(onGetMapPacksCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22c900, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetOnlineLevelsCompleted(std::string response, std::string tag) -> decltype(onGetOnlineLevelsCompleted(response, tag)) {
	using FunctionType = decltype(onGetOnlineLevelsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22b650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetTopArtistsCompleted(std::string response, std::string tag) -> decltype(onGetTopArtistsCompleted(response, tag)) {
	using FunctionType = decltype(onGetTopArtistsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x239a60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUserListCompleted(std::string response, std::string tag) -> decltype(onGetUserListCompleted(response, tag)) {
	using FunctionType = decltype(onGetUserListCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257480, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUserMessagesCompleted(std::string response, std::string tag) -> decltype(onGetUserMessagesCompleted(response, tag)) {
	using FunctionType = decltype(onGetUserMessagesCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ad00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onGetUsersCompleted(std::string response, std::string tag) -> decltype(onGetUsersCompleted(response, tag)) {
	using FunctionType = decltype(onGetUsersCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23a170, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onLikeItemCompleted(std::string response, std::string tag) -> decltype(onLikeItemCompleted(response, tag)) {
	using FunctionType = decltype(onLikeItemCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25b210, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onProcessHttpRequestCompleted(cocos2d::extension::CCHttpClient* client, cocos2d::extension::CCHttpResponse* response) -> decltype(onProcessHttpRequestCompleted(client, response)) {
	using FunctionType = decltype(onProcessHttpRequestCompleted(client, response))(*)(GameLevelManager*, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2195e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, client, response);
}

auto GameLevelManager::onRateDemonCompleted(std::string response, std::string tag) -> decltype(onRateDemonCompleted(response, tag)) {
	using FunctionType = decltype(onRateDemonCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235d50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRateStarsCompleted(std::string response, std::string tag) -> decltype(onRateStarsCompleted(response, tag)) {
	using FunctionType = decltype(onRateStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2345c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRemoveFriendCompleted(std::string response, std::string tag) -> decltype(onRemoveFriendCompleted(response, tag)) {
	using FunctionType = decltype(onRemoveFriendCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onReportLevelCompleted(std::string response, std::string tag) -> decltype(onReportLevelCompleted(response, tag)) {
	using FunctionType = decltype(onReportLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x260f70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRequestUserAccessCompleted(std::string response, std::string tag) -> decltype(onRequestUserAccessCompleted(response, tag)) {
	using FunctionType = decltype(onRequestUserAccessCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25b9b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onRestoreItemsCompleted(std::string response, std::string tag) -> decltype(onRestoreItemsCompleted(response, tag)) {
	using FunctionType = decltype(onRestoreItemsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x260820, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSetLevelStarsCompleted(std::string response, std::string tag) -> decltype(onSetLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSetLevelStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2360d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onSuggestLevelStarsCompleted(std::string response, std::string tag) -> decltype(onSuggestLevelStarsCompleted(response, tag)) {
	using FunctionType = decltype(onSuggestLevelStarsCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x235640, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUnblockUserCompleted(std::string response, std::string tag) -> decltype(onUnblockUserCompleted(response, tag)) {
	using FunctionType = decltype(onUnblockUserCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256fe0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateDescriptionCompleted(std::string response, std::string tag) -> decltype(onUpdateDescriptionCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateDescriptionCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258c50, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUpdateUserScoreCompleted(std::string response, std::string tag) -> decltype(onUpdateUserScoreCompleted(response, tag)) {
	using FunctionType = decltype(onUpdateUserScoreCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x237d70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadCommentCompleted(std::string response, std::string tag) -> decltype(onUploadCommentCompleted(response, tag)) {
	using FunctionType = decltype(onUploadCommentCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ed90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadDeathDataCompleted(std::string p0, std::string p1) -> decltype(onUploadDeathDataCompleted(p0, p1)) {
	using FunctionType = decltype(onUploadDeathDataCompleted(p0, p1))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x227360, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::onUploadFriendRequestCompleted(std::string response, std::string tag) -> decltype(onUploadFriendRequestCompleted(response, tag)) {
	using FunctionType = decltype(onUploadFriendRequestCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254f00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadLevelCompleted(std::string response, std::string tag) -> decltype(onUploadLevelCompleted(response, tag)) {
	using FunctionType = decltype(onUploadLevelCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a0b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::onUploadUserMessageCompleted(std::string response, std::string tag) -> decltype(onUploadUserMessageCompleted(response, tag)) {
	using FunctionType = decltype(onUploadUserMessageCompleted(response, tag))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23b760, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag);
}

auto GameLevelManager::parseEventReward(std::string p0, std::string p1) -> decltype(parseEventReward(p0, p1)) {
	using FunctionType = decltype(parseEventReward(p0, p1))(*)(GameLevelManager*, std::string, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25fc10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::ProcessHttpRequest(std::string endpoint, std::string params, std::string tag, GJHttpType httpType) -> decltype(ProcessHttpRequest(endpoint, params, tag, httpType)) {
	using FunctionType = decltype(ProcessHttpRequest(endpoint, params, tag, httpType))(*)(GameLevelManager*, std::string, std::string, std::string, GJHttpType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2192d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, endpoint, params, tag, httpType);
}

auto GameLevelManager::processOnDownloadLevelCompleted(std::string response, std::string tag, bool update) -> decltype(processOnDownloadLevelCompleted(response, tag, update)) {
	using FunctionType = decltype(processOnDownloadLevelCompleted(response, tag, update))(*)(GameLevelManager*, std::string, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x232220, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, response, tag, update);
}

auto GameLevelManager::purgeFriendRequestSearchCache(bool p0, int p1) -> decltype(purgeFriendRequestSearchCache(p0, p1)) {
	using FunctionType = decltype(purgeFriendRequestSearchCache(p0, p1))(*)(GameLevelManager*, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2583d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::purgeUnusedLevels() -> decltype(purgeUnusedLevels()) {
	using FunctionType = decltype(purgeUnusedLevels())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x222670, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::rateDemon(int id, int diff, bool moderator) -> decltype(rateDemon(id, diff, moderator)) {
	using FunctionType = decltype(rateDemon(id, diff, moderator))(*)(GameLevelManager*, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2358f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, diff, moderator);
}

auto GameLevelManager::rateStars(int id, int diff) -> decltype(rateStars(id, diff)) {
	using FunctionType = decltype(rateStars(id, diff))(*)(GameLevelManager*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233da0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, diff);
}

auto GameLevelManager::readFriendRequests(std::string const& p0) -> decltype(readFriendRequests(p0)) {
	using FunctionType = decltype(readFriendRequests(p0))(*)(GameLevelManager*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x255c70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::removeDelimiterChars(std::string str, bool colon) -> decltype(removeDelimiterChars(str, colon)) {
	using FunctionType = decltype(removeDelimiterChars(str, colon))(*)(GameLevelManager*, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, colon);
}

auto GameLevelManager::removeDLFromActive(char const* key) -> decltype(removeDLFromActive(key)) {
	using FunctionType = decltype(removeDLFromActive(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221b70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::removeFriend(int accountID) -> decltype(removeFriend(accountID)) {
	using FunctionType = decltype(removeFriend(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x255fd0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::removeUserFromList(int id, UserListType type) -> decltype(removeUserFromList(id, type)) {
	using FunctionType = decltype(removeUserFromList(id, type))(*)(GameLevelManager*, int, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2571a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::replayPlatformerSaveJournal() -> decltype(replayPlatformerSaveJournal()) {
	using FunctionType = decltype(replayPlatformerSaveJournal())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x223740, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::reportContent(int p0, int p1, int p2, std::vector<int> const& p3, long long p4) -> decltype(reportContent(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(reportContent(p0, p1, p2, p3, p4))(*)(GameLevelManager*, int, int, int, std::vector<int> const&, long long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261100, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto GameLevelManager::requestThreadMembers(int p0) -> decltype(requestThreadMembers(p0)) {
	using FunctionType = decltype(requestThreadMembers(p0))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x252270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GameLevelManager::requestUserAccess() -> decltype(requestUserAccess()) {
	using FunctionType = decltype(requestUserAccess())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25b6a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::resetAccountCaches() -> decltype(resetAccountCaches()) {
	using FunctionType = decltype(resetAccountCaches())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x222180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::resetCommentTimersForAccountID(int id) -> decltype(resetCommentTimersForAccountID(id)) {
	using FunctionType = decltype(resetCommentTimersForAccountID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2400e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::resetCommentTimersForLevelID(int id, CommentKeyType type) -> decltype(resetCommentTimersForLevelID(id, type)) {
	using FunctionType = decltype(resetCommentTimersForLevelID(id, type))(*)(GameLevelManager*, int, CommentKeyType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23ff00, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, type);
}

auto GameLevelManager::resetStoredUserList(UserListType type) -> decltype(resetStoredUserList(type)) {
	using FunctionType = decltype(resetStoredUserList(type))(*)(GameLevelManager*, UserListType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x257e70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, type);
}

auto GameLevelManager::resetTimerForKey(char const* key) -> decltype(resetTimerForKey(key)) {
	using FunctionType = decltype(resetTimerForKey(key))(*)(GameLevelManager*, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2220c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, key);
}

auto GameLevelManager::rewardItemFromResponse(std::string const& p0, int& p1) -> decltype(rewardItemFromResponse(p0, p1)) {
	using FunctionType = decltype(rewardItemFromResponse(p0, p1))(*)(GameLevelManager*, std::string const&, int&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x25c620, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::saveFetchedLevels(cocos2d::CCArray* levels) -> decltype(saveFetchedLevels(levels)) {
	using FunctionType = decltype(saveFetchedLevels(levels))(*)(GameLevelManager*, cocos2d::CCArray*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21e400, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levels);
}

auto GameLevelManager::saveLevel(GJGameLevel* level) -> decltype(saveLevel(level)) {
	using FunctionType = decltype(saveLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2209a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::saveLevelList(GJLevelList* list) -> decltype(saveLevelList(list)) {
	using FunctionType = decltype(saveLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22e290, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::searchThreadMessages(int p0, std::string const& p1, long long p2) -> decltype(searchThreadMessages(p0, p1, p2)) {
	using FunctionType = decltype(searchThreadMessages(p0, p1, p2))(*)(GameLevelManager*, int, std::string const&, long long);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x24bc80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::sendAdminAction(char const* p0, char const* p1, GJHttpType p2, int p3, std::string const& p4, std::string const& p5, std::vector<int> const& p6) -> decltype(sendAdminAction(p0, p1, p2, p3, p4, p5, p6)) {
	using FunctionType = decltype(sendAdminAction(p0, p1, p2, p3, p4, p5, p6))(*)(GameLevelManager*, char const*, char const*, GJHttpType, int, std::string const&, std::string const&, std::vector<int> const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2412b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6);
}

auto GameLevelManager::sendThreadMessage(int p0, int p1, std::string const& p2, std::string const& p3, uint64_t p4, std::string const& p5, bool p6, std::string const& p7, std::string const& p8) -> decltype(sendThreadMessage(p0, p1, p2, p3, p4, p5, p6, p7, p8)) {
	using FunctionType = decltype(sendThreadMessage(p0, p1, p2, p3, p4, p5, p6, p7, p8))(*)(GameLevelManager*, int, int, std::string const&, std::string const&, uint64_t, std::string const&, bool, std::string const&, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x249630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4, p5, p6, p7, p8);
}

auto GameLevelManager::setDiffVal(int diff, bool value) -> decltype(setDiffVal(diff, value)) {
	using FunctionType = decltype(setDiffVal(diff, value))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261420, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, diff, value);
}

auto GameLevelManager::setLenVal(int diff, bool value) -> decltype(setLenVal(diff, value)) {
	using FunctionType = decltype(setLenVal(diff, value))(*)(GameLevelManager*, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, diff, value);
}

auto GameLevelManager::storeCommentsResult(cocos2d::CCArray* comments, std::string pageInfo, char const* key) -> decltype(storeCommentsResult(comments, pageInfo, key)) {
	using FunctionType = decltype(storeCommentsResult(comments, pageInfo, key))(*)(GameLevelManager*, cocos2d::CCArray*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, comments, pageInfo, key);
}

auto GameLevelManager::storeSearchResult(cocos2d::CCArray* levels, std::string pageInfo, char const* searchKey) -> decltype(storeSearchResult(levels, pageInfo, searchKey)) {
	using FunctionType = decltype(storeSearchResult(levels, pageInfo, searchKey))(*)(GameLevelManager*, cocos2d::CCArray*, std::string, char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x221580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, levels, pageInfo, searchKey);
}

auto GameLevelManager::storeUserName(int userID, int accountID, std::string userName) -> decltype(storeUserName(userID, accountID, userName)) {
	using FunctionType = decltype(storeUserName(userID, accountID, userName))(*)(GameLevelManager*, int, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21d580, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, userID, accountID, userName);
}

auto GameLevelManager::storeUserNames(std::string usernameString) -> decltype(storeUserNames(usernameString)) {
	using FunctionType = decltype(storeUserNames(usernameString))(*)(GameLevelManager*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21d240, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, usernameString);
}

auto GameLevelManager::submitUserInfo() -> decltype(submitUserInfo()) {
	using FunctionType = decltype(submitUserInfo())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x260b20, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::suggestLevelStars(int p0, int p1, int p2, bool p3, int p4) -> decltype(suggestLevelStars(p0, p1, p2, p3, p4)) {
	using FunctionType = decltype(suggestLevelStars(p0, p1, p2, p3, p4))(*)(GameLevelManager*, int, int, int, bool, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2352d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2, p3, p4);
}

auto GameLevelManager::syncFollowing() -> decltype(syncFollowing()) {
	using FunctionType = decltype(syncFollowing())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x251520, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::syncFollowListIfNeeded() -> decltype(syncFollowListIfNeeded()) {
	using FunctionType = decltype(syncFollowListIfNeeded())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2519c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::tryGetUsername(int accountID) -> decltype(tryGetUsername(accountID)) {
	using FunctionType = decltype(tryGetUsername(accountID))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21d970, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID);
}

auto GameLevelManager::unblockUser(int id) -> decltype(unblockUser(id)) {
	using FunctionType = decltype(unblockUser(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x256ca0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::updateDescription(int id, std::string description) -> decltype(updateDescription(id, description)) {
	using FunctionType = decltype(updateDescription(id, description))(*)(GameLevelManager*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2588d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id, description);
}

auto GameLevelManager::updateEditorSoundDescription(int p0, std::string p1, std::string const& p2) -> decltype(updateEditorSoundDescription(p0, p1, p2)) {
	using FunctionType = decltype(updateEditorSoundDescription(p0, p1, p2))(*)(GameLevelManager*, int, std::string, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22ff90, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::updateLevel(GJGameLevel* level) -> decltype(updateLevel(level)) {
	using FunctionType = decltype(updateLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x233b60, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateLevelOrders() -> decltype(updateLevelOrders()) {
	using FunctionType = decltype(updateLevelOrders())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21f1d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::updateLevelRewards(GJGameLevel* level) -> decltype(updateLevelRewards(level)) {
	using FunctionType = decltype(updateLevelRewards(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21dde0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::updateSavedLevelList(GJLevelList* list) -> decltype(updateSavedLevelList(list)) {
	using FunctionType = decltype(updateSavedLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x230a70, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::updateThread(int p0, int p1, std::string const& p2) -> decltype(updateThread(p0, p1, p2)) {
	using FunctionType = decltype(updateThread(p0, p1, p2))(*)(GameLevelManager*, int, int, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2527b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1, p2);
}

auto GameLevelManager::updateUserScore() -> decltype(updateUserScore()) {
	using FunctionType = decltype(updateUserScore())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x236270, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::uploadComment(std::string content, CommentType type, int levelID, int percent) -> decltype(uploadComment(content, type, levelID, percent)) {
	using FunctionType = decltype(uploadComment(content, type, levelID, percent))(*)(GameLevelManager*, std::string, CommentType, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x23e350, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, content, type, levelID, percent);
}

auto GameLevelManager::uploadDeathData() -> decltype(uploadDeathData()) {
	using FunctionType = decltype(uploadDeathData())(*)(GameLevelManager*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2266f0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GameLevelManager::uploadFriendRequest(int accountID, std::string content) -> decltype(uploadFriendRequest(accountID, content)) {
	using FunctionType = decltype(uploadFriendRequest(accountID, content))(*)(GameLevelManager*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x254ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, accountID, content);
}

auto GameLevelManager::uploadLevel(GJGameLevel* level) -> decltype(uploadLevel(level)) {
	using FunctionType = decltype(uploadLevel(level))(*)(GameLevelManager*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x229310, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GameLevelManager::uploadLevelControls(int p0, std::string p1) -> decltype(uploadLevelControls(p0, p1)) {
	using FunctionType = decltype(uploadLevelControls(p0, p1))(*)(GameLevelManager*, int, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x258ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GameLevelManager::uploadLevelList(GJLevelList* list) -> decltype(uploadLevelList(list)) {
	using FunctionType = decltype(uploadLevelList(list))(*)(GameLevelManager*, GJLevelList*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22d010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, list);
}

auto GameLevelManager::userNameForUserID(int id) -> decltype(userNameForUserID(id)) {
	using FunctionType = decltype(userNameForUserID(id))(*)(GameLevelManager*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x21d7e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, id);
}

auto GameLevelManager::verifyContainerOnlyHasLevels(cocos2d::CCDictionary* dict) -> decltype(verifyContainerOnlyHasLevels(dict)) {
	using FunctionType = decltype(verifyContainerOnlyHasLevels(dict))(*)(GameLevelManager*, cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x224e80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GameLevelManager::writeSpecialFilters(GJSearchObject* object) -> decltype(writeSpecialFilters(object)) {
	using FunctionType = decltype(writeSpecialFilters(object))(*)(GameLevelManager*, GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x22a8b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, object);
}
