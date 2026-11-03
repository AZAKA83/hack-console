#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJBigSpriteNode.hpp>
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
	struct ModifyDerive<Der, GJBigSpriteNode> : ModifyBase<ModifyDerive<Der, GJBigSpriteNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJBigSpriteNode>>;
		using ModifyBase<ModifyDerive<Der, GJBigSpriteNode>>::ModifyBase;
		using Base = GJBigSpriteNode;
        using Derived = Der;
		void apply() override {

		}
	};
}
