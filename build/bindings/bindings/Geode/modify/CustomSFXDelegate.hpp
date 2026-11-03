#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSFXDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_sfxObjectSelected
		#define GEODE_CONCEPT_CHECK_sfxObjectSelected
		GEODE_CONCEPT_FUNCTION_CHECK(sfxObjectSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSFXID
		#define GEODE_CONCEPT_CHECK_getActiveSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveCustomSFXID
		#define GEODE_CONCEPT_CHECK_getActiveCustomSFXID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveCustomSFXID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_overridePlaySFX
		#define GEODE_CONCEPT_CHECK_overridePlaySFX
		GEODE_CONCEPT_FUNCTION_CHECK(overridePlaySFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxAddToFolder
		#define GEODE_CONCEPT_CHECK_sfxAddToFolder
		GEODE_CONCEPT_FUNCTION_CHECK(sfxAddToFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxEditCustomObject
		#define GEODE_CONCEPT_CHECK_sfxEditCustomObject
		GEODE_CONCEPT_FUNCTION_CHECK(sfxEditCustomObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxToggleCustomSelect
		#define GEODE_CONCEPT_CHECK_sfxToggleCustomSelect
		GEODE_CONCEPT_FUNCTION_CHECK(sfxToggleCustomSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCustomEntrySelected
		#define GEODE_CONCEPT_CHECK_isCustomEntrySelected
		GEODE_CONCEPT_FUNCTION_CHECK(isCustomEntrySelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inCustomSFXTree
		#define GEODE_CONCEPT_CHECK_inCustomSFXTree
		GEODE_CONCEPT_FUNCTION_CHECK(inCustomSFXTree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showsSFXInfoButton
		#define GEODE_CONCEPT_CHECK_showsSFXInfoButton
		GEODE_CONCEPT_FUNCTION_CHECK(showsSFXInfoButton) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXDelegate> : ModifyBase<ModifyDerive<Der, CustomSFXDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXDelegate>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXDelegate>>::ModifyBase;
		using Base = CustomSFXDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, sfxObjectSelected, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, getActiveSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, getActiveCustomSFXID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, overridePlaySFX, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, sfxAddToFolder, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, sfxEditCustomObject, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, sfxToggleCustomSelect, SFXInfoObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, isCustomEntrySelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, inCustomSFXTree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CustomSFXDelegate, showsSFXInfoButton, )
		}
	};
}
