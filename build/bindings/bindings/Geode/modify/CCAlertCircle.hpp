#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCAlertCircle.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCAlertCircle> : ModifyBase<ModifyDerive<Der, CCAlertCircle>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCAlertCircle>>;
		using ModifyBase<ModifyDerive<Der, CCAlertCircle>>::ModifyBase;
		using Base = CCAlertCircle;
        using Derived = Der;
		void apply() override {

		}
	};
}
