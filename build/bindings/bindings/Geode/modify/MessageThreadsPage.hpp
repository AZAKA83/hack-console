#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MessageThreadsPage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_friendPicked
		#define GEODE_STATICS_friendPicked
		GEODE_AS_STATIC_FUNCTION(friendPicked) 
	#endif

	#ifndef GEODE_STATICS_isRecipientSelected
		#define GEODE_STATICS_isRecipientSelected
		GEODE_AS_STATIC_FUNCTION(isRecipientSelected) 
	#endif

	#ifndef GEODE_STATICS_selectedRecipientCount
		#define GEODE_STATICS_selectedRecipientCount
		GEODE_AS_STATIC_FUNCTION(selectedRecipientCount) 
	#endif

	#ifndef GEODE_STATICS_selectedRecipients
		#define GEODE_STATICS_selectedRecipients
		GEODE_AS_STATIC_FUNCTION(selectedRecipients) 
	#endif

	#ifndef GEODE_STATICS_clearRecipients
		#define GEODE_STATICS_clearRecipients
		GEODE_AS_STATIC_FUNCTION(clearRecipients) 
	#endif

	#ifndef GEODE_STATICS_friendPickerClosed
		#define GEODE_STATICS_friendPickerClosed
		GEODE_AS_STATIC_FUNCTION(friendPickerClosed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_threadListFinished
		#define GEODE_STATICS_threadListFinished
		GEODE_AS_STATIC_FUNCTION(threadListFinished) 
	#endif

	#ifndef GEODE_STATICS_threadListFailed
		#define GEODE_STATICS_threadListFailed
		GEODE_AS_STATIC_FUNCTION(threadListFailed) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFinished
		#define GEODE_STATICS_threadUpdateFinished
		GEODE_AS_STATIC_FUNCTION(threadUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFailed
		#define GEODE_STATICS_threadUpdateFailed
		GEODE_AS_STATIC_FUNCTION(threadUpdateFailed) 
	#endif

	#ifndef GEODE_STATICS_applyThreadList
		#define GEODE_STATICS_applyThreadList
		GEODE_AS_STATIC_FUNCTION(applyThreadList) 
	#endif

	#ifndef GEODE_STATICS_checkActivityAbove
		#define GEODE_STATICS_checkActivityAbove
		GEODE_AS_STATIC_FUNCTION(checkActivityAbove) 
	#endif

	#ifndef GEODE_STATICS_isCovered
		#define GEODE_STATICS_isCovered
		GEODE_AS_STATIC_FUNCTION(isCovered) 
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

	#ifndef GEODE_STATICS_onInboxPoll
		#define GEODE_STATICS_onInboxPoll
		GEODE_AS_STATIC_FUNCTION(onInboxPoll) 
	#endif

	#ifndef GEODE_STATICS_onLegacyMessages
		#define GEODE_STATICS_onLegacyMessages
		GEODE_AS_STATIC_FUNCTION(onLegacyMessages) 
	#endif

	#ifndef GEODE_STATICS_onMarkRead
		#define GEODE_STATICS_onMarkRead
		GEODE_AS_STATIC_FUNCTION(onMarkRead) 
	#endif

	#ifndef GEODE_STATICS_onNewThread
		#define GEODE_STATICS_onNewThread
		GEODE_AS_STATIC_FUNCTION(onNewThread) 
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

	#ifndef GEODE_STATICS_onScrollToTop
		#define GEODE_STATICS_onScrollToTop
		GEODE_AS_STATIC_FUNCTION(onScrollToTop) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_onSelectFilter
		#define GEODE_STATICS_onSelectFilter
		GEODE_AS_STATIC_FUNCTION(onSelectFilter) 
	#endif

	#ifndef GEODE_STATICS_onSelectionChanged
		#define GEODE_STATICS_onSelectionChanged
		GEODE_AS_STATIC_FUNCTION(onSelectionChanged) 
	#endif

	#ifndef GEODE_STATICS_onShowInvites
		#define GEODE_STATICS_onShowInvites
		GEODE_AS_STATIC_FUNCTION(onShowInvites) 
	#endif

	#ifndef GEODE_STATICS_onThreadsChanged
		#define GEODE_STATICS_onThreadsChanged
		GEODE_AS_STATIC_FUNCTION(onThreadsChanged) 
	#endif

	#ifndef GEODE_STATICS_onUserFilter
		#define GEODE_STATICS_onUserFilter
		GEODE_AS_STATIC_FUNCTION(onUserFilter) 
	#endif

	#ifndef GEODE_STATICS_refetchIfQueued
		#define GEODE_STATICS_refetchIfQueued
		GEODE_AS_STATIC_FUNCTION(refetchIfQueued) 
	#endif

	#ifndef GEODE_STATICS_refreshUserFilterBtn
		#define GEODE_STATICS_refreshUserFilterBtn
		GEODE_AS_STATIC_FUNCTION(refreshUserFilterBtn) 
	#endif

	#ifndef GEODE_STATICS_selectedCount
		#define GEODE_STATICS_selectedCount
		GEODE_AS_STATIC_FUNCTION(selectedCount) 
	#endif

	#ifndef GEODE_STATICS_setActivityAbove
		#define GEODE_STATICS_setActivityAbove
		GEODE_AS_STATIC_FUNCTION(setActivityAbove) 
	#endif

	#ifndef GEODE_STATICS_setInboxPoll
		#define GEODE_STATICS_setInboxPoll
		GEODE_AS_STATIC_FUNCTION(setInboxPoll) 
	#endif

	#ifndef GEODE_STATICS_setupThreadBrowser
		#define GEODE_STATICS_setupThreadBrowser
		GEODE_AS_STATIC_FUNCTION(setupThreadBrowser) 
	#endif

	#ifndef GEODE_STATICS_syncSearchFromBox
		#define GEODE_STATICS_syncSearchFromBox
		GEODE_AS_STATIC_FUNCTION(syncSearchFromBox) 
	#endif

	#ifndef GEODE_STATICS_updateFilterButtons
		#define GEODE_STATICS_updateFilterButtons
		GEODE_AS_STATIC_FUNCTION(updateFilterButtons) 
	#endif

	#ifndef GEODE_STATICS_updateInviteButton
		#define GEODE_STATICS_updateInviteButton
		GEODE_AS_STATIC_FUNCTION(updateInviteButton) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

	#ifndef GEODE_STATICS_updateSelectUI
		#define GEODE_STATICS_updateSelectUI
		GEODE_AS_STATIC_FUNCTION(updateSelectUI) 
	#endif

	#ifndef GEODE_STATICS_userFilterCSV
		#define GEODE_STATICS_userFilterCSV
		GEODE_AS_STATIC_FUNCTION(userFilterCSV) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownsTouchPrio
		#define GEODE_CONCEPT_CHECK_ownsTouchPrio
		GEODE_CONCEPT_FUNCTION_CHECK(ownsTouchPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendPicked
		#define GEODE_CONCEPT_CHECK_friendPicked
		GEODE_CONCEPT_FUNCTION_CHECK(friendPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRecipientSelected
		#define GEODE_CONCEPT_CHECK_isRecipientSelected
		GEODE_CONCEPT_FUNCTION_CHECK(isRecipientSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedRecipientCount
		#define GEODE_CONCEPT_CHECK_selectedRecipientCount
		GEODE_CONCEPT_FUNCTION_CHECK(selectedRecipientCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedRecipients
		#define GEODE_CONCEPT_CHECK_selectedRecipients
		GEODE_CONCEPT_FUNCTION_CHECK(selectedRecipients) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearRecipients
		#define GEODE_CONCEPT_CHECK_clearRecipients
		GEODE_CONCEPT_FUNCTION_CHECK(clearRecipients) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendPickerClosed
		#define GEODE_CONCEPT_CHECK_friendPickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(friendPickerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadListFinished
		#define GEODE_CONCEPT_CHECK_threadListFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadListFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadListFailed
		#define GEODE_CONCEPT_CHECK_threadListFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadListFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFinished
		#define GEODE_CONCEPT_CHECK_threadUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFailed
		#define GEODE_CONCEPT_CHECK_threadUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyThreadList
		#define GEODE_CONCEPT_CHECK_applyThreadList
		GEODE_CONCEPT_FUNCTION_CHECK(applyThreadList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkActivityAbove
		#define GEODE_CONCEPT_CHECK_checkActivityAbove
		GEODE_CONCEPT_FUNCTION_CHECK(checkActivityAbove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCovered
		#define GEODE_CONCEPT_CHECK_isCovered
		GEODE_CONCEPT_FUNCTION_CHECK(isCovered) 
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

	#ifndef GEODE_CONCEPT_CHECK_onInboxPoll
		#define GEODE_CONCEPT_CHECK_onInboxPoll
		GEODE_CONCEPT_FUNCTION_CHECK(onInboxPoll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLegacyMessages
		#define GEODE_CONCEPT_CHECK_onLegacyMessages
		GEODE_CONCEPT_FUNCTION_CHECK(onLegacyMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMarkRead
		#define GEODE_CONCEPT_CHECK_onMarkRead
		GEODE_CONCEPT_FUNCTION_CHECK(onMarkRead) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewThread
		#define GEODE_CONCEPT_CHECK_onNewThread
		GEODE_CONCEPT_FUNCTION_CHECK(onNewThread) 
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

	#ifndef GEODE_CONCEPT_CHECK_onScrollToTop
		#define GEODE_CONCEPT_CHECK_onScrollToTop
		GEODE_CONCEPT_FUNCTION_CHECK(onScrollToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearch
		#define GEODE_CONCEPT_CHECK_onSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAll
		#define GEODE_CONCEPT_CHECK_onSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectFilter
		#define GEODE_CONCEPT_CHECK_onSelectFilter
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectionChanged
		#define GEODE_CONCEPT_CHECK_onSelectionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectionChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowInvites
		#define GEODE_CONCEPT_CHECK_onShowInvites
		GEODE_CONCEPT_FUNCTION_CHECK(onShowInvites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onThreadsChanged
		#define GEODE_CONCEPT_CHECK_onThreadsChanged
		GEODE_CONCEPT_FUNCTION_CHECK(onThreadsChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUserFilter
		#define GEODE_CONCEPT_CHECK_onUserFilter
		GEODE_CONCEPT_FUNCTION_CHECK(onUserFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refetchIfQueued
		#define GEODE_CONCEPT_CHECK_refetchIfQueued
		GEODE_CONCEPT_FUNCTION_CHECK(refetchIfQueued) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshUserFilterBtn
		#define GEODE_CONCEPT_CHECK_refreshUserFilterBtn
		GEODE_CONCEPT_FUNCTION_CHECK(refreshUserFilterBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedCount
		#define GEODE_CONCEPT_CHECK_selectedCount
		GEODE_CONCEPT_FUNCTION_CHECK(selectedCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActivityAbove
		#define GEODE_CONCEPT_CHECK_setActivityAbove
		GEODE_CONCEPT_FUNCTION_CHECK(setActivityAbove) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setInboxPoll
		#define GEODE_CONCEPT_CHECK_setInboxPoll
		GEODE_CONCEPT_FUNCTION_CHECK(setInboxPoll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupThreadBrowser
		#define GEODE_CONCEPT_CHECK_setupThreadBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupThreadBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncSearchFromBox
		#define GEODE_CONCEPT_CHECK_syncSearchFromBox
		GEODE_CONCEPT_FUNCTION_CHECK(syncSearchFromBox) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFilterButtons
		#define GEODE_CONCEPT_CHECK_updateFilterButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateFilterButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInviteButton
		#define GEODE_CONCEPT_CHECK_updateInviteButton
		GEODE_CONCEPT_FUNCTION_CHECK(updateInviteButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageArrows
		#define GEODE_CONCEPT_CHECK_updatePageArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageArrows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSelectUI
		#define GEODE_CONCEPT_CHECK_updateSelectUI
		GEODE_CONCEPT_FUNCTION_CHECK(updateSelectUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userFilterCSV
		#define GEODE_CONCEPT_CHECK_userFilterCSV
		GEODE_CONCEPT_FUNCTION_CHECK(userFilterCSV) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MessageThreadsPage> : ModifyBase<ModifyDerive<Der, MessageThreadsPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MessageThreadsPage>>;
		using ModifyBase<ModifyDerive<Der, MessageThreadsPage>>::ModifyBase;
		using Base = MessageThreadsPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd2b40, Thiscall, MessageThreadsPage)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd42e0, Default, MessageThreadsPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd4500, Thiscall, MessageThreadsPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd92a0, Thiscall, MessageThreadsPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9130, Thiscall, MessageThreadsPage, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(MessageThreadsPage, ownsTouchPrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3f5c0, Thiscall, MessageThreadsPage, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7890, Thiscall, MessageThreadsPage, friendPicked, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7a40, Thiscall, MessageThreadsPage, isRecipientSelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7ac0, Thiscall, MessageThreadsPage, selectedRecipientCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7ae0, Thiscall, MessageThreadsPage, selectedRecipients, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7af0, Thiscall, MessageThreadsPage, clearRecipients, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7b20, Thiscall, MessageThreadsPage, friendPickerClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6c90, Thiscall, MessageThreadsPage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8510, Thiscall, MessageThreadsPage, threadListFinished, cocos2d::CCArray*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8c90, Thiscall, MessageThreadsPage, threadListFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7310, Thiscall, MessageThreadsPage, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7470, Thiscall, MessageThreadsPage, threadUpdateFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd87b0, Thiscall, MessageThreadsPage, applyThreadList, cocos2d::CCArray*, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd9030, Thiscall, MessageThreadsPage, checkActivityAbove, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, isCovered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd5d30, Thiscall, MessageThreadsPage, loadPage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7f40, Thiscall, MessageThreadsPage, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd91c0, Thiscall, MessageThreadsPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd6740, Thiscall, MessageThreadsPage, onDeleteSelected, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, onInboxPoll, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8330, Thiscall, MessageThreadsPage, onLegacyMessages, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7140, Thiscall, MessageThreadsPage, onMarkRead, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd83d0, Thiscall, MessageThreadsPage, onNewThread, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7fd0, Thiscall, MessageThreadsPage, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7fc0, Thiscall, MessageThreadsPage, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8170, Thiscall, MessageThreadsPage, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd90e0, Thiscall, MessageThreadsPage, onScrollToTop, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7810, Thiscall, MessageThreadsPage, onSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd62f0, Thiscall, MessageThreadsPage, onSelectAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7ef0, Thiscall, MessageThreadsPage, onSelectFilter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd63f0, Thiscall, MessageThreadsPage, onSelectionChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd65c0, Thiscall, MessageThreadsPage, onShowInvites, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd5f60, Thiscall, MessageThreadsPage, onThreadsChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7850, Thiscall, MessageThreadsPage, onUserFilter, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, refetchIfQueued, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, refreshUserFilterBtn, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, selectedCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd8fd0, Thiscall, MessageThreadsPage, setActivityAbove, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, setInboxPoll, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, setupThreadBrowser, cocos2d::CCArray*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, syncSearchFromBox, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd7d60, Thiscall, MessageThreadsPage, updateFilterButtons, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, updateInviteButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, updatePageArrows, int, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, updateSelectUI, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MessageThreadsPage, userFilterCSV, )
		}
	};
}
