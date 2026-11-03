#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelPickerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_levelPicked
		#define GEODE_CONCEPT_CHECK_levelPicked
		GEODE_CONCEPT_FUNCTION_CHECK(levelPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listPicked
		#define GEODE_CONCEPT_CHECK_listPicked
		GEODE_CONCEPT_FUNCTION_CHECK(listPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shareIDPicked
		#define GEODE_CONCEPT_CHECK_shareIDPicked
		GEODE_CONCEPT_FUNCTION_CHECK(shareIDPicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelPickerDelegate> : ModifyBase<ModifyDerive<Der, LevelPickerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelPickerDelegate>>;
		using ModifyBase<ModifyDerive<Der, LevelPickerDelegate>>::ModifyBase;
		using Base = LevelPickerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelPickerDelegate, levelPicked, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelPickerDelegate, listPicked, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelPickerDelegate, shareIDPicked, int, bool)
		}
	};
}
