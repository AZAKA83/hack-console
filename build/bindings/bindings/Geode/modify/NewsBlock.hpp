#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NewsBlock.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, NewsBlock> : ModifyBase<ModifyDerive<Der, NewsBlock>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NewsBlock>>;
		using ModifyBase<ModifyDerive<Der, NewsBlock>>::ModifyBase;
		using Base = NewsBlock;
        using Derived = Der;
		void apply() override {

		}
	};
}
