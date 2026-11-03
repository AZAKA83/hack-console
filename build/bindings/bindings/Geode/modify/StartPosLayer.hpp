#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/StartPosLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_addModeButtons
		#define GEODE_STATICS_addModeButtons
		GEODE_AS_STATIC_FUNCTION(addModeButtons) 
	#endif

	#ifndef GEODE_STATICS_addSpeedButtons
		#define GEODE_STATICS_addSpeedButtons
		GEODE_AS_STATIC_FUNCTION(addSpeedButtons) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onSelectMode
		#define GEODE_STATICS_onSelectMode
		GEODE_AS_STATIC_FUNCTION(onSelectMode) 
	#endif

	#ifndef GEODE_STATICS_onSelectSpeed
		#define GEODE_STATICS_onSelectSpeed
		GEODE_AS_STATIC_FUNCTION(onSelectSpeed) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputNode
		#define GEODE_CONCEPT_CHECK_updateInputNode
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addModeButtons
		#define GEODE_CONCEPT_CHECK_addModeButtons
		GEODE_CONCEPT_FUNCTION_CHECK(addModeButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addSpeedButtons
		#define GEODE_CONCEPT_CHECK_addSpeedButtons
		GEODE_CONCEPT_FUNCTION_CHECK(addSpeedButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectMode
		#define GEODE_CONCEPT_CHECK_onSelectMode
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectSpeed
		#define GEODE_CONCEPT_CHECK_onSelectSpeed
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectSpeed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, StartPosLayer> : ModifyBase<ModifyDerive<Der, StartPosLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, StartPosLayer>>;
		using ModifyBase<ModifyDerive<Der, StartPosLayer>>::ModifyBase;
		using Base = StartPosLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x457a00, Thiscall, StartPosLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(StartPosLayer, create, StartPosObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45ec30, Thiscall, StartPosLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f000, Thiscall, StartPosLayer, updateInputNode, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f420, Thiscall, StartPosLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f210, Thiscall, StartPosLayer, getValue, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f710, Thiscall, StartPosLayer, addModeButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f9f0, Thiscall, StartPosLayer, addSpeedButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45de00, Thiscall, StartPosLayer, init, StartPosObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45f990, Thiscall, StartPosLayer, onSelectMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x45fc90, Thiscall, StartPosLayer, onSelectSpeed, cocos2d::CCObject*)
		}
	};
}
