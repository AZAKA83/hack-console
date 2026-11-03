#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/IDNameBrowserPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_virtualRowCount
		#define GEODE_STATICS_virtualRowCount
		GEODE_AS_STATIC_FUNCTION(virtualRowCount) 
	#endif

	#ifndef GEODE_STATICS_virtualRowHeight
		#define GEODE_STATICS_virtualRowHeight
		GEODE_AS_STATIC_FUNCTION(virtualRowHeight) 
	#endif

	#ifndef GEODE_STATICS_mountVirtualRow
		#define GEODE_STATICS_mountVirtualRow
		GEODE_AS_STATIC_FUNCTION(mountVirtualRow) 
	#endif

	#ifndef GEODE_STATICS_getFormID
		#define GEODE_STATICS_getFormID
		GEODE_AS_STATIC_FUNCTION(getFormID) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDeleteRow
		#define GEODE_STATICS_onDeleteRow
		GEODE_AS_STATIC_FUNCTION(onDeleteRow) 
	#endif

	#ifndef GEODE_STATICS_onEditRow
		#define GEODE_STATICS_onEditRow
		GEODE_AS_STATIC_FUNCTION(onEditRow) 
	#endif

	#ifndef GEODE_STATICS_onFormAdd
		#define GEODE_STATICS_onFormAdd
		GEODE_AS_STATIC_FUNCTION(onFormAdd) 
	#endif

	#ifndef GEODE_STATICS_onFormArrowLeft
		#define GEODE_STATICS_onFormArrowLeft
		GEODE_AS_STATIC_FUNCTION(onFormArrowLeft) 
	#endif

	#ifndef GEODE_STATICS_onFormArrowRight
		#define GEODE_STATICS_onFormArrowRight
		GEODE_AS_STATIC_FUNCTION(onFormArrowRight) 
	#endif

	#ifndef GEODE_STATICS_onFormNextFree
		#define GEODE_STATICS_onFormNextFree
		GEODE_AS_STATIC_FUNCTION(onFormNextFree) 
	#endif

	#ifndef GEODE_STATICS_onSelectRow
		#define GEODE_STATICS_onSelectRow
		GEODE_AS_STATIC_FUNCTION(onSelectRow) 
	#endif

	#ifndef GEODE_STATICS_onToggleSort
		#define GEODE_STATICS_onToggleSort
		GEODE_AS_STATIC_FUNCTION(onToggleSort) 
	#endif

	#ifndef GEODE_STATICS_rebuildList
		#define GEODE_STATICS_rebuildList
		GEODE_AS_STATIC_FUNCTION(rebuildList) 
	#endif

	#ifndef GEODE_STATICS_setFormID
		#define GEODE_STATICS_setFormID
		GEODE_AS_STATIC_FUNCTION(setFormID) 
	#endif

	#ifndef GEODE_STATICS_updateConflictLabel
		#define GEODE_STATICS_updateConflictLabel
		GEODE_AS_STATIC_FUNCTION(updateConflictLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSortButtonLabel
		#define GEODE_STATICS_updateSortButtonLabel
		GEODE_AS_STATIC_FUNCTION(updateSortButtonLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_virtualRowCount
		#define GEODE_CONCEPT_CHECK_virtualRowCount
		GEODE_CONCEPT_FUNCTION_CHECK(virtualRowCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_virtualRowHeight
		#define GEODE_CONCEPT_CHECK_virtualRowHeight
		GEODE_CONCEPT_FUNCTION_CHECK(virtualRowHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mountVirtualRow
		#define GEODE_CONCEPT_CHECK_mountVirtualRow
		GEODE_CONCEPT_FUNCTION_CHECK(mountVirtualRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFormID
		#define GEODE_CONCEPT_CHECK_getFormID
		GEODE_CONCEPT_FUNCTION_CHECK(getFormID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteRow
		#define GEODE_CONCEPT_CHECK_onDeleteRow
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditRow
		#define GEODE_CONCEPT_CHECK_onEditRow
		GEODE_CONCEPT_FUNCTION_CHECK(onEditRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFormAdd
		#define GEODE_CONCEPT_CHECK_onFormAdd
		GEODE_CONCEPT_FUNCTION_CHECK(onFormAdd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFormArrowLeft
		#define GEODE_CONCEPT_CHECK_onFormArrowLeft
		GEODE_CONCEPT_FUNCTION_CHECK(onFormArrowLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFormArrowRight
		#define GEODE_CONCEPT_CHECK_onFormArrowRight
		GEODE_CONCEPT_FUNCTION_CHECK(onFormArrowRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFormNextFree
		#define GEODE_CONCEPT_CHECK_onFormNextFree
		GEODE_CONCEPT_FUNCTION_CHECK(onFormNextFree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectRow
		#define GEODE_CONCEPT_CHECK_onSelectRow
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSort
		#define GEODE_CONCEPT_CHECK_onToggleSort
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSort) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildList
		#define GEODE_CONCEPT_CHECK_rebuildList
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFormID
		#define GEODE_CONCEPT_CHECK_setFormID
		GEODE_CONCEPT_FUNCTION_CHECK(setFormID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateConflictLabel
		#define GEODE_CONCEPT_CHECK_updateConflictLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateConflictLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSortButtonLabel
		#define GEODE_CONCEPT_CHECK_updateSortButtonLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateSortButtonLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, IDNameBrowserPopup> : ModifyBase<ModifyDerive<Der, IDNameBrowserPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, IDNameBrowserPopup>>;
		using ModifyBase<ModifyDerive<Der, IDNameBrowserPopup>>::ModifyBase;
		using Base = IDNameBrowserPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3c1580, Thiscall, IDNameBrowserPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameBrowserPopup, create, int, int, IDNameBrowserDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4e00, Thiscall, IDNameBrowserPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4e70, Thiscall, IDNameBrowserPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4ee0, Thiscall, IDNameBrowserPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4f30, Thiscall, IDNameBrowserPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4df0, Thiscall, IDNameBrowserPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4c90, Thiscall, IDNameBrowserPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c35e0, Thiscall, IDNameBrowserPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5c0, Thiscall, IDNameBrowserPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3090, Thiscall, IDNameBrowserPopup, virtualRowCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c30c0, Thiscall, IDNameBrowserPopup, virtualRowHeight, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c30d0, Thiscall, IDNameBrowserPopup, mountVirtualRow, int, cocos2d::CCNode*, cocos2d::CCMenu*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameBrowserPopup, getFormID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c1650, Thiscall, IDNameBrowserPopup, init, int, int, IDNameBrowserDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4ce0, Thiscall, IDNameBrowserPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3870, Thiscall, IDNameBrowserPopup, onDeleteRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3650, Thiscall, IDNameBrowserPopup, onEditRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4880, Thiscall, IDNameBrowserPopup, onFormAdd, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3f20, Thiscall, IDNameBrowserPopup, onFormArrowLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3f50, Thiscall, IDNameBrowserPopup, onFormArrowRight, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3f90, Thiscall, IDNameBrowserPopup, onFormNextFree, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c37a0, Thiscall, IDNameBrowserPopup, onSelectRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4810, Thiscall, IDNameBrowserPopup, onToggleSort, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c2af0, Thiscall, IDNameBrowserPopup, rebuildList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3b40, Thiscall, IDNameBrowserPopup, setFormID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c3bf0, Thiscall, IDNameBrowserPopup, updateConflictLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c4790, Thiscall, IDNameBrowserPopup, updateSortButtonLabel, )
		}
	};
}
