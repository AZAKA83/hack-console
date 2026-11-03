#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundConfigCellDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_onConfigViewClicked
		#define GEODE_CONCEPT_CHECK_onConfigViewClicked
		GEODE_CONCEPT_FUNCTION_CHECK(onConfigViewClicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundConfigCellDelegate> : ModifyBase<ModifyDerive<Der, EditorSoundConfigCellDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundConfigCellDelegate>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundConfigCellDelegate>>::ModifyBase;
		using Base = EditorSoundConfigCellDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundConfigCellDelegate, onConfigViewClicked, GJEditorSoundConfig*)
		}
	};
}
