#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreateStartPosPopupDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_createStartPosPopupClosed
		#define GEODE_CONCEPT_CHECK_createStartPosPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(createStartPosPopupClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreateStartPosPopupDelegate> : ModifyBase<ModifyDerive<Der, CreateStartPosPopupDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreateStartPosPopupDelegate>>;
		using ModifyBase<ModifyDerive<Der, CreateStartPosPopupDelegate>>::ModifyBase;
		using Base = CreateStartPosPopupDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CreateStartPosPopupDelegate, createStartPosPopupClosed, CreateStartPosPopup*)
		}
	};
}
