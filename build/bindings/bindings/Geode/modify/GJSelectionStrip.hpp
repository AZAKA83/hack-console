#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSelectionStrip.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_addAction
		#define GEODE_STATICS_addAction
		GEODE_AS_STATIC_FUNCTION(addAction) 
	#endif

	#ifndef GEODE_STATICS_addButton
		#define GEODE_STATICS_addButton
		GEODE_AS_STATIC_FUNCTION(addButton) 
	#endif

	#ifndef GEODE_STATICS_addCountLabel
		#define GEODE_STATICS_addCountLabel
		GEODE_AS_STATIC_FUNCTION(addCountLabel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_setCount
		#define GEODE_STATICS_setCount
		GEODE_AS_STATIC_FUNCTION(setCount) 
	#endif

	#ifndef GEODE_STATICS_setStripVisible
		#define GEODE_STATICS_setStripVisible
		GEODE_AS_STATIC_FUNCTION(setStripVisible) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addAction
		#define GEODE_CONCEPT_CHECK_addAction
		GEODE_CONCEPT_FUNCTION_CHECK(addAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addButton
		#define GEODE_CONCEPT_CHECK_addButton
		GEODE_CONCEPT_FUNCTION_CHECK(addButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCountLabel
		#define GEODE_CONCEPT_CHECK_addCountLabel
		GEODE_CONCEPT_FUNCTION_CHECK(addCountLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCount
		#define GEODE_CONCEPT_CHECK_setCount
		GEODE_CONCEPT_FUNCTION_CHECK(setCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStripVisible
		#define GEODE_CONCEPT_CHECK_setStripVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setStripVisible) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSelectionStrip> : ModifyBase<ModifyDerive<Der, GJSelectionStrip>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSelectionStrip>>;
		using ModifyBase<ModifyDerive<Der, GJSelectionStrip>>::ModifyBase;
		using Base = GJSelectionStrip;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3a8f90, Thiscall, GJSelectionStrip)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSelectionStrip, create, cocos2d::CCMenu*, cocos2d::CCNode*, cocos2d::CCPoint, float, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSelectionStrip, addAction, char const*, float, cocos2d::SEL_MenuHandler, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSelectionStrip, addButton, char const*, float, cocos2d::SEL_MenuHandler, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSelectionStrip, addCountLabel, float, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSelectionStrip, init, cocos2d::CCMenu*, cocos2d::CCNode*, cocos2d::CCPoint, float, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSelectionStrip, setCount, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSelectionStrip, setStripVisible, bool)
		}
	};
}
