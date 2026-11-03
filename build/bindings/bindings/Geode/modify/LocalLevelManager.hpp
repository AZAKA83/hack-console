#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LocalLevelManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_encodeDataTo
		#define GEODE_STATICS_encodeDataTo
		GEODE_AS_STATIC_FUNCTION(encodeDataTo) 
	#endif

	#ifndef GEODE_STATICS_didEncodeForSave
		#define GEODE_STATICS_didEncodeForSave
		GEODE_AS_STATIC_FUNCTION(didEncodeForSave) 
	#endif

	#ifndef GEODE_STATICS_saveFinished
		#define GEODE_STATICS_saveFinished
		GEODE_AS_STATIC_FUNCTION(saveFinished) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_firstLoad
		#define GEODE_STATICS_firstLoad
		GEODE_AS_STATIC_FUNCTION(firstLoad) 
	#endif

	#ifndef GEODE_STATICS_filesPicked
		#define GEODE_STATICS_filesPicked
		GEODE_AS_STATIC_FUNCTION(filesPicked) 
	#endif

	#ifndef GEODE_STATICS_fileShareFinished
		#define GEODE_STATICS_fileShareFinished
		GEODE_AS_STATIC_FUNCTION(fileShareFinished) 
	#endif

	#ifndef GEODE_STATICS_exportLevelsToFile
		#define GEODE_STATICS_exportLevelsToFile
		GEODE_AS_STATIC_FUNCTION(exportLevelsToFile) 
	#endif

	#ifndef GEODE_STATICS_getAllLevelsInDict
		#define GEODE_STATICS_getAllLevelsInDict
		GEODE_AS_STATIC_FUNCTION(getAllLevelsInDict) 
	#endif

	#ifndef GEODE_STATICS_getMainLevelString
		#define GEODE_STATICS_getMainLevelString
		GEODE_AS_STATIC_FUNCTION(getMainLevelString) 
	#endif

	#ifndef GEODE_STATICS_importLevelsFromFile
		#define GEODE_STATICS_importLevelsFromFile
		GEODE_AS_STATIC_FUNCTION(importLevelsFromFile) 
	#endif

	#ifndef GEODE_STATICS_importLevelsFromPaths
		#define GEODE_STATICS_importLevelsFromPaths
		GEODE_AS_STATIC_FUNCTION(importLevelsFromPaths) 
	#endif

	#ifndef GEODE_STATICS_moveLevelToBottom
		#define GEODE_STATICS_moveLevelToBottom
		GEODE_AS_STATIC_FUNCTION(moveLevelToBottom) 
	#endif

	#ifndef GEODE_STATICS_postFileResults
		#define GEODE_STATICS_postFileResults
		GEODE_AS_STATIC_FUNCTION(postFileResults) 
	#endif

	#ifndef GEODE_STATICS_queueFileResults
		#define GEODE_STATICS_queueFileResults
		GEODE_AS_STATIC_FUNCTION(queueFileResults) 
	#endif

	#ifndef GEODE_STATICS_tryLoadMainLevelString
		#define GEODE_STATICS_tryLoadMainLevelString
		GEODE_AS_STATIC_FUNCTION(tryLoadMainLevelString) 
	#endif

	#ifndef GEODE_STATICS_tryRecoverAutoSaves
		#define GEODE_STATICS_tryRecoverAutoSaves
		GEODE_AS_STATIC_FUNCTION(tryRecoverAutoSaves) 
	#endif

	#ifndef GEODE_STATICS_updateLevelOrder
		#define GEODE_STATICS_updateLevelOrder
		GEODE_AS_STATIC_FUNCTION(updateLevelOrder) 
	#endif

	#ifndef GEODE_STATICS_updateLevelRevision
		#define GEODE_STATICS_updateLevelRevision
		GEODE_AS_STATIC_FUNCTION(updateLevelRevision) 
	#endif

	#ifndef GEODE_STATICS_setLocalLists
		#define GEODE_STATICS_setLocalLists
		GEODE_AS_STATIC_FUNCTION(setLocalLists) 
	#endif

	#ifndef GEODE_STATICS_setLocalLevels
		#define GEODE_STATICS_setLocalLevels
		GEODE_AS_STATIC_FUNCTION(setLocalLevels) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didEncodeForSave
		#define GEODE_CONCEPT_CHECK_didEncodeForSave
		GEODE_CONCEPT_FUNCTION_CHECK(didEncodeForSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveFinished
		#define GEODE_CONCEPT_CHECK_saveFinished
		GEODE_CONCEPT_FUNCTION_CHECK(saveFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_filesPicked
		#define GEODE_CONCEPT_CHECK_filesPicked
		GEODE_CONCEPT_FUNCTION_CHECK(filesPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fileShareFinished
		#define GEODE_CONCEPT_CHECK_fileShareFinished
		GEODE_CONCEPT_FUNCTION_CHECK(fileShareFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exportLevelsToFile
		#define GEODE_CONCEPT_CHECK_exportLevelsToFile
		GEODE_CONCEPT_FUNCTION_CHECK(exportLevelsToFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllLevelsInDict
		#define GEODE_CONCEPT_CHECK_getAllLevelsInDict
		GEODE_CONCEPT_FUNCTION_CHECK(getAllLevelsInDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAllLevelsWithName
		#define GEODE_CONCEPT_CHECK_getAllLevelsWithName
		GEODE_CONCEPT_FUNCTION_CHECK(getAllLevelsWithName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreatedLevels
		#define GEODE_CONCEPT_CHECK_getCreatedLevels
		GEODE_CONCEPT_FUNCTION_CHECK(getCreatedLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCreatedLists
		#define GEODE_CONCEPT_CHECK_getCreatedLists
		GEODE_CONCEPT_FUNCTION_CHECK(getCreatedLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getLevelsInNameGroups
		#define GEODE_CONCEPT_CHECK_getLevelsInNameGroups
		GEODE_CONCEPT_FUNCTION_CHECK(getLevelsInNameGroups) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getMainLevelString
		#define GEODE_CONCEPT_CHECK_getMainLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(getMainLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_importLevelsFromFile
		#define GEODE_CONCEPT_CHECK_importLevelsFromFile
		GEODE_CONCEPT_FUNCTION_CHECK(importLevelsFromFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_importLevelsFromPaths
		#define GEODE_CONCEPT_CHECK_importLevelsFromPaths
		GEODE_CONCEPT_FUNCTION_CHECK(importLevelsFromPaths) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_markLevelsAsUnmodified
		#define GEODE_CONCEPT_CHECK_markLevelsAsUnmodified
		GEODE_CONCEPT_FUNCTION_CHECK(markLevelsAsUnmodified) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveLevelToBottom
		#define GEODE_CONCEPT_CHECK_moveLevelToBottom
		GEODE_CONCEPT_FUNCTION_CHECK(moveLevelToBottom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveLevelToTop
		#define GEODE_CONCEPT_CHECK_moveLevelToTop
		GEODE_CONCEPT_FUNCTION_CHECK(moveLevelToTop) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_postFileResults
		#define GEODE_CONCEPT_CHECK_postFileResults
		GEODE_CONCEPT_FUNCTION_CHECK(postFileResults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueFileResults
		#define GEODE_CONCEPT_CHECK_queueFileResults
		GEODE_CONCEPT_FUNCTION_CHECK(queueFileResults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderLevels
		#define GEODE_CONCEPT_CHECK_reorderLevels
		GEODE_CONCEPT_FUNCTION_CHECK(reorderLevels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reorderLists
		#define GEODE_CONCEPT_CHECK_reorderLists
		GEODE_CONCEPT_FUNCTION_CHECK(reorderLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryLoadMainLevelString
		#define GEODE_CONCEPT_CHECK_tryLoadMainLevelString
		GEODE_CONCEPT_FUNCTION_CHECK(tryLoadMainLevelString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryRecoverAutoSaves
		#define GEODE_CONCEPT_CHECK_tryRecoverAutoSaves
		GEODE_CONCEPT_FUNCTION_CHECK(tryRecoverAutoSaves) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelOrder
		#define GEODE_CONCEPT_CHECK_updateLevelOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLevelRevision
		#define GEODE_CONCEPT_CHECK_updateLevelRevision
		GEODE_CONCEPT_FUNCTION_CHECK(updateLevelRevision) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateListOrder
		#define GEODE_CONCEPT_CHECK_updateListOrder
		GEODE_CONCEPT_FUNCTION_CHECK(updateListOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLocalLists
		#define GEODE_CONCEPT_CHECK_setLocalLists
		GEODE_CONCEPT_FUNCTION_CHECK(setLocalLists) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLocalLevels
		#define GEODE_CONCEPT_CHECK_setLocalLevels
		GEODE_CONCEPT_FUNCTION_CHECK(setLocalLevels) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LocalLevelManager> : ModifyBase<ModifyDerive<Der, LocalLevelManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LocalLevelManager>>;
		using ModifyBase<ModifyDerive<Der, LocalLevelManager>>::ModifyBase;
		using Base = LocalLevelManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x46ab30, Thiscall, LocalLevelManager)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46ac00, Default, LocalLevelManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46ad90, Thiscall, LocalLevelManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46b790, Thiscall, LocalLevelManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46b840, Thiscall, LocalLevelManager, didEncodeForSave, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46df80, Thiscall, LocalLevelManager, saveFinished, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46bb90, Thiscall, LocalLevelManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46b700, Thiscall, LocalLevelManager, firstLoad, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f110, Thiscall, LocalLevelManager, filesPicked, std::vector<std::string> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f680, Thiscall, LocalLevelManager, fileShareFinished, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, exportLevelsToFile, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, getAllLevelsInDict, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, getAllLevelsWithName, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, getCreatedLevels, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, getCreatedLists, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, getLevelsInNameGroups, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46b070, Thiscall, LocalLevelManager, getMainLevelString, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46ecf0, Thiscall, LocalLevelManager, importLevelsFromFile, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, importLevelsFromPaths, std::vector<std::string> const&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, markLevelsAsUnmodified, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, moveLevelToBottom, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, moveLevelToTop, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46f700, Thiscall, LocalLevelManager, postFileResults, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, queueFileResults, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, reorderLevels, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, reorderLists, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46add0, Thiscall, LocalLevelManager, tryLoadMainLevelString, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, tryRecoverAutoSaves, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46b690, Thiscall, LocalLevelManager, updateLevelOrder, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46b2f0, Thiscall, LocalLevelManager, updateLevelRevision, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LocalLevelManager, updateListOrder, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, setLocalLists, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LocalLevelManager, setLocalLevels, cocos2d::CCArray*)
		}
	};
}
