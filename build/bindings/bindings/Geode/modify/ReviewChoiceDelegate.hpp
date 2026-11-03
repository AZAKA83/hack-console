#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ReviewChoiceDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_reviewChoicePicked
		#define GEODE_CONCEPT_CHECK_reviewChoicePicked
		GEODE_CONCEPT_FUNCTION_CHECK(reviewChoicePicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ReviewChoiceDelegate> : ModifyBase<ModifyDerive<Der, ReviewChoiceDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ReviewChoiceDelegate>>;
		using ModifyBase<ModifyDerive<Der, ReviewChoiceDelegate>>::ModifyBase;
		using Base = ReviewChoiceDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ReviewChoiceDelegate, reviewChoicePicked, int, int, std::string const&)
		}
	};
}
