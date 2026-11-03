#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EasingSelectPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCell
		#define GEODE_STATICS_onCell
		GEODE_AS_STATIC_FUNCTION(onCell) 
	#endif

	#ifndef GEODE_STATICS_onRestart
		#define GEODE_STATICS_onRestart
		GEODE_AS_STATIC_FUNCTION(onRestart) 
	#endif

	#ifndef GEODE_STATICS_refreshCellHighlight
		#define GEODE_STATICS_refreshCellHighlight
		GEODE_AS_STATIC_FUNCTION(refreshCellHighlight) 
	#endif

	#ifndef GEODE_STATICS_refreshRateVisual
		#define GEODE_STATICS_refreshRateVisual
		GEODE_AS_STATIC_FUNCTION(refreshRateVisual) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCell
		#define GEODE_CONCEPT_CHECK_onCell
		GEODE_CONCEPT_FUNCTION_CHECK(onCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRestart
		#define GEODE_CONCEPT_CHECK_onRestart
		GEODE_CONCEPT_FUNCTION_CHECK(onRestart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshCellHighlight
		#define GEODE_CONCEPT_CHECK_refreshCellHighlight
		GEODE_CONCEPT_FUNCTION_CHECK(refreshCellHighlight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshRateVisual
		#define GEODE_CONCEPT_CHECK_refreshRateVisual
		GEODE_CONCEPT_FUNCTION_CHECK(refreshRateVisual) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EasingSelectPopup> : ModifyBase<ModifyDerive<Der, EasingSelectPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EasingSelectPopup>>;
		using ModifyBase<ModifyDerive<Der, EasingSelectPopup>>::ModifyBase;
		using Base = EasingSelectPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x175cd0, Thiscall, EasingSelectPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EasingSelectPopup, create, SetupTriggerPopup*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x176a60, Thiscall, EasingSelectPopup, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x176e50, Thiscall, EasingSelectPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1769a0, Thiscall, EasingSelectPopup, valueDidChange, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EasingSelectPopup, init, SetupTriggerPopup*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x176790, Thiscall, EasingSelectPopup, onCell, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EasingSelectPopup, onRestart, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EasingSelectPopup, refreshCellHighlight, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EasingSelectPopup, refreshRateVisual, )
		}
	};
}
