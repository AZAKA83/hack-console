#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundConfigCell.hpp>
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

	#ifndef GEODE_STATICS_loadFromConfig
		#define GEODE_STATICS_loadFromConfig
		GEODE_AS_STATIC_FUNCTION(loadFromConfig) 
	#endif

	#ifndef GEODE_STATICS_onInfoPopup
		#define GEODE_STATICS_onInfoPopup
		GEODE_AS_STATIC_FUNCTION(onInfoPopup) 
	#endif

	#ifndef GEODE_STATICS_onView
		#define GEODE_STATICS_onView
		GEODE_AS_STATIC_FUNCTION(onView) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromConfig
		#define GEODE_CONCEPT_CHECK_loadFromConfig
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfoPopup
		#define GEODE_CONCEPT_CHECK_onInfoPopup
		GEODE_CONCEPT_FUNCTION_CHECK(onInfoPopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onView
		#define GEODE_CONCEPT_CHECK_onView
		GEODE_CONCEPT_FUNCTION_CHECK(onView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundConfigCell> : ModifyBase<ModifyDerive<Der, EditorSoundConfigCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundConfigCell>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundConfigCell>>::ModifyBase;
		using Base = EditorSoundConfigCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x190600, Thiscall, EditorSoundConfigCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x190690, Thiscall, EditorSoundConfigCell)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundConfigCell, create, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff70, Thiscall, EditorSoundConfigCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190730, Thiscall, EditorSoundConfigCell, loadFromConfig, GJEditorSoundConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1919e0, Thiscall, EditorSoundConfigCell, onInfoPopup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x191970, Thiscall, EditorSoundConfigCell, onView, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1919a0, Thiscall, EditorSoundConfigCell, onViewProfile, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundConfigCell, updateBGColor, int)
		}
	};
}
