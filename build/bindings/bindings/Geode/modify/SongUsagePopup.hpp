#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongUsagePopup.hpp>
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

	#ifndef GEODE_STATICS_songUsageFinished
		#define GEODE_STATICS_songUsageFinished
		GEODE_AS_STATIC_FUNCTION(songUsageFinished) 
	#endif

	#ifndef GEODE_STATICS_songUsageFailed
		#define GEODE_STATICS_songUsageFailed
		GEODE_AS_STATIC_FUNCTION(songUsageFailed) 
	#endif

	#ifndef GEODE_STATICS_buildStatRow
		#define GEODE_STATICS_buildStatRow
		GEODE_AS_STATIC_FUNCTION(buildStatRow) 
	#endif

	#ifndef GEODE_STATICS_buildUsageGrid
		#define GEODE_STATICS_buildUsageGrid
		GEODE_AS_STATIC_FUNCTION(buildUsageGrid) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_layoutPopup
		#define GEODE_STATICS_layoutPopup
		GEODE_AS_STATIC_FUNCTION(layoutPopup) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_showStatus
		#define GEODE_STATICS_showStatus
		GEODE_AS_STATIC_FUNCTION(showStatus) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songUsageFinished
		#define GEODE_CONCEPT_CHECK_songUsageFinished
		GEODE_CONCEPT_FUNCTION_CHECK(songUsageFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songUsageFailed
		#define GEODE_CONCEPT_CHECK_songUsageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(songUsageFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildStatRow
		#define GEODE_CONCEPT_CHECK_buildStatRow
		GEODE_CONCEPT_FUNCTION_CHECK(buildStatRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildUsageGrid
		#define GEODE_CONCEPT_CHECK_buildUsageGrid
		GEODE_CONCEPT_FUNCTION_CHECK(buildUsageGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutPopup
		#define GEODE_CONCEPT_CHECK_layoutPopup
		GEODE_CONCEPT_FUNCTION_CHECK(layoutPopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showStatus
		#define GEODE_CONCEPT_CHECK_showStatus
		GEODE_CONCEPT_FUNCTION_CHECK(showStatus) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongUsagePopup> : ModifyBase<ModifyDerive<Der, SongUsagePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongUsagePopup>>;
		using ModifyBase<ModifyDerive<Der, SongUsagePopup>>::ModifyBase;
		using Base = SongUsagePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x101c00, Thiscall, SongUsagePopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101d30, Default, SongUsagePopup, create, int, std::string const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f90, Thiscall, SongUsagePopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102570, Thiscall, SongUsagePopup, songUsageFinished, int, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x102ff0, Thiscall, SongUsagePopup, songUsageFailed, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongUsagePopup, buildStatRow, std::string const*, std::string const*, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x103030, Thiscall, SongUsagePopup, buildUsageGrid, std::vector<SongUsageEntry> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x101e80, Thiscall, SongUsagePopup, init, int, std::string const&, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongUsagePopup, layoutPopup, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f60, Thiscall, SongUsagePopup, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SongUsagePopup, showStatus, char const*)
		}
	};
}
