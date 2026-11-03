#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelSettingsObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_objectFromDict
		#define GEODE_STATICS_objectFromDict
		GEODE_AS_STATIC_FUNCTION(objectFromDict) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_findIDByName
		#define GEODE_STATICS_findIDByName
		GEODE_AS_STATIC_FUNCTION(findIDByName) 
	#endif

	#ifndef GEODE_STATICS_getCustomSFXPathRaw
		#define GEODE_STATICS_getCustomSFXPathRaw
		GEODE_AS_STATIC_FUNCTION(getCustomSFXPathRaw) 
	#endif

	#ifndef GEODE_STATICS_getIDName
		#define GEODE_STATICS_getIDName
		GEODE_AS_STATIC_FUNCTION(getIDName) 
	#endif

	#ifndef GEODE_STATICS_getIDNames
		#define GEODE_STATICS_getIDNames
		GEODE_AS_STATIC_FUNCTION(getIDNames) 
	#endif

	#ifndef GEODE_STATICS_getIDUseOrder
		#define GEODE_STATICS_getIDUseOrder
		GEODE_AS_STATIC_FUNCTION(getIDUseOrder) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

	#ifndef GEODE_STATICS_removeFromIDUseOrder
		#define GEODE_STATICS_removeFromIDUseOrder
		GEODE_AS_STATIC_FUNCTION(removeFromIDUseOrder) 
	#endif

	#ifndef GEODE_STATICS_sanitizeIDName
		#define GEODE_STATICS_sanitizeIDName
		GEODE_AS_STATIC_FUNCTION(sanitizeIDName) 
	#endif

	#ifndef GEODE_STATICS_setIDName
		#define GEODE_STATICS_setIDName
		GEODE_AS_STATIC_FUNCTION(setIDName) 
	#endif

	#ifndef GEODE_STATICS_setupColorsFromLegacyMode
		#define GEODE_STATICS_setupColorsFromLegacyMode
		GEODE_AS_STATIC_FUNCTION(setupColorsFromLegacyMode) 
	#endif

	#ifndef GEODE_STATICS_touchIDUsage
		#define GEODE_STATICS_touchIDUsage
		GEODE_AS_STATIC_FUNCTION(touchIDUsage) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromDict
		#define GEODE_CONCEPT_CHECK_objectFromDict
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromDict) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_objectFromString
		#define GEODE_CONCEPT_CHECK_objectFromString
		GEODE_CONCEPT_FUNCTION_CHECK(objectFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_findIDByName
		#define GEODE_CONCEPT_CHECK_findIDByName
		GEODE_CONCEPT_FUNCTION_CHECK(findIDByName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomSFXPathRaw
		#define GEODE_CONCEPT_CHECK_getCustomSFXPathRaw
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomSFXPathRaw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIDName
		#define GEODE_CONCEPT_CHECK_getIDName
		GEODE_CONCEPT_FUNCTION_CHECK(getIDName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIDNames
		#define GEODE_CONCEPT_CHECK_getIDNames
		GEODE_CONCEPT_FUNCTION_CHECK(getIDNames) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getIDUseOrder
		#define GEODE_CONCEPT_CHECK_getIDUseOrder
		GEODE_CONCEPT_FUNCTION_CHECK(getIDUseOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeFromIDUseOrder
		#define GEODE_CONCEPT_CHECK_removeFromIDUseOrder
		GEODE_CONCEPT_FUNCTION_CHECK(removeFromIDUseOrder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sanitizeIDName
		#define GEODE_CONCEPT_CHECK_sanitizeIDName
		GEODE_CONCEPT_FUNCTION_CHECK(sanitizeIDName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setIDName
		#define GEODE_CONCEPT_CHECK_setIDName
		GEODE_CONCEPT_FUNCTION_CHECK(setIDName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupColorsFromLegacyMode
		#define GEODE_CONCEPT_CHECK_setupColorsFromLegacyMode
		GEODE_CONCEPT_FUNCTION_CHECK(setupColorsFromLegacyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shouldUseYSection
		#define GEODE_CONCEPT_CHECK_shouldUseYSection
		GEODE_CONCEPT_FUNCTION_CHECK(shouldUseYSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchIDUsage
		#define GEODE_CONCEPT_CHECK_touchIDUsage
		GEODE_CONCEPT_FUNCTION_CHECK(touchIDUsage) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelSettingsObject> : ModifyBase<ModifyDerive<Der, LevelSettingsObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelSettingsObject>>;
		using ModifyBase<ModifyDerive<Der, LevelSettingsObject>>::ModifyBase;
		using Base = LevelSettingsObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3ecd40, Thiscall, LevelSettingsObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSettingsObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x410b20, Default, LevelSettingsObject, objectFromDict, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSettingsObject, objectFromString, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40ea10, Thiscall, LevelSettingsObject, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, findIDByName, std::string const&, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getCustomSFXPathRaw, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getIDName, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40dba0, Thiscall, LevelSettingsObject, getIDNames, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, getIDUseOrder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x40ed20, Thiscall, LevelSettingsObject, getSaveString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, removeFromIDUseOrder, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, sanitizeIDName, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, setIDName, int, std::string const&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x412c60, Thiscall, LevelSettingsObject, setupColorsFromLegacyMode, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelSettingsObject, shouldUseYSection, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelSettingsObject, touchIDUsage, int, int)
		}
	};
}
