#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameLevelOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_setupOptions
		#define GEODE_STATICS_setupOptions
		GEODE_AS_STATIC_FUNCTION(setupOptions) 
	#endif

	#ifndef GEODE_STATICS_didToggle
		#define GEODE_STATICS_didToggle
		GEODE_AS_STATIC_FUNCTION(didToggle) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_toggleLDM
		#define GEODE_STATICS_toggleLDM
		GEODE_AS_STATIC_FUNCTION(toggleLDM) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupOptions
		#define GEODE_CONCEPT_CHECK_setupOptions
		GEODE_CONCEPT_FUNCTION_CHECK(setupOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didToggle
		#define GEODE_CONCEPT_CHECK_didToggle
		GEODE_CONCEPT_FUNCTION_CHECK(didToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleLDM
		#define GEODE_CONCEPT_CHECK_toggleLDM
		GEODE_CONCEPT_FUNCTION_CHECK(toggleLDM) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameLevelOptionsLayer> : ModifyBase<ModifyDerive<Der, GameLevelOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameLevelOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, GameLevelOptionsLayer>>::ModifyBase;
		using Base = GameLevelOptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x399cc0, Thiscall, GameLevelOptionsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa2b0, Default, GameLevelOptionsLayer, create, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa5f0, Thiscall, GameLevelOptionsLayer, setupOptions, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa720, Thiscall, GameLevelOptionsLayer, didToggle, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3aa9b0, Thiscall, GameLevelOptionsLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GameLevelOptionsLayer, init, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GameLevelOptionsLayer, toggleLDM, )
		}
	};
}
