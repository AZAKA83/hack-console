#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountReviewPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_rebuildContent
		#define GEODE_STATICS_rebuildContent
		GEODE_AS_STATIC_FUNCTION(rebuildContent) 
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

	#ifndef GEODE_STATICS_dropdownSelectionChanged
		#define GEODE_STATICS_dropdownSelectionChanged
		GEODE_AS_STATIC_FUNCTION(dropdownSelectionChanged) 
	#endif

	#ifndef GEODE_STATICS_reviewChoicePicked
		#define GEODE_STATICS_reviewChoicePicked
		GEODE_AS_STATIC_FUNCTION(reviewChoicePicked) 
	#endif

	#ifndef GEODE_STATICS_adminActionConfirmed
		#define GEODE_STATICS_adminActionConfirmed
		GEODE_AS_STATIC_FUNCTION(adminActionConfirmed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_commentDeleteFailed
		#define GEODE_STATICS_commentDeleteFailed
		GEODE_AS_STATIC_FUNCTION(commentDeleteFailed) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFinished
		#define GEODE_STATICS_threadUpdateFinished
		GEODE_AS_STATIC_FUNCTION(threadUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFailed
		#define GEODE_STATICS_threadUpdateFailed
		GEODE_AS_STATIC_FUNCTION(threadUpdateFailed) 
	#endif

	#ifndef GEODE_STATICS_adminAccountReviewFinished
		#define GEODE_STATICS_adminAccountReviewFinished
		GEODE_AS_STATIC_FUNCTION(adminAccountReviewFinished) 
	#endif

	#ifndef GEODE_STATICS_adminAccountReviewFailed
		#define GEODE_STATICS_adminAccountReviewFailed
		GEODE_AS_STATIC_FUNCTION(adminAccountReviewFailed) 
	#endif

	#ifndef GEODE_STATICS_adminReportedContentFinished
		#define GEODE_STATICS_adminReportedContentFinished
		GEODE_AS_STATIC_FUNCTION(adminReportedContentFinished) 
	#endif

	#ifndef GEODE_STATICS_adminReportedContentFailed
		#define GEODE_STATICS_adminReportedContentFailed
		GEODE_AS_STATIC_FUNCTION(adminReportedContentFailed) 
	#endif

	#ifndef GEODE_STATICS_adminAbuseInfoFinished
		#define GEODE_STATICS_adminAbuseInfoFinished
		GEODE_AS_STATIC_FUNCTION(adminAbuseInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_adminAbuseInfoFailed
		#define GEODE_STATICS_adminAbuseInfoFailed
		GEODE_AS_STATIC_FUNCTION(adminAbuseInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_adminUserHistoryFinished
		#define GEODE_STATICS_adminUserHistoryFinished
		GEODE_AS_STATIC_FUNCTION(adminUserHistoryFinished) 
	#endif

	#ifndef GEODE_STATICS_adminUserHistoryFailed
		#define GEODE_STATICS_adminUserHistoryFailed
		GEODE_AS_STATIC_FUNCTION(adminUserHistoryFailed) 
	#endif

	#ifndef GEODE_STATICS_adminClearReportsFinished
		#define GEODE_STATICS_adminClearReportsFinished
		GEODE_AS_STATIC_FUNCTION(adminClearReportsFinished) 
	#endif

	#ifndef GEODE_STATICS_adminClearReportsFailed
		#define GEODE_STATICS_adminClearReportsFailed
		GEODE_AS_STATIC_FUNCTION(adminClearReportsFailed) 
	#endif

	#ifndef GEODE_STATICS_adminDeleteCommentsFinished
		#define GEODE_STATICS_adminDeleteCommentsFinished
		GEODE_AS_STATIC_FUNCTION(adminDeleteCommentsFinished) 
	#endif

	#ifndef GEODE_STATICS_adminDeleteCommentsFailed
		#define GEODE_STATICS_adminDeleteCommentsFailed
		GEODE_AS_STATIC_FUNCTION(adminDeleteCommentsFailed) 
	#endif

	#ifndef GEODE_STATICS_adminCloseCaseFinished
		#define GEODE_STATICS_adminCloseCaseFinished
		GEODE_AS_STATIC_FUNCTION(adminCloseCaseFinished) 
	#endif

	#ifndef GEODE_STATICS_adminCloseCaseFailed
		#define GEODE_STATICS_adminCloseCaseFailed
		GEODE_AS_STATIC_FUNCTION(adminCloseCaseFailed) 
	#endif

	#ifndef GEODE_STATICS_applySelected
		#define GEODE_STATICS_applySelected
		GEODE_AS_STATIC_FUNCTION(applySelected) 
	#endif

	#ifndef GEODE_STATICS_buildDirectReportRow
		#define GEODE_STATICS_buildDirectReportRow
		GEODE_AS_STATIC_FUNCTION(buildDirectReportRow) 
	#endif

	#ifndef GEODE_STATICS_buildFilterRows
		#define GEODE_STATICS_buildFilterRows
		GEODE_AS_STATIC_FUNCTION(buildFilterRows) 
	#endif

	#ifndef GEODE_STATICS_buildHistoryRows
		#define GEODE_STATICS_buildHistoryRows
		GEODE_AS_STATIC_FUNCTION(buildHistoryRows) 
	#endif

	#ifndef GEODE_STATICS_buildReportedRows
		#define GEODE_STATICS_buildReportedRows
		GEODE_AS_STATIC_FUNCTION(buildReportedRows) 
	#endif

	#ifndef GEODE_STATICS_clearCard
		#define GEODE_STATICS_clearCard
		GEODE_AS_STATIC_FUNCTION(clearCard) 
	#endif

	#ifndef GEODE_STATICS_clearSelectedReports
		#define GEODE_STATICS_clearSelectedReports
		GEODE_AS_STATIC_FUNCTION(clearSelectedReports) 
	#endif

	#ifndef GEODE_STATICS_closeAfterDone
		#define GEODE_STATICS_closeAfterDone
		GEODE_AS_STATIC_FUNCTION(closeAfterDone) 
	#endif

	#ifndef GEODE_STATICS_confirmDeleteSelected
		#define GEODE_STATICS_confirmDeleteSelected
		GEODE_AS_STATIC_FUNCTION(confirmDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_deleteEntry
		#define GEODE_STATICS_deleteEntry
		GEODE_AS_STATIC_FUNCTION(deleteEntry) 
	#endif

	#ifndef GEODE_STATICS_deleteFailedTick
		#define GEODE_STATICS_deleteFailedTick
		GEODE_AS_STATIC_FUNCTION(deleteFailedTick) 
	#endif

	#ifndef GEODE_STATICS_deleteFilterEntry
		#define GEODE_STATICS_deleteFilterEntry
		GEODE_AS_STATIC_FUNCTION(deleteFilterEntry) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_jumpTo
		#define GEODE_STATICS_jumpTo
		GEODE_AS_STATIC_FUNCTION(jumpTo) 
	#endif

	#ifndef GEODE_STATICS_onBans
		#define GEODE_STATICS_onBans
		GEODE_AS_STATIC_FUNCTION(onBans) 
	#endif

	#ifndef GEODE_STATICS_onCommentHistory
		#define GEODE_STATICS_onCommentHistory
		GEODE_AS_STATIC_FUNCTION(onCommentHistory) 
	#endif

	#ifndef GEODE_STATICS_onCopyAccountID
		#define GEODE_STATICS_onCopyAccountID
		GEODE_AS_STATIC_FUNCTION(onCopyAccountID) 
	#endif

	#ifndef GEODE_STATICS_onDeleteFilterRow
		#define GEODE_STATICS_onDeleteFilterRow
		GEODE_AS_STATIC_FUNCTION(onDeleteFilterRow) 
	#endif

	#ifndef GEODE_STATICS_onDeleteMenu
		#define GEODE_STATICS_onDeleteMenu
		GEODE_AS_STATIC_FUNCTION(onDeleteMenu) 
	#endif

	#ifndef GEODE_STATICS_onDeleteRow
		#define GEODE_STATICS_onDeleteRow
		GEODE_AS_STATIC_FUNCTION(onDeleteRow) 
	#endif

	#ifndef GEODE_STATICS_onDeleteSelected
		#define GEODE_STATICS_onDeleteSelected
		GEODE_AS_STATIC_FUNCTION(onDeleteSelected) 
	#endif

	#ifndef GEODE_STATICS_onDone
		#define GEODE_STATICS_onDone
		GEODE_AS_STATIC_FUNCTION(onDone) 
	#endif

	#ifndef GEODE_STATICS_onHistoryJump
		#define GEODE_STATICS_onHistoryJump
		GEODE_AS_STATIC_FUNCTION(onHistoryJump) 
	#endif

	#ifndef GEODE_STATICS_onJumpFilterRow
		#define GEODE_STATICS_onJumpFilterRow
		GEODE_AS_STATIC_FUNCTION(onJumpFilterRow) 
	#endif

	#ifndef GEODE_STATICS_onJumpRow
		#define GEODE_STATICS_onJumpRow
		GEODE_AS_STATIC_FUNCTION(onJumpRow) 
	#endif

	#ifndef GEODE_STATICS_onModActionTaken
		#define GEODE_STATICS_onModActionTaken
		GEODE_AS_STATIC_FUNCTION(onModActionTaken) 
	#endif

	#ifndef GEODE_STATICS_onNotes
		#define GEODE_STATICS_onNotes
		GEODE_AS_STATIC_FUNCTION(onNotes) 
	#endif

	#ifndef GEODE_STATICS_onOpenProfile
		#define GEODE_STATICS_onOpenProfile
		GEODE_AS_STATIC_FUNCTION(onOpenProfile) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onTab
		#define GEODE_STATICS_onTab
		GEODE_AS_STATIC_FUNCTION(onTab) 
	#endif

	#ifndef GEODE_STATICS_onToggleHistory
		#define GEODE_STATICS_onToggleHistory
		GEODE_AS_STATIC_FUNCTION(onToggleHistory) 
	#endif

	#ifndef GEODE_STATICS_onToggleRow
		#define GEODE_STATICS_onToggleRow
		GEODE_AS_STATIC_FUNCTION(onToggleRow) 
	#endif

	#ifndef GEODE_STATICS_openUserComments
		#define GEODE_STATICS_openUserComments
		GEODE_AS_STATIC_FUNCTION(openUserComments) 
	#endif

	#ifndef GEODE_STATICS_rebuildRows
		#define GEODE_STATICS_rebuildRows
		GEODE_AS_STATIC_FUNCTION(rebuildRows) 
	#endif

	#ifndef GEODE_STATICS_refreshCard
		#define GEODE_STATICS_refreshCard
		GEODE_AS_STATIC_FUNCTION(refreshCard) 
	#endif

	#ifndef GEODE_STATICS_selectedDeletable
		#define GEODE_STATICS_selectedDeletable
		GEODE_AS_STATIC_FUNCTION(selectedDeletable) 
	#endif

	#ifndef GEODE_STATICS_selectTab
		#define GEODE_STATICS_selectTab
		GEODE_AS_STATIC_FUNCTION(selectTab) 
	#endif

	#ifndef GEODE_STATICS_threadDeleteAnswered
		#define GEODE_STATICS_threadDeleteAnswered
		GEODE_AS_STATIC_FUNCTION(threadDeleteAnswered) 
	#endif

	#ifndef GEODE_STATICS_updateCard
		#define GEODE_STATICS_updateCard
		GEODE_AS_STATIC_FUNCTION(updateCard) 
	#endif

	#ifndef GEODE_STATICS_updateSelectedLabel
		#define GEODE_STATICS_updateSelectedLabel
		GEODE_AS_STATIC_FUNCTION(updateSelectedLabel) 
	#endif

	#ifndef GEODE_STATICS_updateTabControls
		#define GEODE_STATICS_updateTabControls
		GEODE_AS_STATIC_FUNCTION(updateTabControls) 
	#endif

	#ifndef GEODE_STATICS_viewedByLabel
		#define GEODE_STATICS_viewedByLabel
		GEODE_AS_STATIC_FUNCTION(viewedByLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
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

	#ifndef GEODE_CONCEPT_CHECK_dropdownSelectionChanged
		#define GEODE_CONCEPT_CHECK_dropdownSelectionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(dropdownSelectionChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reviewChoicePicked
		#define GEODE_CONCEPT_CHECK_reviewChoicePicked
		GEODE_CONCEPT_FUNCTION_CHECK(reviewChoicePicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminActionConfirmed
		#define GEODE_CONCEPT_CHECK_adminActionConfirmed
		GEODE_CONCEPT_FUNCTION_CHECK(adminActionConfirmed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commentDeleteFailed
		#define GEODE_CONCEPT_CHECK_commentDeleteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(commentDeleteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFinished
		#define GEODE_CONCEPT_CHECK_threadUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFailed
		#define GEODE_CONCEPT_CHECK_threadUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminAccountReviewFinished
		#define GEODE_CONCEPT_CHECK_adminAccountReviewFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminAccountReviewFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminAccountReviewFailed
		#define GEODE_CONCEPT_CHECK_adminAccountReviewFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminAccountReviewFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminReportedContentFinished
		#define GEODE_CONCEPT_CHECK_adminReportedContentFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminReportedContentFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminReportedContentFailed
		#define GEODE_CONCEPT_CHECK_adminReportedContentFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminReportedContentFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminAbuseInfoFinished
		#define GEODE_CONCEPT_CHECK_adminAbuseInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminAbuseInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminAbuseInfoFailed
		#define GEODE_CONCEPT_CHECK_adminAbuseInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminAbuseInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUserHistoryFinished
		#define GEODE_CONCEPT_CHECK_adminUserHistoryFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminUserHistoryFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUserHistoryFailed
		#define GEODE_CONCEPT_CHECK_adminUserHistoryFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminUserHistoryFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminClearReportsFinished
		#define GEODE_CONCEPT_CHECK_adminClearReportsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminClearReportsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminClearReportsFailed
		#define GEODE_CONCEPT_CHECK_adminClearReportsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminClearReportsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminDeleteCommentsFinished
		#define GEODE_CONCEPT_CHECK_adminDeleteCommentsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminDeleteCommentsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminDeleteCommentsFailed
		#define GEODE_CONCEPT_CHECK_adminDeleteCommentsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminDeleteCommentsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCloseCaseFinished
		#define GEODE_CONCEPT_CHECK_adminCloseCaseFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminCloseCaseFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCloseCaseFailed
		#define GEODE_CONCEPT_CHECK_adminCloseCaseFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminCloseCaseFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applySelected
		#define GEODE_CONCEPT_CHECK_applySelected
		GEODE_CONCEPT_FUNCTION_CHECK(applySelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildDirectReportRow
		#define GEODE_CONCEPT_CHECK_buildDirectReportRow
		GEODE_CONCEPT_FUNCTION_CHECK(buildDirectReportRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildFilterRows
		#define GEODE_CONCEPT_CHECK_buildFilterRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildFilterRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildHistoryRows
		#define GEODE_CONCEPT_CHECK_buildHistoryRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildHistoryRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildReportedRows
		#define GEODE_CONCEPT_CHECK_buildReportedRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildReportedRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearCard
		#define GEODE_CONCEPT_CHECK_clearCard
		GEODE_CONCEPT_FUNCTION_CHECK(clearCard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearSelectedReports
		#define GEODE_CONCEPT_CHECK_clearSelectedReports
		GEODE_CONCEPT_FUNCTION_CHECK(clearSelectedReports) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeAfterDone
		#define GEODE_CONCEPT_CHECK_closeAfterDone
		GEODE_CONCEPT_FUNCTION_CHECK(closeAfterDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_confirmDeleteSelected
		#define GEODE_CONCEPT_CHECK_confirmDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(confirmDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteEntry
		#define GEODE_CONCEPT_CHECK_deleteEntry
		GEODE_CONCEPT_FUNCTION_CHECK(deleteEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteFailedTick
		#define GEODE_CONCEPT_CHECK_deleteFailedTick
		GEODE_CONCEPT_FUNCTION_CHECK(deleteFailedTick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteFilterEntry
		#define GEODE_CONCEPT_CHECK_deleteFilterEntry
		GEODE_CONCEPT_FUNCTION_CHECK(deleteFilterEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_jumpTo
		#define GEODE_CONCEPT_CHECK_jumpTo
		GEODE_CONCEPT_FUNCTION_CHECK(jumpTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBans
		#define GEODE_CONCEPT_CHECK_onBans
		GEODE_CONCEPT_FUNCTION_CHECK(onBans) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCommentHistory
		#define GEODE_CONCEPT_CHECK_onCommentHistory
		GEODE_CONCEPT_FUNCTION_CHECK(onCommentHistory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopyAccountID
		#define GEODE_CONCEPT_CHECK_onCopyAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(onCopyAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteFilterRow
		#define GEODE_CONCEPT_CHECK_onDeleteFilterRow
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteFilterRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteMenu
		#define GEODE_CONCEPT_CHECK_onDeleteMenu
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteRow
		#define GEODE_CONCEPT_CHECK_onDeleteRow
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteSelected
		#define GEODE_CONCEPT_CHECK_onDeleteSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDone
		#define GEODE_CONCEPT_CHECK_onDone
		GEODE_CONCEPT_FUNCTION_CHECK(onDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHistoryJump
		#define GEODE_CONCEPT_CHECK_onHistoryJump
		GEODE_CONCEPT_FUNCTION_CHECK(onHistoryJump) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onJumpFilterRow
		#define GEODE_CONCEPT_CHECK_onJumpFilterRow
		GEODE_CONCEPT_FUNCTION_CHECK(onJumpFilterRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onJumpRow
		#define GEODE_CONCEPT_CHECK_onJumpRow
		GEODE_CONCEPT_FUNCTION_CHECK(onJumpRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onModActionTaken
		#define GEODE_CONCEPT_CHECK_onModActionTaken
		GEODE_CONCEPT_FUNCTION_CHECK(onModActionTaken) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNotes
		#define GEODE_CONCEPT_CHECK_onNotes
		GEODE_CONCEPT_FUNCTION_CHECK(onNotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenProfile
		#define GEODE_CONCEPT_CHECK_onOpenProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAll
		#define GEODE_CONCEPT_CHECK_onSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTab
		#define GEODE_CONCEPT_CHECK_onTab
		GEODE_CONCEPT_FUNCTION_CHECK(onTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleHistory
		#define GEODE_CONCEPT_CHECK_onToggleHistory
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleHistory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleRow
		#define GEODE_CONCEPT_CHECK_onToggleRow
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openUserComments
		#define GEODE_CONCEPT_CHECK_openUserComments
		GEODE_CONCEPT_FUNCTION_CHECK(openUserComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildRows
		#define GEODE_CONCEPT_CHECK_rebuildRows
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshCard
		#define GEODE_CONCEPT_CHECK_refreshCard
		GEODE_CONCEPT_FUNCTION_CHECK(refreshCard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedDeletable
		#define GEODE_CONCEPT_CHECK_selectedDeletable
		GEODE_CONCEPT_FUNCTION_CHECK(selectedDeletable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectTab
		#define GEODE_CONCEPT_CHECK_selectTab
		GEODE_CONCEPT_FUNCTION_CHECK(selectTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadDeleteAnswered
		#define GEODE_CONCEPT_CHECK_threadDeleteAnswered
		GEODE_CONCEPT_FUNCTION_CHECK(threadDeleteAnswered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCard
		#define GEODE_CONCEPT_CHECK_updateCard
		GEODE_CONCEPT_FUNCTION_CHECK(updateCard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelectedLabel
		#define GEODE_CONCEPT_CHECK_updateSelectedLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelectedLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTabControls
		#define GEODE_CONCEPT_CHECK_updateTabControls
		GEODE_CONCEPT_FUNCTION_CHECK(updateTabControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_viewedByLabel
		#define GEODE_CONCEPT_CHECK_viewedByLabel
		GEODE_CONCEPT_FUNCTION_CHECK(viewedByLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AccountReviewPopup> : ModifyBase<ModifyDerive<Der, AccountReviewPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountReviewPopup>>;
		using ModifyBase<ModifyDerive<Der, AccountReviewPopup>>::ModifyBase;
		using Base = AccountReviewPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xaedc0, Thiscall, AccountReviewPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaf0b0, Default, AccountReviewPopup, create, int, std::string const&, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb33c0, Thiscall, AccountReviewPopup, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3200, Thiscall, AccountReviewPopup, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb32d0, Thiscall, AccountReviewPopup, clearPageContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaf060, Thiscall, AccountReviewPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb34a0, Thiscall, AccountReviewPopup, dropdownSelectionChanged, Dropdown*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xba500, Thiscall, AccountReviewPopup, reviewChoicePicked, int, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc670, Thiscall, AccountReviewPopup, adminActionConfirmed, int, std::vector<int> const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb0e0, Thiscall, AccountReviewPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbcaa0, Thiscall, AccountReviewPopup, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbbb0, Thiscall, AccountReviewPopup, commentDeleteFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbb60, Thiscall, AccountReviewPopup, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbb80, Thiscall, AccountReviewPopup, threadUpdateFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0a30, Thiscall, AccountReviewPopup, adminAccountReviewFinished, int, AccountReviewCard const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0d40, Thiscall, AccountReviewPopup, adminAccountReviewFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3620, Thiscall, AccountReviewPopup, adminReportedContentFinished, int, cocos2d::CCArray*, AdminReportedMeta const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb37d0, Thiscall, AccountReviewPopup, adminReportedContentFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3840, Thiscall, AccountReviewPopup, adminAbuseInfoFinished, int, cocos2d::CCArray*, AdminAbuseMeta const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb39a0, Thiscall, AccountReviewPopup, adminAbuseInfoFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3a10, Thiscall, AccountReviewPopup, adminUserHistoryFinished, int, cocos2d::CCArray*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3b40, Thiscall, AccountReviewPopup, adminUserHistoryFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbaab0, Thiscall, AccountReviewPopup, adminClearReportsFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbad10, Thiscall, AccountReviewPopup, adminClearReportsFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc8b0, Thiscall, AccountReviewPopup, adminDeleteCommentsFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc9f0, Thiscall, AccountReviewPopup, adminDeleteCommentsFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbcb90, Thiscall, AccountReviewPopup, adminCloseCaseFinished, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbcf70, Thiscall, AccountReviewPopup, adminCloseCaseFailed, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, applySelected, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3bb0, Thiscall, AccountReviewPopup, buildDirectReportRow, cocos2d::CCNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb5920, Thiscall, AccountReviewPopup, buildFilterRows, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, buildHistoryRows, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb4100, Thiscall, AccountReviewPopup, buildReportedRows, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0e50, Thiscall, AccountReviewPopup, clearCard, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, clearSelectedReports, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, closeAfterDone, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb9440, Thiscall, AccountReviewPopup, confirmDeleteSelected, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbb850, Thiscall, AccountReviewPopup, deleteEntry, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, deleteFailedTick, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, deleteFilterEntry, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaf480, Thiscall, AccountReviewPopup, init, int, std::string const&, GJUserScore*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, jumpTo, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb96d0, Thiscall, AccountReviewPopup, onBans, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb9af0, Thiscall, AccountReviewPopup, onCommentHistory, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb34f0, Thiscall, AccountReviewPopup, onCopyAccountID, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc240, Thiscall, AccountReviewPopup, onDeleteFilterRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb88f0, Thiscall, AccountReviewPopup, onDeleteMenu, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbae00, Thiscall, AccountReviewPopup, onDeleteRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb96c0, Thiscall, AccountReviewPopup, onDeleteSelected, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb9b70, Thiscall, AccountReviewPopup, onDone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbce0, Thiscall, AccountReviewPopup, onHistoryJump, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbc030, Thiscall, AccountReviewPopup, onJumpFilterRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbbd40, Thiscall, AccountReviewPopup, onJumpRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb33a0, Thiscall, AccountReviewPopup, onModActionTaken, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb9a70, Thiscall, AccountReviewPopup, onNotes, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb34c0, Thiscall, AccountReviewPopup, onOpenProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb8680, Thiscall, AccountReviewPopup, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3000, Thiscall, AccountReviewPopup, onTab, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3450, Thiscall, AccountReviewPopup, onToggleHistory, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb87c0, Thiscall, AccountReviewPopup, onToggleRow, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, openUserComments, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, rebuildRows, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, refreshCard, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, selectedDeletable, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb3030, Thiscall, AccountReviewPopup, selectTab, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, threadDeleteAnswered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb0f30, Thiscall, AccountReviewPopup, updateCard, AccountReviewCard const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, updateSelectedLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountReviewPopup, updateTabControls, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaf3a0, Thiscall, AccountReviewPopup, viewedByLabel, std::string const&, std::string const&, float)
		}
	};
}
