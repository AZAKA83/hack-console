#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DropdownListRow.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, DropdownListRow> : ModifyBase<ModifyDerive<Der, DropdownListRow>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DropdownListRow>>;
		using ModifyBase<ModifyDerive<Der, DropdownListRow>>::ModifyBase;
		using Base = DropdownListRow;
        using Derived = Der;
		void apply() override {

		}
	};
}
