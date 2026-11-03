#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicBrowser.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

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

	#ifndef GEODE_STATICS_sliderEnded
		#define GEODE_STATICS_sliderEnded
		GEODE_AS_STATIC_FUNCTION(sliderEnded) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_sortSelectClosed
		#define GEODE_STATICS_sortSelectClosed
		GEODE_AS_STATIC_FUNCTION(sortSelectClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onArtistFilters
		#define GEODE_STATICS_onArtistFilters
		GEODE_AS_STATIC_FUNCTION(onArtistFilters) 
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

	#ifndef GEODE_STATICS_onPage
		#define GEODE_STATICS_onPage
		GEODE_AS_STATIC_FUNCTION(onPage) 
	#endif

	#ifndef GEODE_STATICS_onPlaybackControl
		#define GEODE_STATICS_onPlaybackControl
		GEODE_AS_STATIC_FUNCTION(onPlaybackControl) 
	#endif

	#ifndef GEODE_STATICS_onSorting
		#define GEODE_STATICS_onSorting
		GEODE_AS_STATIC_FUNCTION(onSorting) 
	#endif

	#ifndef GEODE_STATICS_onTagFilters
		#define GEODE_STATICS_onTagFilters
		GEODE_AS_STATIC_FUNCTION(onTagFilters) 
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

	#ifndef GEODE_STATICS_refreshLevelIDList
		#define GEODE_STATICS_refreshLevelIDList
		GEODE_AS_STATIC_FUNCTION(refreshLevelIDList) 
	#endif

	#ifndef GEODE_STATICS_setupList
		#define GEODE_STATICS_setupList
		GEODE_AS_STATIC_FUNCTION(setupList) 
	#endif

	#ifndef GEODE_STATICS_setupMusicBrowser
		#define GEODE_STATICS_setupMusicBrowser
		GEODE_AS_STATIC_FUNCTION(setupMusicBrowser) 
	#endif

	#ifndef GEODE_STATICS_setupSongControls
		#define GEODE_STATICS_setupSongControls
		GEODE_AS_STATIC_FUNCTION(setupSongControls) 
	#endif

	#ifndef GEODE_STATICS_sliderChanged
		#define GEODE_STATICS_sliderChanged
		GEODE_AS_STATIC_FUNCTION(sliderChanged) 
	#endif

	#ifndef GEODE_STATICS_trySetupMusicBrowser
		#define GEODE_STATICS_trySetupMusicBrowser
		GEODE_AS_STATIC_FUNCTION(trySetupMusicBrowser) 
	#endif

	#ifndef GEODE_STATICS_updateSongControlLayout
		#define GEODE_STATICS_updateSongControlLayout
		GEODE_AS_STATIC_FUNCTION(updateSongControlLayout) 
	#endif

	#ifndef GEODE_STATICS_updateViewItems
		#define GEODE_STATICS_updateViewItems
		GEODE_AS_STATIC_FUNCTION(updateViewItems) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
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

	#ifndef GEODE_CONCEPT_CHECK_sliderEnded
		#define GEODE_CONCEPT_CHECK_sliderEnded
		GEODE_CONCEPT_FUNCTION_CHECK(sliderEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortSelectClosed
		#define GEODE_CONCEPT_CHECK_sortSelectClosed
		GEODE_CONCEPT_FUNCTION_CHECK(sortSelectClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArtistFilters
		#define GEODE_CONCEPT_CHECK_onArtistFilters
		GEODE_CONCEPT_FUNCTION_CHECK(onArtistFilters) 
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

	#ifndef GEODE_CONCEPT_CHECK_onPage
		#define GEODE_CONCEPT_CHECK_onPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPlaybackControl
		#define GEODE_CONCEPT_CHECK_onPlaybackControl
		GEODE_CONCEPT_FUNCTION_CHECK(onPlaybackControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSorting
		#define GEODE_CONCEPT_CHECK_onSorting
		GEODE_CONCEPT_FUNCTION_CHECK(onSorting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTagFilters
		#define GEODE_CONCEPT_CHECK_onTagFilters
		GEODE_CONCEPT_FUNCTION_CHECK(onTagFilters) 
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

	#ifndef GEODE_CONCEPT_CHECK_refreshLevelIDList
		#define GEODE_CONCEPT_CHECK_refreshLevelIDList
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLevelIDList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupList
		#define GEODE_CONCEPT_CHECK_setupList
		GEODE_CONCEPT_FUNCTION_CHECK(setupList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupMusicBrowser
		#define GEODE_CONCEPT_CHECK_setupMusicBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupMusicBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSongControls
		#define GEODE_CONCEPT_CHECK_setupSongControls
		GEODE_CONCEPT_FUNCTION_CHECK(setupSongControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_trySetupMusicBrowser
		#define GEODE_CONCEPT_CHECK_trySetupMusicBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(trySetupMusicBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageLabel
		#define GEODE_CONCEPT_CHECK_updatePageLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSongControlLayout
		#define GEODE_CONCEPT_CHECK_updateSongControlLayout
		GEODE_CONCEPT_FUNCTION_CHECK(updateSongControlLayout) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateViewItems
		#define GEODE_CONCEPT_CHECK_updateViewItems
		GEODE_CONCEPT_FUNCTION_CHECK(updateViewItems) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MusicBrowser> : ModifyBase<ModifyDerive<Der, MusicBrowser>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicBrowser>>;
		using ModifyBase<ModifyDerive<Der, MusicBrowser>>::ModifyBase;
		using Base = MusicBrowser;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x479ee0, Thiscall, MusicBrowser)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47a140, Default, MusicBrowser, create, int, GJSongType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47baf0, Thiscall, MusicBrowser, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46290, Thiscall, MusicBrowser, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47e350, Thiscall, MusicBrowser, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47c860, Thiscall, MusicBrowser, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47c900, Thiscall, MusicBrowser, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47c160, Thiscall, MusicBrowser, sliderEnded, Slider*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d2d0, Thiscall, MusicBrowser, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d470, Thiscall, MusicBrowser, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47df90, Thiscall, MusicBrowser, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d780, Thiscall, MusicBrowser, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47df40, Thiscall, MusicBrowser, sortSelectClosed, SelectSFXSortLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47a340, Thiscall, MusicBrowser, init, int, GJSongType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47db80, Thiscall, MusicBrowser, onArtistFilters, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47dc60, Thiscall, MusicBrowser, onChangelog, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d740, Thiscall, MusicBrowser, onClearSearchText, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47dff0, Thiscall, MusicBrowser, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d480, Thiscall, MusicBrowser, onPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47c100, Thiscall, MusicBrowser, onPlaybackControl, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47dee0, Thiscall, MusicBrowser, onSorting, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d940, Thiscall, MusicBrowser, onTagFilters, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d530, Thiscall, MusicBrowser, onToggleSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47d190, Thiscall, MusicBrowser, onToggleView, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47c280, Thiscall, MusicBrowser, onUpdateLibrary, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicBrowser, refreshLevelIDList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47ca30, Thiscall, MusicBrowser, setupList, MusicSearchResult*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47c380, Thiscall, MusicBrowser, setupMusicBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47be00, Thiscall, MusicBrowser, setupSongControls, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicBrowser, sliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47c300, Thiscall, MusicBrowser, trySetupMusicBrowser, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MusicBrowser, updatePageLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicBrowser, updateSongControlLayout, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicBrowser, updateViewItems, )
		}
	};
}
