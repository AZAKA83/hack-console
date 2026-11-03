#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EmotePickerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_emotePickerClosed
		#define GEODE_CONCEPT_CHECK_emotePickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePicked
		#define GEODE_CONCEPT_CHECK_emotePicked
		GEODE_CONCEPT_FUNCTION_CHECK(emotePicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePickerKeyDown
		#define GEODE_CONCEPT_CHECK_emotePickerKeyDown
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerKeyDown) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EmotePickerDelegate> : ModifyBase<ModifyDerive<Der, EmotePickerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EmotePickerDelegate>>;
		using ModifyBase<ModifyDerive<Der, EmotePickerDelegate>>::ModifyBase;
		using Base = EmotePickerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EmotePickerDelegate, emotePickerClosed, EmotePickerPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EmotePickerDelegate, emotePicked, EmotePickerPopup*, EmoteDef const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EmotePickerDelegate, emotePickerKeyDown, EmotePickerPopup*, cocos2d::enumKeyCodes, double)
		}
	};
}
