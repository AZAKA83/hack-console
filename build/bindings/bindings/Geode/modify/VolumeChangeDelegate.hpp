#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/VolumeChangeDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_volumeChanged
		#define GEODE_CONCEPT_CHECK_volumeChanged
		GEODE_CONCEPT_FUNCTION_CHECK(volumeChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, VolumeChangeDelegate> : ModifyBase<ModifyDerive<Der, VolumeChangeDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, VolumeChangeDelegate>>;
		using ModifyBase<ModifyDerive<Der, VolumeChangeDelegate>>::ModifyBase;
		using Base = VolumeChangeDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(VolumeChangeDelegate, volumeChanged, )
		}
	};
}
