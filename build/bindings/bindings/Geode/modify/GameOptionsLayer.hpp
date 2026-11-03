#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GameOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPracticeMusicSync
		#define GEODE_CONCEPT_CHECK_onPracticeMusicSync
		GEODE_CONCEPT_FUNCTION_CHECK(onPracticeMusicSync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUIOptions
		#define GEODE_CONCEPT_CHECK_onUIOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onUIOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUIPOptions
		#define GEODE_CONCEPT_CHECK_onUIPOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onUIPOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showPracticeMusicSyncUnlockInfo
		#define GEODE_CONCEPT_CHECK_showPracticeMusicSyncUnlockInfo
		GEODE_CONCEPT_FUNCTION_CHECK(showPracticeMusicSyncUnlockInfo) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GameOptionsLayer> : ModifyBase<ModifyDerive<Der, GameOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GameOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, GameOptionsLayer>>::ModifyBase;
		using Base = GameOptionsLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
