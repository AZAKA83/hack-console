#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelPickerPopup.hpp>
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

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFinished
		#define GEODE_STATICS_loadLevelsFinished
		GEODE_AS_STATIC_FUNCTION(loadLevelsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadLevelsFailed
		#define GEODE_STATICS_loadLevelsFailed
		GEODE_AS_STATIC_FUNCTION(loadLevelsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_applyKind
		#define GEODE_STATICS_applyKind
		GEODE_AS_STATIC_FUNCTION(applyKind) 
	#endif

	#ifndef GEODE_STATICS_buildSavedPage
		#define GEODE_STATICS_buildSavedPage
		GEODE_AS_STATIC_FUNCTION(buildSavedPage) 
	#endif

	#ifndef GEODE_STATICS_doPageRequest
		#define GEODE_STATICS_doPageRequest
		GEODE_AS_STATIC_FUNCTION(doPageRequest) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onOnlineMode
		#define GEODE_STATICS_onOnlineMode
		GEODE_AS_STATIC_FUNCTION(onOnlineMode) 
	#endif

	#ifndef GEODE_STATICS_onRefreshOnline
		#define GEODE_STATICS_onRefreshOnline
		GEODE_AS_STATIC_FUNCTION(onRefreshOnline) 
	#endif

	#ifndef GEODE_STATICS_onToggleFavorites
		#define GEODE_STATICS_onToggleFavorites
		GEODE_AS_STATIC_FUNCTION(onToggleFavorites) 
	#endif

	#ifndef GEODE_STATICS_onToggleKind
		#define GEODE_STATICS_onToggleKind
		GEODE_AS_STATIC_FUNCTION(onToggleKind) 
	#endif

	#ifndef GEODE_STATICS_onUseID
		#define GEODE_STATICS_onUseID
		GEODE_AS_STATIC_FUNCTION(onUseID) 
	#endif

	#ifndef GEODE_STATICS_refreshUseID
		#define GEODE_STATICS_refreshUseID
		GEODE_AS_STATIC_FUNCTION(refreshUseID) 
	#endif

	#ifndef GEODE_STATICS_savedIndex
		#define GEODE_STATICS_savedIndex
		GEODE_AS_STATIC_FUNCTION(savedIndex) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestPage
		#define GEODE_CONCEPT_CHECK_requestPage
		GEODE_CONCEPT_FUNCTION_CHECK(requestPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFinished
		#define GEODE_CONCEPT_CHECK_loadLevelsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLevelsFailed
		#define GEODE_CONCEPT_CHECK_loadLevelsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadLevelsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyKind
		#define GEODE_CONCEPT_CHECK_applyKind
		GEODE_CONCEPT_FUNCTION_CHECK(applyKind) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildSavedPage
		#define GEODE_CONCEPT_CHECK_buildSavedPage
		GEODE_CONCEPT_FUNCTION_CHECK(buildSavedPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doPageRequest
		#define GEODE_CONCEPT_CHECK_doPageRequest
		GEODE_CONCEPT_FUNCTION_CHECK(doPageRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOnlineMode
		#define GEODE_CONCEPT_CHECK_onOnlineMode
		GEODE_CONCEPT_FUNCTION_CHECK(onOnlineMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefreshOnline
		#define GEODE_CONCEPT_CHECK_onRefreshOnline
		GEODE_CONCEPT_FUNCTION_CHECK(onRefreshOnline) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleFavorites
		#define GEODE_CONCEPT_CHECK_onToggleFavorites
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleFavorites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleKind
		#define GEODE_CONCEPT_CHECK_onToggleKind
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleKind) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUseID
		#define GEODE_CONCEPT_CHECK_onUseID
		GEODE_CONCEPT_FUNCTION_CHECK(onUseID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshUseID
		#define GEODE_CONCEPT_CHECK_refreshUseID
		GEODE_CONCEPT_FUNCTION_CHECK(refreshUseID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_savedIndex
		#define GEODE_CONCEPT_CHECK_savedIndex
		GEODE_CONCEPT_FUNCTION_CHECK(savedIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelPickerPopup> : ModifyBase<ModifyDerive<Der, LevelPickerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelPickerPopup>>;
		using ModifyBase<ModifyDerive<Der, LevelPickerPopup>>::ModifyBase;
		using Base = LevelPickerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd35d0, Thiscall, LevelPickerPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8b60, Default, LevelPickerPopup, create, LevelPickerDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9f80, Thiscall, LevelPickerPopup, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeb8f0, Thiscall, LevelPickerPopup, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea7e0, Thiscall, LevelPickerPopup, loadLevelsFinished, cocos2d::CCArray*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea8f0, Thiscall, LevelPickerPopup, loadLevelsFailed, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea640, Thiscall, LevelPickerPopup, setupPageInfo, std::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea980, Thiscall, LevelPickerPopup, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelPickerPopup, applyKind, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeb750, Thiscall, LevelPickerPopup, buildSavedPage, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9fb0, Thiscall, LevelPickerPopup, doPageRequest, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8d90, Thiscall, LevelPickerPopup, init, LevelPickerDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea370, Thiscall, LevelPickerPopup, onOnlineMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xea5a0, Thiscall, LevelPickerPopup, onRefreshOnline, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9ed0, Thiscall, LevelPickerPopup, onToggleFavorites, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe97f0, Thiscall, LevelPickerPopup, onToggleKind, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9d30, Thiscall, LevelPickerPopup, onUseID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe9ab0, Thiscall, LevelPickerPopup, refreshUseID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelPickerPopup, savedIndex, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelPickerPopup, setupList, cocos2d::CCArray*)
		}
	};
}
