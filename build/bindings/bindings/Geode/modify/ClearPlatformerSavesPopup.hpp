#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ClearPlatformerSavesPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onIncludeFavoritesToggle
		#define GEODE_STATICS_onIncludeFavoritesToggle
		GEODE_AS_STATIC_FUNCTION(onIncludeFavoritesToggle) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_updateStats
		#define GEODE_STATICS_updateStats
		GEODE_AS_STATIC_FUNCTION(updateStats) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onIncludeFavoritesToggle
		#define GEODE_CONCEPT_CHECK_onIncludeFavoritesToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onIncludeFavoritesToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStats
		#define GEODE_CONCEPT_CHECK_updateStats
		GEODE_CONCEPT_FUNCTION_CHECK(updateStats) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ClearPlatformerSavesPopup> : ModifyBase<ModifyDerive<Der, ClearPlatformerSavesPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ClearPlatformerSavesPopup>>;
		using ModifyBase<ModifyDerive<Der, ClearPlatformerSavesPopup>>::ModifyBase;
		using Base = ClearPlatformerSavesPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xa3130, Thiscall, ClearPlatformerSavesPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ClearPlatformerSavesPopup, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa31f0, Thiscall, ClearPlatformerSavesPopup, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f90, Thiscall, ClearPlatformerSavesPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa4240, Thiscall, ClearPlatformerSavesPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f60, Thiscall, ClearPlatformerSavesPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa4000, Thiscall, ClearPlatformerSavesPopup, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa3ea0, Thiscall, ClearPlatformerSavesPopup, onIncludeFavoritesToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa3ec0, Thiscall, ClearPlatformerSavesPopup, onOptions, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ClearPlatformerSavesPopup, updateStats, )
		}
	};
}
