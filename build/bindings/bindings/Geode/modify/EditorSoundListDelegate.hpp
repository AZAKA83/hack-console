#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundListDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_loadEditorSoundsFinished
		#define GEODE_CONCEPT_CHECK_loadEditorSoundsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadEditorSoundsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadEditorSoundsFailed
		#define GEODE_CONCEPT_CHECK_loadEditorSoundsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadEditorSoundsFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundListDelegate> : ModifyBase<ModifyDerive<Der, EditorSoundListDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundListDelegate>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundListDelegate>>::ModifyBase;
		using Base = EditorSoundListDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundListDelegate, loadEditorSoundsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorSoundListDelegate, loadEditorSoundsFailed, char const*)
		}
	};
}
