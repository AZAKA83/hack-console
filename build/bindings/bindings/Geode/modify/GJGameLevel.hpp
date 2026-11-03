#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJGameLevel.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_lengthKeyToString
		#define GEODE_STATICS_lengthKeyToString
		GEODE_AS_STATIC_FUNCTION(lengthKeyToString) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_accumulateDeathsInRadius
		#define GEODE_STATICS_accumulateDeathsInRadius
		GEODE_AS_STATIC_FUNCTION(accumulateDeathsInRadius) 
	#endif

	#ifndef GEODE_STATICS_addPlaytime
		#define GEODE_STATICS_addPlaytime
		GEODE_AS_STATIC_FUNCTION(addPlaytime) 
	#endif

	#ifndef GEODE_STATICS_areCoinsVerified
		#define GEODE_STATICS_areCoinsVerified
		GEODE_AS_STATIC_FUNCTION(areCoinsVerified) 
	#endif

	#ifndef GEODE_STATICS_cellForPosition
		#define GEODE_STATICS_cellForPosition
		GEODE_AS_STATIC_FUNCTION(cellForPosition) 
	#endif

	#ifndef GEODE_STATICS_clearDeathMarkerData
		#define GEODE_STATICS_clearDeathMarkerData
		GEODE_AS_STATIC_FUNCTION(clearDeathMarkerData) 
	#endif

	#ifndef GEODE_STATICS_clearDeathsNear
		#define GEODE_STATICS_clearDeathsNear
		GEODE_AS_STATIC_FUNCTION(clearDeathsNear) 
	#endif

	#ifndef GEODE_STATICS_clearDeathTrackerData
		#define GEODE_STATICS_clearDeathTrackerData
		GEODE_AS_STATIC_FUNCTION(clearDeathTrackerData) 
	#endif

	#ifndef GEODE_STATICS_clearPlatformerSave
		#define GEODE_STATICS_clearPlatformerSave
		GEODE_AS_STATIC_FUNCTION(clearPlatformerSave) 
	#endif

	#ifndef GEODE_STATICS_copyLevelInfo
		#define GEODE_STATICS_copyLevelInfo
		GEODE_AS_STATIC_FUNCTION(copyLevelInfo) 
	#endif

	#ifndef GEODE_STATICS_countDeathsNear
		#define GEODE_STATICS_countDeathsNear
		GEODE_AS_STATIC_FUNCTION(countDeathsNear) 
	#endif

	#ifndef GEODE_STATICS_createFromFullSaveString
		#define GEODE_STATICS_createFromFullSaveString
		GEODE_AS_STATIC_FUNCTION(createFromFullSaveString) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_dtAppendOrder
		#define GEODE_STATICS_dtAppendOrder
		GEODE_AS_STATIC_FUNCTION(dtAppendOrder) 
	#endif

	#ifndef GEODE_STATICS_dtBumpBucket
		#define GEODE_STATICS_dtBumpBucket
		GEODE_AS_STATIC_FUNCTION(dtBumpBucket) 
	#endif

	#ifndef GEODE_STATICS_dtBumpRun
		#define GEODE_STATICS_dtBumpRun
		GEODE_AS_STATIC_FUNCTION(dtBumpRun) 
	#endif

	#ifndef GEODE_STATICS_dtExpandOrder
		#define GEODE_STATICS_dtExpandOrder
		GEODE_AS_STATIC_FUNCTION(dtExpandOrder) 
	#endif

	#ifndef GEODE_STATICS_dtParseGlobalBlob
		#define GEODE_STATICS_dtParseGlobalBlob
		GEODE_AS_STATIC_FUNCTION(dtParseGlobalBlob) 
	#endif

	#ifndef GEODE_STATICS_dtSetCells
		#define GEODE_STATICS_dtSetCells
		GEODE_AS_STATIC_FUNCTION(dtSetCells) 
	#endif

	#ifndef GEODE_STATICS_duplicate
		#define GEODE_STATICS_duplicate
		GEODE_AS_STATIC_FUNCTION(duplicate) 
	#endif

	#ifndef GEODE_STATICS_ensureSessionLog
		#define GEODE_STATICS_ensureSessionLog
		GEODE_AS_STATIC_FUNCTION(ensureSessionLog) 
	#endif

	#ifndef GEODE_STATICS_generateAutoSaveUID
		#define GEODE_STATICS_generateAutoSaveUID
		GEODE_AS_STATIC_FUNCTION(generateAutoSaveUID) 
	#endif

	#ifndef GEODE_STATICS_getAudioFileName
		#define GEODE_STATICS_getAudioFileName
		GEODE_AS_STATIC_FUNCTION(getAudioFileName) 
	#endif

	#ifndef GEODE_STATICS_getCoinKey
		#define GEODE_STATICS_getCoinKey
		GEODE_AS_STATIC_FUNCTION(getCoinKey) 
	#endif

	#ifndef GEODE_STATICS_getExportSaveString
		#define GEODE_STATICS_getExportSaveString
		GEODE_AS_STATIC_FUNCTION(getExportSaveString) 
	#endif

	#ifndef GEODE_STATICS_getFullSaveString
		#define GEODE_STATICS_getFullSaveString
		GEODE_AS_STATIC_FUNCTION(getFullSaveString) 
	#endif

	#ifndef GEODE_STATICS_getLastBuildPageForTab
		#define GEODE_STATICS_getLastBuildPageForTab
		GEODE_AS_STATIC_FUNCTION(getLastBuildPageForTab) 
	#endif

	#ifndef GEODE_STATICS_getListSnapshot
		#define GEODE_STATICS_getListSnapshot
		GEODE_AS_STATIC_FUNCTION(getListSnapshot) 
	#endif

	#ifndef GEODE_STATICS_getSessionBest
		#define GEODE_STATICS_getSessionBest
		GEODE_AS_STATIC_FUNCTION(getSessionBest) 
	#endif

	#ifndef GEODE_STATICS_getSongName
		#define GEODE_STATICS_getSongName
		GEODE_AS_STATIC_FUNCTION(getSongName) 
	#endif

	#ifndef GEODE_STATICS_handleStatsConflict
		#define GEODE_STATICS_handleStatsConflict
		GEODE_AS_STATIC_FUNCTION(handleStatsConflict) 
	#endif

	#ifndef GEODE_STATICS_levelHasDiamonds
		#define GEODE_STATICS_levelHasDiamonds
		GEODE_AS_STATIC_FUNCTION(levelHasDiamonds) 
	#endif

	#ifndef GEODE_STATICS_recordCompletion
		#define GEODE_STATICS_recordCompletion
		GEODE_AS_STATIC_FUNCTION(recordCompletion) 
	#endif

	#ifndef GEODE_STATICS_recordDeath
		#define GEODE_STATICS_recordDeath
		GEODE_AS_STATIC_FUNCTION(recordDeath) 
	#endif

	#ifndef GEODE_STATICS_rollSession
		#define GEODE_STATICS_rollSession
		GEODE_AS_STATIC_FUNCTION(rollSession) 
	#endif

	#ifndef GEODE_STATICS_saveNewScore
		#define GEODE_STATICS_saveNewScore
		GEODE_AS_STATIC_FUNCTION(saveNewScore) 
	#endif

	#ifndef GEODE_STATICS_savePercentage
		#define GEODE_STATICS_savePercentage
		GEODE_AS_STATIC_FUNCTION(savePercentage) 
	#endif

	#ifndef GEODE_STATICS_scoreStringToVector
		#define GEODE_STATICS_scoreStringToVector
		GEODE_AS_STATIC_FUNCTION(scoreStringToVector) 
	#endif

	#ifndef GEODE_STATICS_shippedControls
		#define GEODE_STATICS_shippedControls
		GEODE_AS_STATIC_FUNCTION(shippedControls) 
	#endif

	#ifndef GEODE_STATICS_storeNewLocalScore
		#define GEODE_STATICS_storeNewLocalScore
		GEODE_AS_STATIC_FUNCTION(storeNewLocalScore) 
	#endif

	#ifndef GEODE_STATICS_syncUneditedControls
		#define GEODE_STATICS_syncUneditedControls
		GEODE_AS_STATIC_FUNCTION(syncUneditedControls) 
	#endif

	#ifndef GEODE_STATICS_unverifyCoins
		#define GEODE_STATICS_unverifyCoins
		GEODE_AS_STATIC_FUNCTION(unverifyCoins) 
	#endif

	#ifndef GEODE_STATICS_setUserID
		#define GEODE_STATICS_setUserID
		GEODE_AS_STATIC_FUNCTION(setUserID) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_demonIconForDifficulty
		#define GEODE_CONCEPT_CHECK_demonIconForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(demonIconForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLengthKey
		#define GEODE_CONCEPT_CHECK_getLengthKey
		GEODE_CONCEPT_FUNCTION_CHECK(getLengthKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lengthKeyToString
		#define GEODE_CONCEPT_CHECK_lengthKeyToString
		GEODE_CONCEPT_FUNCTION_CHECK(lengthKeyToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_accumulateDeathsInRadius
		#define GEODE_CONCEPT_CHECK_accumulateDeathsInRadius
		GEODE_CONCEPT_FUNCTION_CHECK(accumulateDeathsInRadius) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPlaytime
		#define GEODE_CONCEPT_CHECK_addPlaytime
		GEODE_CONCEPT_FUNCTION_CHECK(addPlaytime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_areCoinsVerified
		#define GEODE_CONCEPT_CHECK_areCoinsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(areCoinsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cellForPosition
		#define GEODE_CONCEPT_CHECK_cellForPosition
		GEODE_CONCEPT_FUNCTION_CHECK(cellForPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearDeathMarkerData
		#define GEODE_CONCEPT_CHECK_clearDeathMarkerData
		GEODE_CONCEPT_FUNCTION_CHECK(clearDeathMarkerData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearDeathsNear
		#define GEODE_CONCEPT_CHECK_clearDeathsNear
		GEODE_CONCEPT_FUNCTION_CHECK(clearDeathsNear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearDeathTrackerData
		#define GEODE_CONCEPT_CHECK_clearDeathTrackerData
		GEODE_CONCEPT_FUNCTION_CHECK(clearDeathTrackerData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearPlatformerSave
		#define GEODE_CONCEPT_CHECK_clearPlatformerSave
		GEODE_CONCEPT_FUNCTION_CHECK(clearPlatformerSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyLevelInfo
		#define GEODE_CONCEPT_CHECK_copyLevelInfo
		GEODE_CONCEPT_FUNCTION_CHECK(copyLevelInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_countDeathsNear
		#define GEODE_CONCEPT_CHECK_countDeathsNear
		GEODE_CONCEPT_FUNCTION_CHECK(countDeathsNear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromFullSaveString
		#define GEODE_CONCEPT_CHECK_createFromFullSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(createFromFullSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtAppendOrder
		#define GEODE_CONCEPT_CHECK_dtAppendOrder
		GEODE_CONCEPT_FUNCTION_CHECK(dtAppendOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtBumpBucket
		#define GEODE_CONCEPT_CHECK_dtBumpBucket
		GEODE_CONCEPT_FUNCTION_CHECK(dtBumpBucket) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtBumpRun
		#define GEODE_CONCEPT_CHECK_dtBumpRun
		GEODE_CONCEPT_FUNCTION_CHECK(dtBumpRun) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtExpandOrder
		#define GEODE_CONCEPT_CHECK_dtExpandOrder
		GEODE_CONCEPT_FUNCTION_CHECK(dtExpandOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtParseGlobalBlob
		#define GEODE_CONCEPT_CHECK_dtParseGlobalBlob
		GEODE_CONCEPT_FUNCTION_CHECK(dtParseGlobalBlob) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dtSetCells
		#define GEODE_CONCEPT_CHECK_dtSetCells
		GEODE_CONCEPT_FUNCTION_CHECK(dtSetCells) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_duplicate
		#define GEODE_CONCEPT_CHECK_duplicate
		GEODE_CONCEPT_FUNCTION_CHECK(duplicate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ensureSessionLog
		#define GEODE_CONCEPT_CHECK_ensureSessionLog
		GEODE_CONCEPT_FUNCTION_CHECK(ensureSessionLog) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateAutoSaveUID
		#define GEODE_CONCEPT_CHECK_generateAutoSaveUID
		GEODE_CONCEPT_FUNCTION_CHECK(generateAutoSaveUID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateSettingsString
		#define GEODE_CONCEPT_CHECK_generateSettingsString
		GEODE_CONCEPT_FUNCTION_CHECK(generateSettingsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAudioFileName
		#define GEODE_CONCEPT_CHECK_getAudioFileName
		GEODE_CONCEPT_FUNCTION_CHECK(getAudioFileName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAverageDifficulty
		#define GEODE_CONCEPT_CHECK_getAverageDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getAverageDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCoinKey
		#define GEODE_CONCEPT_CHECK_getCoinKey
		GEODE_CONCEPT_FUNCTION_CHECK(getCoinKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getExportSaveString
		#define GEODE_CONCEPT_CHECK_getExportSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getExportSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFullSaveString
		#define GEODE_CONCEPT_CHECK_getFullSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getFullSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLastBuildPageForTab
		#define GEODE_CONCEPT_CHECK_getLastBuildPageForTab
		GEODE_CONCEPT_FUNCTION_CHECK(getLastBuildPageForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getListSnapshot
		#define GEODE_CONCEPT_CHECK_getListSnapshot
		GEODE_CONCEPT_FUNCTION_CHECK(getListSnapshot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNormalPercent
		#define GEODE_CONCEPT_CHECK_getNormalPercent
		GEODE_CONCEPT_FUNCTION_CHECK(getNormalPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSessionBest
		#define GEODE_CONCEPT_CHECK_getSessionBest
		GEODE_CONCEPT_FUNCTION_CHECK(getSessionBest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSongName
		#define GEODE_CONCEPT_CHECK_getSongName
		GEODE_CONCEPT_FUNCTION_CHECK(getSongName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUnpackedLevelDescription
		#define GEODE_CONCEPT_CHECK_getUnpackedLevelDescription
		GEODE_CONCEPT_FUNCTION_CHECK(getUnpackedLevelDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleStatsConflict
		#define GEODE_CONCEPT_CHECK_handleStatsConflict
		GEODE_CONCEPT_FUNCTION_CHECK(handleStatsConflict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isPlatformer
		#define GEODE_CONCEPT_CHECK_isPlatformer
		GEODE_CONCEPT_FUNCTION_CHECK(isPlatformer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelHasDiamonds
		#define GEODE_CONCEPT_CHECK_levelHasDiamonds
		GEODE_CONCEPT_FUNCTION_CHECK(levelHasDiamonds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelWasAltered
		#define GEODE_CONCEPT_CHECK_levelWasAltered
		GEODE_CONCEPT_FUNCTION_CHECK(levelWasAltered) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelWasSubmitted
		#define GEODE_CONCEPT_CHECK_levelWasSubmitted
		GEODE_CONCEPT_FUNCTION_CHECK(levelWasSubmitted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_parseSettingsString
		#define GEODE_CONCEPT_CHECK_parseSettingsString
		GEODE_CONCEPT_FUNCTION_CHECK(parseSettingsString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordCompletion
		#define GEODE_CONCEPT_CHECK_recordCompletion
		GEODE_CONCEPT_FUNCTION_CHECK(recordCompletion) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recordDeath
		#define GEODE_CONCEPT_CHECK_recordDeath
		GEODE_CONCEPT_FUNCTION_CHECK(recordDeath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rollSession
		#define GEODE_CONCEPT_CHECK_rollSession
		GEODE_CONCEPT_FUNCTION_CHECK(rollSession) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveNewScore
		#define GEODE_CONCEPT_CHECK_saveNewScore
		GEODE_CONCEPT_FUNCTION_CHECK(saveNewScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_savePercentage
		#define GEODE_CONCEPT_CHECK_savePercentage
		GEODE_CONCEPT_FUNCTION_CHECK(savePercentage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scoreStringToVector
		#define GEODE_CONCEPT_CHECK_scoreStringToVector
		GEODE_CONCEPT_FUNCTION_CHECK(scoreStringToVector) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scoreVectorToString
		#define GEODE_CONCEPT_CHECK_scoreVectorToString
		GEODE_CONCEPT_FUNCTION_CHECK(scoreVectorToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAccountID
		#define GEODE_CONCEPT_CHECK_setAccountID
		GEODE_CONCEPT_FUNCTION_CHECK(setAccountID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAttempts
		#define GEODE_CONCEPT_CHECK_setAttempts
		GEODE_CONCEPT_FUNCTION_CHECK(setAttempts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAttemptTime
		#define GEODE_CONCEPT_CHECK_setAttemptTime
		GEODE_CONCEPT_FUNCTION_CHECK(setAttemptTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setClicks
		#define GEODE_CONCEPT_CHECK_setClicks
		GEODE_CONCEPT_FUNCTION_CHECK(setClicks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setCoinsVerified
		#define GEODE_CONCEPT_CHECK_setCoinsVerified
		GEODE_CONCEPT_FUNCTION_CHECK(setCoinsVerified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDailyID
		#define GEODE_CONCEPT_CHECK_setDailyID
		GEODE_CONCEPT_FUNCTION_CHECK(setDailyID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDemon
		#define GEODE_CONCEPT_CHECK_setDemon
		GEODE_CONCEPT_FUNCTION_CHECK(setDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setJumps
		#define GEODE_CONCEPT_CHECK_setJumps
		GEODE_CONCEPT_FUNCTION_CHECK(setJumps) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLastBuildPageForTab
		#define GEODE_CONCEPT_CHECK_setLastBuildPageForTab
		GEODE_CONCEPT_FUNCTION_CHECK(setLastBuildPageForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLevelID
		#define GEODE_CONCEPT_CHECK_setLevelID
		GEODE_CONCEPT_FUNCTION_CHECK(setLevelID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNewNormalPercent
		#define GEODE_CONCEPT_CHECK_setNewNormalPercent
		GEODE_CONCEPT_FUNCTION_CHECK(setNewNormalPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNewNormalPercent2
		#define GEODE_CONCEPT_CHECK_setNewNormalPercent2
		GEODE_CONCEPT_FUNCTION_CHECK(setNewNormalPercent2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setNormalPercent
		#define GEODE_CONCEPT_CHECK_setNormalPercent
		GEODE_CONCEPT_FUNCTION_CHECK(setNormalPercent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setObjectCount
		#define GEODE_CONCEPT_CHECK_setObjectCount
		GEODE_CONCEPT_FUNCTION_CHECK(setObjectCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setOriginalLevel
		#define GEODE_CONCEPT_CHECK_setOriginalLevel
		GEODE_CONCEPT_FUNCTION_CHECK(setOriginalLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPassword
		#define GEODE_CONCEPT_CHECK_setPassword
		GEODE_CONCEPT_FUNCTION_CHECK(setPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStars
		#define GEODE_CONCEPT_CHECK_setStars
		GEODE_CONCEPT_FUNCTION_CHECK(setStars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shippedControls
		#define GEODE_CONCEPT_CHECK_shippedControls
		GEODE_CONCEPT_FUNCTION_CHECK(shippedControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldCheatReset
		#define GEODE_CONCEPT_CHECK_shouldCheatReset
		GEODE_CONCEPT_FUNCTION_CHECK(shouldCheatReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_storeNewLocalScore
		#define GEODE_CONCEPT_CHECK_storeNewLocalScore
		GEODE_CONCEPT_FUNCTION_CHECK(storeNewLocalScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncUneditedControls
		#define GEODE_CONCEPT_CHECK_syncUneditedControls
		GEODE_CONCEPT_FUNCTION_CHECK(syncUneditedControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unverifyCoins
		#define GEODE_CONCEPT_CHECK_unverifyCoins
		GEODE_CONCEPT_FUNCTION_CHECK(unverifyCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUserID
		#define GEODE_CONCEPT_CHECK_setUserID
		GEODE_CONCEPT_FUNCTION_CHECK(setUserID) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJGameLevel> : ModifyBase<ModifyDerive<Der, GJGameLevel>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJGameLevel>>;
		using ModifyBase<ModifyDerive<Der, GJGameLevel>>::ModifyBase;
		using Base = GJGameLevel;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x217820, Thiscall, GJGameLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x261d00, Default, GJGameLevel, create, cocos2d::CCDictionary*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, demonIconForDifficulty, DemonDifficultyType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, getLengthKey, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2644c0, Default, GJGameLevel, lengthKeyToString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2690c0, Thiscall, GJGameLevel, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263ed0, Thiscall, GJGameLevel, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, accumulateDeathsInRadius, std::vector<int> const&, int, int, int, float&, int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, addPlaytime, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26add0, Thiscall, GJGameLevel, areCoinsVerified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, cellForPosition, cocos2d::CCPoint const&, int&, int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, clearDeathMarkerData, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, clearDeathsNear, std::vector<int>&, int, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, clearDeathTrackerData, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2640e0, Thiscall, GJGameLevel, clearPlatformerSave, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x267010, Thiscall, GJGameLevel, copyLevelInfo, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, countDeathsNear, std::vector<int> const&, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26a560, Thiscall, GJGameLevel, createFromFullSaveString, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x267a10, Thiscall, GJGameLevel, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, dtAppendOrder, std::string&, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, dtBumpBucket, std::string&, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, dtBumpRun, std::string&, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, dtExpandOrder, std::string const&, std::vector<int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, dtParseGlobalBlob, std::string const&, std::vector<int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, dtSetCells, std::vector<int> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x263800, Thiscall, GJGameLevel, duplicate, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, ensureSessionLog, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, generateAutoSaveUID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, generateSettingsString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x264790, Thiscall, GJGameLevel, getAudioFileName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, getAverageDifficulty, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x264610, Thiscall, GJGameLevel, getCoinKey, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x264630, Thiscall, GJGameLevel, getCoinKey, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getExportSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getFullSaveString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2646a0, Thiscall, GJGameLevel, getLastBuildPageForTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x267680, Thiscall, GJGameLevel, getListSnapshot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, getNormalPercent, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, getSessionBest, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x264890, Thiscall, GJGameLevel, getSongName, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, getUnpackedLevelDescription, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26a650, Thiscall, GJGameLevel, handleStatsConflict, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, isPlatformer, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, levelHasDiamonds, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, levelWasAltered, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, levelWasSubmitted, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, parseSettingsString, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, recordCompletion, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, recordDeath, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x265e30, Thiscall, GJGameLevel, rollSession, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x264b10, Thiscall, GJGameLevel, saveNewScore, int, int, int, int, int, std::string, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2641b0, Thiscall, GJGameLevel, savePercentage, int, bool, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x264f80, Thiscall, GJGameLevel, scoreStringToVector, std::string&, std::vector<int>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, scoreVectorToString, std::vector<int>&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setAccountID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setAttempts, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setAttemptTime, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setClicks, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setCoinsVerified, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setDailyID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setDemon, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setJumps, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setLastBuildPageForTab, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setLevelID, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setNewNormalPercent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setNewNormalPercent2, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setNormalPercent, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setObjectCount, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setOriginalLevel, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setPassword, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, setStars, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x266530, Thiscall, GJGameLevel, shippedControls, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJGameLevel, shouldCheatReset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x264ce0, Thiscall, GJGameLevel, storeNewLocalScore, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, syncUneditedControls, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26ae30, Thiscall, GJGameLevel, unverifyCoins, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJGameLevel, setUserID, int)
		}
	};
}
