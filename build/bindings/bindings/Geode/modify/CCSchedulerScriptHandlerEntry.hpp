#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCSchedulerScriptHandlerEntry> : ModifyBase<ModifyDerive<Der, cocos2d::CCSchedulerScriptHandlerEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCSchedulerScriptHandlerEntry>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCSchedulerScriptHandlerEntry>>::ModifyBase;
		using Base = cocos2d::CCSchedulerScriptHandlerEntry;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(cocos2d::CCSchedulerScriptHandlerEntry, create, int, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCSchedulerScriptHandlerEntry, init, float, bool)
		}
	};
}
