#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupInstantCountPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_determineStartValues
		#define GEODE_STATICS_determineStartValues
		GEODE_AS_STATIC_FUNCTION(determineStartValues) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCountType
		#define GEODE_STATICS_onCountType
		GEODE_AS_STATIC_FUNCTION(onCountType) 
	#endif

	#ifndef GEODE_STATICS_onEnableGroup
		#define GEODE_STATICS_onEnableGroup
		GEODE_AS_STATIC_FUNCTION(onEnableGroup) 
	#endif

	#ifndef GEODE_STATICS_onTargetCountArrow
		#define GEODE_STATICS_onTargetCountArrow
		GEODE_AS_STATIC_FUNCTION(onTargetCountArrow) 
	#endif

	#ifndef GEODE_STATICS_updateCountTextInputLabel
		#define GEODE_STATICS_updateCountTextInputLabel
		GEODE_AS_STATIC_FUNCTION(updateCountTextInputLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTargetCount
		#define GEODE_STATICS_updateTargetCount
		GEODE_AS_STATIC_FUNCTION(updateTargetCount) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCountType
		#define GEODE_CONCEPT_CHECK_onCountType
		GEODE_CONCEPT_FUNCTION_CHECK(onCountType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnableGroup
		#define GEODE_CONCEPT_CHECK_onEnableGroup
		GEODE_CONCEPT_FUNCTION_CHECK(onEnableGroup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTargetCountArrow
		#define GEODE_CONCEPT_CHECK_onTargetCountArrow
		GEODE_CONCEPT_FUNCTION_CHECK(onTargetCountArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCountTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateCountTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCountTextInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemID
		#define GEODE_CONCEPT_CHECK_updateItemID
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemIDInputLabel
		#define GEODE_CONCEPT_CHECK_updateItemIDInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemIDInputLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetCount
		#define GEODE_CONCEPT_CHECK_updateTargetCount
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetID
		#define GEODE_CONCEPT_CHECK_updateTargetID
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTargetIDInputLabel
		#define GEODE_CONCEPT_CHECK_updateTargetIDInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTargetIDInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupInstantCountPopup> : ModifyBase<ModifyDerive<Der, SetupInstantCountPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupInstantCountPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupInstantCountPopup>>::ModifyBase;
		using Base = SetupInstantCountPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5b7690, Thiscall, SetupInstantCountPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b7760, Default, SetupInstantCountPopup, create, CountTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b85a0, Thiscall, SetupInstantCountPopup, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b8d70, Thiscall, SetupInstantCountPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b87e0, Thiscall, SetupInstantCountPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b78a0, Thiscall, SetupInstantCountPopup, init, CountTriggerGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b8ca0, Thiscall, SetupInstantCountPopup, onCountType, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b8710, Thiscall, SetupInstantCountPopup, onEnableGroup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b87a0, Thiscall, SetupInstantCountPopup, onTargetCountArrow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b8b90, Thiscall, SetupInstantCountPopup, updateCountTextInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupInstantCountPopup, updateItemID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupInstantCountPopup, updateItemIDInputLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b8c10, Thiscall, SetupInstantCountPopup, updateTargetCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupInstantCountPopup, updateTargetID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupInstantCountPopup, updateTargetIDInputLabel, )
		}
	};
}
