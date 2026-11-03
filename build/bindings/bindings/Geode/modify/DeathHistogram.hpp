#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DeathHistogram.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_handleTouchBegan
		#define GEODE_STATICS_handleTouchBegan
		GEODE_AS_STATIC_FUNCTION(handleTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_handleTouchEnded
		#define GEODE_STATICS_handleTouchEnded
		GEODE_AS_STATIC_FUNCTION(handleTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_handleTouchMoved
		#define GEODE_STATICS_handleTouchMoved
		GEODE_AS_STATIC_FUNCTION(handleTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_persistScroll
		#define GEODE_STATICS_persistScroll
		GEODE_AS_STATIC_FUNCTION(persistScroll) 
	#endif

	#ifndef GEODE_STATICS_rebuildAxis
		#define GEODE_STATICS_rebuildAxis
		GEODE_AS_STATIC_FUNCTION(rebuildAxis) 
	#endif

	#ifndef GEODE_STATICS_restoreScroll
		#define GEODE_STATICS_restoreScroll
		GEODE_AS_STATIC_FUNCTION(restoreScroll) 
	#endif

	#ifndef GEODE_STATICS_setAttemptLine
		#define GEODE_STATICS_setAttemptLine
		GEODE_AS_STATIC_FUNCTION(setAttemptLine) 
	#endif

	#ifndef GEODE_STATICS_setData
		#define GEODE_STATICS_setData
		GEODE_AS_STATIC_FUNCTION(setData) 
	#endif

	#ifndef GEODE_STATICS_setProgression
		#define GEODE_STATICS_setProgression
		GEODE_AS_STATIC_FUNCTION(setProgression) 
	#endif

	#ifndef GEODE_STATICS_setSurvival
		#define GEODE_STATICS_setSurvival
		GEODE_AS_STATIC_FUNCTION(setSurvival) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchBegan
		#define GEODE_CONCEPT_CHECK_handleTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchEnded
		#define GEODE_CONCEPT_CHECK_handleTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleTouchMoved
		#define GEODE_CONCEPT_CHECK_handleTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(handleTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_persistScroll
		#define GEODE_CONCEPT_CHECK_persistScroll
		GEODE_CONCEPT_FUNCTION_CHECK(persistScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildAxis
		#define GEODE_CONCEPT_CHECK_rebuildAxis
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildAxis) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreScroll
		#define GEODE_CONCEPT_CHECK_restoreScroll
		GEODE_CONCEPT_FUNCTION_CHECK(restoreScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAttemptLine
		#define GEODE_CONCEPT_CHECK_setAttemptLine
		GEODE_CONCEPT_FUNCTION_CHECK(setAttemptLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setData
		#define GEODE_CONCEPT_CHECK_setData
		GEODE_CONCEPT_FUNCTION_CHECK(setData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setProgression
		#define GEODE_CONCEPT_CHECK_setProgression
		GEODE_CONCEPT_FUNCTION_CHECK(setProgression) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSurvival
		#define GEODE_CONCEPT_CHECK_setSurvival
		GEODE_CONCEPT_FUNCTION_CHECK(setSurvival) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DeathHistogram> : ModifyBase<ModifyDerive<Der, DeathHistogram>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DeathHistogram>>;
		using ModifyBase<ModifyDerive<Der, DeathHistogram>>::ModifyBase;
		using Base = DeathHistogram;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1107a0, Thiscall, DeathHistogram)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathHistogram, create, cocos2d::CCSize)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathHistogram, handleTouchBegan, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathHistogram, handleTouchEnded, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathHistogram, handleTouchMoved, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathHistogram, init, cocos2d::CCSize)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathHistogram, persistScroll, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111610, Thiscall, DeathHistogram, rebuildAxis, char const*, int, float, float, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathHistogram, restoreScroll, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x112eb0, Thiscall, DeathHistogram, setAttemptLine, std::vector<int> const&, std::vector<int> const&, cocos2d::ccColor3B, int, cocos2d::ccColor3B, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x111dd0, Thiscall, DeathHistogram, setData, std::vector<int> const&, int, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114220, Thiscall, DeathHistogram, setProgression, std::vector<int> const&, std::vector<int> const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1126a0, Thiscall, DeathHistogram, setSurvival, std::vector<int> const&, bool, bool, int)
		}
	};
}
