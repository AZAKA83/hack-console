#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DropdownDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_dropdownSelectionChanged
		#define GEODE_CONCEPT_CHECK_dropdownSelectionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(dropdownSelectionChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DropdownDelegate> : ModifyBase<ModifyDerive<Der, DropdownDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DropdownDelegate>>;
		using ModifyBase<ModifyDerive<Der, DropdownDelegate>>::ModifyBase;
		using Base = DropdownDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(DropdownDelegate, dropdownSelectionChanged, Dropdown*, int)
		}
	};
}
