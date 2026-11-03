#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendRowEdges.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendRowEdges> : ModifyBase<ModifyDerive<Der, FriendRowEdges>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendRowEdges>>;
		using ModifyBase<ModifyDerive<Der, FriendRowEdges>>::ModifyBase;
		using Base = FriendRowEdges;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x80dc0, Thiscall, FriendRowEdges)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213020, Thiscall, FriendRowEdges, draw, )
		}
	};
}
