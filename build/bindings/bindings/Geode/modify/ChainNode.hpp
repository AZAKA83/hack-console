#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ChainNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, ChainNode> : ModifyBase<ModifyDerive<Der, ChainNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ChainNode>>;
		using ModifyBase<ModifyDerive<Der, ChainNode>>::ModifyBase;
		using Base = ChainNode;
        using Derived = Der;
		void apply() override {

		}
	};
}
