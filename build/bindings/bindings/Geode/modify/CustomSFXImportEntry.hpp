#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSFXImportEntry.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    

	template<class Der>
	struct ModifyDerive<Der, CustomSFXImportEntry> : ModifyBase<ModifyDerive<Der, CustomSFXImportEntry>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXImportEntry>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXImportEntry>>::ModifyBase;
		using Base = CustomSFXImportEntry;
        using Derived = Der;
		void apply() override {

		}
	};
}
