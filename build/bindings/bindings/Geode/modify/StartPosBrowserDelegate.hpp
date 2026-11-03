#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StartPosBrowserDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_startPosSelected
		#define GEODE_CONCEPT_CHECK_startPosSelected
		GEODE_CONCEPT_FUNCTION_CHECK(startPosSelected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, StartPosBrowserDelegate> : ModifyBase<ModifyDerive<Der, StartPosBrowserDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StartPosBrowserDelegate>>;
		using ModifyBase<ModifyDerive<Der, StartPosBrowserDelegate>>::ModifyBase;
		using Base = StartPosBrowserDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(StartPosBrowserDelegate, startPosSelected, StartPosBrowser*, int, StartPosObject*)
		}
	};
}
