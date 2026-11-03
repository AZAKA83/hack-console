#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/VirtualKeyboardNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_buildKeys
		#define GEODE_STATICS_buildKeys
		GEODE_AS_STATIC_FUNCTION(buildKeys) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onKey
		#define GEODE_STATICS_onKey
		GEODE_AS_STATIC_FUNCTION(onKey) 
	#endif

	#ifndef GEODE_STATICS_refreshModifierVisuals
		#define GEODE_STATICS_refreshModifierVisuals
		GEODE_AS_STATIC_FUNCTION(refreshModifierVisuals) 
	#endif

	#ifndef GEODE_STATICS_resetModifiers
		#define GEODE_STATICS_resetModifiers
		GEODE_AS_STATIC_FUNCTION(resetModifiers) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildKeys
		#define GEODE_CONCEPT_CHECK_buildKeys
		GEODE_CONCEPT_FUNCTION_CHECK(buildKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onKey
		#define GEODE_CONCEPT_CHECK_onKey
		GEODE_CONCEPT_FUNCTION_CHECK(onKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshModifierVisuals
		#define GEODE_CONCEPT_CHECK_refreshModifierVisuals
		GEODE_CONCEPT_FUNCTION_CHECK(refreshModifierVisuals) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetModifiers
		#define GEODE_CONCEPT_CHECK_resetModifiers
		GEODE_CONCEPT_FUNCTION_CHECK(resetModifiers) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, VirtualKeyboardNode> : ModifyBase<ModifyDerive<Der, VirtualKeyboardNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, VirtualKeyboardNode>>;
		using ModifyBase<ModifyDerive<Der, VirtualKeyboardNode>>::ModifyBase;
		using Base = VirtualKeyboardNode;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(VirtualKeyboardNode, create, InputCaptureDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(VirtualKeyboardNode, buildKeys, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(VirtualKeyboardNode, init, InputCaptureDelegate*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(VirtualKeyboardNode, onKey, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(VirtualKeyboardNode, refreshModifierVisuals, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(VirtualKeyboardNode, resetModifiers, )
		}
	};
}
