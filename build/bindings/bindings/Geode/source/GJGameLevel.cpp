
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJGameLevel.hpp>

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

GJGameLevel::GJGameLevel() : GJGameLevel(geode::CutoffConstructor, sizeof(GJGameLevel)) {
	// here we construct it as normal as we can, then destruct it
	// using the generated functions. this ensures no memory gets leaked
	// no crashes :pray:
	geode::DestructorLock::addLock(this);
	GJGameLevel::~GJGameLevel();

	using FunctionType = void(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x217820, tulip::hook::TulipConvention::Thiscall);
	reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::create(cocos2d::CCDictionary* dict, bool download) -> decltype(create(dict, download)) {
	using FunctionType = decltype(create(dict, download))(*)(cocos2d::CCDictionary*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x261d00, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict, download);
}

auto GJGameLevel::lengthKeyToString(int key) -> decltype(lengthKeyToString(key)) {
	using FunctionType = decltype(lengthKeyToString(key))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2644c0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJGameLevel::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&GJGameLevel::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(GJGameLevel*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2690c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto GJGameLevel::init() -> decltype(init()) {
	auto self = addresser::thunkAdjust(Resolve<>::func(&GJGameLevel::init), this);
	using FunctionType = decltype(init())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x263ed0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self);
}

auto GJGameLevel::areCoinsVerified() -> decltype(areCoinsVerified()) {
	using FunctionType = decltype(areCoinsVerified())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26add0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::clearPlatformerSave() -> decltype(clearPlatformerSave()) {
	using FunctionType = decltype(clearPlatformerSave())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2640e0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::copyLevelInfo(GJGameLevel* level) -> decltype(copyLevelInfo(level)) {
	using FunctionType = decltype(copyLevelInfo(level))(*)(GJGameLevel*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x267010, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJGameLevel::createFromFullSaveString(std::string const& p0) -> decltype(createFromFullSaveString(p0)) {
	using FunctionType = decltype(createFromFullSaveString(p0))(*)(GJGameLevel*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26a560, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0);
}

auto GJGameLevel::dataLoaded(DS_Dictionary* dict) -> decltype(dataLoaded(dict)) {
	using FunctionType = decltype(dataLoaded(dict))(*)(GJGameLevel*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x267a10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, dict);
}

auto GJGameLevel::duplicate() -> decltype(duplicate()) {
	using FunctionType = decltype(duplicate())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x263800, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getAudioFileName() -> decltype(getAudioFileName()) {
	using FunctionType = decltype(getAudioFileName())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x264790, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getCoinKey(int coinNumber) -> decltype(getCoinKey(coinNumber)) {
	using FunctionType = decltype(getCoinKey(coinNumber))(*)(GJGameLevel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x264610, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, coinNumber);
}

auto GJGameLevel::getCoinKey(int p0, int p1) -> decltype(getCoinKey(p0, p1)) {
	using FunctionType = decltype(getCoinKey(p0, p1))(*)(GJGameLevel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x264630, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, p0, p1);
}

auto GJGameLevel::getLastBuildPageForTab(int tab) -> decltype(getLastBuildPageForTab(tab)) {
	using FunctionType = decltype(getLastBuildPageForTab(tab))(*)(GJGameLevel*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2646a0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tab);
}

auto GJGameLevel::getListSnapshot() -> decltype(getListSnapshot()) {
	using FunctionType = decltype(getListSnapshot())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x267680, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::getSongName() -> decltype(getSongName()) {
	using FunctionType = decltype(getSongName())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x264890, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::handleStatsConflict(GJGameLevel* level) -> decltype(handleStatsConflict(level)) {
	using FunctionType = decltype(handleStatsConflict(level))(*)(GJGameLevel*, GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26a650, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, level);
}

auto GJGameLevel::rollSession(int now, int gapSeconds) -> decltype(rollSession(now, gapSeconds)) {
	using FunctionType = decltype(rollSession(now, gapSeconds))(*)(GJGameLevel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x265e30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, now, gapSeconds);
}

auto GJGameLevel::saveNewScore(int value, int type, int ticks, int clicks, int coins, std::string inputs, bool save) -> decltype(saveNewScore(value, type, ticks, clicks, coins, inputs, save)) {
	using FunctionType = decltype(saveNewScore(value, type, ticks, clicks, coins, inputs, save))(*)(GJGameLevel*, int, int, int, int, int, std::string, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x264b10, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, type, ticks, clicks, coins, inputs, save);
}

auto GJGameLevel::savePercentage(int percent, bool isPracticeMode, int clicks, int attempts, bool isChkValid) -> decltype(savePercentage(percent, isPracticeMode, clicks, attempts, isChkValid)) {
	using FunctionType = decltype(savePercentage(percent, isPracticeMode, clicks, attempts, isChkValid))(*)(GJGameLevel*, int, bool, int, int, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2641b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, percent, isPracticeMode, clicks, attempts, isChkValid);
}

auto GJGameLevel::scoreStringToVector(std::string& str, std::vector<int>& vec) -> decltype(scoreStringToVector(str, vec)) {
	using FunctionType = decltype(scoreStringToVector(str, vec))(*)(GJGameLevel*, std::string&, std::vector<int>&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x264f80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, str, vec);
}

auto GJGameLevel::shippedControls() const  -> decltype(shippedControls()) {
	using FunctionType = decltype(shippedControls())(*)(GJGameLevel const *);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x266530, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJGameLevel::storeNewLocalScore(int value, int type) -> decltype(storeNewLocalScore(value, type)) {
	using FunctionType = decltype(storeNewLocalScore(value, type))(*)(GJGameLevel*, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x264ce0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, value, type);
}

auto GJGameLevel::unverifyCoins() -> decltype(unverifyCoins()) {
	using FunctionType = decltype(unverifyCoins())(*)(GJGameLevel*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26ae30, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
