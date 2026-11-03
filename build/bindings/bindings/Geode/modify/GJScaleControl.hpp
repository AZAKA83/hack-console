#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJScaleControl.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_applyFocusedInput
		#define GEODE_STATICS_applyFocusedInput
		GEODE_AS_STATIC_FUNCTION(applyFocusedInput) 
	#endif

	#ifndef GEODE_STATICS_createScaleInput
		#define GEODE_STATICS_createScaleInput
		GEODE_AS_STATIC_FUNCTION(createScaleInput) 
	#endif

	#ifndef GEODE_STATICS_hasActiveInput
		#define GEODE_STATICS_hasActiveInput
		GEODE_AS_STATIC_FUNCTION(hasActiveInput) 
	#endif

	#ifndef GEODE_STATICS_loadValues
		#define GEODE_STATICS_loadValues
		GEODE_AS_STATIC_FUNCTION(loadValues) 
	#endif

	#ifndef GEODE_STATICS_onApplyScale
		#define GEODE_STATICS_onApplyScale
		GEODE_AS_STATIC_FUNCTION(onApplyScale) 
	#endif

	#ifndef GEODE_STATICS_onToggleLockScale
		#define GEODE_STATICS_onToggleLockScale
		GEODE_AS_STATIC_FUNCTION(onToggleLockScale) 
	#endif

	#ifndef GEODE_STATICS_releaseInputFocus
		#define GEODE_STATICS_releaseInputFocus
		GEODE_AS_STATIC_FUNCTION(releaseInputFocus) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_updateLabelX
		#define GEODE_STATICS_updateLabelX
		GEODE_AS_STATIC_FUNCTION(updateLabelX) 
	#endif

	#ifndef GEODE_STATICS_updateLabelXY
		#define GEODE_STATICS_updateLabelXY
		GEODE_AS_STATIC_FUNCTION(updateLabelXY) 
	#endif

	#ifndef GEODE_STATICS_updateLabelY
		#define GEODE_STATICS_updateLabelY
		GEODE_AS_STATIC_FUNCTION(updateLabelY) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyFocusedInput
		#define GEODE_CONCEPT_CHECK_applyFocusedInput
		GEODE_CONCEPT_FUNCTION_CHECK(applyFocusedInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createScaleInput
		#define GEODE_CONCEPT_CHECK_createScaleInput
		GEODE_CONCEPT_FUNCTION_CHECK(createScaleInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishTouch
		#define GEODE_CONCEPT_CHECK_finishTouch
		GEODE_CONCEPT_FUNCTION_CHECK(finishTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasActiveInput
		#define GEODE_CONCEPT_CHECK_hasActiveInput
		GEODE_CONCEPT_FUNCTION_CHECK(hasActiveInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadValues
		#define GEODE_CONCEPT_CHECK_loadValues
		GEODE_CONCEPT_FUNCTION_CHECK(loadValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onApplyScale
		#define GEODE_CONCEPT_CHECK_onApplyScale
		GEODE_CONCEPT_FUNCTION_CHECK(onApplyScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLockScale
		#define GEODE_CONCEPT_CHECK_onToggleLockScale
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLockScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseInputFocus
		#define GEODE_CONCEPT_CHECK_releaseInputFocus
		GEODE_CONCEPT_FUNCTION_CHECK(releaseInputFocus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleFromValue
		#define GEODE_CONCEPT_CHECK_scaleFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(scaleFromValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_skewFromValue
		#define GEODE_CONCEPT_CHECK_skewFromValue
		GEODE_CONCEPT_FUNCTION_CHECK(skewFromValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelX
		#define GEODE_CONCEPT_CHECK_updateLabelX
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelXY
		#define GEODE_CONCEPT_CHECK_updateLabelXY
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelXY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabelY
		#define GEODE_CONCEPT_CHECK_updateLabelY
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabelY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueFromScale
		#define GEODE_CONCEPT_CHECK_valueFromScale
		GEODE_CONCEPT_FUNCTION_CHECK(valueFromScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueFromSkew
		#define GEODE_CONCEPT_CHECK_valueFromSkew
		GEODE_CONCEPT_FUNCTION_CHECK(valueFromSkew) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJScaleControl> : ModifyBase<ModifyDerive<Der, GJScaleControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJScaleControl>>;
		using ModifyBase<ModifyDerive<Der, GJScaleControl>>::ModifyBase;
		using Base = GJScaleControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1a1f00, Thiscall, GJScaleControl)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2ef0, Thiscall, GJScaleControl, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a3c90, Thiscall, GJScaleControl, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a3f70, Thiscall, GJScaleControl, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4370, Thiscall, GJScaleControl, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a44d0, Thiscall, GJScaleControl, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJScaleControl, applyFocusedInput, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJScaleControl, createScaleInput, cocos2d::CCPoint, int, CCMenuItemSpriteExtra**)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControl, finishTouch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJScaleControl, hasActiveInput, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a36f0, Thiscall, GJScaleControl, loadValues, GameObject*, cocos2d::CCArray*, std::unordered_map<int, GameObjectEditorState>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4990, Thiscall, GJScaleControl, onApplyScale, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a5a30, Thiscall, GJScaleControl, onToggleLockScale, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJScaleControl, releaseInputFocus, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControl, scaleFromValue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControl, skewFromValue, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a3c80, Thiscall, GJScaleControl, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4520, Thiscall, GJScaleControl, updateLabelX, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4640, Thiscall, GJScaleControl, updateLabelXY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a45b0, Thiscall, GJScaleControl, updateLabelY, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControl, valueFromScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJScaleControl, valueFromSkew, float)
		}
	};
}
