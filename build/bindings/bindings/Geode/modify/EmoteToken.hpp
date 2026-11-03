#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EmoteToken.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, EmoteToken> : ModifyBase<ModifyDerive<Der, EmoteToken>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EmoteToken>>;
		using ModifyBase<ModifyDerive<Der, EmoteToken>>::ModifyBase;
		using Base = EmoteToken;
        using Derived = Der;
		void apply() override {

		}
	};
}
