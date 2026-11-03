#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongInfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_addLinkRows
		#define GEODE_STATICS_addLinkRows
		GEODE_AS_STATIC_FUNCTION(addLinkRows) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBPM
		#define GEODE_STATICS_onBPM
		GEODE_AS_STATIC_FUNCTION(onBPM) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCopySongID
		#define GEODE_STATICS_onCopySongID
		GEODE_AS_STATIC_FUNCTION(onCopySongID) 
	#endif

	#ifndef GEODE_STATICS_onLink
		#define GEODE_STATICS_onLink
		GEODE_AS_STATIC_FUNCTION(onLink) 
	#endif

	#ifndef GEODE_STATICS_onMenuMusic
		#define GEODE_STATICS_onMenuMusic
		GEODE_AS_STATIC_FUNCTION(onMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_onPracticeMusic
		#define GEODE_STATICS_onPracticeMusic
		GEODE_AS_STATIC_FUNCTION(onPracticeMusic) 
	#endif

	#ifndef GEODE_STATICS_onSongUsage
		#define GEODE_STATICS_onSongUsage
		GEODE_AS_STATIC_FUNCTION(onSongUsage) 
	#endif

	#ifndef GEODE_STATICS_showCustomMusicUnlockInfo
		#define GEODE_STATICS_showCustomMusicUnlockInfo
		GEODE_AS_STATIC_FUNCTION(showCustomMusicUnlockInfo) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addLinkRows
		#define GEODE_CONCEPT_CHECK_addLinkRows
		GEODE_CONCEPT_FUNCTION_CHECK(addLinkRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBPM
		#define GEODE_CONCEPT_CHECK_onBPM
		GEODE_CONCEPT_FUNCTION_CHECK(onBPM) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopySongID
		#define GEODE_CONCEPT_CHECK_onCopySongID
		GEODE_CONCEPT_FUNCTION_CHECK(onCopySongID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLink
		#define GEODE_CONCEPT_CHECK_onLink
		GEODE_CONCEPT_FUNCTION_CHECK(onLink) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMenuMusic
		#define GEODE_CONCEPT_CHECK_onMenuMusic
		GEODE_CONCEPT_FUNCTION_CHECK(onMenuMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPracticeMusic
		#define GEODE_CONCEPT_CHECK_onPracticeMusic
		GEODE_CONCEPT_FUNCTION_CHECK(onPracticeMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSongUsage
		#define GEODE_CONCEPT_CHECK_onSongUsage
		GEODE_CONCEPT_FUNCTION_CHECK(onSongUsage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showCustomMusicUnlockInfo
		#define GEODE_CONCEPT_CHECK_showCustomMusicUnlockInfo
		GEODE_CONCEPT_FUNCTION_CHECK(showCustomMusicUnlockInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongInfoLayer> : ModifyBase<ModifyDerive<Der, SongInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, SongInfoLayer>>::ModifyBase;
		using Base = SongInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x633980, Thiscall, SongInfoLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6346c0, Default, SongInfoLayer, create, SongInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x634300, Default, SongInfoLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x634980, Default, SongInfoLayer, create, std::string, std::string, std::vector<GJLinkObject>, std::vector<GJLinkObject>, int, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f90, Thiscall, SongInfoLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6363d0, Thiscall, SongInfoLayer, addLinkRows, std::vector<GJLinkObject> const&, float, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x634c10, Thiscall, SongInfoLayer, init, std::string, std::string, std::vector<GJLinkObject>, std::vector<GJLinkObject>, int, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x636750, Thiscall, SongInfoLayer, onBPM, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f60, Thiscall, SongInfoLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x635b70, Thiscall, SongInfoLayer, onCopySongID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6366e0, Thiscall, SongInfoLayer, onLink, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x636230, Thiscall, SongInfoLayer, onMenuMusic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x636300, Thiscall, SongInfoLayer, onPracticeMusic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x636800, Thiscall, SongInfoLayer, onSongUsage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x635c60, Thiscall, SongInfoLayer, showCustomMusicUnlockInfo, )
		}
	};
}
