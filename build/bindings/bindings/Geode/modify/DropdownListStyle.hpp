#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DropdownListStyle.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, DropdownListStyle> : ModifyBase<ModifyDerive<Der, DropdownListStyle>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DropdownListStyle>>;
		using ModifyBase<ModifyDerive<Der, DropdownListStyle>>::ModifyBase;
		using Base = DropdownListStyle;
        using Derived = Der;
		void apply() override {

		}
	};
}
