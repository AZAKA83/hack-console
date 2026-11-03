
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/GJSearchObject.hpp>

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

GJSearchObject::~GJSearchObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(GJSearchObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x218e00, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) GJSearchObject(geode::CutoffConstructor, sizeof(GJSearchObject));
		geode::DestructorLock::addLock(this);
	}
}

auto GJSearchObject::create(SearchType searchType) -> decltype(create(searchType)) {
	using FunctionType = decltype(create(searchType))(*)(SearchType);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26fc30, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(searchType);
}

auto GJSearchObject::create(SearchType searchType, std::string searchQuery) -> decltype(create(searchType, searchQuery)) {
	using FunctionType = decltype(create(searchType, searchQuery))(*)(SearchType, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26fd10, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(searchType, searchQuery);
}

auto GJSearchObject::create(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode) -> decltype(create(searchType, searchQuery, difficulty, length, page, star, uncompleted, featured, songID, original, twoPlayer, customSong, songFilter, noStar, coins, epic, legendary, mythic, onlyCompleted, demonFilter, folder, searchMode)) {
	using FunctionType = decltype(create(searchType, searchQuery, difficulty, length, page, star, uncompleted, featured, songID, original, twoPlayer, customSong, songFilter, noStar, coins, epic, legendary, mythic, onlyCompleted, demonFilter, folder, searchMode))(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26fe40, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(searchType, searchQuery, difficulty, length, page, star, uncompleted, featured, songID, original, twoPlayer, customSong, songFilter, noStar, coins, epic, legendary, mythic, onlyCompleted, demonFilter, folder, searchMode);
}

auto GJSearchObject::createFromKey(char const* key) -> decltype(createFromKey(key)) {
	using FunctionType = decltype(createFromKey(key))(*)(char const*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x26f4f0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(key);
}

auto GJSearchObject::getSearchKey(SearchType searchType, std::string searchQuery, std::string difficulty, std::string length, int page, bool star, bool uncompleted, bool featured, int songID, bool original, bool twoPlayer, bool customSong, bool songFilter, bool noStar, bool coins, bool epic, bool legendary, bool mythic, bool onlyCompleted, int demonFilter, int folder, int searchMode) -> decltype(getSearchKey(searchType, searchQuery, difficulty, length, page, star, uncompleted, featured, songID, original, twoPlayer, customSong, songFilter, noStar, coins, epic, legendary, mythic, onlyCompleted, demonFilter, folder, searchMode)) {
	using FunctionType = decltype(getSearchKey(searchType, searchQuery, difficulty, length, page, star, uncompleted, featured, songID, original, twoPlayer, customSong, songFilter, noStar, coins, epic, legendary, mythic, onlyCompleted, demonFilter, folder, searchMode))(*)(SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x270440, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(searchType, searchQuery, difficulty, length, page, star, uncompleted, featured, songID, original, twoPlayer, customSong, songFilter, noStar, coins, epic, legendary, mythic, onlyCompleted, demonFilter, folder, searchMode);
}

auto GJSearchObject::getKey() -> decltype(getKey()) {
	using FunctionType = decltype(getKey())(*)(GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x270180, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto GJSearchObject::getPageObject(int page) -> decltype(getPageObject(page)) {
	using FunctionType = decltype(getPageObject(page))(*)(GJSearchObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2702d0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, page);
}

auto GJSearchObject::isLevelSearchObject() -> decltype(isLevelSearchObject()) {
	using FunctionType = decltype(isLevelSearchObject())(*)(GJSearchObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x2709b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}
