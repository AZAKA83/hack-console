#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundDownloadDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_downloadEditorSoundFinished
		#define GEODE_CONCEPT_CHECK_downloadEditorSoundFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadEditorSoundFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadEditorSoundFailed
		#define GEODE_CONCEPT_CHECK_downloadEditorSoundFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadEditorSoundFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundDownloadDelegate> : ModifyBase<ModifyDerive<Der, EditorSoundDownloadDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundDownloadDelegate>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundDownloadDelegate>>::ModifyBase;
		using Base = EditorSoundDownloadDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundDownloadDelegate, downloadEditorSoundFinished, GJEditorSoundConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundDownloadDelegate, downloadEditorSoundFailed, int, int)
		}
	};
}
