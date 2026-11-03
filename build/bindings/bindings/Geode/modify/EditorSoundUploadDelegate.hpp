#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundUploadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_uploadEditorSoundFinished
		#define GEODE_CONCEPT_CHECK_uploadEditorSoundFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadEditorSoundFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadEditorSoundFailed
		#define GEODE_CONCEPT_CHECK_uploadEditorSoundFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadEditorSoundFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundUploadDelegate> : ModifyBase<ModifyDerive<Der, EditorSoundUploadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundUploadDelegate>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundUploadDelegate>>::ModifyBase;
		using Base = EditorSoundUploadDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundUploadDelegate, uploadEditorSoundFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundUploadDelegate, uploadEditorSoundFailed, int)
		}
	};
}
