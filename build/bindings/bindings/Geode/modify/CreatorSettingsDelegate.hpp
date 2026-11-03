#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreatorSettingsDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_creatorDescriptionChanged
		#define GEODE_CONCEPT_CHECK_creatorDescriptionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(creatorDescriptionChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreatorSettingsDelegate> : ModifyBase<ModifyDerive<Der, CreatorSettingsDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreatorSettingsDelegate>>;
		using ModifyBase<ModifyDerive<Der, CreatorSettingsDelegate>>::ModifyBase;
		using Base = CreatorSettingsDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1780d0, Thiscall, CreatorSettingsDelegate)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CreatorSettingsDelegate, creatorDescriptionChanged, std::string const&)
		}
	};
}
