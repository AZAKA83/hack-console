#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSFXManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_actionToString
		#define GEODE_STATICS_actionToString
		GEODE_AS_STATIC_FUNCTION(actionToString) 
	#endif

	#ifndef GEODE_STATICS_addFavoriteConfig
		#define GEODE_STATICS_addFavoriteConfig
		GEODE_AS_STATIC_FUNCTION(addFavoriteConfig) 
	#endif

	#ifndef GEODE_STATICS_addSound
		#define GEODE_STATICS_addSound
		GEODE_AS_STATIC_FUNCTION(addSound) 
	#endif

	#ifndef GEODE_STATICS_allActions
		#define GEODE_STATICS_allActions
		GEODE_AS_STATIC_FUNCTION(allActions) 
	#endif

	#ifndef GEODE_STATICS_applyConfigDirect
		#define GEODE_STATICS_applyConfigDirect
		GEODE_AS_STATIC_FUNCTION(applyConfigDirect) 
	#endif

	#ifndef GEODE_STATICS_applyFavoriteConfig
		#define GEODE_STATICS_applyFavoriteConfig
		GEODE_AS_STATIC_FUNCTION(applyFavoriteConfig) 
	#endif

	#ifndef GEODE_STATICS_applyMyConfig
		#define GEODE_STATICS_applyMyConfig
		GEODE_AS_STATIC_FUNCTION(applyMyConfig) 
	#endif

	#ifndef GEODE_STATICS_attachUploadedSoundID
		#define GEODE_STATICS_attachUploadedSoundID
		GEODE_AS_STATIC_FUNCTION(attachUploadedSoundID) 
	#endif

	#ifndef GEODE_STATICS_clearAction
		#define GEODE_STATICS_clearAction
		GEODE_AS_STATIC_FUNCTION(clearAction) 
	#endif

	#ifndef GEODE_STATICS_clearActionMinInterval
		#define GEODE_STATICS_clearActionMinInterval
		GEODE_AS_STATIC_FUNCTION(clearActionMinInterval) 
	#endif

	#ifndef GEODE_STATICS_clearAll
		#define GEODE_STATICS_clearAll
		GEODE_AS_STATIC_FUNCTION(clearAll) 
	#endif

	#ifndef GEODE_STATICS_collectAllSFXIDs
		#define GEODE_STATICS_collectAllSFXIDs
		GEODE_AS_STATIC_FUNCTION(collectAllSFXIDs) 
	#endif

	#ifndef GEODE_STATICS_copyFavoriteToMyConfig
		#define GEODE_STATICS_copyFavoriteToMyConfig
		GEODE_AS_STATIC_FUNCTION(copyFavoriteToMyConfig) 
	#endif

	#ifndef GEODE_STATICS_createMyConfigFromLive
		#define GEODE_STATICS_createMyConfigFromLive
		GEODE_AS_STATIC_FUNCTION(createMyConfigFromLive) 
	#endif

	#ifndef GEODE_STATICS_createNewSound
		#define GEODE_STATICS_createNewSound
		GEODE_AS_STATIC_FUNCTION(createNewSound) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_decodeSound
		#define GEODE_STATICS_decodeSound
		GEODE_AS_STATIC_FUNCTION(decodeSound) 
	#endif

	#ifndef GEODE_STATICS_deserializeAll
		#define GEODE_STATICS_deserializeAll
		GEODE_AS_STATIC_FUNCTION(deserializeAll) 
	#endif

	#ifndef GEODE_STATICS_downloadAllMissing
		#define GEODE_STATICS_downloadAllMissing
		GEODE_AS_STATIC_FUNCTION(downloadAllMissing) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_encodeSound
		#define GEODE_STATICS_encodeSound
		GEODE_AS_STATIC_FUNCTION(encodeSound) 
	#endif

	#ifndef GEODE_STATICS_ensureLoaded
		#define GEODE_STATICS_ensureLoaded
		GEODE_AS_STATIC_FUNCTION(ensureLoaded) 
	#endif

	#ifndef GEODE_STATICS_findBinding
		#define GEODE_STATICS_findBinding
		GEODE_AS_STATIC_FUNCTION(findBinding) 
	#endif

	#ifndef GEODE_STATICS_firstSetup
		#define GEODE_STATICS_firstSetup
		GEODE_AS_STATIC_FUNCTION(firstSetup) 
	#endif

	#ifndef GEODE_STATICS_getActionMinInterval
		#define GEODE_STATICS_getActionMinInterval
		GEODE_AS_STATIC_FUNCTION(getActionMinInterval) 
	#endif

	#ifndef GEODE_STATICS_getActionMinIntervalOverride
		#define GEODE_STATICS_getActionMinIntervalOverride
		GEODE_AS_STATIC_FUNCTION(getActionMinIntervalOverride) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXRawPath
		#define GEODE_STATICS_getCustomSFXRawPath
		GEODE_AS_STATIC_FUNCTION(getCustomSFXRawPath) 
	#endif

	#ifndef GEODE_STATICS_getFavoriteConfig
		#define GEODE_STATICS_getFavoriteConfig
		GEODE_AS_STATIC_FUNCTION(getFavoriteConfig) 
	#endif

	#ifndef GEODE_STATICS_getFavoriteConfigs
		#define GEODE_STATICS_getFavoriteConfigs
		GEODE_AS_STATIC_FUNCTION(getFavoriteConfigs) 
	#endif

	#ifndef GEODE_STATICS_getMyConfig
		#define GEODE_STATICS_getMyConfig
		GEODE_AS_STATIC_FUNCTION(getMyConfig) 
	#endif

	#ifndef GEODE_STATICS_getMyConfigForSoundID
		#define GEODE_STATICS_getMyConfigForSoundID
		GEODE_AS_STATIC_FUNCTION(getMyConfigForSoundID) 
	#endif

	#ifndef GEODE_STATICS_getMyConfigs
		#define GEODE_STATICS_getMyConfigs
		GEODE_AS_STATIC_FUNCTION(getMyConfigs) 
	#endif

	#ifndef GEODE_STATICS_getOrCreateBinding
		#define GEODE_STATICS_getOrCreateBinding
		GEODE_AS_STATIC_FUNCTION(getOrCreateBinding) 
	#endif

	#ifndef GEODE_STATICS_getPlayMode
		#define GEODE_STATICS_getPlayMode
		GEODE_AS_STATIC_FUNCTION(getPlayMode) 
	#endif

	#ifndef GEODE_STATICS_hasSoundsForAction
		#define GEODE_STATICS_hasSoundsForAction
		GEODE_AS_STATIC_FUNCTION(hasSoundsForAction) 
	#endif

	#ifndef GEODE_STATICS_importFromString
		#define GEODE_STATICS_importFromString
		GEODE_AS_STATIC_FUNCTION(importFromString) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_overwriteMyConfigFromLive
		#define GEODE_STATICS_overwriteMyConfigFromLive
		GEODE_AS_STATIC_FUNCTION(overwriteMyConfigFromLive) 
	#endif

	#ifndef GEODE_STATICS_playAction
		#define GEODE_STATICS_playAction
		GEODE_AS_STATIC_FUNCTION(playAction) 
	#endif

	#ifndef GEODE_STATICS_releaseBinding
		#define GEODE_STATICS_releaseBinding
		GEODE_AS_STATIC_FUNCTION(releaseBinding) 
	#endif

	#ifndef GEODE_STATICS_removeFavoriteConfig
		#define GEODE_STATICS_removeFavoriteConfig
		GEODE_AS_STATIC_FUNCTION(removeFavoriteConfig) 
	#endif

	#ifndef GEODE_STATICS_removeMyConfig
		#define GEODE_STATICS_removeMyConfig
		GEODE_AS_STATIC_FUNCTION(removeMyConfig) 
	#endif

	#ifndef GEODE_STATICS_removeSoundAt
		#define GEODE_STATICS_removeSoundAt
		GEODE_AS_STATIC_FUNCTION(removeSoundAt) 
	#endif

	#ifndef GEODE_STATICS_serializeAll
		#define GEODE_STATICS_serializeAll
		GEODE_AS_STATIC_FUNCTION(serializeAll) 
	#endif

	#ifndef GEODE_STATICS_serializeCompressed
		#define GEODE_STATICS_serializeCompressed
		GEODE_AS_STATIC_FUNCTION(serializeCompressed) 
	#endif

	#ifndef GEODE_STATICS_setActionMinInterval
		#define GEODE_STATICS_setActionMinInterval
		GEODE_AS_STATIC_FUNCTION(setActionMinInterval) 
	#endif

	#ifndef GEODE_STATICS_setEditorLoading
		#define GEODE_STATICS_setEditorLoading
		GEODE_AS_STATIC_FUNCTION(setEditorLoading) 
	#endif

	#ifndef GEODE_STATICS_setGlobalVolume
		#define GEODE_STATICS_setGlobalVolume
		GEODE_AS_STATIC_FUNCTION(setGlobalVolume) 
	#endif

	#ifndef GEODE_STATICS_setPlayMode
		#define GEODE_STATICS_setPlayMode
		GEODE_AS_STATIC_FUNCTION(setPlayMode) 
	#endif

	#ifndef GEODE_STATICS_soundCountForAction
		#define GEODE_STATICS_soundCountForAction
		GEODE_AS_STATIC_FUNCTION(soundCountForAction) 
	#endif

	#ifndef GEODE_STATICS_soundsForAction
		#define GEODE_STATICS_soundsForAction
		GEODE_AS_STATIC_FUNCTION(soundsForAction) 
	#endif

	#ifndef GEODE_STATICS_summarizeBlob
		#define GEODE_STATICS_summarizeBlob
		GEODE_AS_STATIC_FUNCTION(summarizeBlob) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionToString
		#define GEODE_CONCEPT_CHECK_actionToString
		GEODE_CONCEPT_FUNCTION_CHECK(actionToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addFavoriteConfig
		#define GEODE_CONCEPT_CHECK_addFavoriteConfig
		GEODE_CONCEPT_FUNCTION_CHECK(addFavoriteConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSound
		#define GEODE_CONCEPT_CHECK_addSound
		GEODE_CONCEPT_FUNCTION_CHECK(addSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allActions
		#define GEODE_CONCEPT_CHECK_allActions
		GEODE_CONCEPT_FUNCTION_CHECK(allActions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyConfigDirect
		#define GEODE_CONCEPT_CHECK_applyConfigDirect
		GEODE_CONCEPT_FUNCTION_CHECK(applyConfigDirect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyFavoriteConfig
		#define GEODE_CONCEPT_CHECK_applyFavoriteConfig
		GEODE_CONCEPT_FUNCTION_CHECK(applyFavoriteConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyMyConfig
		#define GEODE_CONCEPT_CHECK_applyMyConfig
		GEODE_CONCEPT_FUNCTION_CHECK(applyMyConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_attachUploadedSoundID
		#define GEODE_CONCEPT_CHECK_attachUploadedSoundID
		GEODE_CONCEPT_FUNCTION_CHECK(attachUploadedSoundID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearAction
		#define GEODE_CONCEPT_CHECK_clearAction
		GEODE_CONCEPT_FUNCTION_CHECK(clearAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearActionMinInterval
		#define GEODE_CONCEPT_CHECK_clearActionMinInterval
		GEODE_CONCEPT_FUNCTION_CHECK(clearActionMinInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearAll
		#define GEODE_CONCEPT_CHECK_clearAll
		GEODE_CONCEPT_FUNCTION_CHECK(clearAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectAllSFXIDs
		#define GEODE_CONCEPT_CHECK_collectAllSFXIDs
		GEODE_CONCEPT_FUNCTION_CHECK(collectAllSFXIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyFavoriteToMyConfig
		#define GEODE_CONCEPT_CHECK_copyFavoriteToMyConfig
		GEODE_CONCEPT_FUNCTION_CHECK(copyFavoriteToMyConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createMyConfigFromLive
		#define GEODE_CONCEPT_CHECK_createMyConfigFromLive
		GEODE_CONCEPT_FUNCTION_CHECK(createMyConfigFromLive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createNewSound
		#define GEODE_CONCEPT_CHECK_createNewSound
		GEODE_CONCEPT_FUNCTION_CHECK(createNewSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_decodeSound
		#define GEODE_CONCEPT_CHECK_decodeSound
		GEODE_CONCEPT_FUNCTION_CHECK(decodeSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deserializeAll
		#define GEODE_CONCEPT_CHECK_deserializeAll
		GEODE_CONCEPT_FUNCTION_CHECK(deserializeAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadAllMissing
		#define GEODE_CONCEPT_CHECK_downloadAllMissing
		GEODE_CONCEPT_FUNCTION_CHECK(downloadAllMissing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeSound
		#define GEODE_CONCEPT_CHECK_encodeSound
		GEODE_CONCEPT_FUNCTION_CHECK(encodeSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ensureLoaded
		#define GEODE_CONCEPT_CHECK_ensureLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(ensureLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findBinding
		#define GEODE_CONCEPT_CHECK_findBinding
		GEODE_CONCEPT_FUNCTION_CHECK(findBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActionMinInterval
		#define GEODE_CONCEPT_CHECK_getActionMinInterval
		GEODE_CONCEPT_FUNCTION_CHECK(getActionMinInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActionMinIntervalOverride
		#define GEODE_CONCEPT_CHECK_getActionMinIntervalOverride
		GEODE_CONCEPT_FUNCTION_CHECK(getActionMinIntervalOverride) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXRawPath
		#define GEODE_CONCEPT_CHECK_getCustomSFXRawPath
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXRawPath) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFavoriteConfig
		#define GEODE_CONCEPT_CHECK_getFavoriteConfig
		GEODE_CONCEPT_FUNCTION_CHECK(getFavoriteConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFavoriteConfigs
		#define GEODE_CONCEPT_CHECK_getFavoriteConfigs
		GEODE_CONCEPT_FUNCTION_CHECK(getFavoriteConfigs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMyConfig
		#define GEODE_CONCEPT_CHECK_getMyConfig
		GEODE_CONCEPT_FUNCTION_CHECK(getMyConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMyConfigForSoundID
		#define GEODE_CONCEPT_CHECK_getMyConfigForSoundID
		GEODE_CONCEPT_FUNCTION_CHECK(getMyConfigForSoundID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMyConfigs
		#define GEODE_CONCEPT_CHECK_getMyConfigs
		GEODE_CONCEPT_FUNCTION_CHECK(getMyConfigs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOrCreateBinding
		#define GEODE_CONCEPT_CHECK_getOrCreateBinding
		GEODE_CONCEPT_FUNCTION_CHECK(getOrCreateBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPlayMode
		#define GEODE_CONCEPT_CHECK_getPlayMode
		GEODE_CONCEPT_FUNCTION_CHECK(getPlayMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hasSoundsForAction
		#define GEODE_CONCEPT_CHECK_hasSoundsForAction
		GEODE_CONCEPT_FUNCTION_CHECK(hasSoundsForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_importFromString
		#define GEODE_CONCEPT_CHECK_importFromString
		GEODE_CONCEPT_FUNCTION_CHECK(importFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_overwriteMyConfigFromLive
		#define GEODE_CONCEPT_CHECK_overwriteMyConfigFromLive
		GEODE_CONCEPT_FUNCTION_CHECK(overwriteMyConfigFromLive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playAction
		#define GEODE_CONCEPT_CHECK_playAction
		GEODE_CONCEPT_FUNCTION_CHECK(playAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_releaseBinding
		#define GEODE_CONCEPT_CHECK_releaseBinding
		GEODE_CONCEPT_FUNCTION_CHECK(releaseBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFavoriteConfig
		#define GEODE_CONCEPT_CHECK_removeFavoriteConfig
		GEODE_CONCEPT_FUNCTION_CHECK(removeFavoriteConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeMyConfig
		#define GEODE_CONCEPT_CHECK_removeMyConfig
		GEODE_CONCEPT_FUNCTION_CHECK(removeMyConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeSoundAt
		#define GEODE_CONCEPT_CHECK_removeSoundAt
		GEODE_CONCEPT_FUNCTION_CHECK(removeSoundAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_serializeAll
		#define GEODE_CONCEPT_CHECK_serializeAll
		GEODE_CONCEPT_FUNCTION_CHECK(serializeAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_serializeCompressed
		#define GEODE_CONCEPT_CHECK_serializeCompressed
		GEODE_CONCEPT_FUNCTION_CHECK(serializeCompressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActionMinInterval
		#define GEODE_CONCEPT_CHECK_setActionMinInterval
		GEODE_CONCEPT_FUNCTION_CHECK(setActionMinInterval) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setEditorLoading
		#define GEODE_CONCEPT_CHECK_setEditorLoading
		GEODE_CONCEPT_FUNCTION_CHECK(setEditorLoading) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setGlobalVolume
		#define GEODE_CONCEPT_CHECK_setGlobalVolume
		GEODE_CONCEPT_FUNCTION_CHECK(setGlobalVolume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setPlayMode
		#define GEODE_CONCEPT_CHECK_setPlayMode
		GEODE_CONCEPT_FUNCTION_CHECK(setPlayMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_soundCountForAction
		#define GEODE_CONCEPT_CHECK_soundCountForAction
		GEODE_CONCEPT_FUNCTION_CHECK(soundCountForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_soundsForAction
		#define GEODE_CONCEPT_CHECK_soundsForAction
		GEODE_CONCEPT_FUNCTION_CHECK(soundsForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_summarizeBlob
		#define GEODE_CONCEPT_CHECK_summarizeBlob
		GEODE_CONCEPT_FUNCTION_CHECK(summarizeBlob) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSFXManager> : ModifyBase<ModifyDerive<Der, EditorSFXManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSFXManager>>;
		using ModifyBase<ModifyDerive<Der, EditorSFXManager>>::ModifyBase;
		using Base = EditorSFXManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x185140, Default, EditorSFXManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x185f20, Thiscall, EditorSFXManager, actionToString, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, addFavoriteConfig, GJEditorSoundConfig*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, addSound, int, SFXTriggerGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, allActions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, applyConfigDirect, GJEditorSoundConfig*, bool, std::string*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, applyFavoriteConfig, int, bool, std::string*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18bf10, Thiscall, EditorSFXManager, applyMyConfig, int, bool, std::string*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, attachUploadedSoundID, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, clearAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, clearActionMinInterval, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, clearAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, collectAllSFXIDs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, copyFavoriteToMyConfig, GJEditorSoundConfig*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, createMyConfigFromLive, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, createNewSound, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18af20, Thiscall, EditorSFXManager, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, decodeSound, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, deserializeAll, std::string const&, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, downloadAllMissing, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18ab70, Thiscall, EditorSFXManager, encodeDataTo, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, encodeSound, SFXTriggerGameObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, ensureLoaded, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, findBinding, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, firstSetup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getActionMinInterval, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getActionMinIntervalOverride, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getCustomSFXRawPath, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getFavoriteConfig, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getFavoriteConfigs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getMyConfig, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getMyConfigForSoundID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getMyConfigs, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getOrCreateBinding, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, getPlayMode, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, hasSoundsForAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18b3d0, Thiscall, EditorSFXManager, importFromString, std::string const&, EditorSFXImportOptions const&, std::string*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x18bd70, Thiscall, EditorSFXManager, overwriteMyConfigFromLive, int, std::string*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1855c0, Thiscall, EditorSFXManager, playAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, playAction, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, releaseBinding, EditorSFXBinding*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, removeFavoriteConfig, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, removeMyConfig, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, removeSoundAt, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x188850, Thiscall, EditorSFXManager, serializeAll, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, serializeCompressed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, setActionMinInterval, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, setEditorLoading, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, setGlobalVolume, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, setPlayMode, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, soundCountForAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, soundsForAction, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSFXManager, summarizeBlob, std::string const&)
		}
	};
}
