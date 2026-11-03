#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TableViewCellDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getSelectedCellCustomIdx
		#define GEODE_STATICS_getSelectedCellCustomIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellCustomIdx) 
	#endif

	#ifndef GEODE_STATICS_allowsCustomSFXActions
		#define GEODE_STATICS_allowsCustomSFXActions
		GEODE_AS_STATIC_FUNCTION(allowsCustomSFXActions) 
	#endif

	#ifndef GEODE_STATICS_isCustomIDSelected
		#define GEODE_STATICS_isCustomIDSelected
		GEODE_AS_STATIC_FUNCTION(isCustomIDSelected) 
	#endif

	#ifndef GEODE_STATICS_inCustomSFXTree
		#define GEODE_STATICS_inCustomSFXTree
		GEODE_AS_STATIC_FUNCTION(inCustomSFXTree) 
	#endif

	#ifndef GEODE_STATICS_showsSFXInfoButton
		#define GEODE_STATICS_showsSFXInfoButton
		GEODE_AS_STATIC_FUNCTION(showsSFXInfoButton) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellCustomIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellCustomIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellCustomIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allowsCustomSFXActions
		#define GEODE_CONCEPT_CHECK_allowsCustomSFXActions
		GEODE_CONCEPT_FUNCTION_CHECK(allowsCustomSFXActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCustomIDSelected
		#define GEODE_CONCEPT_CHECK_isCustomIDSelected
		GEODE_CONCEPT_FUNCTION_CHECK(isCustomIDSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inCustomSFXTree
		#define GEODE_CONCEPT_CHECK_inCustomSFXTree
		GEODE_CONCEPT_FUNCTION_CHECK(inCustomSFXTree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showsSFXInfoButton
		#define GEODE_CONCEPT_CHECK_showsSFXInfoButton
		GEODE_CONCEPT_FUNCTION_CHECK(showsSFXInfoButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldSnapToSelected
		#define GEODE_CONCEPT_CHECK_shouldSnapToSelected
		GEODE_CONCEPT_FUNCTION_CHECK(shouldSnapToSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCellDelegateType
		#define GEODE_CONCEPT_CHECK_getCellDelegateType
		GEODE_CONCEPT_FUNCTION_CHECK(getCellDelegateType) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TableViewCellDelegate> : ModifyBase<ModifyDerive<Der, TableViewCellDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TableViewCellDelegate>>;
		using ModifyBase<ModifyDerive<Der, TableViewCellDelegate>>::ModifyBase;
		using Base = TableViewCellDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewCellDelegate, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewCellDelegate, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98e00, Thiscall, TableViewCellDelegate, getSelectedCellCustomIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, TableViewCellDelegate, allowsCustomSFXActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, TableViewCellDelegate, isCustomIDSelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, TableViewCellDelegate, inCustomSFXTree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, TableViewCellDelegate, showsSFXInfoButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewCellDelegate, shouldSnapToSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TableViewCellDelegate, getCellDelegateType, )
		}
	};
}
