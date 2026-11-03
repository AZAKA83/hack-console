#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ControllerInputNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onButton
		#define GEODE_STATICS_onButton
		GEODE_AS_STATIC_FUNCTION(onButton) 
	#endif

	#ifndef GEODE_STATICS_refreshVisuals
		#define GEODE_STATICS_refreshVisuals
		GEODE_AS_STATIC_FUNCTION(refreshVisuals) 
	#endif

	#ifndef GEODE_STATICS_setActiveKey
		#define GEODE_STATICS_setActiveKey
		GEODE_AS_STATIC_FUNCTION(setActiveKey) 
	#endif

	#ifndef GEODE_STATICS_setController2
		#define GEODE_STATICS_setController2
		GEODE_AS_STATIC_FUNCTION(setController2) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButton
		#define GEODE_CONCEPT_CHECK_onButton
		GEODE_CONCEPT_FUNCTION_CHECK(onButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshVisuals
		#define GEODE_CONCEPT_CHECK_refreshVisuals
		GEODE_CONCEPT_FUNCTION_CHECK(refreshVisuals) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setActiveKey
		#define GEODE_CONCEPT_CHECK_setActiveKey
		GEODE_CONCEPT_FUNCTION_CHECK(setActiveKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setController2
		#define GEODE_CONCEPT_CHECK_setController2
		GEODE_CONCEPT_FUNCTION_CHECK(setController2) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ControllerInputNode> : ModifyBase<ModifyDerive<Der, ControllerInputNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ControllerInputNode>>;
		using ModifyBase<ModifyDerive<Der, ControllerInputNode>>::ModifyBase;
		using Base = ControllerInputNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x448080, Thiscall, ControllerInputNode)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControllerInputNode, create, InputCaptureDelegate*, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x447b60, Thiscall, ControllerInputNode, init, InputCaptureDelegate*, cocos2d::CCSize const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControllerInputNode, onButton, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControllerInputNode, refreshVisuals, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControllerInputNode, setActiveKey, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControllerInputNode, setController2, bool)
		}
	};
}
