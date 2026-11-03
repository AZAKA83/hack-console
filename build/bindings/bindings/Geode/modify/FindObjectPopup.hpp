#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FindObjectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_onBuildWindowContent
		#define GEODE_STATICS_onBuildWindowContent
		GEODE_AS_STATIC_FUNCTION(onBuildWindowContent) 
	#endif

	#ifndef GEODE_STATICS_onFieldEnter
		#define GEODE_STATICS_onFieldEnter
		GEODE_AS_STATIC_FUNCTION(onFieldEnter) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onFindStep
		#define GEODE_STATICS_onFindStep
		GEODE_AS_STATIC_FUNCTION(onFindStep) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onSelect
		#define GEODE_STATICS_onSelect
		GEODE_AS_STATIC_FUNCTION(onSelect) 
	#endif

	#ifndef GEODE_STATICS_runFind
		#define GEODE_STATICS_runFind
		GEODE_AS_STATIC_FUNCTION(runFind) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBuildWindowContent
		#define GEODE_CONCEPT_CHECK_onBuildWindowContent
		GEODE_CONCEPT_FUNCTION_CHECK(onBuildWindowContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFieldEnter
		#define GEODE_CONCEPT_CHECK_onFieldEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onFieldEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFindStep
		#define GEODE_CONCEPT_CHECK_onFindStep
		GEODE_CONCEPT_FUNCTION_CHECK(onFindStep) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelect
		#define GEODE_CONCEPT_CHECK_onSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runFind
		#define GEODE_CONCEPT_CHECK_runFind
		GEODE_CONCEPT_FUNCTION_CHECK(runFind) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FindObjectPopup> : ModifyBase<ModifyDerive<Der, FindObjectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FindObjectPopup>>;
		using ModifyBase<ModifyDerive<Der, FindObjectPopup>>::ModifyBase;
		using Base = FindObjectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x180260, Thiscall, FindObjectPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FindObjectPopup, create, EditorUI*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1809e0, Thiscall, FindObjectPopup, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x180330, Thiscall, FindObjectPopup, onBuildWindowContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x180a90, Thiscall, FindObjectPopup, onFieldEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FindObjectPopup, init, EditorUI*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x180aa0, Thiscall, FindObjectPopup, onFindStep, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x180ad0, Thiscall, FindObjectPopup, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x180a90, Thiscall, FindObjectPopup, onSelect, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FindObjectPopup, runFind, int)
		}
	};
}
