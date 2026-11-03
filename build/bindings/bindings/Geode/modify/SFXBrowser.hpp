#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXBrowser.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_sortSelectClosed
		#define GEODE_STATICS_sortSelectClosed
		GEODE_AS_STATIC_FUNCTION(sortSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_shouldSnapToSelected
		#define GEODE_STATICS_shouldSnapToSelected
		GEODE_AS_STATIC_FUNCTION(shouldSnapToSelected) 
	#endif

	#ifndef GEODE_STATICS_rebuildContent
		#define GEODE_STATICS_rebuildContent
		GEODE_AS_STATIC_FUNCTION(rebuildContent) 
	#endif

	#ifndef GEODE_STATICS_sfxFolderPicked
		#define GEODE_STATICS_sfxFolderPicked
		GEODE_AS_STATIC_FUNCTION(sfxFolderPicked) 
	#endif

	#ifndef GEODE_STATICS_sfxFoldersPicked
		#define GEODE_STATICS_sfxFoldersPicked
		GEODE_AS_STATIC_FUNCTION(sfxFoldersPicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

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

	#ifndef GEODE_STATICS_currentListScrollY
		#define GEODE_STATICS_currentListScrollY
		GEODE_AS_STATIC_FUNCTION(currentListScrollY) 
	#endif

	#ifndef GEODE_STATICS_executeBatchDelete
		#define GEODE_STATICS_executeBatchDelete
		GEODE_AS_STATIC_FUNCTION(executeBatchDelete) 
	#endif

	#ifndef GEODE_STATICS_fitFolderPath
		#define GEODE_STATICS_fitFolderPath
		GEODE_AS_STATIC_FUNCTION(fitFolderPath) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onBatchDelete
		#define GEODE_STATICS_onBatchDelete
		GEODE_AS_STATIC_FUNCTION(onBatchDelete) 
	#endif

	#ifndef GEODE_STATICS_onChangelog
		#define GEODE_STATICS_onChangelog
		GEODE_AS_STATIC_FUNCTION(onChangelog) 
	#endif

	#ifndef GEODE_STATICS_onClearSearchText
		#define GEODE_STATICS_onClearSearchText
		GEODE_AS_STATIC_FUNCTION(onClearSearchText) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onExitFolder
		#define GEODE_STATICS_onExitFolder
		GEODE_AS_STATIC_FUNCTION(onExitFolder) 
	#endif

	#ifndef GEODE_STATICS_onExportFile
		#define GEODE_STATICS_onExportFile
		GEODE_AS_STATIC_FUNCTION(onExportFile) 
	#endif

	#ifndef GEODE_STATICS_onImportFile
		#define GEODE_STATICS_onImportFile
		GEODE_AS_STATIC_FUNCTION(onImportFile) 
	#endif

	#ifndef GEODE_STATICS_onImportSetup
		#define GEODE_STATICS_onImportSetup
		GEODE_AS_STATIC_FUNCTION(onImportSetup) 
	#endif

	#ifndef GEODE_STATICS_onMoveToFolder
		#define GEODE_STATICS_onMoveToFolder
		GEODE_AS_STATIC_FUNCTION(onMoveToFolder) 
	#endif

	#ifndef GEODE_STATICS_onNewFolder
		#define GEODE_STATICS_onNewFolder
		GEODE_AS_STATIC_FUNCTION(onNewFolder) 
	#endif

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onReplaceSetup
		#define GEODE_STATICS_onReplaceSetup
		GEODE_AS_STATIC_FUNCTION(onReplaceSetup) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onShareSetup
		#define GEODE_STATICS_onShareSetup
		GEODE_AS_STATIC_FUNCTION(onShareSetup) 
	#endif

	#ifndef GEODE_STATICS_onSorting
		#define GEODE_STATICS_onSorting
		GEODE_AS_STATIC_FUNCTION(onSorting) 
	#endif

	#ifndef GEODE_STATICS_onToggleCompactMode
		#define GEODE_STATICS_onToggleCompactMode
		GEODE_AS_STATIC_FUNCTION(onToggleCompactMode) 
	#endif

	#ifndef GEODE_STATICS_onToggleSearch
		#define GEODE_STATICS_onToggleSearch
		GEODE_AS_STATIC_FUNCTION(onToggleSearch) 
	#endif

	#ifndef GEODE_STATICS_onToggleView
		#define GEODE_STATICS_onToggleView
		GEODE_AS_STATIC_FUNCTION(onToggleView) 
	#endif

	#ifndef GEODE_STATICS_onUpdateLibrary
		#define GEODE_STATICS_onUpdateLibrary
		GEODE_AS_STATIC_FUNCTION(onUpdateLibrary) 
	#endif

	#ifndef GEODE_STATICS_refreshCustomList
		#define GEODE_STATICS_refreshCustomList
		GEODE_AS_STATIC_FUNCTION(refreshCustomList) 
	#endif

	#ifndef GEODE_STATICS_refreshLevelIDList
		#define GEODE_STATICS_refreshLevelIDList
		GEODE_AS_STATIC_FUNCTION(refreshLevelIDList) 
	#endif

	#ifndef GEODE_STATICS_restoreListScroll
		#define GEODE_STATICS_restoreListScroll
		GEODE_AS_STATIC_FUNCTION(restoreListScroll) 
	#endif

	#ifndef GEODE_STATICS_searchSettingsChanged
		#define GEODE_STATICS_searchSettingsChanged
		GEODE_AS_STATIC_FUNCTION(searchSettingsChanged) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_setupSFXBrowser
		#define GEODE_STATICS_setupSFXBrowser
		GEODE_AS_STATIC_FUNCTION(setupSFXBrowser) 
	#endif

	#ifndef GEODE_STATICS_switchToView
		#define GEODE_STATICS_switchToView
		GEODE_AS_STATIC_FUNCTION(switchToView) 
	#endif

	#ifndef GEODE_STATICS_trySetupSFXBrowser
		#define GEODE_STATICS_trySetupSFXBrowser
		GEODE_AS_STATIC_FUNCTION(trySetupSFXBrowser) 
	#endif

	#ifndef GEODE_STATICS_updatePageLabel
		#define GEODE_STATICS_updatePageLabel
		GEODE_AS_STATIC_FUNCTION(updatePageLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSelectionUI
		#define GEODE_STATICS_updateSelectionUI
		GEODE_AS_STATIC_FUNCTION(updateSelectionUI) 
	#endif

	#ifndef GEODE_STATICS_updateShareItem
		#define GEODE_STATICS_updateShareItem
		GEODE_AS_STATIC_FUNCTION(updateShareItem) 
	#endif

	#ifndef GEODE_STATICS_updateViewItems
		#define GEODE_STATICS_updateViewItems
		GEODE_AS_STATIC_FUNCTION(updateViewItems) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSelectClosed
		#define GEODE_CONCEPT_CHECK_sortSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(sortSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldSnapToSelected
		#define GEODE_CONCEPT_CHECK_shouldSnapToSelected
		GEODE_CONCEPT_FUNCTION_CHECK(shouldSnapToSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxFolderPicked
		#define GEODE_CONCEPT_CHECK_sfxFolderPicked
		GEODE_CONCEPT_FUNCTION_CHECK(sfxFolderPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxFoldersPicked
		#define GEODE_CONCEPT_CHECK_sfxFoldersPicked
		GEODE_CONCEPT_FUNCTION_CHECK(sfxFoldersPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
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

	#ifndef GEODE_CONCEPT_CHECK_currentListScrollY
		#define GEODE_CONCEPT_CHECK_currentListScrollY
		GEODE_CONCEPT_FUNCTION_CHECK(currentListScrollY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_executeBatchDelete
		#define GEODE_CONCEPT_CHECK_executeBatchDelete
		GEODE_CONCEPT_FUNCTION_CHECK(executeBatchDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fitFolderPath
		#define GEODE_CONCEPT_CHECK_fitFolderPath
		GEODE_CONCEPT_FUNCTION_CHECK(fitFolderPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBatchDelete
		#define GEODE_CONCEPT_CHECK_onBatchDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onBatchDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangelog
		#define GEODE_CONCEPT_CHECK_onChangelog
		GEODE_CONCEPT_FUNCTION_CHECK(onChangelog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearchText
		#define GEODE_CONCEPT_CHECK_onClearSearchText
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearchText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExitFolder
		#define GEODE_CONCEPT_CHECK_onExitFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onExitFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExportFile
		#define GEODE_CONCEPT_CHECK_onExportFile
		GEODE_CONCEPT_FUNCTION_CHECK(onExportFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onImportFile
		#define GEODE_CONCEPT_CHECK_onImportFile
		GEODE_CONCEPT_FUNCTION_CHECK(onImportFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onImportSetup
		#define GEODE_CONCEPT_CHECK_onImportSetup
		GEODE_CONCEPT_FUNCTION_CHECK(onImportSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMoveToFolder
		#define GEODE_CONCEPT_CHECK_onMoveToFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onMoveToFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewFolder
		#define GEODE_CONCEPT_CHECK_onNewFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onNewFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReplaceSetup
		#define GEODE_CONCEPT_CHECK_onReplaceSetup
		GEODE_CONCEPT_FUNCTION_CHECK(onReplaceSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAll
		#define GEODE_CONCEPT_CHECK_onSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShareSetup
		#define GEODE_CONCEPT_CHECK_onShareSetup
		GEODE_CONCEPT_FUNCTION_CHECK(onShareSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSorting
		#define GEODE_CONCEPT_CHECK_onSorting
		GEODE_CONCEPT_FUNCTION_CHECK(onSorting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleCompactMode
		#define GEODE_CONCEPT_CHECK_onToggleCompactMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleCompactMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSearch
		#define GEODE_CONCEPT_CHECK_onToggleSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleView
		#define GEODE_CONCEPT_CHECK_onToggleView
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateLibrary
		#define GEODE_CONCEPT_CHECK_onUpdateLibrary
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateLibrary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshCustomList
		#define GEODE_CONCEPT_CHECK_refreshCustomList
		GEODE_CONCEPT_FUNCTION_CHECK(refreshCustomList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshLevelIDList
		#define GEODE_CONCEPT_CHECK_refreshLevelIDList
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLevelIDList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreListScroll
		#define GEODE_CONCEPT_CHECK_restoreListScroll
		GEODE_CONCEPT_FUNCTION_CHECK(restoreListScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_searchSettingsChanged
		#define GEODE_CONCEPT_CHECK_searchSettingsChanged
		GEODE_CONCEPT_FUNCTION_CHECK(searchSettingsChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSFXBrowser
		#define GEODE_CONCEPT_CHECK_setupSFXBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupSFXBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_switchToView
		#define GEODE_CONCEPT_CHECK_switchToView
		GEODE_CONCEPT_FUNCTION_CHECK(switchToView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySetupSFXBrowser
		#define GEODE_CONCEPT_CHECK_trySetupSFXBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(trySetupSFXBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageLabel
		#define GEODE_CONCEPT_CHECK_updatePageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelectionUI
		#define GEODE_CONCEPT_CHECK_updateSelectionUI
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelectionUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShareItem
		#define GEODE_CONCEPT_CHECK_updateShareItem
		GEODE_CONCEPT_FUNCTION_CHECK(updateShareItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateViewItems
		#define GEODE_CONCEPT_CHECK_updateViewItems
		GEODE_CONCEPT_FUNCTION_CHECK(updateViewItems) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXBrowser> : ModifyBase<ModifyDerive<Der, SFXBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXBrowser>>;
		using ModifyBase<ModifyDerive<Der, SFXBrowser>>::ModifyBase;
		using Base = SFXBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SFXBrowser, create, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46290, Thiscall, SFXBrowser, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x620a50, Thiscall, SFXBrowser, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x619720, Thiscall, SFXBrowser, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6197c0, Thiscall, SFXBrowser, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f260, Thiscall, SFXBrowser, sortSelectClosed, SelectSFXSortLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61e530, Thiscall, SFXBrowser, setTextPopupClosed, SetTextPopup*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f960, Thiscall, SFXBrowser, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6202c0, Thiscall, SFXBrowser, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6202d0, Thiscall, SFXBrowser, shouldSnapToSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f6b0, Thiscall, SFXBrowser, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61c260, Thiscall, SFXBrowser, sfxFolderPicked, SFXFolderPickerPopup*, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61d820, Thiscall, SFXBrowser, sfxFoldersPicked, SFXFolderPickerPopup*, std::set<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61eb30, Thiscall, SFXBrowser, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f7a0, Thiscall, SFXBrowser, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x620270, Thiscall, SFXBrowser, getSelectedCellCustomIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff70, Thiscall, SFXBrowser, allowsCustomSFXActions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61cf00, Thiscall, SFXBrowser, isCustomIDSelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x620280, Thiscall, SFXBrowser, inCustomSFXTree, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6202a0, Thiscall, SFXBrowser, showsSFXInfoButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, currentListScrollY, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, executeBatchDelete, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, fitFolderPath, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x616760, Thiscall, SFXBrowser, init, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61c940, Thiscall, SFXBrowser, onBatchDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61eeb0, Thiscall, SFXBrowser, onChangelog, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f760, Thiscall, SFXBrowser, onClearSearchText, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x620830, Thiscall, SFXBrowser, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x620590, Thiscall, SFXBrowser, onExitFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61df90, Thiscall, SFXBrowser, onExportFile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61e1a0, Thiscall, SFXBrowser, onImportFile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61cf40, Thiscall, SFXBrowser, onImportSetup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61c120, Thiscall, SFXBrowser, onMoveToFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61bd50, Thiscall, SFXBrowser, onNewFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6202e0, Thiscall, SFXBrowser, onPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61d400, Thiscall, SFXBrowser, onReplaceSetup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61bee0, Thiscall, SFXBrowser, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f560, Thiscall, SFXBrowser, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61d5c0, Thiscall, SFXBrowser, onShareSetup, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f210, Thiscall, SFXBrowser, onSorting, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f2a0, Thiscall, SFXBrowser, onToggleCompactMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61f340, Thiscall, SFXBrowser, onToggleSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x61b360, Thiscall, SFXBrowser, onToggleView, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x618920, Thiscall, SFXBrowser, onUpdateLibrary, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, refreshCustomList, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, refreshLevelIDList, SFXSearchResult*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, restoreListScroll, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, searchSettingsChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x619900, Thiscall, SFXBrowser, setupList, SFXSearchResult*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x618a20, Thiscall, SFXBrowser, setupSFXBrowser, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, switchToView, AudioViewType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6189a0, Thiscall, SFXBrowser, trySetupSFXBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x6203b0, Thiscall, SFXBrowser, updatePageLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, updateSelectionUI, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, updateShareItem, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXBrowser, updateViewItems, )
		}
	};
}
