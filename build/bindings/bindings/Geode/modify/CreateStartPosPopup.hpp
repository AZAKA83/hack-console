#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreateStartPosPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_updateInputNode
		#define GEODE_STATICS_updateInputNode
		GEODE_AS_STATIC_FUNCTION(updateInputNode) 
	#endif

	#ifndef GEODE_STATICS_onCreate
		#define GEODE_STATICS_onCreate
		GEODE_AS_STATIC_FUNCTION(onCreate) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateInputNode
		#define GEODE_CONCEPT_CHECK_updateInputNode
		GEODE_CONCEPT_FUNCTION_CHECK(updateInputNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreate
		#define GEODE_CONCEPT_CHECK_onCreate
		GEODE_CONCEPT_FUNCTION_CHECK(onCreate) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreateStartPosPopup> : ModifyBase<ModifyDerive<Der, CreateStartPosPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreateStartPosPopup>>;
		using ModifyBase<ModifyDerive<Der, CreateStartPosPopup>>::ModifyBase;
		using Base = CreateStartPosPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4d6750, Thiscall, CreateStartPosPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CreateStartPosPopup, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dc3c0, Thiscall, CreateStartPosPopup, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dd000, Thiscall, CreateStartPosPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dc940, Thiscall, CreateStartPosPopup, updateInputNode, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dc950, Thiscall, CreateStartPosPopup, onCreate, cocos2d::CCObject*)
		}
	};
}
