#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InfoLayer.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFinished
		#define GEODE_STATICS_loadCommentsFinished
		GEODE_AS_STATIC_FUNCTION(loadCommentsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadCommentsFailed
		#define GEODE_STATICS_loadCommentsFailed
		GEODE_AS_STATIC_FUNCTION(loadCommentsFailed) 
	#endif

	#ifndef GEODE_STATICS_setupPageInfo
		#define GEODE_STATICS_setupPageInfo
		GEODE_AS_STATIC_FUNCTION(setupPageInfo) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFinished
		#define GEODE_STATICS_commentUploadFinished
		GEODE_AS_STATIC_FUNCTION(commentUploadFinished) 
	#endif

	#ifndef GEODE_STATICS_commentUploadFailed
		#define GEODE_STATICS_commentUploadFailed
		GEODE_AS_STATIC_FUNCTION(commentUploadFailed) 
	#endif

	#ifndef GEODE_STATICS_updateUserScoreFinished
		#define GEODE_STATICS_updateUserScoreFinished
		GEODE_AS_STATIC_FUNCTION(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_adminActionConfirmed
		#define GEODE_STATICS_adminActionConfirmed
		GEODE_AS_STATIC_FUNCTION(adminActionConfirmed) 
	#endif

	#ifndef GEODE_STATICS_bulkCommentDeleteFinished
		#define GEODE_STATICS_bulkCommentDeleteFinished
		GEODE_AS_STATIC_FUNCTION(bulkCommentDeleteFinished) 
	#endif

	#ifndef GEODE_STATICS_bulkCommentDeleteFailed
		#define GEODE_STATICS_bulkCommentDeleteFailed
		GEODE_AS_STATIC_FUNCTION(bulkCommentDeleteFailed) 
	#endif

	#ifndef GEODE_STATICS_activeCommentID
		#define GEODE_STATICS_activeCommentID
		GEODE_AS_STATIC_FUNCTION(activeCommentID) 
	#endif

	#ifndef GEODE_STATICS_activeCommentKeyType
		#define GEODE_STATICS_activeCommentKeyType
		GEODE_AS_STATIC_FUNCTION(activeCommentKeyType) 
	#endif

	#ifndef GEODE_STATICS_canBulkDelete
		#define GEODE_STATICS_canBulkDelete
		GEODE_AS_STATIC_FUNCTION(canBulkDelete) 
	#endif

	#ifndef GEODE_STATICS_canToggleModRoom
		#define GEODE_STATICS_canToggleModRoom
		GEODE_AS_STATIC_FUNCTION(canToggleModRoom) 
	#endif

	#ifndef GEODE_STATICS_clearBulkSelection
		#define GEODE_STATICS_clearBulkSelection
		GEODE_AS_STATIC_FUNCTION(clearBulkSelection) 
	#endif

	#ifndef GEODE_STATICS_confirmBulkDelete
		#define GEODE_STATICS_confirmBulkDelete
		GEODE_AS_STATIC_FUNCTION(confirmBulkDelete) 
	#endif

	#ifndef GEODE_STATICS_confirmReport
		#define GEODE_STATICS_confirmReport
		GEODE_AS_STATIC_FUNCTION(confirmReport) 
	#endif

	#ifndef GEODE_STATICS_getSpriteButton
		#define GEODE_STATICS_getSpriteButton
		GEODE_AS_STATIC_FUNCTION(getSpriteButton) 
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

	#ifndef GEODE_STATICS_onBulkDelete
		#define GEODE_STATICS_onBulkDelete
		GEODE_AS_STATIC_FUNCTION(onBulkDelete) 
	#endif

	#ifndef GEODE_STATICS_onBulkSelectAll
		#define GEODE_STATICS_onBulkSelectAll
		GEODE_AS_STATIC_FUNCTION(onBulkSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onComment
		#define GEODE_STATICS_onComment
		GEODE_AS_STATIC_FUNCTION(onComment) 
	#endif

	#ifndef GEODE_STATICS_onCommentCellToggled
		#define GEODE_STATICS_onCommentCellToggled
		GEODE_AS_STATIC_FUNCTION(onCommentCellToggled) 
	#endif

	#ifndef GEODE_STATICS_onCopyLevelID
		#define GEODE_STATICS_onCopyLevelID
		GEODE_AS_STATIC_FUNCTION(onCopyLevelID) 
	#endif

	#ifndef GEODE_STATICS_onGetComments
		#define GEODE_STATICS_onGetComments
		GEODE_AS_STATIC_FUNCTION(onGetComments) 
	#endif

	#ifndef GEODE_STATICS_onLevelInfo
		#define GEODE_STATICS_onLevelInfo
		GEODE_AS_STATIC_FUNCTION(onLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_onMore
		#define GEODE_STATICS_onMore
		GEODE_AS_STATIC_FUNCTION(onMore) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onOriginal
		#define GEODE_STATICS_onOriginal
		GEODE_AS_STATIC_FUNCTION(onOriginal) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onRefreshComments
		#define GEODE_STATICS_onRefreshComments
		GEODE_AS_STATIC_FUNCTION(onRefreshComments) 
	#endif

	#ifndef GEODE_STATICS_parentalCommentsDisabled
		#define GEODE_STATICS_parentalCommentsDisabled
		GEODE_AS_STATIC_FUNCTION(parentalCommentsDisabled) 
	#endif

	#ifndef GEODE_STATICS_refreshBulkUI
		#define GEODE_STATICS_refreshBulkUI
		GEODE_AS_STATIC_FUNCTION(refreshBulkUI) 
	#endif

	#ifndef GEODE_STATICS_refreshUserTitle
		#define GEODE_STATICS_refreshUserTitle
		GEODE_AS_STATIC_FUNCTION(refreshUserTitle) 
	#endif

	#ifndef GEODE_STATICS_reloadWindow
		#define GEODE_STATICS_reloadWindow
		GEODE_AS_STATIC_FUNCTION(reloadWindow) 
	#endif

	#ifndef GEODE_STATICS_setupBulkUI
		#define GEODE_STATICS_setupBulkUI
		GEODE_AS_STATIC_FUNCTION(setupBulkUI) 
	#endif

	#ifndef GEODE_STATICS_setupCommentsBrowser
		#define GEODE_STATICS_setupCommentsBrowser
		GEODE_AS_STATIC_FUNCTION(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_STATICS_setupLevelInfo
		#define GEODE_STATICS_setupLevelInfo
		GEODE_AS_STATIC_FUNCTION(setupLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_toggleCommentMode
		#define GEODE_STATICS_toggleCommentMode
		GEODE_AS_STATIC_FUNCTION(toggleCommentMode) 
	#endif

	#ifndef GEODE_STATICS_toggleExtendedMode
		#define GEODE_STATICS_toggleExtendedMode
		GEODE_AS_STATIC_FUNCTION(toggleExtendedMode) 
	#endif

	#ifndef GEODE_STATICS_toggleModRoom
		#define GEODE_STATICS_toggleModRoom
		GEODE_AS_STATIC_FUNCTION(toggleModRoom) 
	#endif

	#ifndef GEODE_STATICS_toggleSmallCommentMode
		#define GEODE_STATICS_toggleSmallCommentMode
		GEODE_AS_STATIC_FUNCTION(toggleSmallCommentMode) 
	#endif

	#ifndef GEODE_STATICS_updateCommentModeButtons
		#define GEODE_STATICS_updateCommentModeButtons
		GEODE_AS_STATIC_FUNCTION(updateCommentModeButtons) 
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

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCommentsFinished
		#define GEODE_CONCEPT_CHECK_loadCommentsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadCommentsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCommentsFailed
		#define GEODE_CONCEPT_CHECK_loadCommentsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadCommentsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPageInfo
		#define GEODE_CONCEPT_CHECK_setupPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentUploadFinished
		#define GEODE_CONCEPT_CHECK_commentUploadFinished
		GEODE_CONCEPT_FUNCTION_CHECK(commentUploadFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentUploadFailed
		#define GEODE_CONCEPT_CHECK_commentUploadFailed
		GEODE_CONCEPT_FUNCTION_CHECK(commentUploadFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScoreFinished
		#define GEODE_CONCEPT_CHECK_updateUserScoreFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScoreFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownsTouchPrio
		#define GEODE_CONCEPT_CHECK_ownsTouchPrio
		GEODE_CONCEPT_FUNCTION_CHECK(ownsTouchPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminActionConfirmed
		#define GEODE_CONCEPT_CHECK_adminActionConfirmed
		GEODE_CONCEPT_FUNCTION_CHECK(adminActionConfirmed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bulkCommentDeleteFinished
		#define GEODE_CONCEPT_CHECK_bulkCommentDeleteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(bulkCommentDeleteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bulkCommentDeleteFailed
		#define GEODE_CONCEPT_CHECK_bulkCommentDeleteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(bulkCommentDeleteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeCommentID
		#define GEODE_CONCEPT_CHECK_activeCommentID
		GEODE_CONCEPT_FUNCTION_CHECK(activeCommentID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeCommentKeyType
		#define GEODE_CONCEPT_CHECK_activeCommentKeyType
		GEODE_CONCEPT_FUNCTION_CHECK(activeCommentKeyType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canBulkDelete
		#define GEODE_CONCEPT_CHECK_canBulkDelete
		GEODE_CONCEPT_FUNCTION_CHECK(canBulkDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canToggleModRoom
		#define GEODE_CONCEPT_CHECK_canToggleModRoom
		GEODE_CONCEPT_FUNCTION_CHECK(canToggleModRoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearBulkSelection
		#define GEODE_CONCEPT_CHECK_clearBulkSelection
		GEODE_CONCEPT_FUNCTION_CHECK(clearBulkSelection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmBulkDelete
		#define GEODE_CONCEPT_CHECK_confirmBulkDelete
		GEODE_CONCEPT_FUNCTION_CHECK(confirmBulkDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmReport
		#define GEODE_CONCEPT_CHECK_confirmReport
		GEODE_CONCEPT_FUNCTION_CHECK(confirmReport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountID
		#define GEODE_CONCEPT_CHECK_getAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getID
		#define GEODE_CONCEPT_CHECK_getID
		GEODE_CONCEPT_FUNCTION_CHECK(getID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRealID
		#define GEODE_CONCEPT_CHECK_getRealID
		GEODE_CONCEPT_FUNCTION_CHECK(getRealID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSpriteButton
		#define GEODE_CONCEPT_CHECK_getSpriteButton
		GEODE_CONCEPT_FUNCTION_CHECK(getSpriteButton) 
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

	#ifndef GEODE_CONCEPT_CHECK_onBulkDelete
		#define GEODE_CONCEPT_CHECK_onBulkDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onBulkDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBulkSelectAll
		#define GEODE_CONCEPT_CHECK_onBulkSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onBulkSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onComment
		#define GEODE_CONCEPT_CHECK_onComment
		GEODE_CONCEPT_FUNCTION_CHECK(onComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCommentCellToggled
		#define GEODE_CONCEPT_CHECK_onCommentCellToggled
		GEODE_CONCEPT_FUNCTION_CHECK(onCommentCellToggled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyLevelID
		#define GEODE_CONCEPT_CHECK_onCopyLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetComments
		#define GEODE_CONCEPT_CHECK_onGetComments
		GEODE_CONCEPT_FUNCTION_CHECK(onGetComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelInfo
		#define GEODE_CONCEPT_CHECK_onLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMore
		#define GEODE_CONCEPT_CHECK_onMore
		GEODE_CONCEPT_FUNCTION_CHECK(onMore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOriginal
		#define GEODE_CONCEPT_CHECK_onOriginal
		GEODE_CONCEPT_FUNCTION_CHECK(onOriginal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefreshComments
		#define GEODE_CONCEPT_CHECK_onRefreshComments
		GEODE_CONCEPT_FUNCTION_CHECK(onRefreshComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSimilar
		#define GEODE_CONCEPT_CHECK_onSimilar
		GEODE_CONCEPT_FUNCTION_CHECK(onSimilar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parentalCommentsDisabled
		#define GEODE_CONCEPT_CHECK_parentalCommentsDisabled
		GEODE_CONCEPT_FUNCTION_CHECK(parentalCommentsDisabled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshBulkUI
		#define GEODE_CONCEPT_CHECK_refreshBulkUI
		GEODE_CONCEPT_FUNCTION_CHECK(refreshBulkUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshUserTitle
		#define GEODE_CONCEPT_CHECK_refreshUserTitle
		GEODE_CONCEPT_FUNCTION_CHECK(refreshUserTitle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadWindow
		#define GEODE_CONCEPT_CHECK_reloadWindow
		GEODE_CONCEPT_FUNCTION_CHECK(reloadWindow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupBulkUI
		#define GEODE_CONCEPT_CHECK_setupBulkUI
		GEODE_CONCEPT_FUNCTION_CHECK(setupBulkUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupCommentsBrowser
		#define GEODE_CONCEPT_CHECK_setupCommentsBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupCommentsBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLevelInfo
		#define GEODE_CONCEPT_CHECK_setupLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(setupLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleCommentMode
		#define GEODE_CONCEPT_CHECK_toggleCommentMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleCommentMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleExtendedMode
		#define GEODE_CONCEPT_CHECK_toggleExtendedMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleExtendedMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleModRoom
		#define GEODE_CONCEPT_CHECK_toggleModRoom
		GEODE_CONCEPT_FUNCTION_CHECK(toggleModRoom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSmallCommentMode
		#define GEODE_CONCEPT_CHECK_toggleSmallCommentMode
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSmallCommentMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCommentModeButtons
		#define GEODE_CONCEPT_CHECK_updateCommentModeButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateCommentModeButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelsLabel
		#define GEODE_CONCEPT_CHECK_updateLevelsLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelsLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, InfoLayer> : ModifyBase<ModifyDerive<Der, InfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InfoLayer>>;
		using ModifyBase<ModifyDerive<Der, InfoLayer>>::ModifyBase;
		using Base = InfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3cd910, Thiscall, InfoLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cdb00, Default, InfoLayer, create, GJGameLevel*, GJUserScore*, GJLevelList*, GJEditorSoundConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46290, Thiscall, InfoLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1410, Thiscall, InfoLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2de0, Thiscall, InfoLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1f30, Thiscall, InfoLayer, loadCommentsFinished, cocos2d::CCArray*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1fa0, Thiscall, InfoLayer, loadCommentsFailed, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1ff0, Thiscall, InfoLayer, setupPageInfo, std::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2340, Thiscall, InfoLayer, commentUploadFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2400, Thiscall, InfoLayer, commentUploadFailed, int, CommentError)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2200, Thiscall, InfoLayer, updateUserScoreFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d0620, Thiscall, InfoLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4430, Thiscall, InfoLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, ownsTouchPrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d3e40, Thiscall, InfoLayer, adminActionConfirmed, int, std::vector<int> const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4120, Thiscall, InfoLayer, bulkCommentDeleteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d4330, Thiscall, InfoLayer, bulkCommentDeleteFailed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InfoLayer, activeCommentID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InfoLayer, activeCommentKeyType, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InfoLayer, canBulkDelete, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InfoLayer, canToggleModRoom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InfoLayer, clearBulkSelection, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InfoLayer, confirmBulkDelete, std::string const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d04a0, Thiscall, InfoLayer, confirmReport, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, getAccountID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, getID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, getRealID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cffc0, Thiscall, InfoLayer, getSpriteButton, char const*, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cdd50, Thiscall, InfoLayer, init, GJGameLevel*, GJUserScore*, GJLevelList*, GJEditorSoundConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1420, Thiscall, InfoLayer, isCorrect, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1560, Thiscall, InfoLayer, loadPage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d3bd0, Thiscall, InfoLayer, onBulkDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d3970, Thiscall, InfoLayer, onBulkSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1380, Thiscall, InfoLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d0780, Thiscall, InfoLayer, onComment, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2f80, Thiscall, InfoLayer, onCommentCellToggled, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x162080, Thiscall, InfoLayer, onCopyLevelID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d0cf0, Thiscall, InfoLayer, onGetComments, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d0d00, Thiscall, InfoLayer, onLevelInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d0650, Thiscall, InfoLayer, onMore, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2320, Thiscall, InfoLayer, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d06c0, Thiscall, InfoLayer, onOriginal, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2330, Thiscall, InfoLayer, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d0330, Thiscall, InfoLayer, onRefreshComments, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, onSimilar, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InfoLayer, parentalCommentsDisabled, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InfoLayer, refreshBulkUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2c40, Thiscall, InfoLayer, refreshUserTitle, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2740, Thiscall, InfoLayer, reloadWindow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d33b0, Thiscall, InfoLayer, setupBulkUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d1af0, Thiscall, InfoLayer, setupCommentsBrowser, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d0110, Thiscall, InfoLayer, setupLevelInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d29b0, Thiscall, InfoLayer, toggleCommentMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2550, Thiscall, InfoLayer, toggleExtendedMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2d30, Thiscall, InfoLayer, toggleModRoom, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d25b0, Thiscall, InfoLayer, toggleSmallCommentMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d2a70, Thiscall, InfoLayer, updateCommentModeButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InfoLayer, updateLevelsLabel, )
		}
	};
}
