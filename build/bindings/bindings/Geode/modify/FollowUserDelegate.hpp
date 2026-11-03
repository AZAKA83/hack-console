#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FollowUserDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_followUserFinished
		#define GEODE_CONCEPT_CHECK_followUserFinished
		GEODE_CONCEPT_FUNCTION_CHECK(followUserFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followUserFailed
		#define GEODE_CONCEPT_CHECK_followUserFailed
		GEODE_CONCEPT_FUNCTION_CHECK(followUserFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FollowUserDelegate> : ModifyBase<ModifyDerive<Der, FollowUserDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FollowUserDelegate>>;
		using ModifyBase<ModifyDerive<Der, FollowUserDelegate>>::ModifyBase;
		using Base = FollowUserDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FollowUserDelegate, followUserFinished, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FollowUserDelegate, followUserFailed, int, bool)
		}
	};
}
