#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ValueControlSettings.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, ValueControlSettings> : ModifyBase<ModifyDerive<Der, ValueControlSettings>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ValueControlSettings>>;
		using ModifyBase<ModifyDerive<Der, ValueControlSettings>>::ModifyBase;
		using Base = ValueControlSettings;
        using Derived = Der;
		void apply() override {

		}
	};
}
