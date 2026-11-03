#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJFlyGroundLayer.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, GJFlyGroundLayer> : ModifyBase<ModifyDerive<Der, GJFlyGroundLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJFlyGroundLayer>>;
		using ModifyBase<ModifyDerive<Der, GJFlyGroundLayer>>::ModifyBase;
		using Base = GJFlyGroundLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
