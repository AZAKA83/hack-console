#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/Dropdown.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setPosition
		#define GEODE_STATICS_setPosition
		GEODE_AS_STATIC_FUNCTION(setPosition) 
	#endif

	#ifndef GEODE_STATICS_setVisible
		#define GEODE_STATICS_setVisible
		GEODE_AS_STATIC_FUNCTION(setVisible) 
	#endif

	#ifndef GEODE_STATICS_dropdownListPopupClosed
		#define GEODE_STATICS_dropdownListPopupClosed
		GEODE_AS_STATIC_FUNCTION(dropdownListPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_closeList
		#define GEODE_STATICS_closeList
		GEODE_AS_STATIC_FUNCTION(closeList) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onRowSelected
		#define GEODE_STATICS_onRowSelected
		GEODE_AS_STATIC_FUNCTION(onRowSelected) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_openList
		#define GEODE_STATICS_openList
		GEODE_AS_STATIC_FUNCTION(openList) 
	#endif

	#ifndef GEODE_STATICS_refreshValueLabel
		#define GEODE_STATICS_refreshValueLabel
		GEODE_AS_STATIC_FUNCTION(refreshValueLabel) 
	#endif

	#ifndef GEODE_STATICS_setSelectedIndex
		#define GEODE_STATICS_setSelectedIndex
		GEODE_AS_STATIC_FUNCTION(setSelectedIndex) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPosition
		#define GEODE_CONCEPT_CHECK_setPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setVisible
		#define GEODE_CONCEPT_CHECK_setVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dropdownListPopupClosed
		#define GEODE_CONCEPT_CHECK_dropdownListPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dropdownListPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeList
		#define GEODE_CONCEPT_CHECK_closeList
		GEODE_CONCEPT_FUNCTION_CHECK(closeList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRowSelected
		#define GEODE_CONCEPT_CHECK_onRowSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onRowSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openList
		#define GEODE_CONCEPT_CHECK_openList
		GEODE_CONCEPT_FUNCTION_CHECK(openList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshValueLabel
		#define GEODE_CONCEPT_CHECK_refreshValueLabel
		GEODE_CONCEPT_FUNCTION_CHECK(refreshValueLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSelectedIndex
		#define GEODE_CONCEPT_CHECK_setSelectedIndex
		GEODE_CONCEPT_FUNCTION_CHECK(setSelectedIndex) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, Dropdown> : ModifyBase<ModifyDerive<Der, Dropdown>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, Dropdown>>;
		using ModifyBase<ModifyDerive<Der, Dropdown>>::ModifyBase;
		using Base = Dropdown;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x120620, Thiscall, Dropdown)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x120700, Default, Dropdown, create, FLAlertLayer*, cocos2d::CCMenu*, std::vector<std::string> const&, int, float, DropdownDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x120c30, Thiscall, Dropdown, setPosition, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x120c90, Thiscall, Dropdown, setVisible, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x121360, Thiscall, Dropdown, dropdownListPopupClosed, DropdownListPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Dropdown, closeList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x120830, Thiscall, Dropdown, init, FLAlertLayer*, cocos2d::CCMenu*, std::vector<std::string> const&, int, float, DropdownDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x121380, Thiscall, Dropdown, onRowSelected, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Dropdown, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x120dc0, Thiscall, Dropdown, openList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x120d10, Thiscall, Dropdown, refreshValueLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(Dropdown, setSelectedIndex, int)
		}
	};
}
