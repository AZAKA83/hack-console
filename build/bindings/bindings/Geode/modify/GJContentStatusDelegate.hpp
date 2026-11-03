#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJContentStatusDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_contentStatusFinished
		#define GEODE_CONCEPT_CHECK_contentStatusFinished
		GEODE_CONCEPT_FUNCTION_CHECK(contentStatusFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJContentStatusDelegate> : ModifyBase<ModifyDerive<Der, GJContentStatusDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJContentStatusDelegate>>;
		using ModifyBase<ModifyDerive<Der, GJContentStatusDelegate>>::ModifyBase;
		using Base = GJContentStatusDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJContentStatusDelegate, contentStatusFinished, )
		}
	};
}
