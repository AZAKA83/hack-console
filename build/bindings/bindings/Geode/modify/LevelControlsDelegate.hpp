#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelControlsDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_onLevelControlsRefreshed
		#define GEODE_CONCEPT_CHECK_onLevelControlsRefreshed
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelControlsRefreshed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelControlsDelegate> : ModifyBase<ModifyDerive<Der, LevelControlsDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelControlsDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelControlsDelegate>>::ModifyBase;
		using Base = LevelControlsDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelControlsDelegate, onLevelControlsRefreshed, int, int)
		}
	};
}
