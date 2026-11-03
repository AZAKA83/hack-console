#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_responseToDict
		#define GEODE_STATICS_responseToDict
		GEODE_AS_STATIC_FUNCTION(responseToDict) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_acceptFriendRequest
		#define GEODE_STATICS_acceptFriendRequest
		GEODE_AS_STATIC_FUNCTION(acceptFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_addThreadMembers
		#define GEODE_STATICS_addThreadMembers
		GEODE_AS_STATIC_FUNCTION(addThreadMembers) 
	#endif

	#ifndef GEODE_STATICS_adminClearReportedContent
		#define GEODE_STATICS_adminClearReportedContent
		GEODE_AS_STATIC_FUNCTION(adminClearReportedContent) 
	#endif

	#ifndef GEODE_STATICS_adminCloseCase
		#define GEODE_STATICS_adminCloseCase
		GEODE_AS_STATIC_FUNCTION(adminCloseCase) 
	#endif

	#ifndef GEODE_STATICS_adminCommentBan
		#define GEODE_STATICS_adminCommentBan
		GEODE_AS_STATIC_FUNCTION(adminCommentBan) 
	#endif

	#ifndef GEODE_STATICS_adminCommentUnban
		#define GEODE_STATICS_adminCommentUnban
		GEODE_AS_STATIC_FUNCTION(adminCommentUnban) 
	#endif

	#ifndef GEODE_STATICS_adminDeleteUserComments
		#define GEODE_STATICS_adminDeleteUserComments
		GEODE_AS_STATIC_FUNCTION(adminDeleteUserComments) 
	#endif

	#ifndef GEODE_STATICS_adminFreezeAccount
		#define GEODE_STATICS_adminFreezeAccount
		GEODE_AS_STATIC_FUNCTION(adminFreezeAccount) 
	#endif

	#ifndef GEODE_STATICS_adminGetAbuseInfo
		#define GEODE_STATICS_adminGetAbuseInfo
		GEODE_AS_STATIC_FUNCTION(adminGetAbuseInfo) 
	#endif

	#ifndef GEODE_STATICS_adminGetAccountReview
		#define GEODE_STATICS_adminGetAccountReview
		GEODE_AS_STATIC_FUNCTION(adminGetAccountReview) 
	#endif

	#ifndef GEODE_STATICS_adminGetReportedContent
		#define GEODE_STATICS_adminGetReportedContent
		GEODE_AS_STATIC_FUNCTION(adminGetReportedContent) 
	#endif

	#ifndef GEODE_STATICS_adminGetReportQueue
		#define GEODE_STATICS_adminGetReportQueue
		GEODE_AS_STATIC_FUNCTION(adminGetReportQueue) 
	#endif

	#ifndef GEODE_STATICS_adminGetUserHistory
		#define GEODE_STATICS_adminGetUserHistory
		GEODE_AS_STATIC_FUNCTION(adminGetUserHistory) 
	#endif

	#ifndef GEODE_STATICS_adminMessageBan
		#define GEODE_STATICS_adminMessageBan
		GEODE_AS_STATIC_FUNCTION(adminMessageBan) 
	#endif

	#ifndef GEODE_STATICS_adminMessageUnban
		#define GEODE_STATICS_adminMessageUnban
		GEODE_AS_STATIC_FUNCTION(adminMessageUnban) 
	#endif

	#ifndef GEODE_STATICS_adminNameLock
		#define GEODE_STATICS_adminNameLock
		GEODE_AS_STATIC_FUNCTION(adminNameLock) 
	#endif

	#ifndef GEODE_STATICS_adminNameUnlock
		#define GEODE_STATICS_adminNameUnlock
		GEODE_AS_STATIC_FUNCTION(adminNameUnlock) 
	#endif

	#ifndef GEODE_STATICS_adminThreadAction
		#define GEODE_STATICS_adminThreadAction
		GEODE_AS_STATIC_FUNCTION(adminThreadAction) 
	#endif

	#ifndef GEODE_STATICS_adminTrendingBan
		#define GEODE_STATICS_adminTrendingBan
		GEODE_AS_STATIC_FUNCTION(adminTrendingBan) 
	#endif

	#ifndef GEODE_STATICS_adminTrendingUnban
		#define GEODE_STATICS_adminTrendingUnban
		GEODE_AS_STATIC_FUNCTION(adminTrendingUnban) 
	#endif

	#ifndef GEODE_STATICS_adminUnfreezeAccount
		#define GEODE_STATICS_adminUnfreezeAccount
		GEODE_AS_STATIC_FUNCTION(adminUnfreezeAccount) 
	#endif

	#ifndef GEODE_STATICS_adminUploadBan
		#define GEODE_STATICS_adminUploadBan
		GEODE_AS_STATIC_FUNCTION(adminUploadBan) 
	#endif

	#ifndef GEODE_STATICS_adminUploadUnban
		#define GEODE_STATICS_adminUploadUnban
		GEODE_AS_STATIC_FUNCTION(adminUploadUnban) 
	#endif

	#ifndef GEODE_STATICS_appendModReason
		#define GEODE_STATICS_appendModReason
		GEODE_AS_STATIC_FUNCTION(appendModReason) 
	#endif

	#ifndef GEODE_STATICS_applyDeathBlob
		#define GEODE_STATICS_applyDeathBlob
		GEODE_AS_STATIC_FUNCTION(applyDeathBlob) 
	#endif

	#ifndef GEODE_STATICS_applyLevelControlsSection
		#define GEODE_STATICS_applyLevelControlsSection
		GEODE_AS_STATIC_FUNCTION(applyLevelControlsSection) 
	#endif

	#ifndef GEODE_STATICS_applyThreadAddReply
		#define GEODE_STATICS_applyThreadAddReply
		GEODE_AS_STATIC_FUNCTION(applyThreadAddReply) 
	#endif

	#ifndef GEODE_STATICS_blockUser
		#define GEODE_STATICS_blockUser
		GEODE_AS_STATIC_FUNCTION(blockUser) 
	#endif

	#ifndef GEODE_STATICS_claimNotificationReward
		#define GEODE_STATICS_claimNotificationReward
		GEODE_AS_STATIC_FUNCTION(claimNotificationReward) 
	#endif

	#ifndef GEODE_STATICS_cleanupDailyLevels
		#define GEODE_STATICS_cleanupDailyLevels
		GEODE_AS_STATIC_FUNCTION(cleanupDailyLevels) 
	#endif

	#ifndef GEODE_STATICS_clearDeathDataInstances
		#define GEODE_STATICS_clearDeathDataInstances
		GEODE_AS_STATIC_FUNCTION(clearDeathDataInstances) 
	#endif

	#ifndef GEODE_STATICS_clearPlatformerSaveJournal
		#define GEODE_STATICS_clearPlatformerSaveJournal
		GEODE_AS_STATIC_FUNCTION(clearPlatformerSaveJournal) 
	#endif

	#ifndef GEODE_STATICS_clearPlatformerSaves
		#define GEODE_STATICS_clearPlatformerSaves
		GEODE_AS_STATIC_FUNCTION(clearPlatformerSaves) 
	#endif

	#ifndef GEODE_STATICS_collectPlatformerJournalKeys
		#define GEODE_STATICS_collectPlatformerJournalKeys
		GEODE_AS_STATIC_FUNCTION(collectPlatformerJournalKeys) 
	#endif

	#ifndef GEODE_STATICS_createAndGetCommentsFull
		#define GEODE_STATICS_createAndGetCommentsFull
		GEODE_AS_STATIC_FUNCTION(createAndGetCommentsFull) 
	#endif

	#ifndef GEODE_STATICS_createAndGetEditorSoundConfigs
		#define GEODE_STATICS_createAndGetEditorSoundConfigs
		GEODE_AS_STATIC_FUNCTION(createAndGetEditorSoundConfigs) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevelLists
		#define GEODE_STATICS_createAndGetLevelLists
		GEODE_AS_STATIC_FUNCTION(createAndGetLevelLists) 
	#endif

	#ifndef GEODE_STATICS_createAndGetLevels
		#define GEODE_STATICS_createAndGetLevels
		GEODE_AS_STATIC_FUNCTION(createAndGetLevels) 
	#endif

	#ifndef GEODE_STATICS_createAndGetMapPacks
		#define GEODE_STATICS_createAndGetMapPacks
		GEODE_AS_STATIC_FUNCTION(createAndGetMapPacks) 
	#endif

	#ifndef GEODE_STATICS_createAndGetScores
		#define GEODE_STATICS_createAndGetScores
		GEODE_AS_STATIC_FUNCTION(createAndGetScores) 
	#endif

	#ifndef GEODE_STATICS_createNewLevel
		#define GEODE_STATICS_createNewLevel
		GEODE_AS_STATIC_FUNCTION(createNewLevel) 
	#endif

	#ifndef GEODE_STATICS_createNewLevelList
		#define GEODE_STATICS_createNewLevelList
		GEODE_AS_STATIC_FUNCTION(createNewLevelList) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_deleteComment
		#define GEODE_STATICS_deleteComment
		GEODE_AS_STATIC_FUNCTION(deleteComment) 
	#endif

	#ifndef GEODE_STATICS_deleteComments
		#define GEODE_STATICS_deleteComments
		GEODE_AS_STATIC_FUNCTION(deleteComments) 
	#endif

	#ifndef GEODE_STATICS_deleteFriendRequests
		#define GEODE_STATICS_deleteFriendRequests
		GEODE_AS_STATIC_FUNCTION(deleteFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_deleteLevel
		#define GEODE_STATICS_deleteLevel
		GEODE_AS_STATIC_FUNCTION(deleteLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelControls
		#define GEODE_STATICS_deleteLevelControls
		GEODE_AS_STATIC_FUNCTION(deleteLevelControls) 
	#endif

	#ifndef GEODE_STATICS_deleteLevelList
		#define GEODE_STATICS_deleteLevelList
		GEODE_AS_STATIC_FUNCTION(deleteLevelList) 
	#endif

	#ifndef GEODE_STATICS_deleteServerEditorSound
		#define GEODE_STATICS_deleteServerEditorSound
		GEODE_AS_STATIC_FUNCTION(deleteServerEditorSound) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevel
		#define GEODE_STATICS_deleteServerLevel
		GEODE_AS_STATIC_FUNCTION(deleteServerLevel) 
	#endif

	#ifndef GEODE_STATICS_deleteServerLevelList
		#define GEODE_STATICS_deleteServerLevelList
		GEODE_AS_STATIC_FUNCTION(deleteServerLevelList) 
	#endif

	#ifndef GEODE_STATICS_deleteUserMessages
		#define GEODE_STATICS_deleteUserMessages
		GEODE_AS_STATIC_FUNCTION(deleteUserMessages) 
	#endif

	#ifndef GEODE_STATICS_downloadEditorSoundConfig
		#define GEODE_STATICS_downloadEditorSoundConfig
		GEODE_AS_STATIC_FUNCTION(downloadEditorSoundConfig) 
	#endif

	#ifndef GEODE_STATICS_downloadLevel
		#define GEODE_STATICS_downloadLevel
		GEODE_AS_STATIC_FUNCTION(downloadLevel) 
	#endif

	#ifndef GEODE_STATICS_downloadUserMessage
		#define GEODE_STATICS_downloadUserMessage
		GEODE_AS_STATIC_FUNCTION(downloadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_dropIgnoredRequestLists
		#define GEODE_STATICS_dropIgnoredRequestLists
		GEODE_AS_STATIC_FUNCTION(dropIgnoredRequestLists) 
	#endif

	#ifndef GEODE_STATICS_dtShouldUploadLevel
		#define GEODE_STATICS_dtShouldUploadLevel
		GEODE_AS_STATIC_FUNCTION(dtShouldUploadLevel) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_evictDeathDataCache
		#define GEODE_STATICS_evictDeathDataCache
		GEODE_AS_STATIC_FUNCTION(evictDeathDataCache) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_followUserOnline
		#define GEODE_STATICS_followUserOnline
		GEODE_AS_STATIC_FUNCTION(followUserOnline) 
	#endif

	#ifndef GEODE_STATICS_forceDeathDataRefetch
		#define GEODE_STATICS_forceDeathDataRefetch
		GEODE_AS_STATIC_FUNCTION(forceDeathDataRefetch) 
	#endif

	#ifndef GEODE_STATICS_friendRequestWasRemoved
		#define GEODE_STATICS_friendRequestWasRemoved
		GEODE_AS_STATIC_FUNCTION(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_getAccountComments
		#define GEODE_STATICS_getAccountComments
		GEODE_AS_STATIC_FUNCTION(getAccountComments) 
	#endif

	#ifndef GEODE_STATICS_getBasePostString
		#define GEODE_STATICS_getBasePostString
		GEODE_AS_STATIC_FUNCTION(getBasePostString) 
	#endif

	#ifndef GEODE_STATICS_getCompletedDailyLevels
		#define GEODE_STATICS_getCompletedDailyLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedDailyLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedEventLevels
		#define GEODE_STATICS_getCompletedEventLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedEventLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedLevels
		#define GEODE_STATICS_getCompletedLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedLevels) 
	#endif

	#ifndef GEODE_STATICS_getCompletedWeeklyLevels
		#define GEODE_STATICS_getCompletedWeeklyLevels
		GEODE_AS_STATIC_FUNCTION(getCompletedWeeklyLevels) 
	#endif

	#ifndef GEODE_STATICS_getDeathData
		#define GEODE_STATICS_getDeathData
		GEODE_AS_STATIC_FUNCTION(getDeathData) 
	#endif

	#ifndef GEODE_STATICS_getDeathDataVersion
		#define GEODE_STATICS_getDeathDataVersion
		GEODE_AS_STATIC_FUNCTION(getDeathDataVersion) 
	#endif

	#ifndef GEODE_STATICS_getDeathDisplayData
		#define GEODE_STATICS_getDeathDisplayData
		GEODE_AS_STATIC_FUNCTION(getDeathDisplayData) 
	#endif

	#ifndef GEODE_STATICS_getDemonLevelsString
		#define GEODE_STATICS_getDemonLevelsString
		GEODE_AS_STATIC_FUNCTION(getDemonLevelsString) 
	#endif

	#ifndef GEODE_STATICS_getDifficultyStr
		#define GEODE_STATICS_getDifficultyStr
		GEODE_AS_STATIC_FUNCTION(getDifficultyStr) 
	#endif

	#ifndef GEODE_STATICS_getEditorSoundConfigs
		#define GEODE_STATICS_getEditorSoundConfigs
		GEODE_AS_STATIC_FUNCTION(getEditorSoundConfigs) 
	#endif

	#ifndef GEODE_STATICS_getFolderName
		#define GEODE_STATICS_getFolderName
		GEODE_AS_STATIC_FUNCTION(getFolderName) 
	#endif

	#ifndef GEODE_STATICS_getFollowing
		#define GEODE_STATICS_getFollowing
		GEODE_AS_STATIC_FUNCTION(getFollowing) 
	#endif

	#ifndef GEODE_STATICS_getFriendRequests
		#define GEODE_STATICS_getFriendRequests
		GEODE_AS_STATIC_FUNCTION(getFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_getGauntletLevels
		#define GEODE_STATICS_getGauntletLevels
		GEODE_AS_STATIC_FUNCTION(getGauntletLevels) 
	#endif

	#ifndef GEODE_STATICS_getGauntlets
		#define GEODE_STATICS_getGauntlets
		GEODE_AS_STATIC_FUNCTION(getGauntlets) 
	#endif

	#ifndef GEODE_STATICS_getGJChallenges
		#define GEODE_STATICS_getGJChallenges
		GEODE_AS_STATIC_FUNCTION(getGJChallenges) 
	#endif

	#ifndef GEODE_STATICS_getGJContentStatus
		#define GEODE_STATICS_getGJContentStatus
		GEODE_AS_STATIC_FUNCTION(getGJContentStatus) 
	#endif

	#ifndef GEODE_STATICS_getGJDailyLevelState
		#define GEODE_STATICS_getGJDailyLevelState
		GEODE_AS_STATIC_FUNCTION(getGJDailyLevelState) 
	#endif

	#ifndef GEODE_STATICS_getGJRewards
		#define GEODE_STATICS_getGJRewards
		GEODE_AS_STATIC_FUNCTION(getGJRewards) 
	#endif

	#ifndef GEODE_STATICS_getGJSecretReward
		#define GEODE_STATICS_getGJSecretReward
		GEODE_AS_STATIC_FUNCTION(getGJSecretReward) 
	#endif

	#ifndef GEODE_STATICS_getGJUserInfo
		#define GEODE_STATICS_getGJUserInfo
		GEODE_AS_STATIC_FUNCTION(getGJUserInfo) 
	#endif

	#ifndef GEODE_STATICS_getLeaderboardScores
		#define GEODE_STATICS_getLeaderboardScores
		GEODE_AS_STATIC_FUNCTION(getLeaderboardScores) 
	#endif

	#ifndef GEODE_STATICS_getLengthStr
		#define GEODE_STATICS_getLengthStr
		GEODE_AS_STATIC_FUNCTION(getLengthStr) 
	#endif

	#ifndef GEODE_STATICS_getLevelComments
		#define GEODE_STATICS_getLevelComments
		GEODE_AS_STATIC_FUNCTION(getLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getLevelControls
		#define GEODE_STATICS_getLevelControls
		GEODE_AS_STATIC_FUNCTION(getLevelControls) 
	#endif

	#ifndef GEODE_STATICS_getLevelLeaderboard
		#define GEODE_STATICS_getLevelLeaderboard
		GEODE_AS_STATIC_FUNCTION(getLevelLeaderboard) 
	#endif

	#ifndef GEODE_STATICS_getLevelLists
		#define GEODE_STATICS_getLevelLists
		GEODE_AS_STATIC_FUNCTION(getLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getLevelRateInfo
		#define GEODE_STATICS_getLevelRateInfo
		GEODE_AS_STATIC_FUNCTION(getLevelRateInfo) 
	#endif

	#ifndef GEODE_STATICS_getLevelSaveData
		#define GEODE_STATICS_getLevelSaveData
		GEODE_AS_STATIC_FUNCTION(getLevelSaveData) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevel
		#define GEODE_STATICS_getLocalLevel
		GEODE_AS_STATIC_FUNCTION(getLocalLevel) 
	#endif

	#ifndef GEODE_STATICS_getLocalLevelList
		#define GEODE_STATICS_getLocalLevelList
		GEODE_AS_STATIC_FUNCTION(getLocalLevelList) 
	#endif

	#ifndef GEODE_STATICS_getMainLevel
		#define GEODE_STATICS_getMainLevel
		GEODE_AS_STATIC_FUNCTION(getMainLevel) 
	#endif

	#ifndef GEODE_STATICS_getMapPacks
		#define GEODE_STATICS_getMapPacks
		GEODE_AS_STATIC_FUNCTION(getMapPacks) 
	#endif

	#ifndef GEODE_STATICS_getNextLevelName
		#define GEODE_STATICS_getNextLevelName
		GEODE_AS_STATIC_FUNCTION(getNextLevelName) 
	#endif

	#ifndef GEODE_STATICS_getNotifications
		#define GEODE_STATICS_getNotifications
		GEODE_AS_STATIC_FUNCTION(getNotifications) 
	#endif

	#ifndef GEODE_STATICS_getOnlineLevels
		#define GEODE_STATICS_getOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getPageInfo
		#define GEODE_STATICS_getPageInfo
		GEODE_AS_STATIC_FUNCTION(getPageInfo) 
	#endif

	#ifndef GEODE_STATICS_getPlatformerSaveStats
		#define GEODE_STATICS_getPlatformerSaveStats
		GEODE_AS_STATIC_FUNCTION(getPlatformerSaveStats) 
	#endif

	#ifndef GEODE_STATICS_getSavedDailyLevel
		#define GEODE_STATICS_getSavedDailyLevel
		GEODE_AS_STATIC_FUNCTION(getSavedDailyLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedGauntletLevel
		#define GEODE_STATICS_getSavedGauntletLevel
		GEODE_AS_STATIC_FUNCTION(getSavedGauntletLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevel
		#define GEODE_STATICS_getSavedLevel
		GEODE_AS_STATIC_FUNCTION(getSavedLevel) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevelLists
		#define GEODE_STATICS_getSavedLevelLists
		GEODE_AS_STATIC_FUNCTION(getSavedLevelLists) 
	#endif

	#ifndef GEODE_STATICS_getSavedLevels
		#define GEODE_STATICS_getSavedLevels
		GEODE_AS_STATIC_FUNCTION(getSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_getSongUsage
		#define GEODE_STATICS_getSongUsage
		GEODE_AS_STATIC_FUNCTION(getSongUsage) 
	#endif

	#ifndef GEODE_STATICS_getSplitIntFromKey
		#define GEODE_STATICS_getSplitIntFromKey
		GEODE_AS_STATIC_FUNCTION(getSplitIntFromKey) 
	#endif

	#ifndef GEODE_STATICS_getStarLevelsString
		#define GEODE_STATICS_getStarLevelsString
		GEODE_AS_STATIC_FUNCTION(getStarLevelsString) 
	#endif

	#ifndef GEODE_STATICS_getStoredLevelComments
		#define GEODE_STATICS_getStoredLevelComments
		GEODE_AS_STATIC_FUNCTION(getStoredLevelComments) 
	#endif

	#ifndef GEODE_STATICS_getStoredOnlineLevels
		#define GEODE_STATICS_getStoredOnlineLevels
		GEODE_AS_STATIC_FUNCTION(getStoredOnlineLevels) 
	#endif

	#ifndef GEODE_STATICS_getStoredUserList
		#define GEODE_STATICS_getStoredUserList
		GEODE_AS_STATIC_FUNCTION(getStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_getThreadInvites
		#define GEODE_STATICS_getThreadInvites
		GEODE_AS_STATIC_FUNCTION(getThreadInvites) 
	#endif

	#ifndef GEODE_STATICS_getThreadMembers
		#define GEODE_STATICS_getThreadMembers
		GEODE_AS_STATIC_FUNCTION(getThreadMembers) 
	#endif

	#ifndef GEODE_STATICS_getThreadMessages
		#define GEODE_STATICS_getThreadMessages
		GEODE_AS_STATIC_FUNCTION(getThreadMessages) 
	#endif

	#ifndef GEODE_STATICS_getThreadPastMembers
		#define GEODE_STATICS_getThreadPastMembers
		GEODE_AS_STATIC_FUNCTION(getThreadPastMembers) 
	#endif

	#ifndef GEODE_STATICS_getThreadPendingInvites
		#define GEODE_STATICS_getThreadPendingInvites
		GEODE_AS_STATIC_FUNCTION(getThreadPendingInvites) 
	#endif

	#ifndef GEODE_STATICS_getThreads
		#define GEODE_STATICS_getThreads
		GEODE_AS_STATIC_FUNCTION(getThreads) 
	#endif

	#ifndef GEODE_STATICS_getTimeLeft
		#define GEODE_STATICS_getTimeLeft
		GEODE_AS_STATIC_FUNCTION(getTimeLeft) 
	#endif

	#ifndef GEODE_STATICS_getTopArtists
		#define GEODE_STATICS_getTopArtists
		GEODE_AS_STATIC_FUNCTION(getTopArtists) 
	#endif

	#ifndef GEODE_STATICS_getUserList
		#define GEODE_STATICS_getUserList
		GEODE_AS_STATIC_FUNCTION(getUserList) 
	#endif

	#ifndef GEODE_STATICS_getUserMessages
		#define GEODE_STATICS_getUserMessages
		GEODE_AS_STATIC_FUNCTION(getUserMessages) 
	#endif

	#ifndef GEODE_STATICS_getUsers
		#define GEODE_STATICS_getUsers
		GEODE_AS_STATIC_FUNCTION(getUsers) 
	#endif

	#ifndef GEODE_STATICS_getUserSearch
		#define GEODE_STATICS_getUserSearch
		GEODE_AS_STATIC_FUNCTION(getUserSearch) 
	#endif

	#ifndef GEODE_STATICS_gotoLevelPage
		#define GEODE_STATICS_gotoLevelPage
		GEODE_AS_STATIC_FUNCTION(gotoLevelPage) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_hasDownloadedLevel
		#define GEODE_STATICS_hasDownloadedLevel
		GEODE_AS_STATIC_FUNCTION(hasDownloadedLevel) 
	#endif

	#ifndef GEODE_STATICS_hasLikedAccountItem
		#define GEODE_STATICS_hasLikedAccountItem
		GEODE_AS_STATIC_FUNCTION(hasLikedAccountItem) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItem
		#define GEODE_STATICS_hasLikedItem
		GEODE_AS_STATIC_FUNCTION(hasLikedItem) 
	#endif

	#ifndef GEODE_STATICS_hasLikedItemFullCheck
		#define GEODE_STATICS_hasLikedItemFullCheck
		GEODE_AS_STATIC_FUNCTION(hasLikedItemFullCheck) 
	#endif

	#ifndef GEODE_STATICS_hasNewDaily
		#define GEODE_STATICS_hasNewDaily
		GEODE_AS_STATIC_FUNCTION(hasNewDaily) 
	#endif

	#ifndef GEODE_STATICS_hasNewGauntlets
		#define GEODE_STATICS_hasNewGauntlets
		GEODE_AS_STATIC_FUNCTION(hasNewGauntlets) 
	#endif

	#ifndef GEODE_STATICS_hasRatedDemon
		#define GEODE_STATICS_hasRatedDemon
		GEODE_AS_STATIC_FUNCTION(hasRatedDemon) 
	#endif

	#ifndef GEODE_STATICS_hasRatedLevelStars
		#define GEODE_STATICS_hasRatedLevelStars
		GEODE_AS_STATIC_FUNCTION(hasRatedLevelStars) 
	#endif

	#ifndef GEODE_STATICS_hasReportedLevel
		#define GEODE_STATICS_hasReportedLevel
		GEODE_AS_STATIC_FUNCTION(hasReportedLevel) 
	#endif

	#ifndef GEODE_STATICS_invalidateMessages
		#define GEODE_STATICS_invalidateMessages
		GEODE_AS_STATIC_FUNCTION(invalidateMessages) 
	#endif

	#ifndef GEODE_STATICS_invalidateRequests
		#define GEODE_STATICS_invalidateRequests
		GEODE_AS_STATIC_FUNCTION(invalidateRequests) 
	#endif

	#ifndef GEODE_STATICS_isDeathDataFetched
		#define GEODE_STATICS_isDeathDataFetched
		GEODE_AS_STATIC_FUNCTION(isDeathDataFetched) 
	#endif

	#ifndef GEODE_STATICS_isDLActive
		#define GEODE_STATICS_isDLActive
		GEODE_AS_STATIC_FUNCTION(isDLActive) 
	#endif

	#ifndef GEODE_STATICS_isFollowingUser
		#define GEODE_STATICS_isFollowingUser
		GEODE_AS_STATIC_FUNCTION(isFollowingUser) 
	#endif

	#ifndef GEODE_STATICS_isPastDailyCopy
		#define GEODE_STATICS_isPastDailyCopy
		GEODE_AS_STATIC_FUNCTION(isPastDailyCopy) 
	#endif

	#ifndef GEODE_STATICS_isTimeValid
		#define GEODE_STATICS_isTimeValid
		GEODE_AS_STATIC_FUNCTION(isTimeValid) 
	#endif

	#ifndef GEODE_STATICS_keyHasTimer
		#define GEODE_STATICS_keyHasTimer
		GEODE_AS_STATIC_FUNCTION(keyHasTimer) 
	#endif

	#ifndef GEODE_STATICS_levelControlInstances
		#define GEODE_STATICS_levelControlInstances
		GEODE_AS_STATIC_FUNCTION(levelControlInstances) 
	#endif

	#ifndef GEODE_STATICS_levelIDFromCommentKey
		#define GEODE_STATICS_levelIDFromCommentKey
		GEODE_AS_STATIC_FUNCTION(levelIDFromCommentKey) 
	#endif

	#ifndef GEODE_STATICS_likeItem
		#define GEODE_STATICS_likeItem
		GEODE_AS_STATIC_FUNCTION(likeItem) 
	#endif

	#ifndef GEODE_STATICS_limitSavedLevels
		#define GEODE_STATICS_limitSavedLevels
		GEODE_AS_STATIC_FUNCTION(limitSavedLevels) 
	#endif

	#ifndef GEODE_STATICS_makeTimeStamp
		#define GEODE_STATICS_makeTimeStamp
		GEODE_AS_STATIC_FUNCTION(makeTimeStamp) 
	#endif

	#ifndef GEODE_STATICS_markGauntletsSeen
		#define GEODE_STATICS_markGauntletsSeen
		GEODE_AS_STATIC_FUNCTION(markGauntletsSeen) 
	#endif

	#ifndef GEODE_STATICS_markItemAsLiked
		#define GEODE_STATICS_markItemAsLiked
		GEODE_AS_STATIC_FUNCTION(markItemAsLiked) 
	#endif

	#ifndef GEODE_STATICS_markLevelAsDownloaded
		#define GEODE_STATICS_markLevelAsDownloaded
		GEODE_AS_STATIC_FUNCTION(markLevelAsDownloaded) 
	#endif

	#ifndef GEODE_STATICS_markTimedLevelSeen
		#define GEODE_STATICS_markTimedLevelSeen
		GEODE_AS_STATIC_FUNCTION(markTimedLevelSeen) 
	#endif

	#ifndef GEODE_STATICS_messageWasRemoved
		#define GEODE_STATICS_messageWasRemoved
		GEODE_AS_STATIC_FUNCTION(messageWasRemoved) 
	#endif

	#ifndef GEODE_STATICS_muteUser
		#define GEODE_STATICS_muteUser
		GEODE_AS_STATIC_FUNCTION(muteUser) 
	#endif

	#ifndef GEODE_STATICS_notificationMask
		#define GEODE_STATICS_notificationMask
		GEODE_AS_STATIC_FUNCTION(notificationMask) 
	#endif

	#ifndef GEODE_STATICS_onAcceptFriendRequestCompleted
		#define GEODE_STATICS_onAcceptFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onAcceptFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminClearReportedContentCompleted
		#define GEODE_STATICS_onAdminClearReportedContentCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminClearReportedContentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminCloseCaseCompleted
		#define GEODE_STATICS_onAdminCloseCaseCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminCloseCaseCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminCommentBanCompleted
		#define GEODE_STATICS_onAdminCommentBanCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminCommentBanCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminCommentUnbanCompleted
		#define GEODE_STATICS_onAdminCommentUnbanCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminCommentUnbanCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminDeleteUserCommentsCompleted
		#define GEODE_STATICS_onAdminDeleteUserCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminDeleteUserCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminFreezeCompleted
		#define GEODE_STATICS_onAdminFreezeCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminFreezeCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminGetAbuseInfoCompleted
		#define GEODE_STATICS_onAdminGetAbuseInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminGetAbuseInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminGetAccountReviewCompleted
		#define GEODE_STATICS_onAdminGetAccountReviewCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminGetAccountReviewCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminGetReportedContentCompleted
		#define GEODE_STATICS_onAdminGetReportedContentCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminGetReportedContentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminGetReportQueueCompleted
		#define GEODE_STATICS_onAdminGetReportQueueCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminGetReportQueueCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminGetUserHistoryCompleted
		#define GEODE_STATICS_onAdminGetUserHistoryCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminGetUserHistoryCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminMessageBanCompleted
		#define GEODE_STATICS_onAdminMessageBanCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminMessageBanCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminMessageUnbanCompleted
		#define GEODE_STATICS_onAdminMessageUnbanCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminMessageUnbanCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminNameLockCompleted
		#define GEODE_STATICS_onAdminNameLockCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminNameLockCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminNameUnlockCompleted
		#define GEODE_STATICS_onAdminNameUnlockCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminNameUnlockCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminThreadActionCompleted
		#define GEODE_STATICS_onAdminThreadActionCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminThreadActionCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminTrendingBanCompleted
		#define GEODE_STATICS_onAdminTrendingBanCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminTrendingBanCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminTrendingUnbanCompleted
		#define GEODE_STATICS_onAdminTrendingUnbanCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminTrendingUnbanCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminUnfreezeCompleted
		#define GEODE_STATICS_onAdminUnfreezeCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminUnfreezeCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminUploadBanCompleted
		#define GEODE_STATICS_onAdminUploadBanCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminUploadBanCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminUploadUnbanCompleted
		#define GEODE_STATICS_onAdminUploadUnbanCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminUploadUnbanCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBanUserCompleted
		#define GEODE_STATICS_onBanUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBanUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onBlockUserCompleted
		#define GEODE_STATICS_onBlockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onBlockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onClaimNotificationRewardCompleted
		#define GEODE_STATICS_onClaimNotificationRewardCompleted
		GEODE_AS_STATIC_FUNCTION(onClaimNotificationRewardCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCommentCompleted
		#define GEODE_STATICS_onDeleteCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteCommentsCompleted
		#define GEODE_STATICS_onDeleteCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteFriendRequestCompleted
		#define GEODE_STATICS_onDeleteFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteLevelControlsCompleted
		#define GEODE_STATICS_onDeleteLevelControlsCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteLevelControlsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerEditorSoundCompleted
		#define GEODE_STATICS_onDeleteServerEditorSoundCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerEditorSoundCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServerLevelCompleted
		#define GEODE_STATICS_onDeleteServerLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteServerLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDeleteUserMessagesCompleted
		#define GEODE_STATICS_onDeleteUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onDeleteUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadEditorSoundCompleted
		#define GEODE_STATICS_onDownloadEditorSoundCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadEditorSoundCompleted) 
	#endif

	#ifndef GEODE_STATICS_onDownloadUserMessageCompleted
		#define GEODE_STATICS_onDownloadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onDownloadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onFollowUserCompleted
		#define GEODE_STATICS_onFollowUserCompleted
		GEODE_AS_STATIC_FUNCTION(onFollowUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountCommentsCompleted
		#define GEODE_STATICS_onGetAccountCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetContentStatusCompleted
		#define GEODE_STATICS_onGetContentStatusCompleted
		GEODE_AS_STATIC_FUNCTION(onGetContentStatusCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetDeathDataCompleted
		#define GEODE_STATICS_onGetDeathDataCompleted
		GEODE_AS_STATIC_FUNCTION(onGetDeathDataCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetEditorSoundsCompleted
		#define GEODE_STATICS_onGetEditorSoundsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetEditorSoundsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetFollowingCompleted
		#define GEODE_STATICS_onGetFollowingCompleted
		GEODE_AS_STATIC_FUNCTION(onGetFollowingCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetFriendRequestsCompleted
		#define GEODE_STATICS_onGetFriendRequestsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetFriendRequestsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGauntletsCompleted
		#define GEODE_STATICS_onGetGauntletsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGauntletsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJChallengesCompleted
		#define GEODE_STATICS_onGetGJChallengesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJChallengesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJDailyLevelStateCompleted
		#define GEODE_STATICS_onGetGJDailyLevelStateCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJDailyLevelStateCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJRewardsCompleted
		#define GEODE_STATICS_onGetGJRewardsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJRewardsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJSecretRewardCompleted
		#define GEODE_STATICS_onGetGJSecretRewardCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJSecretRewardCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetGJUserInfoCompleted
		#define GEODE_STATICS_onGetGJUserInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetGJUserInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLeaderboardScoresCompleted
		#define GEODE_STATICS_onGetLeaderboardScoresCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLeaderboardScoresCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelCommentsCompleted
		#define GEODE_STATICS_onGetLevelCommentsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelCommentsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelControlsCompleted
		#define GEODE_STATICS_onGetLevelControlsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelControlsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelLeaderboardCompleted
		#define GEODE_STATICS_onGetLevelLeaderboardCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelLeaderboardCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelListsCompleted
		#define GEODE_STATICS_onGetLevelListsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelListsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelRateInfoCompleted
		#define GEODE_STATICS_onGetLevelRateInfoCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelRateInfoCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetLevelSaveDataCompleted
		#define GEODE_STATICS_onGetLevelSaveDataCompleted
		GEODE_AS_STATIC_FUNCTION(onGetLevelSaveDataCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetMapPacksCompleted
		#define GEODE_STATICS_onGetMapPacksCompleted
		GEODE_AS_STATIC_FUNCTION(onGetMapPacksCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetNotificationsCompleted
		#define GEODE_STATICS_onGetNotificationsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetNotificationsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetOnlineLevelsCompleted
		#define GEODE_STATICS_onGetOnlineLevelsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetOnlineLevelsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetSongUsageCompleted
		#define GEODE_STATICS_onGetSongUsageCompleted
		GEODE_AS_STATIC_FUNCTION(onGetSongUsageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetThreadInvitesCompleted
		#define GEODE_STATICS_onGetThreadInvitesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetThreadInvitesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetThreadMessagesCompleted
		#define GEODE_STATICS_onGetThreadMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetThreadMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetThreadsCompleted
		#define GEODE_STATICS_onGetThreadsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetThreadsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetTopArtistsCompleted
		#define GEODE_STATICS_onGetTopArtistsCompleted
		GEODE_AS_STATIC_FUNCTION(onGetTopArtistsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserListCompleted
		#define GEODE_STATICS_onGetUserListCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserListCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserMessagesCompleted
		#define GEODE_STATICS_onGetUserMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUsersCompleted
		#define GEODE_STATICS_onGetUsersCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUsersCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetUserSearchCompleted
		#define GEODE_STATICS_onGetUserSearchCompleted
		GEODE_AS_STATIC_FUNCTION(onGetUserSearchCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLikeItemCompleted
		#define GEODE_STATICS_onLikeItemCompleted
		GEODE_AS_STATIC_FUNCTION(onLikeItemCompleted) 
	#endif

	#ifndef GEODE_STATICS_onMuteUserCompleted
		#define GEODE_STATICS_onMuteUserCompleted
		GEODE_AS_STATIC_FUNCTION(onMuteUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateDemonCompleted
		#define GEODE_STATICS_onRateDemonCompleted
		GEODE_AS_STATIC_FUNCTION(onRateDemonCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateEditorSoundAdminCompleted
		#define GEODE_STATICS_onRateEditorSoundAdminCompleted
		GEODE_AS_STATIC_FUNCTION(onRateEditorSoundAdminCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateLevelListAdminCompleted
		#define GEODE_STATICS_onRateLevelListAdminCompleted
		GEODE_AS_STATIC_FUNCTION(onRateLevelListAdminCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRateStarsCompleted
		#define GEODE_STATICS_onRateStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onRateStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRemoveFriendCompleted
		#define GEODE_STATICS_onRemoveFriendCompleted
		GEODE_AS_STATIC_FUNCTION(onRemoveFriendCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReportContentCompleted
		#define GEODE_STATICS_onReportContentCompleted
		GEODE_AS_STATIC_FUNCTION(onReportContentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onReportLevelCompleted
		#define GEODE_STATICS_onReportLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onReportLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRequestThreadMembersCompleted
		#define GEODE_STATICS_onRequestThreadMembersCompleted
		GEODE_AS_STATIC_FUNCTION(onRequestThreadMembersCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRequestUserAccessCompleted
		#define GEODE_STATICS_onRequestUserAccessCompleted
		GEODE_AS_STATIC_FUNCTION(onRequestUserAccessCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRestoreItemsCompleted
		#define GEODE_STATICS_onRestoreItemsCompleted
		GEODE_AS_STATIC_FUNCTION(onRestoreItemsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSearchThreadMessagesCompleted
		#define GEODE_STATICS_onSearchThreadMessagesCompleted
		GEODE_AS_STATIC_FUNCTION(onSearchThreadMessagesCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSendThreadMessageCompleted
		#define GEODE_STATICS_onSendThreadMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onSendThreadMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSetLevelStarsCompleted
		#define GEODE_STATICS_onSetLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSetLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSuggestLevelStarsCompleted
		#define GEODE_STATICS_onSuggestLevelStarsCompleted
		GEODE_AS_STATIC_FUNCTION(onSuggestLevelStarsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUnblockUserCompleted
		#define GEODE_STATICS_onUnblockUserCompleted
		GEODE_AS_STATIC_FUNCTION(onUnblockUserCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateDescriptionCompleted
		#define GEODE_STATICS_onUpdateDescriptionCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateDescriptionCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateEditorSoundDescriptionCompleted
		#define GEODE_STATICS_onUpdateEditorSoundDescriptionCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateEditorSoundDescriptionCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateThreadCompleted
		#define GEODE_STATICS_onUpdateThreadCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateThreadCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateUserScoreCompleted
		#define GEODE_STATICS_onUpdateUserScoreCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateUserScoreCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadCommentCompleted
		#define GEODE_STATICS_onUploadCommentCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadDeathDataCompleted
		#define GEODE_STATICS_onUploadDeathDataCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadDeathDataCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadEditorSoundCompleted
		#define GEODE_STATICS_onUploadEditorSoundCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadEditorSoundCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadFriendRequestCompleted
		#define GEODE_STATICS_onUploadFriendRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelCompleted
		#define GEODE_STATICS_onUploadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadLevelControlsCompleted
		#define GEODE_STATICS_onUploadLevelControlsCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadLevelControlsCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUploadUserMessageCompleted
		#define GEODE_STATICS_onUploadUserMessageCompleted
		GEODE_AS_STATIC_FUNCTION(onUploadUserMessageCompleted) 
	#endif

	#ifndef GEODE_STATICS_parseEventReward
		#define GEODE_STATICS_parseEventReward
		GEODE_AS_STATIC_FUNCTION(parseEventReward) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_processOnDownloadLevelCompleted
		#define GEODE_STATICS_processOnDownloadLevelCompleted
		GEODE_AS_STATIC_FUNCTION(processOnDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_STATICS_prunePlatformerJournalKeys
		#define GEODE_STATICS_prunePlatformerJournalKeys
		GEODE_AS_STATIC_FUNCTION(prunePlatformerJournalKeys) 
	#endif

	#ifndef GEODE_STATICS_purgeFriendRequestSearchCache
		#define GEODE_STATICS_purgeFriendRequestSearchCache
		GEODE_AS_STATIC_FUNCTION(purgeFriendRequestSearchCache) 
	#endif

	#ifndef GEODE_STATICS_purgeUnusedLevels
		#define GEODE_STATICS_purgeUnusedLevels
		GEODE_AS_STATIC_FUNCTION(purgeUnusedLevels) 
	#endif

	#ifndef GEODE_STATICS_rateDemon
		#define GEODE_STATICS_rateDemon
		GEODE_AS_STATIC_FUNCTION(rateDemon) 
	#endif

	#ifndef GEODE_STATICS_rateEditorSoundAdmin
		#define GEODE_STATICS_rateEditorSoundAdmin
		GEODE_AS_STATIC_FUNCTION(rateEditorSoundAdmin) 
	#endif

	#ifndef GEODE_STATICS_rateLevelListAdmin
		#define GEODE_STATICS_rateLevelListAdmin
		GEODE_AS_STATIC_FUNCTION(rateLevelListAdmin) 
	#endif

	#ifndef GEODE_STATICS_rateStars
		#define GEODE_STATICS_rateStars
		GEODE_AS_STATIC_FUNCTION(rateStars) 
	#endif

	#ifndef GEODE_STATICS_readFriendRequest
		#define GEODE_STATICS_readFriendRequest
		GEODE_AS_STATIC_FUNCTION(readFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_readFriendRequests
		#define GEODE_STATICS_readFriendRequests
		GEODE_AS_STATIC_FUNCTION(readFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_removeDelimiterChars
		#define GEODE_STATICS_removeDelimiterChars
		GEODE_AS_STATIC_FUNCTION(removeDelimiterChars) 
	#endif

	#ifndef GEODE_STATICS_removeDLFromActive
		#define GEODE_STATICS_removeDLFromActive
		GEODE_AS_STATIC_FUNCTION(removeDLFromActive) 
	#endif

	#ifndef GEODE_STATICS_removeFriend
		#define GEODE_STATICS_removeFriend
		GEODE_AS_STATIC_FUNCTION(removeFriend) 
	#endif

	#ifndef GEODE_STATICS_removeLevelDownloadedKeysFromDict
		#define GEODE_STATICS_removeLevelDownloadedKeysFromDict
		GEODE_AS_STATIC_FUNCTION(removeLevelDownloadedKeysFromDict) 
	#endif

	#ifndef GEODE_STATICS_removePlatformerSaveJournalEntry
		#define GEODE_STATICS_removePlatformerSaveJournalEntry
		GEODE_AS_STATIC_FUNCTION(removePlatformerSaveJournalEntry) 
	#endif

	#ifndef GEODE_STATICS_removeUserFromList
		#define GEODE_STATICS_removeUserFromList
		GEODE_AS_STATIC_FUNCTION(removeUserFromList) 
	#endif

	#ifndef GEODE_STATICS_replaceFollowedUsers
		#define GEODE_STATICS_replaceFollowedUsers
		GEODE_AS_STATIC_FUNCTION(replaceFollowedUsers) 
	#endif

	#ifndef GEODE_STATICS_replayPlatformerSaveJournal
		#define GEODE_STATICS_replayPlatformerSaveJournal
		GEODE_AS_STATIC_FUNCTION(replayPlatformerSaveJournal) 
	#endif

	#ifndef GEODE_STATICS_reportContent
		#define GEODE_STATICS_reportContent
		GEODE_AS_STATIC_FUNCTION(reportContent) 
	#endif

	#ifndef GEODE_STATICS_reportLevel
		#define GEODE_STATICS_reportLevel
		GEODE_AS_STATIC_FUNCTION(reportLevel) 
	#endif

	#ifndef GEODE_STATICS_requestThreadMembers
		#define GEODE_STATICS_requestThreadMembers
		GEODE_AS_STATIC_FUNCTION(requestThreadMembers) 
	#endif

	#ifndef GEODE_STATICS_requestUserAccess
		#define GEODE_STATICS_requestUserAccess
		GEODE_AS_STATIC_FUNCTION(requestUserAccess) 
	#endif

	#ifndef GEODE_STATICS_resetAccountCaches
		#define GEODE_STATICS_resetAccountCaches
		GEODE_AS_STATIC_FUNCTION(resetAccountCaches) 
	#endif

	#ifndef GEODE_STATICS_resetCommentTimersForAccountID
		#define GEODE_STATICS_resetCommentTimersForAccountID
		GEODE_AS_STATIC_FUNCTION(resetCommentTimersForAccountID) 
	#endif

	#ifndef GEODE_STATICS_resetCommentTimersForLevelID
		#define GEODE_STATICS_resetCommentTimersForLevelID
		GEODE_AS_STATIC_FUNCTION(resetCommentTimersForLevelID) 
	#endif

	#ifndef GEODE_STATICS_resetStoredUserList
		#define GEODE_STATICS_resetStoredUserList
		GEODE_AS_STATIC_FUNCTION(resetStoredUserList) 
	#endif

	#ifndef GEODE_STATICS_resetTimerForKey
		#define GEODE_STATICS_resetTimerForKey
		GEODE_AS_STATIC_FUNCTION(resetTimerForKey) 
	#endif

	#ifndef GEODE_STATICS_restoreItems
		#define GEODE_STATICS_restoreItems
		GEODE_AS_STATIC_FUNCTION(restoreItems) 
	#endif

	#ifndef GEODE_STATICS_rewardItemFromResponse
		#define GEODE_STATICS_rewardItemFromResponse
		GEODE_AS_STATIC_FUNCTION(rewardItemFromResponse) 
	#endif

	#ifndef GEODE_STATICS_rewardSessionToken
		#define GEODE_STATICS_rewardSessionToken
		GEODE_AS_STATIC_FUNCTION(rewardSessionToken) 
	#endif

	#ifndef GEODE_STATICS_saveFetchedLevels
		#define GEODE_STATICS_saveFetchedLevels
		GEODE_AS_STATIC_FUNCTION(saveFetchedLevels) 
	#endif

	#ifndef GEODE_STATICS_saveLevel
		#define GEODE_STATICS_saveLevel
		GEODE_AS_STATIC_FUNCTION(saveLevel) 
	#endif

	#ifndef GEODE_STATICS_saveLevelList
		#define GEODE_STATICS_saveLevelList
		GEODE_AS_STATIC_FUNCTION(saveLevelList) 
	#endif

	#ifndef GEODE_STATICS_searchThreadMessages
		#define GEODE_STATICS_searchThreadMessages
		GEODE_AS_STATIC_FUNCTION(searchThreadMessages) 
	#endif

	#ifndef GEODE_STATICS_searchTypeIsCurated
		#define GEODE_STATICS_searchTypeIsCurated
		GEODE_AS_STATIC_FUNCTION(searchTypeIsCurated) 
	#endif

	#ifndef GEODE_STATICS_sendAdminAction
		#define GEODE_STATICS_sendAdminAction
		GEODE_AS_STATIC_FUNCTION(sendAdminAction) 
	#endif

	#ifndef GEODE_STATICS_sendThreadMessage
		#define GEODE_STATICS_sendThreadMessage
		GEODE_AS_STATIC_FUNCTION(sendThreadMessage) 
	#endif

	#ifndef GEODE_STATICS_setDiffVal
		#define GEODE_STATICS_setDiffVal
		GEODE_AS_STATIC_FUNCTION(setDiffVal) 
	#endif

	#ifndef GEODE_STATICS_setLenVal
		#define GEODE_STATICS_setLenVal
		GEODE_AS_STATIC_FUNCTION(setLenVal) 
	#endif

	#ifndef GEODE_STATICS_setLevelControlsTemplate
		#define GEODE_STATICS_setLevelControlsTemplate
		GEODE_AS_STATIC_FUNCTION(setLevelControlsTemplate) 
	#endif

	#ifndef GEODE_STATICS_setNotificationMask
		#define GEODE_STATICS_setNotificationMask
		GEODE_AS_STATIC_FUNCTION(setNotificationMask) 
	#endif

	#ifndef GEODE_STATICS_storeCommentsResult
		#define GEODE_STATICS_storeCommentsResult
		GEODE_AS_STATIC_FUNCTION(storeCommentsResult) 
	#endif

	#ifndef GEODE_STATICS_storedFriendForAccountID
		#define GEODE_STATICS_storedFriendForAccountID
		GEODE_AS_STATIC_FUNCTION(storedFriendForAccountID) 
	#endif

	#ifndef GEODE_STATICS_storeSearchResult
		#define GEODE_STATICS_storeSearchResult
		GEODE_AS_STATIC_FUNCTION(storeSearchResult) 
	#endif

	#ifndef GEODE_STATICS_storeThreadManifest
		#define GEODE_STATICS_storeThreadManifest
		GEODE_AS_STATIC_FUNCTION(storeThreadManifest) 
	#endif

	#ifndef GEODE_STATICS_storeUserName
		#define GEODE_STATICS_storeUserName
		GEODE_AS_STATIC_FUNCTION(storeUserName) 
	#endif

	#ifndef GEODE_STATICS_storeUserNames
		#define GEODE_STATICS_storeUserNames
		GEODE_AS_STATIC_FUNCTION(storeUserNames) 
	#endif

	#ifndef GEODE_STATICS_submitUserInfo
		#define GEODE_STATICS_submitUserInfo
		GEODE_AS_STATIC_FUNCTION(submitUserInfo) 
	#endif

	#ifndef GEODE_STATICS_suggestLevelStars
		#define GEODE_STATICS_suggestLevelStars
		GEODE_AS_STATIC_FUNCTION(suggestLevelStars) 
	#endif

	#ifndef GEODE_STATICS_syncFollowing
		#define GEODE_STATICS_syncFollowing
		GEODE_AS_STATIC_FUNCTION(syncFollowing) 
	#endif

	#ifndef GEODE_STATICS_syncFollowListIfNeeded
		#define GEODE_STATICS_syncFollowListIfNeeded
		GEODE_AS_STATIC_FUNCTION(syncFollowListIfNeeded) 
	#endif

	#ifndef GEODE_STATICS_tryGetUsername
		#define GEODE_STATICS_tryGetUsername
		GEODE_AS_STATIC_FUNCTION(tryGetUsername) 
	#endif

	#ifndef GEODE_STATICS_unblockUser
		#define GEODE_STATICS_unblockUser
		GEODE_AS_STATIC_FUNCTION(unblockUser) 
	#endif

	#ifndef GEODE_STATICS_unrateEditorSoundAdmin
		#define GEODE_STATICS_unrateEditorSoundAdmin
		GEODE_AS_STATIC_FUNCTION(unrateEditorSoundAdmin) 
	#endif

	#ifndef GEODE_STATICS_unrateLevelListAdmin
		#define GEODE_STATICS_unrateLevelListAdmin
		GEODE_AS_STATIC_FUNCTION(unrateLevelListAdmin) 
	#endif

	#ifndef GEODE_STATICS_updateDescription
		#define GEODE_STATICS_updateDescription
		GEODE_AS_STATIC_FUNCTION(updateDescription) 
	#endif

	#ifndef GEODE_STATICS_updateEditorSoundDescription
		#define GEODE_STATICS_updateEditorSoundDescription
		GEODE_AS_STATIC_FUNCTION(updateEditorSoundDescription) 
	#endif

	#ifndef GEODE_STATICS_updateEditorSoundRankAdmin
		#define GEODE_STATICS_updateEditorSoundRankAdmin
		GEODE_AS_STATIC_FUNCTION(updateEditorSoundRankAdmin) 
	#endif

	#ifndef GEODE_STATICS_updateLevel
		#define GEODE_STATICS_updateLevel
		GEODE_AS_STATIC_FUNCTION(updateLevel) 
	#endif

	#ifndef GEODE_STATICS_updateLevelListRankAdmin
		#define GEODE_STATICS_updateLevelListRankAdmin
		GEODE_AS_STATIC_FUNCTION(updateLevelListRankAdmin) 
	#endif

	#ifndef GEODE_STATICS_updateLevelOrders
		#define GEODE_STATICS_updateLevelOrders
		GEODE_AS_STATIC_FUNCTION(updateLevelOrders) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRewards
		#define GEODE_STATICS_updateLevelRewards
		GEODE_AS_STATIC_FUNCTION(updateLevelRewards) 
	#endif

	#ifndef GEODE_STATICS_updateSavedLevelList
		#define GEODE_STATICS_updateSavedLevelList
		GEODE_AS_STATIC_FUNCTION(updateSavedLevelList) 
	#endif

	#ifndef GEODE_STATICS_updateThread
		#define GEODE_STATICS_updateThread
		GEODE_AS_STATIC_FUNCTION(updateThread) 
	#endif

	#ifndef GEODE_STATICS_updateUserScore
		#define GEODE_STATICS_updateUserScore
		GEODE_AS_STATIC_FUNCTION(updateUserScore) 
	#endif

	#ifndef GEODE_STATICS_uploadComment
		#define GEODE_STATICS_uploadComment
		GEODE_AS_STATIC_FUNCTION(uploadComment) 
	#endif

	#ifndef GEODE_STATICS_uploadDeathData
		#define GEODE_STATICS_uploadDeathData
		GEODE_AS_STATIC_FUNCTION(uploadDeathData) 
	#endif

	#ifndef GEODE_STATICS_uploadEditorSoundComment
		#define GEODE_STATICS_uploadEditorSoundComment
		GEODE_AS_STATIC_FUNCTION(uploadEditorSoundComment) 
	#endif

	#ifndef GEODE_STATICS_uploadEditorSoundConfig
		#define GEODE_STATICS_uploadEditorSoundConfig
		GEODE_AS_STATIC_FUNCTION(uploadEditorSoundConfig) 
	#endif

	#ifndef GEODE_STATICS_uploadFriendRequest
		#define GEODE_STATICS_uploadFriendRequest
		GEODE_AS_STATIC_FUNCTION(uploadFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_uploadLevel
		#define GEODE_STATICS_uploadLevel
		GEODE_AS_STATIC_FUNCTION(uploadLevel) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelControls
		#define GEODE_STATICS_uploadLevelControls
		GEODE_AS_STATIC_FUNCTION(uploadLevelControls) 
	#endif

	#ifndef GEODE_STATICS_uploadLevelList
		#define GEODE_STATICS_uploadLevelList
		GEODE_AS_STATIC_FUNCTION(uploadLevelList) 
	#endif

	#ifndef GEODE_STATICS_uploadModRoomComment
		#define GEODE_STATICS_uploadModRoomComment
		GEODE_AS_STATIC_FUNCTION(uploadModRoomComment) 
	#endif

	#ifndef GEODE_STATICS_uploadUserMessage
		#define GEODE_STATICS_uploadUserMessage
		GEODE_AS_STATIC_FUNCTION(uploadUserMessage) 
	#endif

	#ifndef GEODE_STATICS_userNameForUserID
		#define GEODE_STATICS_userNameForUserID
		GEODE_AS_STATIC_FUNCTION(userNameForUserID) 
	#endif

	#ifndef GEODE_STATICS_vaultTimedType
		#define GEODE_STATICS_vaultTimedType
		GEODE_AS_STATIC_FUNCTION(vaultTimedType) 
	#endif

	#ifndef GEODE_STATICS_verifyContainerOnlyHasLevels
		#define GEODE_STATICS_verifyContainerOnlyHasLevels
		GEODE_AS_STATIC_FUNCTION(verifyContainerOnlyHasLevels) 
	#endif

	#ifndef GEODE_STATICS_writePlatformerSaveJournal
		#define GEODE_STATICS_writePlatformerSaveJournal
		GEODE_AS_STATIC_FUNCTION(writePlatformerSaveJournal) 
	#endif

	#ifndef GEODE_STATICS_writeSpecialFilters
		#define GEODE_STATICS_writeSpecialFilters
		GEODE_AS_STATIC_FUNCTION(writeSpecialFilters) 
	#endif

	#ifndef GEODE_STATICS_adminQueueMute
		#define GEODE_STATICS_adminQueueMute
		GEODE_AS_STATIC_FUNCTION(adminQueueMute) 
	#endif

	#ifndef GEODE_STATICS_adminQueueUnmute
		#define GEODE_STATICS_adminQueueUnmute
		GEODE_AS_STATIC_FUNCTION(adminQueueUnmute) 
	#endif

	#ifndef GEODE_STATICS_onAdminQueueMuteCompleted
		#define GEODE_STATICS_onAdminQueueMuteCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminQueueMuteCompleted) 
	#endif

	#ifndef GEODE_STATICS_onAdminQueueUnmuteCompleted
		#define GEODE_STATICS_onAdminQueueUnmuteCompleted
		GEODE_AS_STATIC_FUNCTION(onAdminQueueUnmuteCompleted) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_responseToDict
		#define GEODE_CONCEPT_CHECK_responseToDict
		GEODE_CONCEPT_FUNCTION_CHECK(responseToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_acceptFriendRequest
		#define GEODE_CONCEPT_CHECK_acceptFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(acceptFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accountIDForUserID
		#define GEODE_CONCEPT_CHECK_accountIDForUserID
		GEODE_CONCEPT_FUNCTION_CHECK(accountIDForUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addThreadMembers
		#define GEODE_CONCEPT_CHECK_addThreadMembers
		GEODE_CONCEPT_FUNCTION_CHECK(addThreadMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminClearReportedContent
		#define GEODE_CONCEPT_CHECK_adminClearReportedContent
		GEODE_CONCEPT_FUNCTION_CHECK(adminClearReportedContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCloseCase
		#define GEODE_CONCEPT_CHECK_adminCloseCase
		GEODE_CONCEPT_FUNCTION_CHECK(adminCloseCase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentBan
		#define GEODE_CONCEPT_CHECK_adminCommentBan
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentUnban
		#define GEODE_CONCEPT_CHECK_adminCommentUnban
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentUnban) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminDeleteUserComments
		#define GEODE_CONCEPT_CHECK_adminDeleteUserComments
		GEODE_CONCEPT_FUNCTION_CHECK(adminDeleteUserComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminFreezeAccount
		#define GEODE_CONCEPT_CHECK_adminFreezeAccount
		GEODE_CONCEPT_FUNCTION_CHECK(adminFreezeAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminGetAbuseInfo
		#define GEODE_CONCEPT_CHECK_adminGetAbuseInfo
		GEODE_CONCEPT_FUNCTION_CHECK(adminGetAbuseInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminGetAccountReview
		#define GEODE_CONCEPT_CHECK_adminGetAccountReview
		GEODE_CONCEPT_FUNCTION_CHECK(adminGetAccountReview) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminGetReportedContent
		#define GEODE_CONCEPT_CHECK_adminGetReportedContent
		GEODE_CONCEPT_FUNCTION_CHECK(adminGetReportedContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminGetReportQueue
		#define GEODE_CONCEPT_CHECK_adminGetReportQueue
		GEODE_CONCEPT_FUNCTION_CHECK(adminGetReportQueue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminGetUserHistory
		#define GEODE_CONCEPT_CHECK_adminGetUserHistory
		GEODE_CONCEPT_FUNCTION_CHECK(adminGetUserHistory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageBan
		#define GEODE_CONCEPT_CHECK_adminMessageBan
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageUnban
		#define GEODE_CONCEPT_CHECK_adminMessageUnban
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageUnban) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameLock
		#define GEODE_CONCEPT_CHECK_adminNameLock
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameLock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameUnlock
		#define GEODE_CONCEPT_CHECK_adminNameUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminThreadAction
		#define GEODE_CONCEPT_CHECK_adminThreadAction
		GEODE_CONCEPT_FUNCTION_CHECK(adminThreadAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingBan
		#define GEODE_CONCEPT_CHECK_adminTrendingBan
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingUnban
		#define GEODE_CONCEPT_CHECK_adminTrendingUnban
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingUnban) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUnfreezeAccount
		#define GEODE_CONCEPT_CHECK_adminUnfreezeAccount
		GEODE_CONCEPT_FUNCTION_CHECK(adminUnfreezeAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadBan
		#define GEODE_CONCEPT_CHECK_adminUploadBan
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadUnban
		#define GEODE_CONCEPT_CHECK_adminUploadUnban
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadUnban) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_appendModReason
		#define GEODE_CONCEPT_CHECK_appendModReason
		GEODE_CONCEPT_FUNCTION_CHECK(appendModReason) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyDeathBlob
		#define GEODE_CONCEPT_CHECK_applyDeathBlob
		GEODE_CONCEPT_FUNCTION_CHECK(applyDeathBlob) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyLevelControlsSection
		#define GEODE_CONCEPT_CHECK_applyLevelControlsSection
		GEODE_CONCEPT_FUNCTION_CHECK(applyLevelControlsSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyThreadAddReply
		#define GEODE_CONCEPT_CHECK_applyThreadAddReply
		GEODE_CONCEPT_FUNCTION_CHECK(applyThreadAddReply) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areGauntletsLoaded
		#define GEODE_CONCEPT_CHECK_areGauntletsLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(areGauntletsLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_banUser
		#define GEODE_CONCEPT_CHECK_banUser
		GEODE_CONCEPT_FUNCTION_CHECK(banUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blockUser
		#define GEODE_CONCEPT_CHECK_blockUser
		GEODE_CONCEPT_FUNCTION_CHECK(blockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_claimNotificationReward
		#define GEODE_CONCEPT_CHECK_claimNotificationReward
		GEODE_CONCEPT_FUNCTION_CHECK(claimNotificationReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cleanupDailyLevels
		#define GEODE_CONCEPT_CHECK_cleanupDailyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(cleanupDailyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearDeathDataInstances
		#define GEODE_CONCEPT_CHECK_clearDeathDataInstances
		GEODE_CONCEPT_FUNCTION_CHECK(clearDeathDataInstances) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPlatformerSaveJournal
		#define GEODE_CONCEPT_CHECK_clearPlatformerSaveJournal
		GEODE_CONCEPT_FUNCTION_CHECK(clearPlatformerSaveJournal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPlatformerSaves
		#define GEODE_CONCEPT_CHECK_clearPlatformerSaves
		GEODE_CONCEPT_FUNCTION_CHECK(clearPlatformerSaves) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectPlatformerJournalKeys
		#define GEODE_CONCEPT_CHECK_collectPlatformerJournalKeys
		GEODE_CONCEPT_FUNCTION_CHECK(collectPlatformerJournalKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetAccountComments
		#define GEODE_CONCEPT_CHECK_createAndGetAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetCommentsFull
		#define GEODE_CONCEPT_CHECK_createAndGetCommentsFull
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetCommentsFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetEditorSoundConfigs
		#define GEODE_CONCEPT_CHECK_createAndGetEditorSoundConfigs
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetEditorSoundConfigs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetLevelComments
		#define GEODE_CONCEPT_CHECK_createAndGetLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetLevelLists
		#define GEODE_CONCEPT_CHECK_createAndGetLevelLists
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetLevelLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetLevels
		#define GEODE_CONCEPT_CHECK_createAndGetLevels
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetMapPacks
		#define GEODE_CONCEPT_CHECK_createAndGetMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createAndGetScores
		#define GEODE_CONCEPT_CHECK_createAndGetScores
		GEODE_CONCEPT_FUNCTION_CHECK(createAndGetScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewLevel
		#define GEODE_CONCEPT_CHECK_createNewLevel
		GEODE_CONCEPT_FUNCTION_CHECK(createNewLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewLevelList
		#define GEODE_CONCEPT_CHECK_createNewLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(createNewLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPageInfo
		#define GEODE_CONCEPT_CHECK_createPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(createPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createSmartTemplate
		#define GEODE_CONCEPT_CHECK_createSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(createSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteAccountComment
		#define GEODE_CONCEPT_CHECK_deleteAccountComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteAccountComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteComment
		#define GEODE_CONCEPT_CHECK_deleteComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteComments
		#define GEODE_CONCEPT_CHECK_deleteComments
		GEODE_CONCEPT_FUNCTION_CHECK(deleteComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteFriendRequests
		#define GEODE_CONCEPT_CHECK_deleteFriendRequests
		GEODE_CONCEPT_FUNCTION_CHECK(deleteFriendRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevel
		#define GEODE_CONCEPT_CHECK_deleteLevel
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevelComment
		#define GEODE_CONCEPT_CHECK_deleteLevelComment
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevelComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevelControls
		#define GEODE_CONCEPT_CHECK_deleteLevelControls
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevelControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteLevelList
		#define GEODE_CONCEPT_CHECK_deleteLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(deleteLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSentFriendRequest
		#define GEODE_CONCEPT_CHECK_deleteSentFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSentFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteServerEditorSound
		#define GEODE_CONCEPT_CHECK_deleteServerEditorSound
		GEODE_CONCEPT_FUNCTION_CHECK(deleteServerEditorSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteServerLevel
		#define GEODE_CONCEPT_CHECK_deleteServerLevel
		GEODE_CONCEPT_FUNCTION_CHECK(deleteServerLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteServerLevelList
		#define GEODE_CONCEPT_CHECK_deleteServerLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(deleteServerLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteSmartTemplate
		#define GEODE_CONCEPT_CHECK_deleteSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(deleteSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteUserMessages
		#define GEODE_CONCEPT_CHECK_deleteUserMessages
		GEODE_CONCEPT_FUNCTION_CHECK(deleteUserMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadEditorSoundConfig
		#define GEODE_CONCEPT_CHECK_downloadEditorSoundConfig
		GEODE_CONCEPT_FUNCTION_CHECK(downloadEditorSoundConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadLevel
		#define GEODE_CONCEPT_CHECK_downloadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(downloadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadUserMessage
		#define GEODE_CONCEPT_CHECK_downloadUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(downloadUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dropIgnoredRequestLists
		#define GEODE_CONCEPT_CHECK_dropIgnoredRequestLists
		GEODE_CONCEPT_FUNCTION_CHECK(dropIgnoredRequestLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtShouldUploadLevel
		#define GEODE_CONCEPT_CHECK_dtShouldUploadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(dtShouldUploadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_evictDeathDataCache
		#define GEODE_CONCEPT_CHECK_evictDeathDataCache
		GEODE_CONCEPT_FUNCTION_CHECK(evictDeathDataCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followUser
		#define GEODE_CONCEPT_CHECK_followUser
		GEODE_CONCEPT_FUNCTION_CHECK(followUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_followUserOnline
		#define GEODE_CONCEPT_CHECK_followUserOnline
		GEODE_CONCEPT_FUNCTION_CHECK(followUserOnline) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceDeathDataRefetch
		#define GEODE_CONCEPT_CHECK_forceDeathDataRefetch
		GEODE_CONCEPT_FUNCTION_CHECK(forceDeathDataRefetch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendRequestFromAccountID
		#define GEODE_CONCEPT_CHECK_friendRequestFromAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(friendRequestFromAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendRequestWasRemoved
		#define GEODE_CONCEPT_CHECK_friendRequestWasRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(friendRequestWasRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountCommentKey
		#define GEODE_CONCEPT_CHECK_getAccountCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountComments
		#define GEODE_CONCEPT_CHECK_getAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveDailyID
		#define GEODE_CONCEPT_CHECK_getActiveDailyID
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveDailyID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveSmartTemplate
		#define GEODE_CONCEPT_CHECK_getActiveSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllSmartTemplates
		#define GEODE_CONCEPT_CHECK_getAllSmartTemplates
		GEODE_CONCEPT_FUNCTION_CHECK(getAllSmartTemplates) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllUsedSongIDs
		#define GEODE_CONCEPT_CHECK_getAllUsedSongIDs
		GEODE_CONCEPT_FUNCTION_CHECK(getAllUsedSongIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBasePostString
		#define GEODE_CONCEPT_CHECK_getBasePostString
		GEODE_CONCEPT_FUNCTION_CHECK(getBasePostString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoolForKey
		#define GEODE_CONCEPT_CHECK_getBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCommentKey
		#define GEODE_CONCEPT_CHECK_getCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedDailyLevels
		#define GEODE_CONCEPT_CHECK_getCompletedDailyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedDailyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedEventLevels
		#define GEODE_CONCEPT_CHECK_getCompletedEventLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedEventLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedGauntletDemons
		#define GEODE_CONCEPT_CHECK_getCompletedGauntletDemons
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedGauntletDemons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedGauntletLevels
		#define GEODE_CONCEPT_CHECK_getCompletedGauntletLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedGauntletLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedLevels
		#define GEODE_CONCEPT_CHECK_getCompletedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCompletedWeeklyLevels
		#define GEODE_CONCEPT_CHECK_getCompletedWeeklyLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCompletedWeeklyLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDailyID
		#define GEODE_CONCEPT_CHECK_getDailyID
		GEODE_CONCEPT_FUNCTION_CHECK(getDailyID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDailyTimer
		#define GEODE_CONCEPT_CHECK_getDailyTimer
		GEODE_CONCEPT_FUNCTION_CHECK(getDailyTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeathData
		#define GEODE_CONCEPT_CHECK_getDeathData
		GEODE_CONCEPT_FUNCTION_CHECK(getDeathData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeathDataVersion
		#define GEODE_CONCEPT_CHECK_getDeathDataVersion
		GEODE_CONCEPT_FUNCTION_CHECK(getDeathDataVersion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeathDisplayData
		#define GEODE_CONCEPT_CHECK_getDeathDisplayData
		GEODE_CONCEPT_FUNCTION_CHECK(getDeathDisplayData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeleteCommentKey
		#define GEODE_CONCEPT_CHECK_getDeleteCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDeleteCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDeleteMessageKey
		#define GEODE_CONCEPT_CHECK_getDeleteMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDeleteMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDemonLevelsString
		#define GEODE_CONCEPT_CHECK_getDemonLevelsString
		GEODE_CONCEPT_FUNCTION_CHECK(getDemonLevelsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDescKey
		#define GEODE_CONCEPT_CHECK_getDescKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDescKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDifficultyStr
		#define GEODE_CONCEPT_CHECK_getDifficultyStr
		GEODE_CONCEPT_FUNCTION_CHECK(getDifficultyStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDiffKey
		#define GEODE_CONCEPT_CHECK_getDiffKey
		GEODE_CONCEPT_FUNCTION_CHECK(getDiffKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDiffVal
		#define GEODE_CONCEPT_CHECK_getDiffVal
		GEODE_CONCEPT_FUNCTION_CHECK(getDiffVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getEditorSoundConfigs
		#define GEODE_CONCEPT_CHECK_getEditorSoundConfigs
		GEODE_CONCEPT_FUNCTION_CHECK(getEditorSoundConfigs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFolderName
		#define GEODE_CONCEPT_CHECK_getFolderName
		GEODE_CONCEPT_FUNCTION_CHECK(getFolderName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFollowing
		#define GEODE_CONCEPT_CHECK_getFollowing
		GEODE_CONCEPT_FUNCTION_CHECK(getFollowing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFriendRequestKey
		#define GEODE_CONCEPT_CHECK_getFriendRequestKey
		GEODE_CONCEPT_FUNCTION_CHECK(getFriendRequestKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFriendRequests
		#define GEODE_CONCEPT_CHECK_getFriendRequests
		GEODE_CONCEPT_FUNCTION_CHECK(getFriendRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntletKey
		#define GEODE_CONCEPT_CHECK_getGauntletKey
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntletKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntletLevels
		#define GEODE_CONCEPT_CHECK_getGauntletLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntletLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntlets
		#define GEODE_CONCEPT_CHECK_getGauntlets
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntlets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGauntletSearchKey
		#define GEODE_CONCEPT_CHECK_getGauntletSearchKey
		GEODE_CONCEPT_FUNCTION_CHECK(getGauntletSearchKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJChallenges
		#define GEODE_CONCEPT_CHECK_getGJChallenges
		GEODE_CONCEPT_FUNCTION_CHECK(getGJChallenges) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJContentStatus
		#define GEODE_CONCEPT_CHECK_getGJContentStatus
		GEODE_CONCEPT_FUNCTION_CHECK(getGJContentStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJDailyLevelState
		#define GEODE_CONCEPT_CHECK_getGJDailyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(getGJDailyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJRewards
		#define GEODE_CONCEPT_CHECK_getGJRewards
		GEODE_CONCEPT_FUNCTION_CHECK(getGJRewards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJSecretReward
		#define GEODE_CONCEPT_CHECK_getGJSecretReward
		GEODE_CONCEPT_FUNCTION_CHECK(getGJSecretReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getGJUserInfo
		#define GEODE_CONCEPT_CHECK_getGJUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getGJUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getHighestLevelOrder
		#define GEODE_CONCEPT_CHECK_getHighestLevelOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getHighestLevelOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIntForKey
		#define GEODE_CONCEPT_CHECK_getIntForKey
		GEODE_CONCEPT_FUNCTION_CHECK(getIntForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLeaderboardKey
		#define GEODE_CONCEPT_CHECK_getLeaderboardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLeaderboardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLeaderboardScores
		#define GEODE_CONCEPT_CHECK_getLeaderboardScores
		GEODE_CONCEPT_FUNCTION_CHECK(getLeaderboardScores) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLengthStr
		#define GEODE_CONCEPT_CHECK_getLengthStr
		GEODE_CONCEPT_FUNCTION_CHECK(getLengthStr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLenKey
		#define GEODE_CONCEPT_CHECK_getLenKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLenKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLenVal
		#define GEODE_CONCEPT_CHECK_getLenVal
		GEODE_CONCEPT_FUNCTION_CHECK(getLenVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelComments
		#define GEODE_CONCEPT_CHECK_getLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelControls
		#define GEODE_CONCEPT_CHECK_getLevelControls
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelDownloadKey
		#define GEODE_CONCEPT_CHECK_getLevelDownloadKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelDownloadKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelKey
		#define GEODE_CONCEPT_CHECK_getLevelKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelLeaderboard
		#define GEODE_CONCEPT_CHECK_getLevelLeaderboard
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelLeaderboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelLeaderboardKey
		#define GEODE_CONCEPT_CHECK_getLevelLeaderboardKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelLeaderboardKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelListKey
		#define GEODE_CONCEPT_CHECK_getLevelListKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelListKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelLists
		#define GEODE_CONCEPT_CHECK_getLevelLists
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelRateInfo
		#define GEODE_CONCEPT_CHECK_getLevelRateInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelRateInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelSaveData
		#define GEODE_CONCEPT_CHECK_getLevelSaveData
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelSaveData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikeAccountItemKey
		#define GEODE_CONCEPT_CHECK_getLikeAccountItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLikeAccountItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLikeItemKey
		#define GEODE_CONCEPT_CHECK_getLikeItemKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLikeItemKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalLevel
		#define GEODE_CONCEPT_CHECK_getLocalLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalLevelByName
		#define GEODE_CONCEPT_CHECK_getLocalLevelByName
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalLevelByName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLocalLevelList
		#define GEODE_CONCEPT_CHECK_getLocalLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(getLocalLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLowestLevelOrder
		#define GEODE_CONCEPT_CHECK_getLowestLevelOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getLowestLevelOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainLevel
		#define GEODE_CONCEPT_CHECK_getMainLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getMainLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPackKey
		#define GEODE_CONCEPT_CHECK_getMapPackKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPackKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMapPacks
		#define GEODE_CONCEPT_CHECK_getMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(getMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessageKey
		#define GEODE_CONCEPT_CHECK_getMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMessagesKey
		#define GEODE_CONCEPT_CHECK_getMessagesKey
		GEODE_CONCEPT_FUNCTION_CHECK(getMessagesKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNews
		#define GEODE_CONCEPT_CHECK_getNews
		GEODE_CONCEPT_FUNCTION_CHECK(getNews) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextFreeTemplateID
		#define GEODE_CONCEPT_CHECK_getNextFreeTemplateID
		GEODE_CONCEPT_FUNCTION_CHECK(getNextFreeTemplateID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextLevelName
		#define GEODE_CONCEPT_CHECK_getNextLevelName
		GEODE_CONCEPT_FUNCTION_CHECK(getNextLevelName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNotifications
		#define GEODE_CONCEPT_CHECK_getNotifications
		GEODE_CONCEPT_FUNCTION_CHECK(getNotifications) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOnlineLevels
		#define GEODE_CONCEPT_CHECK_getOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageInfo
		#define GEODE_CONCEPT_CHECK_getPageInfo
		GEODE_CONCEPT_FUNCTION_CHECK(getPageInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlatformerSaveStats
		#define GEODE_CONCEPT_CHECK_getPlatformerSaveStats
		GEODE_CONCEPT_FUNCTION_CHECK(getPlatformerSaveStats) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPostCommentKey
		#define GEODE_CONCEPT_CHECK_getPostCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(getPostCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRateStarsKey
		#define GEODE_CONCEPT_CHECK_getRateStarsKey
		GEODE_CONCEPT_FUNCTION_CHECK(getRateStarsKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getReportKey
		#define GEODE_CONCEPT_CHECK_getReportKey
		GEODE_CONCEPT_FUNCTION_CHECK(getReportKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedDailyLevel
		#define GEODE_CONCEPT_CHECK_getSavedDailyLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedDailyLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedDailyLevelFromLevelID
		#define GEODE_CONCEPT_CHECK_getSavedDailyLevelFromLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedDailyLevelFromLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedGauntlet
		#define GEODE_CONCEPT_CHECK_getSavedGauntlet
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedGauntlet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedGauntletLevel
		#define GEODE_CONCEPT_CHECK_getSavedGauntletLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedGauntletLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevel
		#define GEODE_CONCEPT_CHECK_getSavedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevelList
		#define GEODE_CONCEPT_CHECK_getSavedLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevelLists
		#define GEODE_CONCEPT_CHECK_getSavedLevelLists
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevelLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedLevels
		#define GEODE_CONCEPT_CHECK_getSavedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSavedMapPack
		#define GEODE_CONCEPT_CHECK_getSavedMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(getSavedMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchScene
		#define GEODE_CONCEPT_CHECK_getSearchScene
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchScene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongUsage
		#define GEODE_CONCEPT_CHECK_getSongUsage
		GEODE_CONCEPT_FUNCTION_CHECK(getSongUsage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSplitIntFromKey
		#define GEODE_CONCEPT_CHECK_getSplitIntFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSplitIntFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStarLevelsString
		#define GEODE_CONCEPT_CHECK_getStarLevelsString
		GEODE_CONCEPT_FUNCTION_CHECK(getStarLevelsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredLevelComments
		#define GEODE_CONCEPT_CHECK_getStoredLevelComments
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredLevelComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredOnlineLevels
		#define GEODE_CONCEPT_CHECK_getStoredOnlineLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredOnlineLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserList
		#define GEODE_CONCEPT_CHECK_getStoredUserList
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserMessage
		#define GEODE_CONCEPT_CHECK_getStoredUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoredUserMessageReply
		#define GEODE_CONCEPT_CHECK_getStoredUserMessageReply
		GEODE_CONCEPT_FUNCTION_CHECK(getStoredUserMessageReply) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThreadInvites
		#define GEODE_CONCEPT_CHECK_getThreadInvites
		GEODE_CONCEPT_FUNCTION_CHECK(getThreadInvites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThreadMembers
		#define GEODE_CONCEPT_CHECK_getThreadMembers
		GEODE_CONCEPT_FUNCTION_CHECK(getThreadMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThreadMessages
		#define GEODE_CONCEPT_CHECK_getThreadMessages
		GEODE_CONCEPT_FUNCTION_CHECK(getThreadMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThreadPastMembers
		#define GEODE_CONCEPT_CHECK_getThreadPastMembers
		GEODE_CONCEPT_FUNCTION_CHECK(getThreadPastMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThreadPendingInvites
		#define GEODE_CONCEPT_CHECK_getThreadPendingInvites
		GEODE_CONCEPT_FUNCTION_CHECK(getThreadPendingInvites) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getThreads
		#define GEODE_CONCEPT_CHECK_getThreads
		GEODE_CONCEPT_FUNCTION_CHECK(getThreads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeLeft
		#define GEODE_CONCEPT_CHECK_getTimeLeft
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTopArtists
		#define GEODE_CONCEPT_CHECK_getTopArtists
		GEODE_CONCEPT_FUNCTION_CHECK(getTopArtists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTopArtistsKey
		#define GEODE_CONCEPT_CHECK_getTopArtistsKey
		GEODE_CONCEPT_FUNCTION_CHECK(getTopArtistsKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUploadMessageKey
		#define GEODE_CONCEPT_CHECK_getUploadMessageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getUploadMessageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserInfoKey
		#define GEODE_CONCEPT_CHECK_getUserInfoKey
		GEODE_CONCEPT_FUNCTION_CHECK(getUserInfoKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserList
		#define GEODE_CONCEPT_CHECK_getUserList
		GEODE_CONCEPT_FUNCTION_CHECK(getUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserMessages
		#define GEODE_CONCEPT_CHECK_getUserMessages
		GEODE_CONCEPT_FUNCTION_CHECK(getUserMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUsers
		#define GEODE_CONCEPT_CHECK_getUsers
		GEODE_CONCEPT_FUNCTION_CHECK(getUsers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserSearch
		#define GEODE_CONCEPT_CHECK_getUserSearch
		GEODE_CONCEPT_FUNCTION_CHECK(getUserSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gotoLevelPage
		#define GEODE_CONCEPT_CHECK_gotoLevelPage
		GEODE_CONCEPT_FUNCTION_CHECK(gotoLevelPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleIt
		#define GEODE_CONCEPT_CHECK_handleIt
		GEODE_CONCEPT_FUNCTION_CHECK(handleIt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItDelayed
		#define GEODE_CONCEPT_CHECK_handleItDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(handleItDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItND
		#define GEODE_CONCEPT_CHECK_handleItND
		GEODE_CONCEPT_FUNCTION_CHECK(handleItND) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasDailyStateBeenLoaded
		#define GEODE_CONCEPT_CHECK_hasDailyStateBeenLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(hasDailyStateBeenLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasDownloadedLevel
		#define GEODE_CONCEPT_CHECK_hasDownloadedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasDownloadedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasDownloadedList
		#define GEODE_CONCEPT_CHECK_hasDownloadedList
		GEODE_CONCEPT_FUNCTION_CHECK(hasDownloadedList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedAccountItem
		#define GEODE_CONCEPT_CHECK_hasLikedAccountItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedAccountItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedItem
		#define GEODE_CONCEPT_CHECK_hasLikedItem
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasLikedItemFullCheck
		#define GEODE_CONCEPT_CHECK_hasLikedItemFullCheck
		GEODE_CONCEPT_FUNCTION_CHECK(hasLikedItemFullCheck) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasNewDaily
		#define GEODE_CONCEPT_CHECK_hasNewDaily
		GEODE_CONCEPT_FUNCTION_CHECK(hasNewDaily) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasNewGauntlets
		#define GEODE_CONCEPT_CHECK_hasNewGauntlets
		GEODE_CONCEPT_FUNCTION_CHECK(hasNewGauntlets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasRatedDemon
		#define GEODE_CONCEPT_CHECK_hasRatedDemon
		GEODE_CONCEPT_FUNCTION_CHECK(hasRatedDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasRatedLevelStars
		#define GEODE_CONCEPT_CHECK_hasRatedLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(hasRatedLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasReportedLevel
		#define GEODE_CONCEPT_CHECK_hasReportedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(hasReportedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateMessages
		#define GEODE_CONCEPT_CHECK_invalidateMessages
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateRequests
		#define GEODE_CONCEPT_CHECK_invalidateRequests
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_invalidateUserList
		#define GEODE_CONCEPT_CHECK_invalidateUserList
		GEODE_CONCEPT_FUNCTION_CHECK(invalidateUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDeathDataFetched
		#define GEODE_CONCEPT_CHECK_isDeathDataFetched
		GEODE_CONCEPT_FUNCTION_CHECK(isDeathDataFetched) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isFollowingUser
		#define GEODE_CONCEPT_CHECK_isFollowingUser
		GEODE_CONCEPT_FUNCTION_CHECK(isFollowingUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPastDailyCopy
		#define GEODE_CONCEPT_CHECK_isPastDailyCopy
		GEODE_CONCEPT_FUNCTION_CHECK(isPastDailyCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isTimeValid
		#define GEODE_CONCEPT_CHECK_isTimeValid
		GEODE_CONCEPT_FUNCTION_CHECK(isTimeValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUpdateValid
		#define GEODE_CONCEPT_CHECK_isUpdateValid
		GEODE_CONCEPT_FUNCTION_CHECK(isUpdateValid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_itemIDFromLikeKey
		#define GEODE_CONCEPT_CHECK_itemIDFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(itemIDFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyHasTimer
		#define GEODE_CONCEPT_CHECK_keyHasTimer
		GEODE_CONCEPT_FUNCTION_CHECK(keyHasTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelControlInstances
		#define GEODE_CONCEPT_CHECK_levelControlInstances
		GEODE_CONCEPT_FUNCTION_CHECK(levelControlInstances) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelIDFromCommentKey
		#define GEODE_CONCEPT_CHECK_levelIDFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(levelIDFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelIDFromPostCommentKey
		#define GEODE_CONCEPT_CHECK_levelIDFromPostCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(levelIDFromPostCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likeFromLikeKey
		#define GEODE_CONCEPT_CHECK_likeFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(likeFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likeItem
		#define GEODE_CONCEPT_CHECK_likeItem
		GEODE_CONCEPT_FUNCTION_CHECK(likeItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_limitSavedLevels
		#define GEODE_CONCEPT_CHECK_limitSavedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(limitSavedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_makeTimeStamp
		#define GEODE_CONCEPT_CHECK_makeTimeStamp
		GEODE_CONCEPT_FUNCTION_CHECK(makeTimeStamp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markGauntletsSeen
		#define GEODE_CONCEPT_CHECK_markGauntletsSeen
		GEODE_CONCEPT_FUNCTION_CHECK(markGauntletsSeen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markItemAsLiked
		#define GEODE_CONCEPT_CHECK_markItemAsLiked
		GEODE_CONCEPT_FUNCTION_CHECK(markItemAsLiked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsDownloaded
		#define GEODE_CONCEPT_CHECK_markLevelAsDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsRatedDemon
		#define GEODE_CONCEPT_CHECK_markLevelAsRatedDemon
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsRatedDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsRatedStars
		#define GEODE_CONCEPT_CHECK_markLevelAsRatedStars
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsRatedStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelAsReported
		#define GEODE_CONCEPT_CHECK_markLevelAsReported
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelAsReported) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markListAsDownloaded
		#define GEODE_CONCEPT_CHECK_markListAsDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(markListAsDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markTimedLevelSeen
		#define GEODE_CONCEPT_CHECK_markTimedLevelSeen
		GEODE_CONCEPT_FUNCTION_CHECK(markTimedLevelSeen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_messageWasRemoved
		#define GEODE_CONCEPT_CHECK_messageWasRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(messageWasRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_muteUser
		#define GEODE_CONCEPT_CHECK_muteUser
		GEODE_CONCEPT_FUNCTION_CHECK(muteUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_notificationMask
		#define GEODE_CONCEPT_CHECK_notificationMask
		GEODE_CONCEPT_FUNCTION_CHECK(notificationMask) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAcceptFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onAcceptFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAcceptFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminClearReportedContentCompleted
		#define GEODE_CONCEPT_CHECK_onAdminClearReportedContentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminClearReportedContentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminCloseCaseCompleted
		#define GEODE_CONCEPT_CHECK_onAdminCloseCaseCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminCloseCaseCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminCommentBanCompleted
		#define GEODE_CONCEPT_CHECK_onAdminCommentBanCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminCommentBanCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminCommentUnbanCompleted
		#define GEODE_CONCEPT_CHECK_onAdminCommentUnbanCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminCommentUnbanCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminDeleteUserCommentsCompleted
		#define GEODE_CONCEPT_CHECK_onAdminDeleteUserCommentsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminDeleteUserCommentsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminFreezeCompleted
		#define GEODE_CONCEPT_CHECK_onAdminFreezeCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminFreezeCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminGetAbuseInfoCompleted
		#define GEODE_CONCEPT_CHECK_onAdminGetAbuseInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminGetAbuseInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminGetAccountReviewCompleted
		#define GEODE_CONCEPT_CHECK_onAdminGetAccountReviewCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminGetAccountReviewCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminGetReportedContentCompleted
		#define GEODE_CONCEPT_CHECK_onAdminGetReportedContentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminGetReportedContentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminGetReportQueueCompleted
		#define GEODE_CONCEPT_CHECK_onAdminGetReportQueueCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminGetReportQueueCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminGetUserHistoryCompleted
		#define GEODE_CONCEPT_CHECK_onAdminGetUserHistoryCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminGetUserHistoryCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminMessageBanCompleted
		#define GEODE_CONCEPT_CHECK_onAdminMessageBanCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminMessageBanCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminMessageUnbanCompleted
		#define GEODE_CONCEPT_CHECK_onAdminMessageUnbanCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminMessageUnbanCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminNameLockCompleted
		#define GEODE_CONCEPT_CHECK_onAdminNameLockCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminNameLockCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminNameUnlockCompleted
		#define GEODE_CONCEPT_CHECK_onAdminNameUnlockCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminNameUnlockCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminThreadActionCompleted
		#define GEODE_CONCEPT_CHECK_onAdminThreadActionCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminThreadActionCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminTrendingBanCompleted
		#define GEODE_CONCEPT_CHECK_onAdminTrendingBanCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminTrendingBanCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminTrendingUnbanCompleted
		#define GEODE_CONCEPT_CHECK_onAdminTrendingUnbanCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminTrendingUnbanCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminUnfreezeCompleted
		#define GEODE_CONCEPT_CHECK_onAdminUnfreezeCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminUnfreezeCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminUploadBanCompleted
		#define GEODE_CONCEPT_CHECK_onAdminUploadBanCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminUploadBanCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminUploadUnbanCompleted
		#define GEODE_CONCEPT_CHECK_onAdminUploadUnbanCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminUploadUnbanCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBanUserCompleted
		#define GEODE_CONCEPT_CHECK_onBanUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onBanUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBlockUserCompleted
		#define GEODE_CONCEPT_CHECK_onBlockUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onBlockUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClaimNotificationRewardCompleted
		#define GEODE_CONCEPT_CHECK_onClaimNotificationRewardCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onClaimNotificationRewardCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteCommentCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteCommentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteCommentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteCommentsCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteCommentsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteCommentsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteLevelControlsCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteLevelControlsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteLevelControlsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteServerEditorSoundCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteServerEditorSoundCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteServerEditorSoundCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteServerLevelCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteServerLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteServerLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteServerLevelListCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteServerLevelListCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteServerLevelListCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteUserMessagesCompleted
		#define GEODE_CONCEPT_CHECK_onDeleteUserMessagesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteUserMessagesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadEditorSoundCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadEditorSoundCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadEditorSoundCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadLevelCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadUserMessageCompleted
		#define GEODE_CONCEPT_CHECK_onDownloadUserMessageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadUserMessageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFollowUserCompleted
		#define GEODE_CONCEPT_CHECK_onFollowUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onFollowUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetAccountCommentsCompleted
		#define GEODE_CONCEPT_CHECK_onGetAccountCommentsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetAccountCommentsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetContentStatusCompleted
		#define GEODE_CONCEPT_CHECK_onGetContentStatusCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetContentStatusCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetDeathDataCompleted
		#define GEODE_CONCEPT_CHECK_onGetDeathDataCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetDeathDataCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetEditorSoundsCompleted
		#define GEODE_CONCEPT_CHECK_onGetEditorSoundsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetEditorSoundsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetFollowingCompleted
		#define GEODE_CONCEPT_CHECK_onGetFollowingCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetFollowingCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetFriendRequestsCompleted
		#define GEODE_CONCEPT_CHECK_onGetFriendRequestsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetFriendRequestsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGauntletsCompleted
		#define GEODE_CONCEPT_CHECK_onGetGauntletsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGauntletsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJChallengesCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJChallengesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJChallengesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJDailyLevelStateCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJDailyLevelStateCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJDailyLevelStateCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJRewardsCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJRewardsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJRewardsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJSecretRewardCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJSecretRewardCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJSecretRewardCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetGJUserInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetGJUserInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetGJUserInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLeaderboardScoresCompleted
		#define GEODE_CONCEPT_CHECK_onGetLeaderboardScoresCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLeaderboardScoresCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelCommentsCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelCommentsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelCommentsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelControlsCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelControlsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelControlsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelLeaderboardCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelLeaderboardCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelLeaderboardCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelListsCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelListsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelListsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelRateInfoCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelRateInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelRateInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetLevelSaveDataCompleted
		#define GEODE_CONCEPT_CHECK_onGetLevelSaveDataCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetLevelSaveDataCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetMapPacksCompleted
		#define GEODE_CONCEPT_CHECK_onGetMapPacksCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetMapPacksCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetNewsCompleted
		#define GEODE_CONCEPT_CHECK_onGetNewsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetNewsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetNotificationsCompleted
		#define GEODE_CONCEPT_CHECK_onGetNotificationsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetNotificationsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetOnlineLevelsCompleted
		#define GEODE_CONCEPT_CHECK_onGetOnlineLevelsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetOnlineLevelsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetSongUsageCompleted
		#define GEODE_CONCEPT_CHECK_onGetSongUsageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetSongUsageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetThreadInvitesCompleted
		#define GEODE_CONCEPT_CHECK_onGetThreadInvitesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetThreadInvitesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetThreadMessagesCompleted
		#define GEODE_CONCEPT_CHECK_onGetThreadMessagesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetThreadMessagesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetThreadsCompleted
		#define GEODE_CONCEPT_CHECK_onGetThreadsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetThreadsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetTopArtistsCompleted
		#define GEODE_CONCEPT_CHECK_onGetTopArtistsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetTopArtistsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUserListCompleted
		#define GEODE_CONCEPT_CHECK_onGetUserListCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUserListCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUserMessagesCompleted
		#define GEODE_CONCEPT_CHECK_onGetUserMessagesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUserMessagesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUsersCompleted
		#define GEODE_CONCEPT_CHECK_onGetUsersCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUsersCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetUserSearchCompleted
		#define GEODE_CONCEPT_CHECK_onGetUserSearchCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetUserSearchCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLikeItemCompleted
		#define GEODE_CONCEPT_CHECK_onLikeItemCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onLikeItemCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMuteUserCompleted
		#define GEODE_CONCEPT_CHECK_onMuteUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onMuteUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateDemonCompleted
		#define GEODE_CONCEPT_CHECK_onRateDemonCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateDemonCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateEditorSoundAdminCompleted
		#define GEODE_CONCEPT_CHECK_onRateEditorSoundAdminCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateEditorSoundAdminCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateLevelAdminCompleted
		#define GEODE_CONCEPT_CHECK_onRateLevelAdminCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateLevelAdminCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateLevelListAdminCompleted
		#define GEODE_CONCEPT_CHECK_onRateLevelListAdminCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateLevelListAdminCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRateStarsCompleted
		#define GEODE_CONCEPT_CHECK_onRateStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRateStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReadFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onReadFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onReadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveFriendCompleted
		#define GEODE_CONCEPT_CHECK_onRemoveFriendCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveFriendCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReportContentCompleted
		#define GEODE_CONCEPT_CHECK_onReportContentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onReportContentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReportLevelCompleted
		#define GEODE_CONCEPT_CHECK_onReportLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onReportLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRequestThreadMembersCompleted
		#define GEODE_CONCEPT_CHECK_onRequestThreadMembersCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRequestThreadMembersCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRequestUserAccessCompleted
		#define GEODE_CONCEPT_CHECK_onRequestUserAccessCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRequestUserAccessCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRestoreItemsCompleted
		#define GEODE_CONCEPT_CHECK_onRestoreItemsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRestoreItemsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSearchThreadMessagesCompleted
		#define GEODE_CONCEPT_CHECK_onSearchThreadMessagesCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSearchThreadMessagesCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSendThreadMessageCompleted
		#define GEODE_CONCEPT_CHECK_onSendThreadMessageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSendThreadMessageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetLevelFeaturedCompleted
		#define GEODE_CONCEPT_CHECK_onSetLevelFeaturedCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSetLevelFeaturedCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetLevelStarsCompleted
		#define GEODE_CONCEPT_CHECK_onSetLevelStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSetLevelStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSubmitUserInfoCompleted
		#define GEODE_CONCEPT_CHECK_onSubmitUserInfoCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSubmitUserInfoCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSuggestLevelStarsCompleted
		#define GEODE_CONCEPT_CHECK_onSuggestLevelStarsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSuggestLevelStarsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnblockUserCompleted
		#define GEODE_CONCEPT_CHECK_onUnblockUserCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUnblockUserCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateDescriptionCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateDescriptionCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateDescriptionCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateEditorSoundDescriptionCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateEditorSoundDescriptionCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateEditorSoundDescriptionCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateLevelCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateThreadCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateThreadCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateThreadCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateUserScoreCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateUserScoreCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateUserScoreCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadCommentCompleted
		#define GEODE_CONCEPT_CHECK_onUploadCommentCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadCommentCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadDeathDataCompleted
		#define GEODE_CONCEPT_CHECK_onUploadDeathDataCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadDeathDataCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadEditorSoundCompleted
		#define GEODE_CONCEPT_CHECK_onUploadEditorSoundCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadEditorSoundCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadFriendRequestCompleted
		#define GEODE_CONCEPT_CHECK_onUploadFriendRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadFriendRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadLevelCompleted
		#define GEODE_CONCEPT_CHECK_onUploadLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadLevelControlsCompleted
		#define GEODE_CONCEPT_CHECK_onUploadLevelControlsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadLevelControlsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadLevelListCompleted
		#define GEODE_CONCEPT_CHECK_onUploadLevelListCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadLevelListCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUploadUserMessageCompleted
		#define GEODE_CONCEPT_CHECK_onUploadUserMessageCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUploadUserMessageCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageFromCommentKey
		#define GEODE_CONCEPT_CHECK_pageFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(pageFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseEventReward
		#define GEODE_CONCEPT_CHECK_parseEventReward
		GEODE_CONCEPT_FUNCTION_CHECK(parseEventReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseRestoreData
		#define GEODE_CONCEPT_CHECK_parseRestoreData
		GEODE_CONCEPT_FUNCTION_CHECK(parseRestoreData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_performNetworkTest
		#define GEODE_CONCEPT_CHECK_performNetworkTest
		GEODE_CONCEPT_FUNCTION_CHECK(performNetworkTest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processOnDownloadLevelCompleted
		#define GEODE_CONCEPT_CHECK_processOnDownloadLevelCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(processOnDownloadLevelCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prunePlatformerJournalKeys
		#define GEODE_CONCEPT_CHECK_prunePlatformerJournalKeys
		GEODE_CONCEPT_FUNCTION_CHECK(prunePlatformerJournalKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeFriendRequestSearchCache
		#define GEODE_CONCEPT_CHECK_purgeFriendRequestSearchCache
		GEODE_CONCEPT_FUNCTION_CHECK(purgeFriendRequestSearchCache) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_purgeUnusedLevels
		#define GEODE_CONCEPT_CHECK_purgeUnusedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(purgeUnusedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateDemon
		#define GEODE_CONCEPT_CHECK_rateDemon
		GEODE_CONCEPT_FUNCTION_CHECK(rateDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateEditorSoundAdmin
		#define GEODE_CONCEPT_CHECK_rateEditorSoundAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(rateEditorSoundAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateLevelAdmin
		#define GEODE_CONCEPT_CHECK_rateLevelAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(rateLevelAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateLevelListAdmin
		#define GEODE_CONCEPT_CHECK_rateLevelListAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(rateLevelListAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rateStars
		#define GEODE_CONCEPT_CHECK_rateStars
		GEODE_CONCEPT_FUNCTION_CHECK(rateStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_readFriendRequest
		#define GEODE_CONCEPT_CHECK_readFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(readFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_readFriendRequests
		#define GEODE_CONCEPT_CHECK_readFriendRequests
		GEODE_CONCEPT_FUNCTION_CHECK(readFriendRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDelimiterChars
		#define GEODE_CONCEPT_CHECK_removeDelimiterChars
		GEODE_CONCEPT_FUNCTION_CHECK(removeDelimiterChars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFriend
		#define GEODE_CONCEPT_CHECK_removeFriend
		GEODE_CONCEPT_FUNCTION_CHECK(removeFriend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeLevelDownloadedKeysFromDict
		#define GEODE_CONCEPT_CHECK_removeLevelDownloadedKeysFromDict
		GEODE_CONCEPT_FUNCTION_CHECK(removeLevelDownloadedKeysFromDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePlatformerSaveJournalEntry
		#define GEODE_CONCEPT_CHECK_removePlatformerSaveJournalEntry
		GEODE_CONCEPT_FUNCTION_CHECK(removePlatformerSaveJournalEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeUserFromList
		#define GEODE_CONCEPT_CHECK_removeUserFromList
		GEODE_CONCEPT_FUNCTION_CHECK(removeUserFromList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_replaceFollowedUsers
		#define GEODE_CONCEPT_CHECK_replaceFollowedUsers
		GEODE_CONCEPT_FUNCTION_CHECK(replaceFollowedUsers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_replayPlatformerSaveJournal
		#define GEODE_CONCEPT_CHECK_replayPlatformerSaveJournal
		GEODE_CONCEPT_FUNCTION_CHECK(replayPlatformerSaveJournal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportContent
		#define GEODE_CONCEPT_CHECK_reportContent
		GEODE_CONCEPT_FUNCTION_CHECK(reportContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reportLevel
		#define GEODE_CONCEPT_CHECK_reportLevel
		GEODE_CONCEPT_FUNCTION_CHECK(reportLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestThreadMembers
		#define GEODE_CONCEPT_CHECK_requestThreadMembers
		GEODE_CONCEPT_FUNCTION_CHECK(requestThreadMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestUserAccess
		#define GEODE_CONCEPT_CHECK_requestUserAccess
		GEODE_CONCEPT_FUNCTION_CHECK(requestUserAccess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAccountCaches
		#define GEODE_CONCEPT_CHECK_resetAccountCaches
		GEODE_CONCEPT_FUNCTION_CHECK(resetAccountCaches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAccountComments
		#define GEODE_CONCEPT_CHECK_resetAccountComments
		GEODE_CONCEPT_FUNCTION_CHECK(resetAccountComments) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetAllTimers
		#define GEODE_CONCEPT_CHECK_resetAllTimers
		GEODE_CONCEPT_FUNCTION_CHECK(resetAllTimers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCommentTimersForAccountID
		#define GEODE_CONCEPT_CHECK_resetCommentTimersForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(resetCommentTimersForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetCommentTimersForLevelID
		#define GEODE_CONCEPT_CHECK_resetCommentTimersForLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(resetCommentTimersForLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetDailyLevelState
		#define GEODE_CONCEPT_CHECK_resetDailyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(resetDailyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGauntlets
		#define GEODE_CONCEPT_CHECK_resetGauntlets
		GEODE_CONCEPT_FUNCTION_CHECK(resetGauntlets) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStoredUserInfo
		#define GEODE_CONCEPT_CHECK_resetStoredUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(resetStoredUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetStoredUserList
		#define GEODE_CONCEPT_CHECK_resetStoredUserList
		GEODE_CONCEPT_FUNCTION_CHECK(resetStoredUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetTimerForKey
		#define GEODE_CONCEPT_CHECK_resetTimerForKey
		GEODE_CONCEPT_FUNCTION_CHECK(resetTimerForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreItems
		#define GEODE_CONCEPT_CHECK_restoreItems
		GEODE_CONCEPT_FUNCTION_CHECK(restoreItems) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardItemFromResponse
		#define GEODE_CONCEPT_CHECK_rewardItemFromResponse
		GEODE_CONCEPT_FUNCTION_CHECK(rewardItemFromResponse) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rewardSessionToken
		#define GEODE_CONCEPT_CHECK_rewardSessionToken
		GEODE_CONCEPT_FUNCTION_CHECK(rewardSessionToken) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFetchedLevelLists
		#define GEODE_CONCEPT_CHECK_saveFetchedLevelLists
		GEODE_CONCEPT_FUNCTION_CHECK(saveFetchedLevelLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFetchedLevels
		#define GEODE_CONCEPT_CHECK_saveFetchedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(saveFetchedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFetchedMapPacks
		#define GEODE_CONCEPT_CHECK_saveFetchedMapPacks
		GEODE_CONCEPT_FUNCTION_CHECK(saveFetchedMapPacks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveGauntlet
		#define GEODE_CONCEPT_CHECK_saveGauntlet
		GEODE_CONCEPT_FUNCTION_CHECK(saveGauntlet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLevel
		#define GEODE_CONCEPT_CHECK_saveLevel
		GEODE_CONCEPT_FUNCTION_CHECK(saveLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLevelList
		#define GEODE_CONCEPT_CHECK_saveLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(saveLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveLocalScore
		#define GEODE_CONCEPT_CHECK_saveLocalScore
		GEODE_CONCEPT_FUNCTION_CHECK(saveLocalScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveMapPack
		#define GEODE_CONCEPT_CHECK_saveMapPack
		GEODE_CONCEPT_FUNCTION_CHECK(saveMapPack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_searchThreadMessages
		#define GEODE_CONCEPT_CHECK_searchThreadMessages
		GEODE_CONCEPT_FUNCTION_CHECK(searchThreadMessages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_searchTypeIsCurated
		#define GEODE_CONCEPT_CHECK_searchTypeIsCurated
		GEODE_CONCEPT_FUNCTION_CHECK(searchTypeIsCurated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sendAdminAction
		#define GEODE_CONCEPT_CHECK_sendAdminAction
		GEODE_CONCEPT_FUNCTION_CHECK(sendAdminAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sendThreadMessage
		#define GEODE_CONCEPT_CHECK_sendThreadMessage
		GEODE_CONCEPT_FUNCTION_CHECK(sendThreadMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveSmartTemplate
		#define GEODE_CONCEPT_CHECK_setActiveSmartTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveSmartTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBoolForKey
		#define GEODE_CONCEPT_CHECK_setBoolForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setBoolForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDiffVal
		#define GEODE_CONCEPT_CHECK_setDiffVal
		GEODE_CONCEPT_FUNCTION_CHECK(setDiffVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFolderName
		#define GEODE_CONCEPT_CHECK_setFolderName
		GEODE_CONCEPT_FUNCTION_CHECK(setFolderName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIntForKey
		#define GEODE_CONCEPT_CHECK_setIntForKey
		GEODE_CONCEPT_FUNCTION_CHECK(setIntForKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLenVal
		#define GEODE_CONCEPT_CHECK_setLenVal
		GEODE_CONCEPT_FUNCTION_CHECK(setLenVal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelControlsTemplate
		#define GEODE_CONCEPT_CHECK_setLevelControlsTemplate
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelControlsTemplate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelFeatured
		#define GEODE_CONCEPT_CHECK_setLevelFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelStars
		#define GEODE_CONCEPT_CHECK_setLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNotificationMask
		#define GEODE_CONCEPT_CHECK_setNotificationMask
		GEODE_CONCEPT_FUNCTION_CHECK(setNotificationMask) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_specialFromLikeKey
		#define GEODE_CONCEPT_CHECK_specialFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(specialFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeCommentsResult
		#define GEODE_CONCEPT_CHECK_storeCommentsResult
		GEODE_CONCEPT_FUNCTION_CHECK(storeCommentsResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeDailyLevelState
		#define GEODE_CONCEPT_CHECK_storeDailyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(storeDailyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storedFriendForAccountID
		#define GEODE_CONCEPT_CHECK_storedFriendForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(storedFriendForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeFriendRequest
		#define GEODE_CONCEPT_CHECK_storeFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(storeFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeSearchResult
		#define GEODE_CONCEPT_CHECK_storeSearchResult
		GEODE_CONCEPT_FUNCTION_CHECK(storeSearchResult) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeThreadManifest
		#define GEODE_CONCEPT_CHECK_storeThreadManifest
		GEODE_CONCEPT_FUNCTION_CHECK(storeThreadManifest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserInfo
		#define GEODE_CONCEPT_CHECK_storeUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserMessage
		#define GEODE_CONCEPT_CHECK_storeUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserMessageReply
		#define GEODE_CONCEPT_CHECK_storeUserMessageReply
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserMessageReply) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserName
		#define GEODE_CONCEPT_CHECK_storeUserName
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeUserNames
		#define GEODE_CONCEPT_CHECK_storeUserNames
		GEODE_CONCEPT_FUNCTION_CHECK(storeUserNames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_submitUserInfo
		#define GEODE_CONCEPT_CHECK_submitUserInfo
		GEODE_CONCEPT_FUNCTION_CHECK(submitUserInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_suggestLevelStars
		#define GEODE_CONCEPT_CHECK_suggestLevelStars
		GEODE_CONCEPT_FUNCTION_CHECK(suggestLevelStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncFollowing
		#define GEODE_CONCEPT_CHECK_syncFollowing
		GEODE_CONCEPT_FUNCTION_CHECK(syncFollowing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncFollowListIfNeeded
		#define GEODE_CONCEPT_CHECK_syncFollowListIfNeeded
		GEODE_CONCEPT_FUNCTION_CHECK(syncFollowListIfNeeded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryGetUsername
		#define GEODE_CONCEPT_CHECK_tryGetUsername
		GEODE_CONCEPT_FUNCTION_CHECK(tryGetUsername) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_typeFromCommentKey
		#define GEODE_CONCEPT_CHECK_typeFromCommentKey
		GEODE_CONCEPT_FUNCTION_CHECK(typeFromCommentKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_typeFromLikeKey
		#define GEODE_CONCEPT_CHECK_typeFromLikeKey
		GEODE_CONCEPT_FUNCTION_CHECK(typeFromLikeKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unblockUser
		#define GEODE_CONCEPT_CHECK_unblockUser
		GEODE_CONCEPT_FUNCTION_CHECK(unblockUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unfollowUser
		#define GEODE_CONCEPT_CHECK_unfollowUser
		GEODE_CONCEPT_FUNCTION_CHECK(unfollowUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unrateEditorSoundAdmin
		#define GEODE_CONCEPT_CHECK_unrateEditorSoundAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(unrateEditorSoundAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unrateLevelAdmin
		#define GEODE_CONCEPT_CHECK_unrateLevelAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(unrateLevelAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unrateLevelListAdmin
		#define GEODE_CONCEPT_CHECK_unrateLevelListAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(unrateLevelListAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDescription
		#define GEODE_CONCEPT_CHECK_updateDescription
		GEODE_CONCEPT_FUNCTION_CHECK(updateDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorSoundDescription
		#define GEODE_CONCEPT_CHECK_updateEditorSoundDescription
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorSoundDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditorSoundRankAdmin
		#define GEODE_CONCEPT_CHECK_updateEditorSoundRankAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditorSoundRankAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevel
		#define GEODE_CONCEPT_CHECK_updateLevel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelListRankAdmin
		#define GEODE_CONCEPT_CHECK_updateLevelListRankAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelListRankAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelOrders
		#define GEODE_CONCEPT_CHECK_updateLevelOrders
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelOrders) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelRankAdmin
		#define GEODE_CONCEPT_CHECK_updateLevelRankAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelRankAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelRewards
		#define GEODE_CONCEPT_CHECK_updateLevelRewards
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelRewards) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSavedLevelList
		#define GEODE_CONCEPT_CHECK_updateSavedLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(updateSavedLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateThread
		#define GEODE_CONCEPT_CHECK_updateThread
		GEODE_CONCEPT_FUNCTION_CHECK(updateThread) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUsernames
		#define GEODE_CONCEPT_CHECK_updateUsernames
		GEODE_CONCEPT_FUNCTION_CHECK(updateUsernames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateUserScore
		#define GEODE_CONCEPT_CHECK_updateUserScore
		GEODE_CONCEPT_FUNCTION_CHECK(updateUserScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadAccountComment
		#define GEODE_CONCEPT_CHECK_uploadAccountComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadAccountComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadComment
		#define GEODE_CONCEPT_CHECK_uploadComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadDeathData
		#define GEODE_CONCEPT_CHECK_uploadDeathData
		GEODE_CONCEPT_FUNCTION_CHECK(uploadDeathData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadEditorSoundComment
		#define GEODE_CONCEPT_CHECK_uploadEditorSoundComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadEditorSoundComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadEditorSoundConfig
		#define GEODE_CONCEPT_CHECK_uploadEditorSoundConfig
		GEODE_CONCEPT_FUNCTION_CHECK(uploadEditorSoundConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadFriendRequest
		#define GEODE_CONCEPT_CHECK_uploadFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(uploadFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevel
		#define GEODE_CONCEPT_CHECK_uploadLevel
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevelComment
		#define GEODE_CONCEPT_CHECK_uploadLevelComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevelComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevelControls
		#define GEODE_CONCEPT_CHECK_uploadLevelControls
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevelControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadLevelList
		#define GEODE_CONCEPT_CHECK_uploadLevelList
		GEODE_CONCEPT_FUNCTION_CHECK(uploadLevelList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadModRoomComment
		#define GEODE_CONCEPT_CHECK_uploadModRoomComment
		GEODE_CONCEPT_FUNCTION_CHECK(uploadModRoomComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadUserMessage
		#define GEODE_CONCEPT_CHECK_uploadUserMessage
		GEODE_CONCEPT_FUNCTION_CHECK(uploadUserMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userIDForAccountID
		#define GEODE_CONCEPT_CHECK_userIDForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(userIDForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userInfoForAccountID
		#define GEODE_CONCEPT_CHECK_userInfoForAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(userInfoForAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userNameForUserID
		#define GEODE_CONCEPT_CHECK_userNameForUserID
		GEODE_CONCEPT_FUNCTION_CHECK(userNameForUserID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_vaultTimedType
		#define GEODE_CONCEPT_CHECK_vaultTimedType
		GEODE_CONCEPT_FUNCTION_CHECK(vaultTimedType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyContainerOnlyHasLevels
		#define GEODE_CONCEPT_CHECK_verifyContainerOnlyHasLevels
		GEODE_CONCEPT_FUNCTION_CHECK(verifyContainerOnlyHasLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyLevelState
		#define GEODE_CONCEPT_CHECK_verifyLevelState
		GEODE_CONCEPT_FUNCTION_CHECK(verifyLevelState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_writePlatformerSaveJournal
		#define GEODE_CONCEPT_CHECK_writePlatformerSaveJournal
		GEODE_CONCEPT_FUNCTION_CHECK(writePlatformerSaveJournal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_writeSpecialFilters
		#define GEODE_CONCEPT_CHECK_writeSpecialFilters
		GEODE_CONCEPT_FUNCTION_CHECK(writeSpecialFilters) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueMute
		#define GEODE_CONCEPT_CHECK_adminQueueMute
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueMute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueUnmute
		#define GEODE_CONCEPT_CHECK_adminQueueUnmute
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueUnmute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminQueueMuteCompleted
		#define GEODE_CONCEPT_CHECK_onAdminQueueMuteCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminQueueMuteCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdminQueueUnmuteCompleted
		#define GEODE_CONCEPT_CHECK_onAdminQueueUnmuteCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onAdminQueueUnmuteCompleted) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameLevelManager> : ModifyBase<ModifyDerive<Der, GameLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameLevelManager>>;
		using ModifyBase<ModifyDerive<Der, GameLevelManager>>::ModifyBase;
		using Base = GameLevelManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x217310, Thiscall, GameLevelManager, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x21b720, Thiscall, GameLevelManager)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261840, Default, GameLevelManager, responseToDict, std::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21b9a0, Thiscall, GameLevelManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x255710, Thiscall, GameLevelManager, acceptFriendRequest, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, accountIDForUserID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221aa0, Thiscall, GameLevelManager, addDLToActive, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, addThreadMembers, int, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x244390, Thiscall, GameLevelManager, adminClearReportedContent, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x247bc0, Thiscall, GameLevelManager, adminCloseCase, int, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminCommentBan, int, bool, int, std::string const&, std::vector<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminCommentUnban, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminDeleteUserComments, int, AdminDeleteScope, std::string const&, std::vector<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminFreezeAccount, int, bool, int, std::string const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x245560, Thiscall, GameLevelManager, adminGetAbuseInfo, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x246d70, Thiscall, GameLevelManager, adminGetAccountReview, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x242e00, Thiscall, GameLevelManager, adminGetReportedContent, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x244880, Thiscall, GameLevelManager, adminGetReportQueue, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x241fc0, Thiscall, GameLevelManager, adminGetUserHistory, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminMessageBan, int, bool, int, std::string const&, std::vector<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminMessageUnban, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminNameLock, int, std::string const&, std::vector<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminNameUnlock, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminThreadAction, int, std::string const&, long long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminTrendingBan, int, std::string const&, std::vector<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminTrendingUnban, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminUnfreezeAccount, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminUploadBan, int, bool, int, std::string const&, std::vector<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminUploadUnban, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2417b0, Thiscall, GameLevelManager, appendModReason, std::string&, std::string const&, std::vector<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, applyDeathBlob, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, applyLevelControlsSection, GJGameLevel*, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, applyThreadAddReply, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, areGauntletsLoaded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, banUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256620, Thiscall, GameLevelManager, blockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251df0, Thiscall, GameLevelManager, claimNotificationReward, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224050, Thiscall, GameLevelManager, cleanupDailyLevels, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, clearDeathDataInstances, GJGameLevel*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, clearPlatformerSaveJournal, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, clearPlatformerSaves, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, collectPlatformerJournalKeys, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, createAndGetAccountComments, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23d680, Thiscall, GameLevelManager, createAndGetCommentsFull, std::string, int, bool, CommentKeyType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, createAndGetEditorSoundConfigs, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, createAndGetLevelComments, std::string, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21e6a0, Thiscall, GameLevelManager, createAndGetLevelLists, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21e130, Thiscall, GameLevelManager, createAndGetLevels, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21e970, Thiscall, GameLevelManager, createAndGetMapPacks, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21ec40, Thiscall, GameLevelManager, createAndGetScores, std::string, GJScoreType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21bff0, Thiscall, GameLevelManager, createNewLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21cb30, Thiscall, GameLevelManager, createNewLevelList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, createPageInfo, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, createSmartTemplate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x225150, Thiscall, GameLevelManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, deleteAccountComment, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x240290, Thiscall, GameLevelManager, deleteComment, int, CommentType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x240b30, Thiscall, GameLevelManager, deleteComments, CommentType, std::vector<BulkCommentKey> const&, std::string const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2550e0, Thiscall, GameLevelManager, deleteFriendRequests, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21c870, Thiscall, GameLevelManager, deleteLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, deleteLevelComment, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x259650, Thiscall, GameLevelManager, deleteLevelControls, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21d120, Thiscall, GameLevelManager, deleteLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, deleteSentFriendRequest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22fb80, Thiscall, GameLevelManager, deleteServerEditorSound, int, std::string const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x234980, Thiscall, GameLevelManager, deleteServerLevel, int, std::string const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22d7a0, Thiscall, GameLevelManager, deleteServerLevelList, int, std::string const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, deleteSmartTemplate, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b9a0, Thiscall, GameLevelManager, deleteUserMessages, GJUserMessage*, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22f3f0, Thiscall, GameLevelManager, downloadEditorSoundConfig, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x231c00, Thiscall, GameLevelManager, downloadLevel, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b3a0, Thiscall, GameLevelManager, downloadUserMessage, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23dc80, Thiscall, GameLevelManager, dropIgnoredRequestLists, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, dtShouldUploadLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224b60, Thiscall, GameLevelManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, evictDeathDataCache, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2247a0, Thiscall, GameLevelManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, followUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x250db0, Thiscall, GameLevelManager, followUserOnline, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, forceDeathDataRefetch, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, friendRequestFromAccountID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, friendRequestWasRemoved, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getAccountCommentKey, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23cee0, Thiscall, GameLevelManager, getAccountComments, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getActiveDailyID, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getActiveSmartTemplate, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getAllSmartTemplates, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getAllUsedSongIDs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2264e0, Thiscall, GameLevelManager, getBasePostString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getBoolForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getCommentKey, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2202d0, Thiscall, GameLevelManager, getCompletedDailyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2204e0, Thiscall, GameLevelManager, getCompletedEventLevels, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getCompletedGauntletDemons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getCompletedGauntletLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21f3b0, Thiscall, GameLevelManager, getCompletedLevels, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2200b0, Thiscall, GameLevelManager, getCompletedWeeklyLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDailyID, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDailyTimer, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2283a0, Thiscall, GameLevelManager, getDeathData, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDeathDataVersion, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getDeathDisplayData, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDeleteCommentKey, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDeleteMessageKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21f560, Thiscall, GameLevelManager, getDemonLevelsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDescKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a3b0, Thiscall, GameLevelManager, getDifficultyStr, bool, bool, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDiffKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getDiffVal, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22e9d0, Thiscall, GameLevelManager, getEditorSoundConfigs, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224660, Thiscall, GameLevelManager, getFolderName, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251210, Thiscall, GameLevelManager, getFollowing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getFriendRequestKey, bool, int, std::string const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254070, Thiscall, GameLevelManager, getFriendRequests, bool, int, int, std::string const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getGauntletKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2318f0, Thiscall, GameLevelManager, getGauntletLevels, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230cd0, Thiscall, GameLevelManager, getGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getGauntletSearchKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25e270, Thiscall, GameLevelManager, getGJChallenges, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2313d0, Thiscall, GameLevelManager, getGJContentStatus, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25f690, Thiscall, GameLevelManager, getGJDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25ce00, Thiscall, GameLevelManager, getGJRewards, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25be60, Thiscall, GameLevelManager, getGJSecretReward, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23a610, Thiscall, GameLevelManager, getGJUserInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getHighestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getIntForKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLeaderboardKey, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2380b0, Thiscall, GameLevelManager, getLeaderboardScores, LeaderboardType, LeaderboardStat)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a660, Thiscall, GameLevelManager, getLengthStr, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLenKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLenVal, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23c2f0, Thiscall, GameLevelManager, getLevelComments, int, int, int, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x259cb0, Thiscall, GameLevelManager, getLevelControls, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLevelDownloadKey, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLevelKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x238790, Thiscall, GameLevelManager, getLevelLeaderboard, GJGameLevel*, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLevelLeaderboardKey, int, LevelLeaderboardType, LevelLeaderboardMode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLevelListKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22db00, Thiscall, GameLevelManager, getLevelLists, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2538d0, Thiscall, GameLevelManager, getLevelRateInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22bfa0, Thiscall, GameLevelManager, getLevelSaveData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLikeAccountItemKey, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLikeItemKey, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21bf80, Thiscall, GameLevelManager, getLocalLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLocalLevelByName, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21cac0, Thiscall, GameLevelManager, getLocalLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getLowestLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21bba0, Thiscall, GameLevelManager, getMainLevel, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getMapPackKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c6f0, Thiscall, GameLevelManager, getMapPacks, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getMessageKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getMessagesKey, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getNews, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getNextFreeTemplateID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21c300, Thiscall, GameLevelManager, getNextLevelName, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24f310, Thiscall, GameLevelManager, getNotifications, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22ab80, Thiscall, GameLevelManager, getOnlineLevels, GJSearchObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2218d0, Thiscall, GameLevelManager, getPageInfo, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getPlatformerSaveStats, int, int&, unsigned long&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getPostCommentKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getRateStarsKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getReportKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2207e0, Thiscall, GameLevelManager, getSavedDailyLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedDailyLevelFromLevelID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedGauntlet, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2208c0, Thiscall, GameLevelManager, getSavedGauntletLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x220700, Thiscall, GameLevelManager, getSavedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedLevelList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21f120, Thiscall, GameLevelManager, getSavedLevelLists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21ef40, Thiscall, GameLevelManager, getSavedLevels, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSavedMapPack, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getSearchScene, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x253d40, Thiscall, GameLevelManager, getSongUsage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23dde0, Thiscall, GameLevelManager, getSplitIntFromKey, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21f760, Thiscall, GameLevelManager, getStarLevelsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23e250, Thiscall, GameLevelManager, getStoredLevelComments, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2217d0, Thiscall, GameLevelManager, getStoredOnlineLevels, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257b80, Thiscall, GameLevelManager, getStoredUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getStoredUserMessage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getStoredUserMessageReply, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24e560, Thiscall, GameLevelManager, getThreadInvites, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getThreadMembers, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24b350, Thiscall, GameLevelManager, getThreadMessages, int, long long, long long, int, long long, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getThreadPastMembers, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getThreadPendingInvites, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24a250, Thiscall, GameLevelManager, getThreads, int, std::string const&, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221e90, Thiscall, GameLevelManager, getTimeLeft, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239730, Thiscall, GameLevelManager, getTopArtists, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getTopArtistsKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getUploadMessageKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, getUserInfoKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257250, Thiscall, GameLevelManager, getUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23aac0, Thiscall, GameLevelManager, getUserMessages, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239f10, Thiscall, GameLevelManager, getUsers, GJSearchObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, getUserSearch, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221390, Thiscall, GameLevelManager, gotoLevelPage, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x219750, Thiscall, GameLevelManager, handleIt, bool, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, handleItDelayed, bool, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, handleItND, cocos2d::CCNode*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, hasDailyStateBeenLoaded, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x233a80, Thiscall, GameLevelManager, hasDownloadedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, hasDownloadedList, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25bd70, Thiscall, GameLevelManager, hasLikedAccountItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25bd70, Thiscall, GameLevelManager, hasLikedItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25bce0, Thiscall, GameLevelManager, hasLikedItemFullCheck, LikeItemType, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasNewDaily, GJTimedLevelType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasNewGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2348a0, Thiscall, GameLevelManager, hasRatedDemon, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2347c0, Thiscall, GameLevelManager, hasRatedLevelStars, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, hasReportedLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23c1a0, Thiscall, GameLevelManager, invalidateMessages, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, invalidateRequests, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, invalidateUserList, UserListType, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, isDeathDataFetched, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2219d0, Thiscall, GameLevelManager, isDLActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224320, Thiscall, GameLevelManager, isFollowingUser, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, isPastDailyCopy, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221d40, Thiscall, GameLevelManager, isTimeValid, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, isUpdateValid, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, itemIDFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221ff0, Thiscall, GameLevelManager, keyHasTimer, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, levelControlInstances, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23def0, Thiscall, GameLevelManager, levelIDFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, levelIDFromPostCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, likeFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25a9b0, Thiscall, GameLevelManager, likeItem, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x222220, Thiscall, GameLevelManager, limitSavedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221c30, Thiscall, GameLevelManager, makeTimeStamp, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, markGauntletsSeen, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markItemAsLiked, LikeItemType, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x233950, Thiscall, GameLevelManager, markLevelAsDownloaded, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markLevelAsRatedDemon, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markLevelAsRatedStars, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markLevelAsReported, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, markListAsDownloaded, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, markTimedLevelSeen, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23bfd0, Thiscall, GameLevelManager, messageWasRemoved, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24f700, Thiscall, GameLevelManager, muteUser, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, notificationMask, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAcceptFriendRequestCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminClearReportedContentCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminCloseCaseCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminCommentBanCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminCommentUnbanCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminDeleteUserCommentsCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminFreezeCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminGetAbuseInfoCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminGetAccountReviewCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminGetReportedContentCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminGetReportQueueCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminGetUserHistoryCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminMessageBanCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminMessageUnbanCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminNameLockCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminNameUnlockCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminThreadActionCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminTrendingBanCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminTrendingUnbanCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminUnfreezeCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminUploadBanCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminUploadUnbanCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x234f70, Thiscall, GameLevelManager, onBanUserCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256950, Thiscall, GameLevelManager, onBlockUserCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onClaimNotificationRewardCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2407f0, Thiscall, GameLevelManager, onDeleteCommentCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDeleteCommentsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2554f0, Thiscall, GameLevelManager, onDeleteFriendRequestCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDeleteLevelControlsCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDeleteServerEditorSoundCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x234de0, Thiscall, GameLevelManager, onDeleteServerLevelCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onDeleteServerLevelListCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23bdf0, Thiscall, GameLevelManager, onDeleteUserMessagesCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onDownloadEditorSoundCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onDownloadLevelCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b5e0, Thiscall, GameLevelManager, onDownloadUserMessageCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onFollowUserCompleted, std::string, std::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23c890, Thiscall, GameLevelManager, onGetAccountCommentsCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetContentStatusCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetDeathDataCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetEditorSoundsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2518e0, Thiscall, GameLevelManager, onGetFollowingCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254400, Thiscall, GameLevelManager, onGetFriendRequestsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230ff0, Thiscall, GameLevelManager, onGetGauntletsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25e700, Thiscall, GameLevelManager, onGetGJChallengesCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2602d0, Thiscall, GameLevelManager, onGetGJDailyLevelStateCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25d450, Thiscall, GameLevelManager, onGetGJRewardsCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetGJSecretRewardCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23a830, Thiscall, GameLevelManager, onGetGJUserInfoCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2384c0, Thiscall, GameLevelManager, onGetLeaderboardScoresCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23d100, Thiscall, GameLevelManager, onGetLevelCommentsCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetLevelControlsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239480, Thiscall, GameLevelManager, onGetLevelLeaderboardCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22dd90, Thiscall, GameLevelManager, onGetLevelListsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x253c10, Thiscall, GameLevelManager, onGetLevelRateInfoCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c290, Thiscall, GameLevelManager, onGetLevelSaveDataCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22c900, Thiscall, GameLevelManager, onGetMapPacksCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onGetNewsCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetNotificationsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22b650, Thiscall, GameLevelManager, onGetOnlineLevelsCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetSongUsageCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetThreadInvitesCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetThreadMessagesCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetThreadsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x239a60, Thiscall, GameLevelManager, onGetTopArtistsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257480, Thiscall, GameLevelManager, onGetUserListCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23ad00, Thiscall, GameLevelManager, onGetUserMessagesCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23a170, Thiscall, GameLevelManager, onGetUsersCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onGetUserSearchCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b210, Thiscall, GameLevelManager, onLikeItemCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onMuteUserCompleted, std::string, std::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2195e0, Thiscall, GameLevelManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x235d50, Thiscall, GameLevelManager, onRateDemonCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onRateEditorSoundAdminCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onRateLevelAdminCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onRateLevelListAdminCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2345c0, Thiscall, GameLevelManager, onRateStarsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onReadFriendRequestCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256310, Thiscall, GameLevelManager, onRemoveFriendCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onReportContentCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260f70, Thiscall, GameLevelManager, onReportLevelCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onRequestThreadMembersCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b9b0, Thiscall, GameLevelManager, onRequestUserAccessCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260820, Thiscall, GameLevelManager, onRestoreItemsCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onSearchThreadMessagesCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onSendThreadMessageCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onSetLevelFeaturedCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2360d0, Thiscall, GameLevelManager, onSetLevelStarsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onSubmitUserInfoCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x235640, Thiscall, GameLevelManager, onSuggestLevelStarsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256fe0, Thiscall, GameLevelManager, onUnblockUserCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258c50, Thiscall, GameLevelManager, onUpdateDescriptionCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUpdateEditorSoundDescriptionCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onUpdateLevelCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUpdateThreadCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x237d70, Thiscall, GameLevelManager, onUpdateUserScoreCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23ed90, Thiscall, GameLevelManager, onUploadCommentCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x227360, Thiscall, GameLevelManager, onUploadDeathDataCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUploadEditorSoundCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254f00, Thiscall, GameLevelManager, onUploadFriendRequestCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a0b0, Thiscall, GameLevelManager, onUploadLevelCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onUploadLevelControlsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, onUploadLevelListCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23b760, Thiscall, GameLevelManager, onUploadUserMessageCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, pageFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25fc10, Thiscall, GameLevelManager, parseEventReward, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, parseRestoreData, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, performNetworkTest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2192d0, Thiscall, GameLevelManager, ProcessHttpRequest, std::string, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x232220, Thiscall, GameLevelManager, processOnDownloadLevelCompleted, std::string, std::string, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, prunePlatformerJournalKeys, std::vector<std::pair<std::string, int>> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2583d0, Thiscall, GameLevelManager, purgeFriendRequestSearchCache, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x222670, Thiscall, GameLevelManager, purgeUnusedLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2358f0, Thiscall, GameLevelManager, rateDemon, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, rateEditorSoundAdmin, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, rateLevelAdmin, int, int, int, int, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, rateLevelListAdmin, int, int, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x233da0, Thiscall, GameLevelManager, rateStars, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, readFriendRequest, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x255c70, Thiscall, GameLevelManager, readFriendRequests, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261620, Thiscall, GameLevelManager, removeDelimiterChars, std::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221b70, Thiscall, GameLevelManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x255fd0, Thiscall, GameLevelManager, removeFriend, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, removeLevelDownloadedKeysFromDict, cocos2d::CCDictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, removePlatformerSaveJournalEntry, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2571a0, Thiscall, GameLevelManager, removeUserFromList, int, UserListType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, replaceFollowedUsers, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x223740, Thiscall, GameLevelManager, replayPlatformerSaveJournal, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261100, Thiscall, GameLevelManager, reportContent, int, int, int, std::vector<int> const&, long long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, reportLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x252270, Thiscall, GameLevelManager, requestThreadMembers, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25b6a0, Thiscall, GameLevelManager, requestUserAccess, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x222180, Thiscall, GameLevelManager, resetAccountCaches, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetAccountComments, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetAllTimers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2400e0, Thiscall, GameLevelManager, resetCommentTimersForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23ff00, Thiscall, GameLevelManager, resetCommentTimersForLevelID, int, CommentKeyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetDailyLevelState, GJTimedLevelType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetGauntlets, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, resetStoredUserInfo, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x257e70, Thiscall, GameLevelManager, resetStoredUserList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2220c0, Thiscall, GameLevelManager, resetTimerForKey, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, restoreItems, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x25c620, Thiscall, GameLevelManager, rewardItemFromResponse, std::string const&, int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, rewardSessionToken, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveFetchedLevelLists, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21e400, Thiscall, GameLevelManager, saveFetchedLevels, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveFetchedMapPacks, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveGauntlet, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2209a0, Thiscall, GameLevelManager, saveLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22e290, Thiscall, GameLevelManager, saveLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveLocalScore, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, saveMapPack, GJMapPack*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24bc80, Thiscall, GameLevelManager, searchThreadMessages, int, std::string const&, long long)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, searchTypeIsCurated, SearchType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2412b0, Thiscall, GameLevelManager, sendAdminAction, char const*, char const*, GJHttpType, int, std::string const&, std::string const&, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x249630, Thiscall, GameLevelManager, sendThreadMessage, int, int, std::string const&, std::string const&, uint64_t, std::string const&, bool, std::string const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setActiveSmartTemplate, GJSmartTemplate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setBoolForKey, bool, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261420, Thiscall, GameLevelManager, setDiffVal, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setFolderName, int, std::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setIntForKey, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261520, Thiscall, GameLevelManager, setLenVal, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setLevelControlsTemplate, int, std::string const&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setLevelFeatured, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, setLevelStars, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, setNotificationMask, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, specialFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23e010, Thiscall, GameLevelManager, storeCommentsResult, cocos2d::CCArray*, std::string, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeDailyLevelState, int, int, GJTimedLevelType)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storedFriendForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeFriendRequest, GJFriendRequest*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x221580, Thiscall, GameLevelManager, storeSearchResult, cocos2d::CCArray*, std::string, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, storeThreadManifest, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeUserInfo, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeUserMessage, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, storeUserMessageReply, int, GJUserMessage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21d580, Thiscall, GameLevelManager, storeUserName, int, int, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21d240, Thiscall, GameLevelManager, storeUserNames, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x260b20, Thiscall, GameLevelManager, submitUserInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2352d0, Thiscall, GameLevelManager, suggestLevelStars, int, int, int, bool, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x251520, Thiscall, GameLevelManager, syncFollowing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2519c0, Thiscall, GameLevelManager, syncFollowListIfNeeded, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21d970, Thiscall, GameLevelManager, tryGetUsername, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, typeFromCommentKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, typeFromLikeKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x256ca0, Thiscall, GameLevelManager, unblockUser, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, unfollowUser, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, unrateEditorSoundAdmin, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, unrateLevelAdmin, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, unrateLevelListAdmin, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2588d0, Thiscall, GameLevelManager, updateDescription, int, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22ff90, Thiscall, GameLevelManager, updateEditorSoundDescription, int, std::string, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, updateEditorSoundRankAdmin, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x233b60, Thiscall, GameLevelManager, updateLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, updateLevelListRankAdmin, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21f1d0, Thiscall, GameLevelManager, updateLevelOrders, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, updateLevelRankAdmin, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21dde0, Thiscall, GameLevelManager, updateLevelRewards, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x230a70, Thiscall, GameLevelManager, updateSavedLevelList, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2527b0, Thiscall, GameLevelManager, updateThread, int, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, updateUsernames, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x236270, Thiscall, GameLevelManager, updateUserScore, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, uploadAccountComment, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x23e350, Thiscall, GameLevelManager, uploadComment, std::string, CommentType, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2266f0, Thiscall, GameLevelManager, uploadDeathData, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadEditorSoundComment, int, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadEditorSoundConfig, std::string const&, std::string const&, std::string const&, int, int, int, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x254ad0, Thiscall, GameLevelManager, uploadFriendRequest, int, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x229310, Thiscall, GameLevelManager, uploadLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, uploadLevelComment, int, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x258ed0, Thiscall, GameLevelManager, uploadLevelControls, int, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22d010, Thiscall, GameLevelManager, uploadLevelList, GJLevelList*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadModRoomComment, int, std::string, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, uploadUserMessage, int, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, userIDForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, userInfoForAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x21d7e0, Thiscall, GameLevelManager, userNameForUserID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, vaultTimedType, SearchType, GJTimedLevelType&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x224e80, Thiscall, GameLevelManager, verifyContainerOnlyHasLevels, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelManager, verifyLevelState, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, writePlatformerSaveJournal, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x22a8b0, Thiscall, GameLevelManager, writeSpecialFilters, GJSearchObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminQueueMute, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, adminQueueUnmute, int, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminQueueMuteCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelManager, onAdminQueueUnmuteCompleted, std::string, std::string)
		}
	};
}
