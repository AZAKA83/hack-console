#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerTrailState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, PlayerTrailState> : ModifyBase<ModifyDerive<Der, PlayerTrailState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerTrailState>>;
		using ModifyBase<ModifyDerive<Der, PlayerTrailState>>::ModifyBase;
		using Base = PlayerTrailState;
        using Derived = Der;
		void apply() override {

		}
	};
}
