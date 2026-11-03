#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_description
		#define GEODE_CONCEPT_CHECK_description
		GEODE_CONCEPT_FUNCTION_CHECK(description) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithName
		#define GEODE_CONCEPT_CHECK_initWithName
		GEODE_CONCEPT_FUNCTION_CHECK(initWithName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reset
		#define GEODE_CONCEPT_CHECK_reset
		GEODE_CONCEPT_FUNCTION_CHECK(reset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCProfilingTimer> : ModifyBase<ModifyDerive<Der, cocos2d::CCProfilingTimer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCProfilingTimer>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCProfilingTimer>>::ModifyBase;
		using Base = cocos2d::CCProfilingTimer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCProfilingTimer, description, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCProfilingTimer, initWithName, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCProfilingTimer, reset, )
		}
	};
}
