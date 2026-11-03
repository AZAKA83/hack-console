#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FRequestProfilePage.hpp>
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_loadFRequestsFinished
		#define GEODE_STATICS_loadFRequestsFinished
		GEODE_AS_STATIC_FUNCTION(loadFRequestsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadFRequestsFailed
		#define GEODE_STATICS_loadFRequestsFailed
		GEODE_AS_STATIC_FUNCTION(loadFRequestsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_forceReloadRequests
		#define GEODE_STATICS_forceReloadRequests
		GEODE_AS_STATIC_FUNCTION(forceReloadRequests) 
	#endif

	#ifndef GEODE_STATICS_getUserListFinished
		#define GEODE_STATICS_getUserListFinished
		GEODE_AS_STATIC_FUNCTION(getUserListFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserListFailed
		#define GEODE_STATICS_getUserListFailed
		GEODE_AS_STATIC_FUNCTION(getUserListFailed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_deleteSelected
		#define GEODE_STATICS_deleteSelected
		GEODE_AS_STATIC_FUNCTION(deleteSelected) 
	#endif

	#ifndef GEODE_STATICS_doSearch
		#define GEODE_STATICS_doSearch
		GEODE_AS_STATIC_FUNCTION(doSearch) 
	#endif

	#ifndef GEODE_STATICS_exitGlobalMode
		#define GEODE_STATICS_exitGlobalMode
		GEODE_AS_STATIC_FUNCTION(exitGlobalMode) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isCorrect
		#define GEODE_STATICS_isCorrect
		GEODE_AS_STATIC_FUNCTION(isCorrect) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onGlobalSearch
		#define GEODE_STATICS_onGlobalSearch
		GEODE_AS_STATIC_FUNCTION(onGlobalSearch) 
	#endif

	#ifndef GEODE_STATICS_onMarkRead
		#define GEODE_STATICS_onMarkRead
		GEODE_AS_STATIC_FUNCTION(onMarkRead) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onSelectionChanged
		#define GEODE_STATICS_onSelectionChanged
		GEODE_AS_STATIC_FUNCTION(onSelectionChanged) 
	#endif

	#ifndef GEODE_STATICS_onSelectMode
		#define GEODE_STATICS_onSelectMode
		GEODE_AS_STATIC_FUNCTION(onSelectMode) 
	#endif

	#ifndef GEODE_STATICS_onToggleAllObjects
		#define GEODE_STATICS_onToggleAllObjects
		GEODE_AS_STATIC_FUNCTION(onToggleAllObjects) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_removeFromNewCount
		#define GEODE_STATICS_removeFromNewCount
		GEODE_AS_STATIC_FUNCTION(removeFromNewCount) 
	#endif

	#ifndef GEODE_STATICS_selectedCount
		#define GEODE_STATICS_selectedCount
		GEODE_AS_STATIC_FUNCTION(selectedCount) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_untoggleAll
		#define GEODE_STATICS_untoggleAll
		GEODE_AS_STATIC_FUNCTION(untoggleAll) 
	#endif

	#ifndef GEODE_STATICS_updateModeButtons
		#define GEODE_STATICS_updateModeButtons
		GEODE_AS_STATIC_FUNCTION(updateModeButtons) 
	#endif

	#ifndef GEODE_STATICS_updateSelectUI
		#define GEODE_STATICS_updateSelectUI
		GEODE_AS_STATIC_FUNCTION(updateSelectUI) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFRequestsFinished
		#define GEODE_CONCEPT_CHECK_loadFRequestsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadFRequestsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFRequestsFailed
		#define GEODE_CONCEPT_CHECK_loadFRequestsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadFRequestsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceReloadRequests
		#define GEODE_CONCEPT_CHECK_forceReloadRequests
		GEODE_CONCEPT_FUNCTION_CHECK(forceReloadRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownsTouchPrio
		#define GEODE_CONCEPT_CHECK_ownsTouchPrio
		GEODE_CONCEPT_FUNCTION_CHECK(ownsTouchPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserListFinished
		#define GEODE_CONCEPT_CHECK_getUserListFinished
		GEODE_CONCEPT_FUNCTION_CHECK(getUserListFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserListFailed
		#define GEODE_CONCEPT_CHECK_getUserListFailed
		GEODE_CONCEPT_FUNCTION_CHECK(getUserListFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSelected
		#define GEODE_CONCEPT_CHECK_deleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doSearch
		#define GEODE_CONCEPT_CHECK_doSearch
		GEODE_CONCEPT_FUNCTION_CHECK(doSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitGlobalMode
		#define GEODE_CONCEPT_CHECK_exitGlobalMode
		GEODE_CONCEPT_FUNCTION_CHECK(exitGlobalMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCorrect
		#define GEODE_CONCEPT_CHECK_isCorrect
		GEODE_CONCEPT_FUNCTION_CHECK(isCorrect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPage
		#define GEODE_CONCEPT_CHECK_loadPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGlobalSearch
		#define GEODE_CONCEPT_CHECK_onGlobalSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onGlobalSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMarkRead
		#define GEODE_CONCEPT_CHECK_onMarkRead
		GEODE_CONCEPT_FUNCTION_CHECK(onMarkRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectionChanged
		#define GEODE_CONCEPT_CHECK_onSelectionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectionChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectMode
		#define GEODE_CONCEPT_CHECK_onSelectMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleAllObjects
		#define GEODE_CONCEPT_CHECK_onToggleAllObjects
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleAllObjects) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromNewCount
		#define GEODE_CONCEPT_CHECK_removeFromNewCount
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromNewCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedCount
		#define GEODE_CONCEPT_CHECK_selectedCount
		GEODE_CONCEPT_FUNCTION_CHECK(selectedCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCommentsBrowser
		#define GEODE_CONCEPT_CHECK_setupCommentsBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_untoggleAll
		#define GEODE_CONCEPT_CHECK_untoggleAll
		GEODE_CONCEPT_FUNCTION_CHECK(untoggleAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelsLabel
		#define GEODE_CONCEPT_CHECK_updateLevelsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelsLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateModeButtons
		#define GEODE_CONCEPT_CHECK_updateModeButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateModeButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageArrows
		#define GEODE_CONCEPT_CHECK_updatePageArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageArrows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelectUI
		#define GEODE_CONCEPT_CHECK_updateSelectUI
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelectUI) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FRequestProfilePage> : ModifyBase<ModifyDerive<Der, FRequestProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FRequestProfilePage>>;
		using ModifyBase<ModifyDerive<Der, FRequestProfilePage>>::ModifyBase;
		using Base = FRequestProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x20f240, Thiscall, FRequestProfilePage)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FRequestProfilePage, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46290, Thiscall, FRequestProfilePage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211f10, Thiscall, FRequestProfilePage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2119f0, Thiscall, FRequestProfilePage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211f20, Thiscall, FRequestProfilePage, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211f70, Thiscall, FRequestProfilePage, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212110, Thiscall, FRequestProfilePage, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212bd0, Thiscall, FRequestProfilePage, loadFRequestsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212c60, Thiscall, FRequestProfilePage, loadFRequestsFailed, char const*, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212d40, Thiscall, FRequestProfilePage, setupPageInfo, std::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212d20, Thiscall, FRequestProfilePage, forceReloadRequests, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FRequestProfilePage, ownsTouchPrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x210c80, Thiscall, FRequestProfilePage, getUserListFinished, cocos2d::CCArray*, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x210d90, Thiscall, FRequestProfilePage, getUserListFailed, UserListType, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212780, Thiscall, FRequestProfilePage, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211400, Thiscall, FRequestProfilePage, deleteSelected, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, doSearch, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, exitGlobalMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x20f420, Thiscall, FRequestProfilePage, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2121b0, Thiscall, FRequestProfilePage, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2122f0, Thiscall, FRequestProfilePage, loadPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, onClearSearch, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x210fe0, Thiscall, FRequestProfilePage, onDeleteSelected, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, onGlobalSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2116b0, Thiscall, FRequestProfilePage, onMarkRead, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, onNextPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, onPrevPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, onSelectionChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211a20, Thiscall, FRequestProfilePage, onSelectMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, onToggleAllObjects, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, onUpdate, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FRequestProfilePage, removeFromNewCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2102f0, Thiscall, FRequestProfilePage, selectedCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x212a40, Thiscall, FRequestProfilePage, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211e70, Thiscall, FRequestProfilePage, untoggleAll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FRequestProfilePage, updateLevelsLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x211b40, Thiscall, FRequestProfilePage, updateModeButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FRequestProfilePage, updatePageArrows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2103a0, Thiscall, FRequestProfilePage, updateSelectUI, )
		}
	};
}
