#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJEditorSoundConfig.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_encodeWithCoder
		#define GEODE_STATICS_encodeWithCoder
		GEODE_AS_STATIC_FUNCTION(encodeWithCoder) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_clearServerState
		#define GEODE_STATICS_clearServerState
		GEODE_AS_STATIC_FUNCTION(clearServerState) 
	#endif

	#ifndef GEODE_STATICS_copyServerFields
		#define GEODE_STATICS_copyServerFields
		GEODE_AS_STATIC_FUNCTION(copyServerFields) 
	#endif

	#ifndef GEODE_STATICS_createWithCoder
		#define GEODE_STATICS_createWithCoder
		GEODE_AS_STATIC_FUNCTION(createWithCoder) 
	#endif

	#ifndef GEODE_STATICS_dataLoaded
		#define GEODE_STATICS_dataLoaded
		GEODE_AS_STATIC_FUNCTION(dataLoaded) 
	#endif

	#ifndef GEODE_STATICS_getUnpackedSoundDesc
		#define GEODE_STATICS_getUnpackedSoundDesc
		GEODE_AS_STATIC_FUNCTION(getUnpackedSoundDesc) 
	#endif

	#ifndef GEODE_STATICS_showSoundInfo
		#define GEODE_STATICS_showSoundInfo
		GEODE_AS_STATIC_FUNCTION(showSoundInfo) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeWithCoder
		#define GEODE_CONCEPT_CHECK_encodeWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(encodeWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearServerState
		#define GEODE_CONCEPT_CHECK_clearServerState
		GEODE_CONCEPT_FUNCTION_CHECK(clearServerState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyServerFields
		#define GEODE_CONCEPT_CHECK_copyServerFields
		GEODE_CONCEPT_FUNCTION_CHECK(copyServerFields) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createWithCoder
		#define GEODE_CONCEPT_CHECK_createWithCoder
		GEODE_CONCEPT_FUNCTION_CHECK(createWithCoder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUnpackedSoundDesc
		#define GEODE_CONCEPT_CHECK_getUnpackedSoundDesc
		GEODE_CONCEPT_FUNCTION_CHECK(getUnpackedSoundDesc) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showSoundInfo
		#define GEODE_CONCEPT_CHECK_showSoundInfo
		GEODE_CONCEPT_FUNCTION_CHECK(showSoundInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJEditorSoundConfig> : ModifyBase<ModifyDerive<Der, GJEditorSoundConfig>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJEditorSoundConfig>>;
		using ModifyBase<ModifyDerive<Der, GJEditorSoundConfig>>::ModifyBase;
		using Base = GJEditorSoundConfig;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x360130, Thiscall, GJEditorSoundConfig)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEditorSoundConfig, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEditorSoundConfig, create, cocos2d::CCDictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3618e0, Thiscall, GJEditorSoundConfig, encodeWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b060, Thiscall, GJEditorSoundConfig, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEditorSoundConfig, clearServerState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEditorSoundConfig, copyServerFields, GJEditorSoundConfig*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEditorSoundConfig, createWithCoder, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x360ee0, Thiscall, GJEditorSoundConfig, dataLoaded, DS_Dictionary*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJEditorSoundConfig, getUnpackedSoundDesc, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x361180, Thiscall, GJEditorSoundConfig, showSoundInfo, )
		}
	};
}
