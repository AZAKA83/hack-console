#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSFXImportOptions.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, EditorSFXImportOptions> : ModifyBase<ModifyDerive<Der, EditorSFXImportOptions>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSFXImportOptions>>;
		using ModifyBase<ModifyDerive<Der, EditorSFXImportOptions>>::ModifyBase;
		using Base = EditorSFXImportOptions;
        using Derived = Der;
		void apply() override {

		}
	};
}
