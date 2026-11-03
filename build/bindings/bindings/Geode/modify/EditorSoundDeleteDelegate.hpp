#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundDeleteDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_deleteEditorSoundFinished
		#define GEODE_CONCEPT_CHECK_deleteEditorSoundFinished
		GEODE_CONCEPT_FUNCTION_CHECK(deleteEditorSoundFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteEditorSoundFailed
		#define GEODE_CONCEPT_CHECK_deleteEditorSoundFailed
		GEODE_CONCEPT_FUNCTION_CHECK(deleteEditorSoundFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundDeleteDelegate> : ModifyBase<ModifyDerive<Der, EditorSoundDeleteDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundDeleteDelegate>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundDeleteDelegate>>::ModifyBase;
		using Base = EditorSoundDeleteDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundDeleteDelegate, deleteEditorSoundFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundDeleteDelegate, deleteEditorSoundFailed, int, int)
		}
	};
}
