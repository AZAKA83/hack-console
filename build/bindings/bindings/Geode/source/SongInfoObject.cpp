
#include <stdexcept>
#include <Geode/utils/addresser.hpp>
#include <Geode/modify/Traits.hpp>
#include <Geode/loader/Tulip.hpp>
#include <Geode/binding/SongInfoObject.hpp>

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

SongInfoObject::~SongInfoObject() {
	// basically we destruct it once by calling the gd function,
	// then lock it, so that other gd destructors dont get called
	if (!geode::DestructorLock::isLocked(this)) {
		using FunctionType = void(*)(SongInfoObject*);
		static auto func = wrapFunction<FunctionType>(base::get() + 0x480a20, tulip::hook::TulipConvention::Thiscall);
		reinterpret_cast<FunctionType>(func)(this);

		// we need to construct it back so that it uhhh ummm doesnt crash
		// while going to the child destructors
		auto thing = new (this) SongInfoObject(geode::CutoffConstructor, sizeof(SongInfoObject));
		geode::DestructorLock::addLock(this);
	}
}

auto SongInfoObject::create(cocos2d::CCDictionary* dict) -> decltype(create(dict)) {
	using FunctionType = decltype(create(dict))(*)(cocos2d::CCDictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x494330, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto SongInfoObject::create(int songID) -> decltype(create(songID)) {
	using FunctionType = decltype(create(songID))(*)(int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4941e0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID);
}

auto SongInfoObject::create(int songID, std::string songName, std::string artistName, int artistID, float fileSize, std::string songUrl, int nongType, std::string extraArtistIDs, bool isNew, int libraryOrder, int priority) -> decltype(create(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority)) {
	using FunctionType = decltype(create(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority))(*)(int, std::string, std::string, int, float, std::string, int, std::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4952a0, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority);
}

auto SongInfoObject::createWithCoder(DS_Dictionary* dict) -> decltype(createWithCoder(dict)) {
	using FunctionType = decltype(createWithCoder(dict))(*)(DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495750, tulip::hook::TulipConvention::Default);
	return reinterpret_cast<FunctionType>(func)(dict);
}

auto SongInfoObject::encodeWithCoder(DS_Dictionary* dict) -> decltype(encodeWithCoder(dict)) {
	auto self = addresser::thunkAdjust(Resolve<DS_Dictionary*>::func(&SongInfoObject::encodeWithCoder), this);
	using FunctionType = decltype(encodeWithCoder(dict))(*)(SongInfoObject*, DS_Dictionary*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495f40, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(self, dict);
}

auto SongInfoObject::addSongLink(GJLinkObject const& link) -> decltype(addSongLink(link)) {
	using FunctionType = decltype(addSongLink(link))(*)(SongInfoObject*, GJLinkObject const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4969b0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, link);
}

auto SongInfoObject::addTags(std::string tags) -> decltype(addTags(tags)) {
	using FunctionType = decltype(addTags(tags))(*)(SongInfoObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x497150, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, tags);
}

auto SongInfoObject::getArtistLinks() -> decltype(getArtistLinks()) {
	using FunctionType = decltype(getArtistLinks())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x496d80, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getArtistNames(int unused) -> decltype(getArtistNames(unused)) {
	using FunctionType = decltype(getArtistNames(unused))(*)(SongInfoObject*, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4962c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, unused);
}

auto SongInfoObject::getExtraArtistCount() -> decltype(getExtraArtistCount()) {
	using FunctionType = decltype(getExtraArtistCount())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x496750, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getSongLinks() -> decltype(getSongLinks()) {
	using FunctionType = decltype(getSongLinks())(*)(SongInfoObject*);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x496ad0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this);
}

auto SongInfoObject::getTagsString(bool shortTags) -> decltype(getTagsString(shortTags)) {
	using FunctionType = decltype(getTagsString(shortTags))(*)(SongInfoObject*, bool);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x497380, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, shortTags);
}

auto SongInfoObject::init(int songID, std::string songName, std::string artistName, int artistID, float fileSize, std::string songUrl, int nongType, std::string extraArtistIDs, bool isNew, int libraryOrder, int priority) -> decltype(init(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority)) {
	using FunctionType = decltype(init(songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority))(*)(SongInfoObject*, int, std::string, std::string, int, float, std::string, int, std::string, bool, int, int);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x495460, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, songID, songName, artistName, artistID, fileSize, songUrl, nongType, extraArtistIDs, isNew, libraryOrder, priority);
}

auto SongInfoObject::setArtistLinks(std::string const& links) -> decltype(setArtistLinks(links)) {
	using FunctionType = decltype(setArtistLinks(links))(*)(SongInfoObject*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x496860, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, links);
}

auto SongInfoObject::setSongLinks(std::string const& links) -> decltype(setSongLinks(links)) {
	using FunctionType = decltype(setSongLinks(links))(*)(SongInfoObject*, std::string const&);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x4967c0, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, links);
}

auto SongInfoObject::updateArtists(std::string artists) -> decltype(updateArtists(artists)) {
	using FunctionType = decltype(updateArtists(artists))(*)(SongInfoObject*, std::string);
	static auto func = wrapFunction<FunctionType>(base::get() + 0x496120, tulip::hook::TulipConvention::Thiscall);
	return reinterpret_cast<FunctionType>(func)(this, artists);
}
