#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EmoteDef.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, EmoteDef> : ModifyBase<ModifyDerive<Der, EmoteDef>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EmoteDef>>;
		using ModifyBase<ModifyDerive<Der, EmoteDef>>::ModifyBase;
		using Base = EmoteDef;
        using Derived = Der;
		void apply() override {

		}
	};
}
