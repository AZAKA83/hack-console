#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/IDNameBrowserDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_idNameBrowserClosed
		#define GEODE_CONCEPT_CHECK_idNameBrowserClosed
		GEODE_CONCEPT_FUNCTION_CHECK(idNameBrowserClosed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, IDNameBrowserDelegate> : ModifyBase<ModifyDerive<Der, IDNameBrowserDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, IDNameBrowserDelegate>>;
		using ModifyBase<ModifyDerive<Der, IDNameBrowserDelegate>>::ModifyBase;
		using Base = IDNameBrowserDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(IDNameBrowserDelegate, idNameBrowserClosed, IDNameBrowserPopup*, int)
		}
	};
}
