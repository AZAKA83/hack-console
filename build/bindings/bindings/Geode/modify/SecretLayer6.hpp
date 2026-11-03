#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretLayer6.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scene
		#define GEODE_CONCEPT_CHECK_scene
		GEODE_CONCEPT_FUNCTION_CHECK(scene) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBack
		#define GEODE_CONCEPT_CHECK_onBack
		GEODE_CONCEPT_FUNCTION_CHECK(onBack) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startGame01
		#define GEODE_CONCEPT_CHECK_startGame01
		GEODE_CONCEPT_FUNCTION_CHECK(startGame01) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretLayer6> : ModifyBase<ModifyDerive<Der, SecretLayer6>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretLayer6>>;
		using ModifyBase<ModifyDerive<Der, SecretLayer6>>::ModifyBase;
		using Base = SecretLayer6;
        using Derived = Der;
		void apply() override {

		}
	};
}
