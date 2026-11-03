#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundsSettingsPopup.hpp>
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearAll
		#define GEODE_STATICS_onClearAll
		GEODE_AS_STATIC_FUNCTION(onClearAll) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDownloadAll
		#define GEODE_STATICS_onDownloadAll
		GEODE_AS_STATIC_FUNCTION(onDownloadAll) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearAll
		#define GEODE_CONCEPT_CHECK_onClearAll
		GEODE_CONCEPT_FUNCTION_CHECK(onClearAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadAll
		#define GEODE_CONCEPT_CHECK_onDownloadAll
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadAll) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundsSettingsPopup> : ModifyBase<ModifyDerive<Der, EditorSoundsSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundsSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundsSettingsPopup>>::ModifyBase;
		using Base = EditorSoundsSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5a3f0, Thiscall, EditorSoundsSettingsPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundsSettingsPopup, create, EditorSoundsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f90, Thiscall, EditorSoundsSettingsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5130, Thiscall, EditorSoundsSettingsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4970, Thiscall, EditorSoundsSettingsPopup, init, EditorSoundsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4ff0, Thiscall, EditorSoundsSettingsPopup, onClearAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f60, Thiscall, EditorSoundsSettingsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4dc0, Thiscall, EditorSoundsSettingsPopup, onDownloadAll, cocos2d::CCObject*)
		}
	};
}
