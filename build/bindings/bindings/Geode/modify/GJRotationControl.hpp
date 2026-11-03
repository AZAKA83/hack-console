#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJRotationControl.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
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

	#ifndef GEODE_STATICS_finishTouch
		#define GEODE_STATICS_finishTouch
		GEODE_AS_STATIC_FUNCTION(finishTouch) 
	#endif

	#ifndef GEODE_STATICS_hasActiveInput
		#define GEODE_STATICS_hasActiveInput
		GEODE_AS_STATIC_FUNCTION(hasActiveInput) 
	#endif

	#ifndef GEODE_STATICS_onApplyAngle
		#define GEODE_STATICS_onApplyAngle
		GEODE_AS_STATIC_FUNCTION(onApplyAngle) 
	#endif

	#ifndef GEODE_STATICS_onToggleLockRotation
		#define GEODE_STATICS_onToggleLockRotation
		GEODE_AS_STATIC_FUNCTION(onToggleLockRotation) 
	#endif

	#ifndef GEODE_STATICS_releaseInputFocus
		#define GEODE_STATICS_releaseInputFocus
		GEODE_AS_STATIC_FUNCTION(releaseInputFocus) 
	#endif

	#ifndef GEODE_STATICS_updateAngleInput
		#define GEODE_STATICS_updateAngleInput
		GEODE_AS_STATIC_FUNCTION(updateAngleInput) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
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

	#ifndef GEODE_CONCEPT_CHECK_finishTouch
		#define GEODE_CONCEPT_CHECK_finishTouch
		GEODE_CONCEPT_FUNCTION_CHECK(finishTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasActiveInput
		#define GEODE_CONCEPT_CHECK_hasActiveInput
		GEODE_CONCEPT_FUNCTION_CHECK(hasActiveInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onApplyAngle
		#define GEODE_CONCEPT_CHECK_onApplyAngle
		GEODE_CONCEPT_FUNCTION_CHECK(onApplyAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLockRotation
		#define GEODE_CONCEPT_CHECK_onToggleLockRotation
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLockRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseInputFocus
		#define GEODE_CONCEPT_CHECK_releaseInputFocus
		GEODE_CONCEPT_FUNCTION_CHECK(releaseInputFocus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAngle
		#define GEODE_CONCEPT_CHECK_setAngle
		GEODE_CONCEPT_FUNCTION_CHECK(setAngle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAngleInput
		#define GEODE_CONCEPT_CHECK_updateAngleInput
		GEODE_CONCEPT_FUNCTION_CHECK(updateAngleInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSliderPosition
		#define GEODE_CONCEPT_CHECK_updateSliderPosition
		GEODE_CONCEPT_FUNCTION_CHECK(updateSliderPosition) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJRotationControl> : ModifyBase<ModifyDerive<Der, GJRotationControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJRotationControl>>;
		using ModifyBase<ModifyDerive<Der, GJRotationControl>>::ModifyBase;
		using Base = GJRotationControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1a1ea0, Thiscall, GJRotationControl)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRotationControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2140, Thiscall, GJRotationControl, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2e70, Thiscall, GJRotationControl, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2a60, Thiscall, GJRotationControl, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2bd0, Thiscall, GJRotationControl, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2dc0, Thiscall, GJRotationControl, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a2e20, Thiscall, GJRotationControl, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotationControl, applyFocusedInput, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a29b0, Thiscall, GJRotationControl, finishTouch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotationControl, hasActiveInput, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotationControl, onApplyAngle, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotationControl, onToggleLockRotation, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotationControl, releaseInputFocus, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRotationControl, setAngle, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJRotationControl, updateAngleInput, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJRotationControl, updateSliderPosition, cocos2d::CCPoint)
		}
	};
}
