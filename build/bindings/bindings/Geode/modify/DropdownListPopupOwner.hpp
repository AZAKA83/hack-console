#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DropdownListPopupOwner.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_dropdownListPopupClosed
		#define GEODE_CONCEPT_CHECK_dropdownListPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dropdownListPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DropdownListPopupOwner> : ModifyBase<ModifyDerive<Der, DropdownListPopupOwner>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DropdownListPopupOwner>>;
		using ModifyBase<ModifyDerive<Der, DropdownListPopupOwner>>::ModifyBase;
		using Base = DropdownListPopupOwner;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DropdownListPopupOwner, dropdownListPopupClosed, DropdownListPopup*)
		}
	};
}
