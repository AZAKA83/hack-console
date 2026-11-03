#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSmartTemplate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_applyTransformationsForType
		#define GEODE_STATICS_applyTransformationsForType
		GEODE_AS_STATIC_FUNCTION(applyTransformationsForType) 
	#endif

	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_flipBlockType
		#define GEODE_STATICS_flipBlockType
		GEODE_AS_STATIC_FUNCTION(flipBlockType) 
	#endif

	#ifndef GEODE_STATICS_flipKey
		#define GEODE_STATICS_flipKey
		GEODE_AS_STATIC_FUNCTION(flipKey) 
	#endif

	#ifndef GEODE_STATICS_generateRemapDict
		#define GEODE_STATICS_generateRemapDict
		GEODE_AS_STATIC_FUNCTION(generateRemapDict) 
	#endif

	#ifndef GEODE_STATICS_getSimplifiedKey
		#define GEODE_STATICS_getSimplifiedKey
		GEODE_AS_STATIC_FUNCTION(getSimplifiedKey) 
	#endif

	#ifndef GEODE_STATICS_getVerySimplifiedKey
		#define GEODE_STATICS_getVerySimplifiedKey
		GEODE_AS_STATIC_FUNCTION(getVerySimplifiedKey) 
	#endif

	#ifndef GEODE_STATICS_keyFromNeighbors
		#define GEODE_STATICS_keyFromNeighbors
		GEODE_AS_STATIC_FUNCTION(keyFromNeighbors) 
	#endif

	#ifndef GEODE_STATICS_offsetForDir
		#define GEODE_STATICS_offsetForDir
		GEODE_AS_STATIC_FUNCTION(offsetForDir) 
	#endif

	#ifndef GEODE_STATICS_offsetForType
		#define GEODE_STATICS_offsetForType
		GEODE_AS_STATIC_FUNCTION(offsetForType) 
	#endif

	#ifndef GEODE_STATICS_rotateBlockType
		#define GEODE_STATICS_rotateBlockType
		GEODE_AS_STATIC_FUNCTION(rotateBlockType) 
	#endif

	#ifndef GEODE_STATICS_rotateKey
		#define GEODE_STATICS_rotateKey
		GEODE_AS_STATIC_FUNCTION(rotateKey) 
	#endif

	#ifndef GEODE_STATICS_smartObjectToType
		#define GEODE_STATICS_smartObjectToType
		GEODE_AS_STATIC_FUNCTION(smartObjectToType) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_getNoCornerKey
		#define GEODE_STATICS_getNoCornerKey
		GEODE_AS_STATIC_FUNCTION(getNoCornerKey) 
	#endif

	#ifndef GEODE_STATICS_getPrefab
		#define GEODE_STATICS_getPrefab
		GEODE_AS_STATIC_FUNCTION(getPrefab) 
	#endif

	#ifndef GEODE_STATICS_getPrefabWithID
		#define GEODE_STATICS_getPrefabWithID
		GEODE_AS_STATIC_FUNCTION(getPrefabWithID) 
	#endif

	#ifndef GEODE_STATICS_getRandomPrefab
		#define GEODE_STATICS_getRandomPrefab
		GEODE_AS_STATIC_FUNCTION(getRandomPrefab) 
	#endif

	#ifndef GEODE_STATICS_getTemplateState
		#define GEODE_STATICS_getTemplateState
		GEODE_AS_STATIC_FUNCTION(getTemplateState) 
	#endif

	#ifndef GEODE_STATICS_getTotalChanceForPrefab
		#define GEODE_STATICS_getTotalChanceForPrefab
		GEODE_AS_STATIC_FUNCTION(getTotalChanceForPrefab) 
	#endif

	#ifndef GEODE_STATICS_isUnrequired
		#define GEODE_STATICS_isUnrequired
		GEODE_AS_STATIC_FUNCTION(isUnrequired) 
	#endif

	#ifndef GEODE_STATICS_logTemplateStatus
		#define GEODE_STATICS_logTemplateStatus
		GEODE_AS_STATIC_FUNCTION(logTemplateStatus) 
	#endif

	#ifndef GEODE_STATICS_saveRemap
		#define GEODE_STATICS_saveRemap
		GEODE_AS_STATIC_FUNCTION(saveRemap) 
	#endif

	#ifndef GEODE_STATICS_saveRemapToDict
		#define GEODE_STATICS_saveRemapToDict
		GEODE_AS_STATIC_FUNCTION(saveRemapToDict) 
	#endif

	#ifndef GEODE_STATICS_scanForPrefab
		#define GEODE_STATICS_scanForPrefab
		GEODE_AS_STATIC_FUNCTION(scanForPrefab) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_applyTransformationsForType
		#define GEODE_CONCEPT_CHECK_applyTransformationsForType
		GEODE_CONCEPT_FUNCTION_CHECK(applyTransformationsForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipBlockType
		#define GEODE_CONCEPT_CHECK_flipBlockType
		GEODE_CONCEPT_FUNCTION_CHECK(flipBlockType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipBlockTypeX
		#define GEODE_CONCEPT_CHECK_flipBlockTypeX
		GEODE_CONCEPT_FUNCTION_CHECK(flipBlockTypeX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipBlockTypeY
		#define GEODE_CONCEPT_CHECK_flipBlockTypeY
		GEODE_CONCEPT_FUNCTION_CHECK(flipBlockTypeY) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_flipKey
		#define GEODE_CONCEPT_CHECK_flipKey
		GEODE_CONCEPT_FUNCTION_CHECK(flipKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateRemapDict
		#define GEODE_CONCEPT_CHECK_generateRemapDict
		GEODE_CONCEPT_FUNCTION_CHECK(generateRemapDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSimplifiedKey
		#define GEODE_CONCEPT_CHECK_getSimplifiedKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSimplifiedKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSimplifiedType
		#define GEODE_CONCEPT_CHECK_getSimplifiedType
		GEODE_CONCEPT_FUNCTION_CHECK(getSimplifiedType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getVerySimplifiedKey
		#define GEODE_CONCEPT_CHECK_getVerySimplifiedKey
		GEODE_CONCEPT_FUNCTION_CHECK(getVerySimplifiedKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyFromNeighbors
		#define GEODE_CONCEPT_CHECK_keyFromNeighbors
		GEODE_CONCEPT_FUNCTION_CHECK(keyFromNeighbors) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyFromNeighborsOld
		#define GEODE_CONCEPT_CHECK_keyFromNeighborsOld
		GEODE_CONCEPT_FUNCTION_CHECK(keyFromNeighborsOld) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForDir
		#define GEODE_CONCEPT_CHECK_offsetForDir
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForObject
		#define GEODE_CONCEPT_CHECK_offsetForObject
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetForType
		#define GEODE_CONCEPT_CHECK_offsetForType
		GEODE_CONCEPT_FUNCTION_CHECK(offsetForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateBlockType
		#define GEODE_CONCEPT_CHECK_rotateBlockType
		GEODE_CONCEPT_FUNCTION_CHECK(rotateBlockType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateBlockType90
		#define GEODE_CONCEPT_CHECK_rotateBlockType90
		GEODE_CONCEPT_FUNCTION_CHECK(rotateBlockType90) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rotateKey
		#define GEODE_CONCEPT_CHECK_rotateKey
		GEODE_CONCEPT_FUNCTION_CHECK(rotateKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldDiscardObject
		#define GEODE_CONCEPT_CHECK_shouldDiscardObject
		GEODE_CONCEPT_FUNCTION_CHECK(shouldDiscardObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_smartObjectToType
		#define GEODE_CONCEPT_CHECK_smartObjectToType
		GEODE_CONCEPT_FUNCTION_CHECK(smartObjectToType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_smartTypeToObjectKey
		#define GEODE_CONCEPT_CHECK_smartTypeToObjectKey
		GEODE_CONCEPT_FUNCTION_CHECK(smartTypeToObjectKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canEncode
		#define GEODE_CONCEPT_CHECK_canEncode
		GEODE_CONCEPT_FUNCTION_CHECK(canEncode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNoCornerKey
		#define GEODE_CONCEPT_CHECK_getNoCornerKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNoCornerKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrefab
		#define GEODE_CONCEPT_CHECK_getPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(getPrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrefabs
		#define GEODE_CONCEPT_CHECK_getPrefabs
		GEODE_CONCEPT_FUNCTION_CHECK(getPrefabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrefabWithID
		#define GEODE_CONCEPT_CHECK_getPrefabWithID
		GEODE_CONCEPT_FUNCTION_CHECK(getPrefabWithID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRandomPrefab
		#define GEODE_CONCEPT_CHECK_getRandomPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(getRandomPrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTemplateState
		#define GEODE_CONCEPT_CHECK_getTemplateState
		GEODE_CONCEPT_FUNCTION_CHECK(getTemplateState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTotalChanceForPrefab
		#define GEODE_CONCEPT_CHECK_getTotalChanceForPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(getTotalChanceForPrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isUnrequired
		#define GEODE_CONCEPT_CHECK_isUnrequired
		GEODE_CONCEPT_FUNCTION_CHECK(isUnrequired) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_logTemplateStatus
		#define GEODE_CONCEPT_CHECK_logTemplateStatus
		GEODE_CONCEPT_FUNCTION_CHECK(logTemplateStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removePrefab
		#define GEODE_CONCEPT_CHECK_removePrefab
		GEODE_CONCEPT_FUNCTION_CHECK(removePrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetScannedPrefabs
		#define GEODE_CONCEPT_CHECK_resetScannedPrefabs
		GEODE_CONCEPT_FUNCTION_CHECK(resetScannedPrefabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_savePrefab
		#define GEODE_CONCEPT_CHECK_savePrefab
		GEODE_CONCEPT_FUNCTION_CHECK(savePrefab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveRemap
		#define GEODE_CONCEPT_CHECK_saveRemap
		GEODE_CONCEPT_FUNCTION_CHECK(saveRemap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveRemapToDict
		#define GEODE_CONCEPT_CHECK_saveRemapToDict
		GEODE_CONCEPT_FUNCTION_CHECK(saveRemapToDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scanForPrefab
		#define GEODE_CONCEPT_CHECK_scanForPrefab
		GEODE_CONCEPT_FUNCTION_CHECK(scanForPrefab) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSmartTemplate> : ModifyBase<ModifyDerive<Der, GJSmartTemplate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSmartTemplate>>;
		using ModifyBase<ModifyDerive<Der, GJSmartTemplate>>::ModifyBase;
		using Base = GJSmartTemplate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3b69f0, Thiscall, GJSmartTemplate)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9c20, Default, GJSmartTemplate, applyTransformationsForType, SmartBlockType, cocos2d::CCSprite*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b6df0, Default, GJSmartTemplate, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba550, Default, GJSmartTemplate, flipBlockType, SmartBlockType, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, flipBlockTypeX, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, flipBlockTypeY, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bab30, Default, GJSmartTemplate, flipKey, std::string, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJSmartTemplate, generateRemapDict, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b7540, Default, GJSmartTemplate, getSimplifiedKey, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, getSimplifiedType, SmartBlockType, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b7ce0, Default, GJSmartTemplate, getVerySimplifiedKey, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, keyFromNeighbors, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9ff0, Default, GJSmartTemplate, keyFromNeighbors, cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, keyFromNeighborsOld, bool, bool, bool, bool, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9a30, Default, GJSmartTemplate, offsetForDir, GJSmartDirection, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, offsetForObject, SmartGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9b30, Default, GJSmartTemplate, offsetForType, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba3e0, Default, GJSmartTemplate, rotateBlockType, SmartBlockType, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, rotateBlockType90, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ba7d0, Default, GJSmartTemplate, rotateKey, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, shouldDiscardObject, SmartBlockType, GJSmartDirection)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9d60, Default, GJSmartTemplate, smartObjectToType, SmartGameObject*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, smartTypeToObjectKey, SmartBlockType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bbd30, Thiscall, GJSmartTemplate, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, canEncode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bba60, Thiscall, GJSmartTemplate, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b7df0, Thiscall, GJSmartTemplate, getNoCornerKey, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9000, Thiscall, GJSmartTemplate, getPrefab, std::string, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, getPrefab, cocos2d::CCPoint, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*, SmartGameObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, getPrefabs, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b9970, Thiscall, GJSmartTemplate, getPrefabWithID, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8e90, Thiscall, GJSmartTemplate, getRandomPrefab, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bb430, Thiscall, GJSmartTemplate, getTemplateState, std::vector<SmartPrefabResult>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b8dd0, Thiscall, GJSmartTemplate, getTotalChanceForPrefab, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bb280, Thiscall, GJSmartTemplate, isUnrequired, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3bae60, Thiscall, GJSmartTemplate, logTemplateStatus, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, removePrefab, std::string, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, resetScannedPrefabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSmartTemplate, savePrefab, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b6f70, Thiscall, GJSmartTemplate, saveRemap, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b7350, Thiscall, GJSmartTemplate, saveRemapToDict, std::string, std::string, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3b7f80, Thiscall, GJSmartTemplate, scanForPrefab, std::string)
		}
	};
}
