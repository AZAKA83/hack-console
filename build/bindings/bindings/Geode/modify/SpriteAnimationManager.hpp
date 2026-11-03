#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SpriteAnimationManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createAnimations
		#define GEODE_STATICS_createAnimations
		GEODE_AS_STATIC_FUNCTION(createAnimations) 
	#endif

	#ifndef GEODE_STATICS_animationFinished
		#define GEODE_STATICS_animationFinished
		GEODE_AS_STATIC_FUNCTION(animationFinished) 
	#endif

	#ifndef GEODE_STATICS_callAnimationFinished
		#define GEODE_STATICS_callAnimationFinished
		GEODE_AS_STATIC_FUNCTION(callAnimationFinished) 
	#endif

	#ifndef GEODE_STATICS_executeAnimation
		#define GEODE_STATICS_executeAnimation
		GEODE_AS_STATIC_FUNCTION(executeAnimation) 
	#endif

	#ifndef GEODE_STATICS_getPrio
		#define GEODE_STATICS_getPrio
		GEODE_AS_STATIC_FUNCTION(getPrio) 
	#endif

	#ifndef GEODE_STATICS_initWithOwner
		#define GEODE_STATICS_initWithOwner
		GEODE_AS_STATIC_FUNCTION(initWithOwner) 
	#endif

	#ifndef GEODE_STATICS_loadAnimations
		#define GEODE_STATICS_loadAnimations
		GEODE_AS_STATIC_FUNCTION(loadAnimations) 
	#endif

	#ifndef GEODE_STATICS_overridePrio
		#define GEODE_STATICS_overridePrio
		GEODE_AS_STATIC_FUNCTION(overridePrio) 
	#endif

	#ifndef GEODE_STATICS_queueAnimation
		#define GEODE_STATICS_queueAnimation
		GEODE_AS_STATIC_FUNCTION(queueAnimation) 
	#endif

	#ifndef GEODE_STATICS_runAnimation
		#define GEODE_STATICS_runAnimation
		GEODE_AS_STATIC_FUNCTION(runAnimation) 
	#endif

	#ifndef GEODE_STATICS_storeAnimation
		#define GEODE_STATICS_storeAnimation
		GEODE_AS_STATIC_FUNCTION(storeAnimation) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_createAnimations
		#define GEODE_CONCEPT_CHECK_createAnimations
		GEODE_CONCEPT_FUNCTION_CHECK(createAnimations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithOwner
		#define GEODE_CONCEPT_CHECK_createWithOwner
		GEODE_CONCEPT_FUNCTION_CHECK(createWithOwner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animationFinished
		#define GEODE_CONCEPT_CHECK_animationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(animationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_callAnimationFinished
		#define GEODE_CONCEPT_CHECK_callAnimationFinished
		GEODE_CONCEPT_FUNCTION_CHECK(callAnimationFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doCleanup
		#define GEODE_CONCEPT_CHECK_doCleanup
		GEODE_CONCEPT_FUNCTION_CHECK(doCleanup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_executeAnimation
		#define GEODE_CONCEPT_CHECK_executeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(executeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishAnimation
		#define GEODE_CONCEPT_CHECK_finishAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(finishAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAnimType
		#define GEODE_CONCEPT_CHECK_getAnimType
		GEODE_CONCEPT_FUNCTION_CHECK(getAnimType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrio
		#define GEODE_CONCEPT_CHECK_getPrio
		GEODE_CONCEPT_FUNCTION_CHECK(getPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithOwner
		#define GEODE_CONCEPT_CHECK_initWithOwner
		GEODE_CONCEPT_FUNCTION_CHECK(initWithOwner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadAnimations
		#define GEODE_CONCEPT_CHECK_loadAnimations
		GEODE_CONCEPT_FUNCTION_CHECK(loadAnimations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetCurrentAnimation
		#define GEODE_CONCEPT_CHECK_offsetCurrentAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(offsetCurrentAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_overridePrio
		#define GEODE_CONCEPT_CHECK_overridePrio
		GEODE_CONCEPT_FUNCTION_CHECK(overridePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSound
		#define GEODE_CONCEPT_CHECK_playSound
		GEODE_CONCEPT_FUNCTION_CHECK(playSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playSoundForAnimation
		#define GEODE_CONCEPT_CHECK_playSoundForAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(playSoundForAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueAnimation
		#define GEODE_CONCEPT_CHECK_queueAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(queueAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAnimState
		#define GEODE_CONCEPT_CHECK_resetAnimState
		GEODE_CONCEPT_FUNCTION_CHECK(resetAnimState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runAnimation
		#define GEODE_CONCEPT_CHECK_runAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(runAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_runQueuedAnimation
		#define GEODE_CONCEPT_CHECK_runQueuedAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(runQueuedAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopAnimations
		#define GEODE_CONCEPT_CHECK_stopAnimations
		GEODE_CONCEPT_FUNCTION_CHECK(stopAnimations) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeAnimation
		#define GEODE_CONCEPT_CHECK_storeAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(storeAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSoundForAnimation
		#define GEODE_CONCEPT_CHECK_storeSoundForAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(storeSoundForAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToFirstFrameOfAnimation
		#define GEODE_CONCEPT_CHECK_switchToFirstFrameOfAnimation
		GEODE_CONCEPT_FUNCTION_CHECK(switchToFirstFrameOfAnimation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnimationSpeed
		#define GEODE_CONCEPT_CHECK_updateAnimationSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnimationSpeed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SpriteAnimationManager> : ModifyBase<ModifyDerive<Der, SpriteAnimationManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SpriteAnimationManager>>;
		using ModifyBase<ModifyDerive<Der, SpriteAnimationManager>>::ModifyBase;
		using Base = SpriteAnimationManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x85e90, Default, SpriteAnimationManager, createAnimations, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, createWithOwner, CCAnimatedSprite*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x875b0, Thiscall, SpriteAnimationManager, animationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x87600, Thiscall, SpriteAnimationManager, callAnimationFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, doCleanup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86ee0, Thiscall, SpriteAnimationManager, executeAnimation, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, finishAnimation, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, getAnimType, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x87700, Thiscall, SpriteAnimationManager, getPrio, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x85150, Thiscall, SpriteAnimationManager, initWithOwner, CCAnimatedSprite*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x853e0, Thiscall, SpriteAnimationManager, loadAnimations, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, offsetCurrentAnimation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x87400, Thiscall, SpriteAnimationManager, overridePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, playSound, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, playSoundForAnimation, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x874d0, Thiscall, SpriteAnimationManager, queueAnimation, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, resetAnimState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86d80, Thiscall, SpriteAnimationManager, runAnimation, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, runQueuedAnimation, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, stopAnimations, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x86ac0, Thiscall, SpriteAnimationManager, storeAnimation, cocos2d::CCAnimate*, cocos2d::CCAnimate*, std::string, int, spriteMode, cocos2d::CCSpriteFrame*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, storeSoundForAnimation, cocos2d::CCString*, std::string, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, switchToFirstFrameOfAnimation, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SpriteAnimationManager, updateAnimationSpeed, float)
		}
	};
}
