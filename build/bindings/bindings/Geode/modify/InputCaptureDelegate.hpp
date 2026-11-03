#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InputCaptureDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_inputKeySelected
		#define GEODE_CONCEPT_CHECK_inputKeySelected
		GEODE_CONCEPT_FUNCTION_CHECK(inputKeySelected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, InputCaptureDelegate> : ModifyBase<ModifyDerive<Der, InputCaptureDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InputCaptureDelegate>>;
		using ModifyBase<ModifyDerive<Der, InputCaptureDelegate>>::ModifyBase;
		using Base = InputCaptureDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x44d290, Thiscall, InputCaptureDelegate)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(InputCaptureDelegate, inputKeySelected, int)
		}
	};
}
