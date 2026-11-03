#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TabbedPopupTab.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, TabbedPopupTab> : ModifyBase<ModifyDerive<Der, TabbedPopupTab>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TabbedPopupTab>>;
		using ModifyBase<ModifyDerive<Der, TabbedPopupTab>>::ModifyBase;
		using Base = TabbedPopupTab;
        using Derived = Der;
		void apply() override {

		}
	};
}
