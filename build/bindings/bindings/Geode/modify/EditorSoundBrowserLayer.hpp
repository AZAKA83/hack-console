#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundBrowserLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_rebuildContent
		#define GEODE_STATICS_rebuildContent
		GEODE_AS_STATIC_FUNCTION(rebuildContent) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_loadEditorSoundsFinished
		#define GEODE_STATICS_loadEditorSoundsFinished
		GEODE_AS_STATIC_FUNCTION(loadEditorSoundsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadEditorSoundsFailed
		#define GEODE_STATICS_loadEditorSoundsFailed
		GEODE_AS_STATIC_FUNCTION(loadEditorSoundsFailed) 
	#endif

	#ifndef GEODE_STATICS_onConfigViewClicked
		#define GEODE_STATICS_onConfigViewClicked
		GEODE_AS_STATIC_FUNCTION(onConfigViewClicked) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_clearCells
		#define GEODE_STATICS_clearCells
		GEODE_AS_STATIC_FUNCTION(clearCells) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_layoutCells
		#define GEODE_STATICS_layoutCells
		GEODE_AS_STATIC_FUNCTION(layoutCells) 
	#endif

	#ifndef GEODE_STATICS_loadCurrentPage
		#define GEODE_STATICS_loadCurrentPage
		GEODE_AS_STATIC_FUNCTION(loadCurrentPage) 
	#endif

	#ifndef GEODE_STATICS_onConfigCopiedToMyLists
		#define GEODE_STATICS_onConfigCopiedToMyLists
		GEODE_AS_STATIC_FUNCTION(onConfigCopiedToMyLists) 
	#endif

	#ifndef GEODE_STATICS_onConfigListChanged
		#define GEODE_STATICS_onConfigListChanged
		GEODE_AS_STATIC_FUNCTION(onConfigListChanged) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onRefresh
		#define GEODE_STATICS_onRefresh
		GEODE_AS_STATIC_FUNCTION(onRefresh) 
	#endif

	#ifndef GEODE_STATICS_onSaveActive
		#define GEODE_STATICS_onSaveActive
		GEODE_AS_STATIC_FUNCTION(onSaveActive) 
	#endif

	#ifndef GEODE_STATICS_onSelectMode
		#define GEODE_STATICS_onSelectMode
		GEODE_AS_STATIC_FUNCTION(onSelectMode) 
	#endif

	#ifndef GEODE_STATICS_setMode
		#define GEODE_STATICS_setMode
		GEODE_AS_STATIC_FUNCTION(setMode) 
	#endif

	#ifndef GEODE_STATICS_showLoading
		#define GEODE_STATICS_showLoading
		GEODE_AS_STATIC_FUNCTION(showLoading) 
	#endif

	#ifndef GEODE_STATICS_updateFooterButtonVisibility
		#define GEODE_STATICS_updateFooterButtonVisibility
		GEODE_AS_STATIC_FUNCTION(updateFooterButtonVisibility) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadEditorSoundsFinished
		#define GEODE_CONCEPT_CHECK_loadEditorSoundsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadEditorSoundsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadEditorSoundsFailed
		#define GEODE_CONCEPT_CHECK_loadEditorSoundsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadEditorSoundsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onConfigViewClicked
		#define GEODE_CONCEPT_CHECK_onConfigViewClicked
		GEODE_CONCEPT_FUNCTION_CHECK(onConfigViewClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearCells
		#define GEODE_CONCEPT_CHECK_clearCells
		GEODE_CONCEPT_FUNCTION_CHECK(clearCells) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutCells
		#define GEODE_CONCEPT_CHECK_layoutCells
		GEODE_CONCEPT_FUNCTION_CHECK(layoutCells) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCurrentPage
		#define GEODE_CONCEPT_CHECK_loadCurrentPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadCurrentPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onConfigCopiedToMyLists
		#define GEODE_CONCEPT_CHECK_onConfigCopiedToMyLists
		GEODE_CONCEPT_FUNCTION_CHECK(onConfigCopiedToMyLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onConfigListChanged
		#define GEODE_CONCEPT_CHECK_onConfigListChanged
		GEODE_CONCEPT_FUNCTION_CHECK(onConfigListChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefresh
		#define GEODE_CONCEPT_CHECK_onRefresh
		GEODE_CONCEPT_FUNCTION_CHECK(onRefresh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSaveActive
		#define GEODE_CONCEPT_CHECK_onSaveActive
		GEODE_CONCEPT_FUNCTION_CHECK(onSaveActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectMode
		#define GEODE_CONCEPT_CHECK_onSelectMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMode
		#define GEODE_CONCEPT_CHECK_setMode
		GEODE_CONCEPT_FUNCTION_CHECK(setMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLoading
		#define GEODE_CONCEPT_CHECK_showLoading
		GEODE_CONCEPT_FUNCTION_CHECK(showLoading) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFooterButtonVisibility
		#define GEODE_CONCEPT_CHECK_updateFooterButtonVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateFooterButtonVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageLabel
		#define GEODE_CONCEPT_CHECK_updatePageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundBrowserLayer> : ModifyBase<ModifyDerive<Der, EditorSoundBrowserLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundBrowserLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundBrowserLayer>>::ModifyBase;
		using Base = EditorSoundBrowserLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x18d880, Thiscall, EditorSoundBrowserLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18da30, Default, EditorSoundBrowserLayer, create, std::string, EditorSoundsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46290, Thiscall, EditorSoundBrowserLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1903f0, Thiscall, EditorSoundBrowserLayer, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18ee00, Thiscall, EditorSoundBrowserLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190080, Thiscall, EditorSoundBrowserLayer, setTextPopupClosed, SetTextPopup*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190400, Thiscall, EditorSoundBrowserLayer, loadEditorSoundsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1904b0, Thiscall, EditorSoundBrowserLayer, loadEditorSoundsFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x190560, Thiscall, EditorSoundBrowserLayer, onConfigViewClicked, GJEditorSoundConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, EditorSoundBrowserLayer, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98e00, Thiscall, EditorSoundBrowserLayer, getSelectedCellIdx, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundBrowserLayer, clearCells, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18dc50, Thiscall, EditorSoundBrowserLayer, init, std::string, EditorSoundsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18f9c0, Thiscall, EditorSoundBrowserLayer, layoutCells, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18f2b0, Thiscall, EditorSoundBrowserLayer, loadCurrentPage, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundBrowserLayer, onConfigCopiedToMyLists, GJEditorSoundConfig*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundBrowserLayer, onConfigListChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18fe70, Thiscall, EditorSoundBrowserLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18fe50, Thiscall, EditorSoundBrowserLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1903e0, Thiscall, EditorSoundBrowserLayer, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18fee0, Thiscall, EditorSoundBrowserLayer, onSaveActive, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18f070, Thiscall, EditorSoundBrowserLayer, onSelectMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18ef50, Thiscall, EditorSoundBrowserLayer, setMode, EditorSoundBrowseMode)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundBrowserLayer, showLoading, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundBrowserLayer, updateFooterButtonVisibility, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18fbe0, Thiscall, EditorSoundBrowserLayer, updatePageLabel, )
		}
	};
}
