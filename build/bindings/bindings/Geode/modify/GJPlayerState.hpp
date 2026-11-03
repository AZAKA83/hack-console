#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJPlayerState.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, GJPlayerState> : ModifyBase<ModifyDerive<Der, GJPlayerState>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJPlayerState>>;
		using ModifyBase<ModifyDerive<Der, GJPlayerState>>::ModifyBase;
		using Base = GJPlayerState;
        using Derived = Der;
		void apply() override {

		}
	};
}
