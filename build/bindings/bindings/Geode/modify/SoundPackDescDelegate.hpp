#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SoundPackDescDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_soundPackDescSaved
		#define GEODE_CONCEPT_CHECK_soundPackDescSaved
		GEODE_CONCEPT_FUNCTION_CHECK(soundPackDescSaved) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SoundPackDescDelegate> : ModifyBase<ModifyDerive<Der, SoundPackDescDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SoundPackDescDelegate>>;
		using ModifyBase<ModifyDerive<Der, SoundPackDescDelegate>>::ModifyBase;
		using Base = SoundPackDescDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SoundPackDescDelegate, soundPackDescSaved, std::string const&, std::string const&)
		}
	};
}
