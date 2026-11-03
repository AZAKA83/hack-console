#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AutoBackupPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_requestPage
		#define GEODE_STATICS_requestPage
		GEODE_AS_STATIC_FUNCTION(requestPage) 
	#endif

	#ifndef GEODE_STATICS_clearPageContent
		#define GEODE_STATICS_clearPageContent
		GEODE_AS_STATIC_FUNCTION(clearPageContent) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_backupsChanged
		#define GEODE_STATICS_backupsChanged
		GEODE_AS_STATIC_FUNCTION(backupsChanged) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_assignRevs
		#define GEODE_STATICS_assignRevs
		GEODE_AS_STATIC_FUNCTION(assignRevs) 
	#endif

	#ifndef GEODE_STATICS_backupDirectory
		#define GEODE_STATICS_backupDirectory
		GEODE_AS_STATIC_FUNCTION(backupDirectory) 
	#endif

	#ifndef GEODE_STATICS_buildRows
		#define GEODE_STATICS_buildRows
		GEODE_AS_STATIC_FUNCTION(buildRows) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onDelete
		#define GEODE_STATICS_onDelete
		GEODE_AS_STATIC_FUNCTION(onDelete) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onRestore
		#define GEODE_STATICS_onRestore
		GEODE_AS_STATIC_FUNCTION(onRestore) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_onShare
		#define GEODE_STATICS_onShare
		GEODE_AS_STATIC_FUNCTION(onShare) 
	#endif

	#ifndef GEODE_STATICS_onToggleRow
		#define GEODE_STATICS_onToggleRow
		GEODE_AS_STATIC_FUNCTION(onToggleRow) 
	#endif

	#ifndef GEODE_STATICS_pruneBackups
		#define GEODE_STATICS_pruneBackups
		GEODE_AS_STATIC_FUNCTION(pruneBackups) 
	#endif

	#ifndef GEODE_STATICS_reloadFiles
		#define GEODE_STATICS_reloadFiles
		GEODE_AS_STATIC_FUNCTION(reloadFiles) 
	#endif

	#ifndef GEODE_STATICS_selectedCount
		#define GEODE_STATICS_selectedCount
		GEODE_AS_STATIC_FUNCTION(selectedCount) 
	#endif

	#ifndef GEODE_STATICS_updateSelectUI
		#define GEODE_STATICS_updateSelectUI
		GEODE_AS_STATIC_FUNCTION(updateSelectUI) 
	#endif

	#ifndef GEODE_STATICS_updateSummary
		#define GEODE_STATICS_updateSummary
		GEODE_AS_STATIC_FUNCTION(updateSummary) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestPage
		#define GEODE_CONCEPT_CHECK_requestPage
		GEODE_CONCEPT_FUNCTION_CHECK(requestPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPageContent
		#define GEODE_CONCEPT_CHECK_clearPageContent
		GEODE_CONCEPT_FUNCTION_CHECK(clearPageContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_backupsChanged
		#define GEODE_CONCEPT_CHECK_backupsChanged
		GEODE_CONCEPT_FUNCTION_CHECK(backupsChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_assignRevs
		#define GEODE_CONCEPT_CHECK_assignRevs
		GEODE_CONCEPT_FUNCTION_CHECK(assignRevs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_backupDirectory
		#define GEODE_CONCEPT_CHECK_backupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(backupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildRows
		#define GEODE_CONCEPT_CHECK_buildRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDelete
		#define GEODE_CONCEPT_CHECK_onDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRestore
		#define GEODE_CONCEPT_CHECK_onRestore
		GEODE_CONCEPT_FUNCTION_CHECK(onRestore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAll
		#define GEODE_CONCEPT_CHECK_onSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShare
		#define GEODE_CONCEPT_CHECK_onShare
		GEODE_CONCEPT_FUNCTION_CHECK(onShare) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleRow
		#define GEODE_CONCEPT_CHECK_onToggleRow
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pruneBackups
		#define GEODE_CONCEPT_CHECK_pruneBackups
		GEODE_CONCEPT_FUNCTION_CHECK(pruneBackups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadFiles
		#define GEODE_CONCEPT_CHECK_reloadFiles
		GEODE_CONCEPT_FUNCTION_CHECK(reloadFiles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedCount
		#define GEODE_CONCEPT_CHECK_selectedCount
		GEODE_CONCEPT_FUNCTION_CHECK(selectedCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelectUI
		#define GEODE_CONCEPT_CHECK_updateSelectUI
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelectUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSummary
		#define GEODE_CONCEPT_CHECK_updateSummary
		GEODE_CONCEPT_FUNCTION_CHECK(updateSummary) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AutoBackupPopup> : ModifyBase<ModifyDerive<Der, AutoBackupPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AutoBackupPopup>>;
		using ModifyBase<ModifyDerive<Der, AutoBackupPopup>>::ModifyBase;
		using Base = AutoBackupPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xc9870, Thiscall, AutoBackupPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9650, Default, AutoBackupPopup, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, AutoBackupPopup, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcabc0, Thiscall, AutoBackupPopup, clearPageContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcca80, Thiscall, AutoBackupPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca850, Thiscall, AutoBackupPopup, backupsChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xca880, Thiscall, AutoBackupPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc350, Thiscall, AutoBackupPopup, FLAlert_Clicked, FLAlertLayer*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupPopup, assignRevs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupPopup, backupDirectory, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcabe0, Thiscall, AutoBackupPopup, buildRows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9910, Thiscall, AutoBackupPopup, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcab80, Thiscall, AutoBackupPopup, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcbe50, Thiscall, AutoBackupPopup, onDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc750, Thiscall, AutoBackupPopup, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcb880, Thiscall, AutoBackupPopup, onRestore, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc5f0, Thiscall, AutoBackupPopup, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xccad0, Thiscall, AutoBackupPopup, onSettings, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupPopup, onShare, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xcc500, Thiscall, AutoBackupPopup, onToggleRow, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupPopup, pruneBackups, std::string const&, int, std::string const&, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupPopup, reloadFiles, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupPopup, selectedCount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupPopup, updateSelectUI, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoBackupPopup, updateSummary, )
		}
	};
}
