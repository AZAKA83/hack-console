#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <cocos2d.h>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_createGLTexture
		#define GEODE_STATICS_createGLTexture
		GEODE_AS_STATIC_FUNCTION(createGLTexture) 
	#endif

	#ifndef GEODE_STATICS_initWithContentsOfFile
		#define GEODE_STATICS_initWithContentsOfFile
		GEODE_AS_STATIC_FUNCTION(initWithContentsOfFile) 
	#endif

	#ifndef GEODE_STATICS_unpackPVRv2Data
		#define GEODE_STATICS_unpackPVRv2Data
		GEODE_AS_STATIC_FUNCTION(unpackPVRv2Data) 
	#endif

	#ifndef GEODE_STATICS_unpackPVRv3Data
		#define GEODE_STATICS_unpackPVRv3Data
		GEODE_AS_STATIC_FUNCTION(unpackPVRv3Data) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createGLTexture
		#define GEODE_CONCEPT_CHECK_createGLTexture
		GEODE_CONCEPT_FUNCTION_CHECK(createGLTexture) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWithContentsOfFile
		#define GEODE_CONCEPT_CHECK_initWithContentsOfFile
		GEODE_CONCEPT_FUNCTION_CHECK(initWithContentsOfFile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unpackPVRv2Data
		#define GEODE_CONCEPT_CHECK_unpackPVRv2Data
		GEODE_CONCEPT_FUNCTION_CHECK(unpackPVRv2Data) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unpackPVRv3Data
		#define GEODE_CONCEPT_CHECK_unpackPVRv3Data
		GEODE_CONCEPT_FUNCTION_CHECK(unpackPVRv3Data) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, cocos2d::CCTexturePVR> : ModifyBase<ModifyDerive<Der, cocos2d::CCTexturePVR>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, cocos2d::CCTexturePVR>>;
		using ModifyBase<ModifyDerive<Der, cocos2d::CCTexturePVR>>::ModifyBase;
		using Base = cocos2d::CCTexturePVR;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::getCocos() + 0x143f80, Thiscall, cocos2d::CCTexturePVR, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCTexturePVR, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::getCocos() + 0x144020, Thiscall, cocos2d::CCTexturePVR, createGLTexture, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCTexturePVR, initWithContentsOfFile, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(cocos2d::CCTexturePVR, unpackPVRv2Data, unsigned char*, unsigned int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::getCocos() + 0x144880, Thiscall, cocos2d::CCTexturePVR, unpackPVRv3Data, unsigned char*, unsigned int)
		}
	};
}
