#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RowPressItem.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_selected
		#define GEODE_STATICS_selected
		GEODE_AS_STATIC_FUNCTION(selected) 
	#endif

	#ifndef GEODE_STATICS_unselected
		#define GEODE_STATICS_unselected
		GEODE_AS_STATIC_FUNCTION(unselected) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selected
		#define GEODE_CONCEPT_CHECK_selected
		GEODE_CONCEPT_FUNCTION_CHECK(selected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unselected
		#define GEODE_CONCEPT_CHECK_unselected
		GEODE_CONCEPT_FUNCTION_CHECK(unselected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RowPressItem> : ModifyBase<ModifyDerive<Der, RowPressItem>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RowPressItem>>;
		using ModifyBase<ModifyDerive<Der, RowPressItem>>::ModifyBase;
		using Base = RowPressItem;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x159440, Thiscall, RowPressItem)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x159380, Default, RowPressItem, create, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1594b0, Thiscall, RowPressItem, selected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1594f0, Thiscall, RowPressItem, unselected, )
		}
	};
}
