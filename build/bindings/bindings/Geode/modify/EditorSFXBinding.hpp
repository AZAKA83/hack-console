#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSFXBinding.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, EditorSFXBinding> : ModifyBase<ModifyDerive<Der, EditorSFXBinding>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSFXBinding>>;
		using ModifyBase<ModifyDerive<Der, EditorSFXBinding>>::ModifyBase;
		using Base = EditorSFXBinding;
        using Derived = Der;
		void apply() override {

		}
	};
}
