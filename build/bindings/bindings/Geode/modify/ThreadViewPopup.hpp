#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ThreadViewPopup.hpp>
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

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_emotePickerKeyDown
		#define GEODE_STATICS_emotePickerKeyDown
		GEODE_AS_STATIC_FUNCTION(emotePickerKeyDown) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_emotePickerClosed
		#define GEODE_STATICS_emotePickerClosed
		GEODE_AS_STATIC_FUNCTION(emotePickerClosed) 
	#endif

	#ifndef GEODE_STATICS_levelPicked
		#define GEODE_STATICS_levelPicked
		GEODE_AS_STATIC_FUNCTION(levelPicked) 
	#endif

	#ifndef GEODE_STATICS_listPicked
		#define GEODE_STATICS_listPicked
		GEODE_AS_STATIC_FUNCTION(listPicked) 
	#endif

	#ifndef GEODE_STATICS_shareIDPicked
		#define GEODE_STATICS_shareIDPicked
		GEODE_AS_STATIC_FUNCTION(shareIDPicked) 
	#endif

	#ifndef GEODE_STATICS_threadMessagesFinished
		#define GEODE_STATICS_threadMessagesFinished
		GEODE_AS_STATIC_FUNCTION(threadMessagesFinished) 
	#endif

	#ifndef GEODE_STATICS_threadMessagesFailed
		#define GEODE_STATICS_threadMessagesFailed
		GEODE_AS_STATIC_FUNCTION(threadMessagesFailed) 
	#endif

	#ifndef GEODE_STATICS_threadSearchFinished
		#define GEODE_STATICS_threadSearchFinished
		GEODE_AS_STATIC_FUNCTION(threadSearchFinished) 
	#endif

	#ifndef GEODE_STATICS_threadSearchFailed
		#define GEODE_STATICS_threadSearchFailed
		GEODE_AS_STATIC_FUNCTION(threadSearchFailed) 
	#endif

	#ifndef GEODE_STATICS_threadSendFinished
		#define GEODE_STATICS_threadSendFinished
		GEODE_AS_STATIC_FUNCTION(threadSendFinished) 
	#endif

	#ifndef GEODE_STATICS_threadSendFailed
		#define GEODE_STATICS_threadSendFailed
		GEODE_AS_STATIC_FUNCTION(threadSendFailed) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFinished
		#define GEODE_STATICS_threadUpdateFinished
		GEODE_AS_STATIC_FUNCTION(threadUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFailed
		#define GEODE_STATICS_threadUpdateFailed
		GEODE_AS_STATIC_FUNCTION(threadUpdateFailed) 
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

	#ifndef GEODE_STATICS_unmountVirtualRow
		#define GEODE_STATICS_unmountVirtualRow
		GEODE_AS_STATIC_FUNCTION(unmountVirtualRow) 
	#endif

	#ifndef GEODE_STATICS_buildMemberButton
		#define GEODE_STATICS_buildMemberButton
		GEODE_AS_STATIC_FUNCTION(buildMemberButton) 
	#endif

	#ifndef GEODE_STATICS_buildRows
		#define GEODE_STATICS_buildRows
		GEODE_AS_STATIC_FUNCTION(buildRows) 
	#endif

	#ifndef GEODE_STATICS_checkMessageTap
		#define GEODE_STATICS_checkMessageTap
		GEODE_AS_STATIC_FUNCTION(checkMessageTap) 
	#endif

	#ifndef GEODE_STATICS_checkUnseenBelow
		#define GEODE_STATICS_checkUnseenBelow
		GEODE_AS_STATIC_FUNCTION(checkUnseenBelow) 
	#endif

	#ifndef GEODE_STATICS_createModView
		#define GEODE_STATICS_createModView
		GEODE_AS_STATIC_FUNCTION(createModView) 
	#endif

	#ifndef GEODE_STATICS_dmSendBlocked
		#define GEODE_STATICS_dmSendBlocked
		GEODE_AS_STATIC_FUNCTION(dmSendBlocked) 
	#endif

	#ifndef GEODE_STATICS_exitSearch
		#define GEODE_STATICS_exitSearch
		GEODE_AS_STATIC_FUNCTION(exitSearch) 
	#endif

	#ifndef GEODE_STATICS_goToDate
		#define GEODE_STATICS_goToDate
		GEODE_AS_STATIC_FUNCTION(goToDate) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_insertShareToken
		#define GEODE_STATICS_insertShareToken
		GEODE_AS_STATIC_FUNCTION(insertShareToken) 
	#endif

	#ifndef GEODE_STATICS_jumpToLatest
		#define GEODE_STATICS_jumpToLatest
		GEODE_AS_STATIC_FUNCTION(jumpToLatest) 
	#endif

	#ifndef GEODE_STATICS_layoutComposeBar
		#define GEODE_STATICS_layoutComposeBar
		GEODE_AS_STATIC_FUNCTION(layoutComposeBar) 
	#endif

	#ifndef GEODE_STATICS_layoutRows
		#define GEODE_STATICS_layoutRows
		GEODE_AS_STATIC_FUNCTION(layoutRows) 
	#endif

	#ifndef GEODE_STATICS_layoutTitleRow
		#define GEODE_STATICS_layoutTitleRow
		GEODE_AS_STATIC_FUNCTION(layoutTitleRow) 
	#endif

	#ifndef GEODE_STATICS_measureBody
		#define GEODE_STATICS_measureBody
		GEODE_AS_STATIC_FUNCTION(measureBody) 
	#endif

	#ifndef GEODE_STATICS_messageWithID
		#define GEODE_STATICS_messageWithID
		GEODE_AS_STATIC_FUNCTION(messageWithID) 
	#endif

	#ifndef GEODE_STATICS_onAutoRefresh
		#define GEODE_STATICS_onAutoRefresh
		GEODE_AS_STATIC_FUNCTION(onAutoRefresh) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onEmotes
		#define GEODE_STATICS_onEmotes
		GEODE_AS_STATIC_FUNCTION(onEmotes) 
	#endif

	#ifndef GEODE_STATICS_onHideKeyboard
		#define GEODE_STATICS_onHideKeyboard
		GEODE_AS_STATIC_FUNCTION(onHideKeyboard) 
	#endif

	#ifndef GEODE_STATICS_onHighlightFaded
		#define GEODE_STATICS_onHighlightFaded
		GEODE_AS_STATIC_FUNCTION(onHighlightFaded) 
	#endif

	#ifndef GEODE_STATICS_onJumpToLatest
		#define GEODE_STATICS_onJumpToLatest
		GEODE_AS_STATIC_FUNCTION(onJumpToLatest) 
	#endif

	#ifndef GEODE_STATICS_onJumpToMessage
		#define GEODE_STATICS_onJumpToMessage
		GEODE_AS_STATIC_FUNCTION(onJumpToMessage) 
	#endif

	#ifndef GEODE_STATICS_onLoadEarlier
		#define GEODE_STATICS_onLoadEarlier
		GEODE_AS_STATIC_FUNCTION(onLoadEarlier) 
	#endif

	#ifndef GEODE_STATICS_onLoadNewer
		#define GEODE_STATICS_onLoadNewer
		GEODE_AS_STATIC_FUNCTION(onLoadNewer) 
	#endif

	#ifndef GEODE_STATICS_onMessageOptions
		#define GEODE_STATICS_onMessageOptions
		GEODE_AS_STATIC_FUNCTION(onMessageOptions) 
	#endif

	#ifndef GEODE_STATICS_onRefresh
		#define GEODE_STATICS_onRefresh
		GEODE_AS_STATIC_FUNCTION(onRefresh) 
	#endif

	#ifndef GEODE_STATICS_onScrollToBottom
		#define GEODE_STATICS_onScrollToBottom
		GEODE_AS_STATIC_FUNCTION(onScrollToBottom) 
	#endif

	#ifndef GEODE_STATICS_onSearch
		#define GEODE_STATICS_onSearch
		GEODE_AS_STATIC_FUNCTION(onSearch) 
	#endif

	#ifndef GEODE_STATICS_onSend
		#define GEODE_STATICS_onSend
		GEODE_AS_STATIC_FUNCTION(onSend) 
	#endif

	#ifndef GEODE_STATICS_onSenderProfile
		#define GEODE_STATICS_onSenderProfile
		GEODE_AS_STATIC_FUNCTION(onSenderProfile) 
	#endif

	#ifndef GEODE_STATICS_onShareLevel
		#define GEODE_STATICS_onShareLevel
		GEODE_AS_STATIC_FUNCTION(onShareLevel) 
	#endif

	#ifndef GEODE_STATICS_onShowDescription
		#define GEODE_STATICS_onShowDescription
		GEODE_AS_STATIC_FUNCTION(onShowDescription) 
	#endif

	#ifndef GEODE_STATICS_onShowMembers
		#define GEODE_STATICS_onShowMembers
		GEODE_AS_STATIC_FUNCTION(onShowMembers) 
	#endif

	#ifndef GEODE_STATICS_onThreadOptions
		#define GEODE_STATICS_onThreadOptions
		GEODE_AS_STATIC_FUNCTION(onThreadOptions) 
	#endif

	#ifndef GEODE_STATICS_openAt
		#define GEODE_STATICS_openAt
		GEODE_AS_STATIC_FUNCTION(openAt) 
	#endif

	#ifndef GEODE_STATICS_pastScoreFor
		#define GEODE_STATICS_pastScoreFor
		GEODE_AS_STATIC_FUNCTION(pastScoreFor) 
	#endif

	#ifndef GEODE_STATICS_refetchLatest
		#define GEODE_STATICS_refetchLatest
		GEODE_AS_STATIC_FUNCTION(refetchLatest) 
	#endif

	#ifndef GEODE_STATICS_refreshDMSubLabel
		#define GEODE_STATICS_refreshDMSubLabel
		GEODE_AS_STATIC_FUNCTION(refreshDMSubLabel) 
	#endif

	#ifndef GEODE_STATICS_refreshLockNotice
		#define GEODE_STATICS_refreshLockNotice
		GEODE_AS_STATIC_FUNCTION(refreshLockNotice) 
	#endif

	#ifndef GEODE_STATICS_removedView
		#define GEODE_STATICS_removedView
		GEODE_AS_STATIC_FUNCTION(removedView) 
	#endif

	#ifndef GEODE_STATICS_requestDeleteMessage
		#define GEODE_STATICS_requestDeleteMessage
		GEODE_AS_STATIC_FUNCTION(requestDeleteMessage) 
	#endif

	#ifndef GEODE_STATICS_requestMessages
		#define GEODE_STATICS_requestMessages
		GEODE_AS_STATIC_FUNCTION(requestMessages) 
	#endif

	#ifndef GEODE_STATICS_scrollToUnreadLine
		#define GEODE_STATICS_scrollToUnreadLine
		GEODE_AS_STATIC_FUNCTION(scrollToUnreadLine) 
	#endif

	#ifndef GEODE_STATICS_senderNameFor
		#define GEODE_STATICS_senderNameFor
		GEODE_AS_STATIC_FUNCTION(senderNameFor) 
	#endif

	#ifndef GEODE_STATICS_senderScoreFor
		#define GEODE_STATICS_senderScoreFor
		GEODE_AS_STATIC_FUNCTION(senderScoreFor) 
	#endif

	#ifndef GEODE_STATICS_setPollInterval
		#define GEODE_STATICS_setPollInterval
		GEODE_AS_STATIC_FUNCTION(setPollInterval) 
	#endif

	#ifndef GEODE_STATICS_setSendPending
		#define GEODE_STATICS_setSendPending
		GEODE_AS_STATIC_FUNCTION(setSendPending) 
	#endif

	#ifndef GEODE_STATICS_setUnseenBelow
		#define GEODE_STATICS_setUnseenBelow
		GEODE_AS_STATIC_FUNCTION(setUnseenBelow) 
	#endif

	#ifndef GEODE_STATICS_showLoading
		#define GEODE_STATICS_showLoading
		GEODE_AS_STATIC_FUNCTION(showLoading) 
	#endif

	#ifndef GEODE_STATICS_sortMessagesByID
		#define GEODE_STATICS_sortMessagesByID
		GEODE_AS_STATIC_FUNCTION(sortMessagesByID) 
	#endif

	#ifndef GEODE_STATICS_startSearch
		#define GEODE_STATICS_startSearch
		GEODE_AS_STATIC_FUNCTION(startSearch) 
	#endif

	#ifndef GEODE_STATICS_updateComposeCount
		#define GEODE_STATICS_updateComposeCount
		GEODE_AS_STATIC_FUNCTION(updateComposeCount) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePickerKeyDown
		#define GEODE_CONCEPT_CHECK_emotePickerKeyDown
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerKeyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePickerClosed
		#define GEODE_CONCEPT_CHECK_emotePickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelPicked
		#define GEODE_CONCEPT_CHECK_levelPicked
		GEODE_CONCEPT_FUNCTION_CHECK(levelPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listPicked
		#define GEODE_CONCEPT_CHECK_listPicked
		GEODE_CONCEPT_FUNCTION_CHECK(listPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shareIDPicked
		#define GEODE_CONCEPT_CHECK_shareIDPicked
		GEODE_CONCEPT_FUNCTION_CHECK(shareIDPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMessagesFinished
		#define GEODE_CONCEPT_CHECK_threadMessagesFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadMessagesFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMessagesFailed
		#define GEODE_CONCEPT_CHECK_threadMessagesFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadMessagesFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSearchFinished
		#define GEODE_CONCEPT_CHECK_threadSearchFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSearchFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSearchFailed
		#define GEODE_CONCEPT_CHECK_threadSearchFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSearchFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFinished
		#define GEODE_CONCEPT_CHECK_threadSendFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFailed
		#define GEODE_CONCEPT_CHECK_threadSendFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFinished
		#define GEODE_CONCEPT_CHECK_threadUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFailed
		#define GEODE_CONCEPT_CHECK_threadUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFailed) 
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

	#ifndef GEODE_CONCEPT_CHECK_unmountVirtualRow
		#define GEODE_CONCEPT_CHECK_unmountVirtualRow
		GEODE_CONCEPT_FUNCTION_CHECK(unmountVirtualRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildMemberButton
		#define GEODE_CONCEPT_CHECK_buildMemberButton
		GEODE_CONCEPT_FUNCTION_CHECK(buildMemberButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildRows
		#define GEODE_CONCEPT_CHECK_buildRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkMessageTap
		#define GEODE_CONCEPT_CHECK_checkMessageTap
		GEODE_CONCEPT_FUNCTION_CHECK(checkMessageTap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkUnseenBelow
		#define GEODE_CONCEPT_CHECK_checkUnseenBelow
		GEODE_CONCEPT_FUNCTION_CHECK(checkUnseenBelow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createModView
		#define GEODE_CONCEPT_CHECK_createModView
		GEODE_CONCEPT_FUNCTION_CHECK(createModView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dmSendBlocked
		#define GEODE_CONCEPT_CHECK_dmSendBlocked
		GEODE_CONCEPT_FUNCTION_CHECK(dmSendBlocked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitSearch
		#define GEODE_CONCEPT_CHECK_exitSearch
		GEODE_CONCEPT_FUNCTION_CHECK(exitSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goToDate
		#define GEODE_CONCEPT_CHECK_goToDate
		GEODE_CONCEPT_FUNCTION_CHECK(goToDate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertShareToken
		#define GEODE_CONCEPT_CHECK_insertShareToken
		GEODE_CONCEPT_FUNCTION_CHECK(insertShareToken) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_jumpToLatest
		#define GEODE_CONCEPT_CHECK_jumpToLatest
		GEODE_CONCEPT_FUNCTION_CHECK(jumpToLatest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutComposeBar
		#define GEODE_CONCEPT_CHECK_layoutComposeBar
		GEODE_CONCEPT_FUNCTION_CHECK(layoutComposeBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutRows
		#define GEODE_CONCEPT_CHECK_layoutRows
		GEODE_CONCEPT_FUNCTION_CHECK(layoutRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutTitleRow
		#define GEODE_CONCEPT_CHECK_layoutTitleRow
		GEODE_CONCEPT_FUNCTION_CHECK(layoutTitleRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_measureBody
		#define GEODE_CONCEPT_CHECK_measureBody
		GEODE_CONCEPT_FUNCTION_CHECK(measureBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_messageWithID
		#define GEODE_CONCEPT_CHECK_messageWithID
		GEODE_CONCEPT_FUNCTION_CHECK(messageWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAutoRefresh
		#define GEODE_CONCEPT_CHECK_onAutoRefresh
		GEODE_CONCEPT_FUNCTION_CHECK(onAutoRefresh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEmotes
		#define GEODE_CONCEPT_CHECK_onEmotes
		GEODE_CONCEPT_FUNCTION_CHECK(onEmotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHideKeyboard
		#define GEODE_CONCEPT_CHECK_onHideKeyboard
		GEODE_CONCEPT_FUNCTION_CHECK(onHideKeyboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHighlightFaded
		#define GEODE_CONCEPT_CHECK_onHighlightFaded
		GEODE_CONCEPT_FUNCTION_CHECK(onHighlightFaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onJumpToLatest
		#define GEODE_CONCEPT_CHECK_onJumpToLatest
		GEODE_CONCEPT_FUNCTION_CHECK(onJumpToLatest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onJumpToMessage
		#define GEODE_CONCEPT_CHECK_onJumpToMessage
		GEODE_CONCEPT_FUNCTION_CHECK(onJumpToMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLoadEarlier
		#define GEODE_CONCEPT_CHECK_onLoadEarlier
		GEODE_CONCEPT_FUNCTION_CHECK(onLoadEarlier) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLoadNewer
		#define GEODE_CONCEPT_CHECK_onLoadNewer
		GEODE_CONCEPT_FUNCTION_CHECK(onLoadNewer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMessageOptions
		#define GEODE_CONCEPT_CHECK_onMessageOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onMessageOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefresh
		#define GEODE_CONCEPT_CHECK_onRefresh
		GEODE_CONCEPT_FUNCTION_CHECK(onRefresh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onScrollToBottom
		#define GEODE_CONCEPT_CHECK_onScrollToBottom
		GEODE_CONCEPT_FUNCTION_CHECK(onScrollToBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearch
		#define GEODE_CONCEPT_CHECK_onSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSend
		#define GEODE_CONCEPT_CHECK_onSend
		GEODE_CONCEPT_FUNCTION_CHECK(onSend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSenderProfile
		#define GEODE_CONCEPT_CHECK_onSenderProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onSenderProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShareLevel
		#define GEODE_CONCEPT_CHECK_onShareLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onShareLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowDescription
		#define GEODE_CONCEPT_CHECK_onShowDescription
		GEODE_CONCEPT_FUNCTION_CHECK(onShowDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowMembers
		#define GEODE_CONCEPT_CHECK_onShowMembers
		GEODE_CONCEPT_FUNCTION_CHECK(onShowMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onThreadOptions
		#define GEODE_CONCEPT_CHECK_onThreadOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onThreadOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openAt
		#define GEODE_CONCEPT_CHECK_openAt
		GEODE_CONCEPT_FUNCTION_CHECK(openAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pastScoreFor
		#define GEODE_CONCEPT_CHECK_pastScoreFor
		GEODE_CONCEPT_FUNCTION_CHECK(pastScoreFor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refetchLatest
		#define GEODE_CONCEPT_CHECK_refetchLatest
		GEODE_CONCEPT_FUNCTION_CHECK(refetchLatest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshDMSubLabel
		#define GEODE_CONCEPT_CHECK_refreshDMSubLabel
		GEODE_CONCEPT_FUNCTION_CHECK(refreshDMSubLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshLockNotice
		#define GEODE_CONCEPT_CHECK_refreshLockNotice
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLockNotice) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removedView
		#define GEODE_CONCEPT_CHECK_removedView
		GEODE_CONCEPT_FUNCTION_CHECK(removedView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestDeleteMessage
		#define GEODE_CONCEPT_CHECK_requestDeleteMessage
		GEODE_CONCEPT_FUNCTION_CHECK(requestDeleteMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestMessages
		#define GEODE_CONCEPT_CHECK_requestMessages
		GEODE_CONCEPT_FUNCTION_CHECK(requestMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollToUnreadLine
		#define GEODE_CONCEPT_CHECK_scrollToUnreadLine
		GEODE_CONCEPT_FUNCTION_CHECK(scrollToUnreadLine) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_senderNameFor
		#define GEODE_CONCEPT_CHECK_senderNameFor
		GEODE_CONCEPT_FUNCTION_CHECK(senderNameFor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_senderScoreFor
		#define GEODE_CONCEPT_CHECK_senderScoreFor
		GEODE_CONCEPT_FUNCTION_CHECK(senderScoreFor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPollInterval
		#define GEODE_CONCEPT_CHECK_setPollInterval
		GEODE_CONCEPT_FUNCTION_CHECK(setPollInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSendPending
		#define GEODE_CONCEPT_CHECK_setSendPending
		GEODE_CONCEPT_FUNCTION_CHECK(setSendPending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUnseenBelow
		#define GEODE_CONCEPT_CHECK_setUnseenBelow
		GEODE_CONCEPT_FUNCTION_CHECK(setUnseenBelow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showLoading
		#define GEODE_CONCEPT_CHECK_showLoading
		GEODE_CONCEPT_FUNCTION_CHECK(showLoading) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortMessagesByID
		#define GEODE_CONCEPT_CHECK_sortMessagesByID
		GEODE_CONCEPT_FUNCTION_CHECK(sortMessagesByID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startSearch
		#define GEODE_CONCEPT_CHECK_startSearch
		GEODE_CONCEPT_FUNCTION_CHECK(startSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateComposeCount
		#define GEODE_CONCEPT_CHECK_updateComposeCount
		GEODE_CONCEPT_FUNCTION_CHECK(updateComposeCount) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ThreadViewPopup> : ModifyBase<ModifyDerive<Der, ThreadViewPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ThreadViewPopup>>;
		using ModifyBase<ModifyDerive<Der, ThreadViewPopup>>::ModifyBase;
		using Base = ThreadViewPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd3020, Thiscall, ThreadViewPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd92b0, Default, ThreadViewPopup, create, GJMessageThread*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe3e40, Thiscall, ThreadViewPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe3eb0, Thiscall, ThreadViewPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe3f20, Thiscall, ThreadViewPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe5390, Thiscall, ThreadViewPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2e30, Thiscall, ThreadViewPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2e70, Thiscall, ThreadViewPopup, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc39c0, Thiscall, ThreadViewPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2e50, Thiscall, ThreadViewPopup, emotePickerKeyDown, EmotePickerPopup*, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2f40, Thiscall, ThreadViewPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2f00, Thiscall, ThreadViewPopup, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2f20, Thiscall, ThreadViewPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xde410, Thiscall, ThreadViewPopup, emotePickerClosed, EmotePickerPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdc950, Thiscall, ThreadViewPopup, levelPicked, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdca50, Thiscall, ThreadViewPopup, listPicked, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdcb40, Thiscall, ThreadViewPopup, shareIDPicked, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdeac0, Thiscall, ThreadViewPopup, threadMessagesFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe0060, Thiscall, ThreadViewPopup, threadMessagesFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdbf60, Thiscall, ThreadViewPopup, threadSearchFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdc580, Thiscall, ThreadViewPopup, threadSearchFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xde420, Thiscall, ThreadViewPopup, threadSendFinished, int, long long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xde840, Thiscall, ThreadViewPopup, threadSendFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdd240, Thiscall, ThreadViewPopup, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdd5f0, Thiscall, ThreadViewPopup, threadUpdateFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe1640, Thiscall, ThreadViewPopup, virtualRowCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe1650, Thiscall, ThreadViewPopup, virtualRowHeight, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe1750, Thiscall, ThreadViewPopup, mountVirtualRow, int, cocos2d::CCNode*, cocos2d::CCMenu*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe1670, Thiscall, ThreadViewPopup, unmountVirtualRow, int, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe34b0, Thiscall, ThreadViewPopup, buildMemberButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2c60, Thiscall, ThreadViewPopup, buildRows, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, checkMessageTap, cocos2d::CCTouch*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, checkUnseenBelow, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, createModView, GJMessageThread*, long long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, dmSendBlocked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, exitSearch, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, goToDate, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xd93b0, Thiscall, ThreadViewPopup, init, GJMessageThread*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdcc30, Thiscall, ThreadViewPopup, insertShareToken, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, jumpToLatest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe3960, Thiscall, ThreadViewPopup, layoutComposeBar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe0190, Thiscall, ThreadViewPopup, layoutRows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2fb0, Thiscall, ThreadViewPopup, layoutTitleRow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe08d0, Thiscall, ThreadViewPopup, measureBody, GJThreadMessage*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, messageWithID, long long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, onAutoRefresh, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdbaa0, Thiscall, ThreadViewPopup, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2da0, Thiscall, ThreadViewPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xde2e0, Thiscall, ThreadViewPopup, onEmotes, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, onHideKeyboard, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, onHighlightFaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb8e0, Thiscall, ThreadViewPopup, onJumpToLatest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdbab0, Thiscall, ThreadViewPopup, onJumpToMessage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb760, Thiscall, ThreadViewPopup, onLoadEarlier, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb8c0, Thiscall, ThreadViewPopup, onLoadNewer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdc720, Thiscall, ThreadViewPopup, onMessageOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb590, Thiscall, ThreadViewPopup, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdffd0, Thiscall, ThreadViewPopup, onScrollToBottom, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb910, Thiscall, ThreadViewPopup, onSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xddac0, Thiscall, ThreadViewPopup, onSend, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdc6e0, Thiscall, ThreadViewPopup, onSenderProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdc8f0, Thiscall, ThreadViewPopup, onShareLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdcfe0, Thiscall, ThreadViewPopup, onShowDescription, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdd200, Thiscall, ThreadViewPopup, onShowMembers, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdc6b0, Thiscall, ThreadViewPopup, onThreadOptions, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, openAt, long long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, pastScoreFor, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, refetchLatest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdaca0, Thiscall, ThreadViewPopup, refreshDMSubLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdad40, Thiscall, ThreadViewPopup, refreshLockNotice, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, removedView, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe50e0, Thiscall, ThreadViewPopup, requestDeleteMessage, long long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, requestMessages, long long, long long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, scrollToUnreadLine, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, senderNameFor, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, senderScoreFor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdb480, Thiscall, ThreadViewPopup, setPollInterval, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, setSendPending, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xdff30, Thiscall, ThreadViewPopup, setUnseenBelow, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, showLoading, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, sortMessagesByID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, startSearch, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadViewPopup, updateComposeCount, )
		}
	};
}
