#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AutoBackupOptionsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onDeleteAll
		#define GEODE_STATICS_onDeleteAll
		GEODE_AS_STATIC_FUNCTION(onDeleteAll) 
	#endif

	#ifndef GEODE_STATICS_onPrune
		#define GEODE_STATICS_onPrune
		GEODE_AS_STATIC_FUNCTION(onPrune) 
	#endif

	#ifndef GEODE_STATICS_refreshStats
		#define GEODE_STATICS_refreshStats
		GEODE_AS_STATIC_FUNCTION(refreshStats) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteAll
		#define GEODE_CONCEPT_CHECK_onDeleteAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrune
		#define GEODE_CONCEPT_CHECK_onPrune
		GEODE_CONCEPT_FUNCTION_CHECK(onPrune) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshStats
		#define GEODE_CONCEPT_CHECK_refreshStats
		GEODE_CONCEPT_FUNCTION_CHECK(refreshStats) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AutoBackupOptionsPopup> : ModifyBase<ModifyDerive<Der, AutoBackupOptionsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AutoBackupOptionsPopup>>;
		using ModifyBase<ModifyDerive<Der, AutoBackupOptionsPopup>>::ModifyBase;
		using Base = AutoBackupOptionsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x60ac50, Thiscall, AutoBackupOptionsPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupOptionsPopup, create, AutoBackupOptionsDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xce2a0, Thiscall, AutoBackupOptionsPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xce270, Thiscall, AutoBackupOptionsPopup, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcf000, Thiscall, AutoBackupOptionsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcda10, Thiscall, AutoBackupOptionsPopup, init, AutoBackupOptionsDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcea60, Thiscall, AutoBackupOptionsPopup, onDeleteAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xce640, Thiscall, AutoBackupOptionsPopup, onPrune, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupOptionsPopup, refreshStats, )
		}
	};
}
