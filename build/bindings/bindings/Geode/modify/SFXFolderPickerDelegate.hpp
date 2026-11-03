#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXFolderPickerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_sfxFolderPicked
		#define GEODE_CONCEPT_CHECK_sfxFolderPicked
		GEODE_CONCEPT_FUNCTION_CHECK(sfxFolderPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxFoldersPicked
		#define GEODE_CONCEPT_CHECK_sfxFoldersPicked
		GEODE_CONCEPT_FUNCTION_CHECK(sfxFoldersPicked) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXFolderPickerDelegate> : ModifyBase<ModifyDerive<Der, SFXFolderPickerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXFolderPickerDelegate>>;
		using ModifyBase<ModifyDerive<Der, SFXFolderPickerDelegate>>::ModifyBase;
		using Base = SFXFolderPickerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXFolderPickerDelegate, sfxFolderPicked, SFXFolderPickerPopup*, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXFolderPickerDelegate, sfxFoldersPicked, SFXFolderPickerPopup*, std::set<int> const&)
		}
	};
}
