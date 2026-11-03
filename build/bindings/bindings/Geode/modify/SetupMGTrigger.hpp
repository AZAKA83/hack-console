#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupMGTrigger.hpp>
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

	#ifndef GEODE_STATICS_valuePopupClosed
		#define GEODE_STATICS_valuePopupClosed
		GEODE_AS_STATIC_FUNCTION(valuePopupClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEasing
		#define GEODE_STATICS_onEasing
		GEODE_AS_STATIC_FUNCTION(onEasing) 
	#endif

	#ifndef GEODE_STATICS_onEasingRate
		#define GEODE_STATICS_onEasingRate
		GEODE_AS_STATIC_FUNCTION(onEasingRate) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_sliderYChanged
		#define GEODE_STATICS_sliderYChanged
		GEODE_AS_STATIC_FUNCTION(sliderYChanged) 
	#endif

	#ifndef GEODE_STATICS_toggleEasingRateVisibility
		#define GEODE_STATICS_toggleEasingRateVisibility
		GEODE_AS_STATIC_FUNCTION(toggleEasingRateVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateDuration
		#define GEODE_STATICS_updateDuration
		GEODE_AS_STATIC_FUNCTION(updateDuration) 
	#endif

	#ifndef GEODE_STATICS_updateDurLabel
		#define GEODE_STATICS_updateDurLabel
		GEODE_AS_STATIC_FUNCTION(updateDurLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEasingLabel
		#define GEODE_STATICS_updateEasingLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingLabel) 
	#endif

	#ifndef GEODE_STATICS_updateEasingRateLabel
		#define GEODE_STATICS_updateEasingRateLabel
		GEODE_AS_STATIC_FUNCTION(updateEasingRateLabel) 
	#endif

	#ifndef GEODE_STATICS_updateMoveCommandPosY
		#define GEODE_STATICS_updateMoveCommandPosY
		GEODE_AS_STATIC_FUNCTION(updateMoveCommandPosY) 
	#endif

	#ifndef GEODE_STATICS_updateValueYLabel
		#define GEODE_STATICS_updateValueYLabel
		GEODE_AS_STATIC_FUNCTION(updateValueYLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_valuePopupClosed
		#define GEODE_CONCEPT_CHECK_valuePopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(valuePopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEasing
		#define GEODE_CONCEPT_CHECK_onEasing
		GEODE_CONCEPT_FUNCTION_CHECK(onEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEasingRate
		#define GEODE_CONCEPT_CHECK_onEasingRate
		GEODE_CONCEPT_FUNCTION_CHECK(onEasingRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_posFromSliderValue
		#define GEODE_CONCEPT_CHECK_posFromSliderValue
		GEODE_CONCEPT_FUNCTION_CHECK(posFromSliderValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderValueFromPos
		#define GEODE_CONCEPT_CHECK_sliderValueFromPos
		GEODE_CONCEPT_FUNCTION_CHECK(sliderValueFromPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderYChanged
		#define GEODE_CONCEPT_CHECK_sliderYChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderYChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleEasingRateVisibility
		#define GEODE_CONCEPT_CHECK_toggleEasingRateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(toggleEasingRateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDuration
		#define GEODE_CONCEPT_CHECK_updateDuration
		GEODE_CONCEPT_FUNCTION_CHECK(updateDuration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDurLabel
		#define GEODE_CONCEPT_CHECK_updateDurLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateDurLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEasingLabel
		#define GEODE_CONCEPT_CHECK_updateEasingLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEasingLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEasingRateLabel
		#define GEODE_CONCEPT_CHECK_updateEasingRateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEasingRateLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandEasing
		#define GEODE_CONCEPT_CHECK_updateMoveCommandEasing
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandEasingRate
		#define GEODE_CONCEPT_CHECK_updateMoveCommandEasingRate
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandEasingRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMoveCommandPosY
		#define GEODE_CONCEPT_CHECK_updateMoveCommandPosY
		GEODE_CONCEPT_FUNCTION_CHECK(updateMoveCommandPosY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateValueYLabel
		#define GEODE_CONCEPT_CHECK_updateValueYLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateValueYLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupMGTrigger> : ModifyBase<ModifyDerive<Der, SetupMGTrigger>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupMGTrigger>>;
		using ModifyBase<ModifyDerive<Der, SetupMGTrigger>>::ModifyBase;
		using Base = SetupMGTrigger;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5bc5c0, Thiscall, SetupMGTrigger)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupMGTrigger, create, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bd880, Thiscall, SetupMGTrigger, determineStartValues, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bdf90, Thiscall, SetupMGTrigger, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bdbe0, Thiscall, SetupMGTrigger, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5adf40, Thiscall, SetupMGTrigger, valuePopupClosed, ConfigureValuePopup*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bc890, Thiscall, SetupMGTrigger, init, EffectGameObject*, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ae320, Thiscall, SetupMGTrigger, onEasing, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ade70, Thiscall, SetupMGTrigger, onEasingRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupMGTrigger, posFromSliderValue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ae5b0, Thiscall, SetupMGTrigger, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupMGTrigger, sliderValueFromPos, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bdae0, Thiscall, SetupMGTrigger, sliderYChanged, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetupMGTrigger, toggleEasingRateVisibility, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5aefe0, Thiscall, SetupMGTrigger, updateDuration, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ae670, Thiscall, SetupMGTrigger, updateDurLabel, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ae3e0, Thiscall, SetupMGTrigger, updateEasingLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5ae010, Thiscall, SetupMGTrigger, updateEasingRateLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupMGTrigger, updateMoveCommandEasing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetupMGTrigger, updateMoveCommandEasingRate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bdea0, Thiscall, SetupMGTrigger, updateMoveCommandPosY, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bdb30, Thiscall, SetupMGTrigger, updateValueYLabel, )
		}
	};
}
