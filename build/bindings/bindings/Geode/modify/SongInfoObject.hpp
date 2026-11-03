#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongInfoObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_addSongLink
		#define GEODE_STATICS_addSongLink
		GEODE_AS_STATIC_FUNCTION(addSongLink) 
	#endif

	#ifndef GEODE_STATICS_addTags
		#define GEODE_STATICS_addTags
		GEODE_AS_STATIC_FUNCTION(addTags) 
	#endif

	#ifndef GEODE_STATICS_getArtistLinks
		#define GEODE_STATICS_getArtistLinks
		GEODE_AS_STATIC_FUNCTION(getArtistLinks) 
	#endif

	#ifndef GEODE_STATICS_getArtistNames
		#define GEODE_STATICS_getArtistNames
		GEODE_AS_STATIC_FUNCTION(getArtistNames) 
	#endif

	#ifndef GEODE_STATICS_getExtraArtistCount
		#define GEODE_STATICS_getExtraArtistCount
		GEODE_AS_STATIC_FUNCTION(getExtraArtistCount) 
	#endif

	#ifndef GEODE_STATICS_getSongLinks
		#define GEODE_STATICS_getSongLinks
		GEODE_AS_STATIC_FUNCTION(getSongLinks) 
	#endif

	#ifndef GEODE_STATICS_getTagsString
		#define GEODE_STATICS_getTagsString
		GEODE_AS_STATIC_FUNCTION(getTagsString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setArtistLinks
		#define GEODE_STATICS_setArtistLinks
		GEODE_AS_STATIC_FUNCTION(setArtistLinks) 
	#endif

	#ifndef GEODE_STATICS_setSongLinks
		#define GEODE_STATICS_setSongLinks
		GEODE_AS_STATIC_FUNCTION(setSongLinks) 
	#endif

	#ifndef GEODE_STATICS_updateArtists
		#define GEODE_STATICS_updateArtists
		GEODE_AS_STATIC_FUNCTION(updateArtists) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addArtistLink
		#define GEODE_CONCEPT_CHECK_addArtistLink
		GEODE_CONCEPT_FUNCTION_CHECK(addArtistLink) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSongLink
		#define GEODE_CONCEPT_CHECK_addSongLink
		GEODE_CONCEPT_FUNCTION_CHECK(addSongLink) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTags
		#define GEODE_CONCEPT_CHECK_addTags
		GEODE_CONCEPT_FUNCTION_CHECK(addTags) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_containsTag
		#define GEODE_CONCEPT_CHECK_containsTag
		GEODE_CONCEPT_FUNCTION_CHECK(containsTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyValues
		#define GEODE_CONCEPT_CHECK_copyValues
		GEODE_CONCEPT_FUNCTION_CHECK(copyValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getArtistLinks
		#define GEODE_CONCEPT_CHECK_getArtistLinks
		GEODE_CONCEPT_FUNCTION_CHECK(getArtistLinks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getArtistNames
		#define GEODE_CONCEPT_CHECK_getArtistNames
		GEODE_CONCEPT_FUNCTION_CHECK(getArtistNames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getExtraArtistCount
		#define GEODE_CONCEPT_CHECK_getExtraArtistCount
		GEODE_CONCEPT_FUNCTION_CHECK(getExtraArtistCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongLinks
		#define GEODE_CONCEPT_CHECK_getSongLinks
		GEODE_CONCEPT_FUNCTION_CHECK(getSongLinks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTagsString
		#define GEODE_CONCEPT_CHECK_getTagsString
		GEODE_CONCEPT_FUNCTION_CHECK(getTagsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setArtistLinks
		#define GEODE_CONCEPT_CHECK_setArtistLinks
		GEODE_CONCEPT_FUNCTION_CHECK(setArtistLinks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSongLinks
		#define GEODE_CONCEPT_CHECK_setSongLinks
		GEODE_CONCEPT_FUNCTION_CHECK(setSongLinks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateArtists
		#define GEODE_CONCEPT_CHECK_updateArtists
		GEODE_CONCEPT_FUNCTION_CHECK(updateArtists) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongInfoObject> : ModifyBase<ModifyDerive<Der, SongInfoObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongInfoObject>>;
		using ModifyBase<ModifyDerive<Der, SongInfoObject>>::ModifyBase;
		using Base = SongInfoObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x480a20, Thiscall, SongInfoObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x494330, Default, SongInfoObject, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4941e0, Default, SongInfoObject, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4952a0, Default, SongInfoObject, create, int, std::string, std::string, int, float, std::string, int, std::string, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x495750, Default, SongInfoObject, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x495f40, Thiscall, SongInfoObject, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongInfoObject, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongInfoObject, addArtistLink, GJLinkObject const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4969b0, Thiscall, SongInfoObject, addSongLink, GJLinkObject const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x497150, Thiscall, SongInfoObject, addTags, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongInfoObject, containsTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongInfoObject, copyValues, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x496d80, Thiscall, SongInfoObject, getArtistLinks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4962c0, Thiscall, SongInfoObject, getArtistNames, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x496750, Thiscall, SongInfoObject, getExtraArtistCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x496ad0, Thiscall, SongInfoObject, getSongLinks, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x497380, Thiscall, SongInfoObject, getTagsString, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x495460, Thiscall, SongInfoObject, init, int, std::string, std::string, int, float, std::string, int, std::string, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x496860, Thiscall, SongInfoObject, setArtistLinks, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4967c0, Thiscall, SongInfoObject, setSongLinks, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x496120, Thiscall, SongInfoObject, updateArtists, std::string)
		}
	};
}
