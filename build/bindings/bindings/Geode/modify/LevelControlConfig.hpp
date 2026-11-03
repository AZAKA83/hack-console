#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelControlConfig.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_bindGlobalBinds
		#define GEODE_STATICS_bindGlobalBinds
		GEODE_AS_STATIC_FUNCTION(bindGlobalBinds) 
	#endif

	#ifndef GEODE_STATICS_bindDefaultController
		#define GEODE_STATICS_bindDefaultController
		GEODE_AS_STATIC_FUNCTION(bindDefaultController) 
	#endif

	#ifndef GEODE_STATICS_bindDefaultKeyboard
		#define GEODE_STATICS_bindDefaultKeyboard
		GEODE_AS_STATIC_FUNCTION(bindDefaultKeyboard) 
	#endif

	#ifndef GEODE_STATICS_createFromB64
		#define GEODE_STATICS_createFromB64
		GEODE_AS_STATIC_FUNCTION(createFromB64) 
	#endif

	#ifndef GEODE_STATICS_createFromGlobal
		#define GEODE_STATICS_createFromGlobal
		GEODE_AS_STATIC_FUNCTION(createFromGlobal) 
	#endif

	#ifndef GEODE_STATICS_decode
		#define GEODE_STATICS_decode
		GEODE_AS_STATIC_FUNCTION(decode) 
	#endif

	#ifndef GEODE_STATICS_encode
		#define GEODE_STATICS_encode
		GEODE_AS_STATIC_FUNCTION(encode) 
	#endif

	#ifndef GEODE_STATICS_resolveSlot
		#define GEODE_STATICS_resolveSlot
		GEODE_AS_STATIC_FUNCTION(resolveSlot) 
	#endif

	#ifndef GEODE_STATICS_seedBase
		#define GEODE_STATICS_seedBase
		GEODE_AS_STATIC_FUNCTION(seedBase) 
	#endif

	#ifndef GEODE_STATICS_slotFromConfig
		#define GEODE_STATICS_slotFromConfig
		GEODE_AS_STATIC_FUNCTION(slotFromConfig) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bindGlobalBinds
		#define GEODE_CONCEPT_CHECK_bindGlobalBinds
		GEODE_CONCEPT_FUNCTION_CHECK(bindGlobalBinds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bindDefaultController
		#define GEODE_CONCEPT_CHECK_bindDefaultController
		GEODE_CONCEPT_FUNCTION_CHECK(bindDefaultController) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bindDefaultKeyboard
		#define GEODE_CONCEPT_CHECK_bindDefaultKeyboard
		GEODE_CONCEPT_FUNCTION_CHECK(bindDefaultKeyboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromB64
		#define GEODE_CONCEPT_CHECK_createFromB64
		GEODE_CONCEPT_FUNCTION_CHECK(createFromB64) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromGlobal
		#define GEODE_CONCEPT_CHECK_createFromGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(createFromGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_decode
		#define GEODE_CONCEPT_CHECK_decode
		GEODE_CONCEPT_FUNCTION_CHECK(decode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encode
		#define GEODE_CONCEPT_CHECK_encode
		GEODE_CONCEPT_FUNCTION_CHECK(encode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeB64
		#define GEODE_CONCEPT_CHECK_encodeB64
		GEODE_CONCEPT_FUNCTION_CHECK(encodeB64) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keepClasses
		#define GEODE_CONCEPT_CHECK_keepClasses
		GEODE_CONCEPT_FUNCTION_CHECK(keepClasses) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_presentClasses
		#define GEODE_CONCEPT_CHECK_presentClasses
		GEODE_CONCEPT_FUNCTION_CHECK(presentClasses) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resolveSlot
		#define GEODE_CONCEPT_CHECK_resolveSlot
		GEODE_CONCEPT_FUNCTION_CHECK(resolveSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_seedBase
		#define GEODE_CONCEPT_CHECK_seedBase
		GEODE_CONCEPT_FUNCTION_CHECK(seedBase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_seedDefaults
		#define GEODE_CONCEPT_CHECK_seedDefaults
		GEODE_CONCEPT_FUNCTION_CHECK(seedDefaults) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_slotFromConfig
		#define GEODE_CONCEPT_CHECK_slotFromConfig
		GEODE_CONCEPT_FUNCTION_CHECK(slotFromConfig) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelControlConfig> : ModifyBase<ModifyDerive<Der, LevelControlConfig>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelControlConfig>>;
		using ModifyBase<ModifyDerive<Der, LevelControlConfig>>::ModifyBase;
		using Base = LevelControlConfig;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a1d0, Default, LevelControlConfig, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b3e0, Default, LevelControlConfig, bindGlobalBinds, KeybindSource*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b2b0, Default, LevelControlConfig, bindDefaultController, KeybindSource*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b210, Default, LevelControlConfig, bindDefaultKeyboard, KeybindSource*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b0f0, Default, LevelControlConfig, createFromB64, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b6d0, Default, LevelControlConfig, createFromGlobal, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44aa20, Thiscall, LevelControlConfig, decode, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44a430, Thiscall, LevelControlConfig, encode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelControlConfig, encodeB64, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelControlConfig, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelControlConfig, keepClasses, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelControlConfig, presentClasses, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44bad0, Thiscall, LevelControlConfig, resolveSlot, LevelTouchSlot const&, cocos2d::CCSize const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44b640, Thiscall, LevelControlConfig, seedBase, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelControlConfig, seedDefaults, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelControlConfig, slotFromConfig, UIButtonConfig const&, cocos2d::CCSize const&, int, int, bool, bool)
		}
	};
}
