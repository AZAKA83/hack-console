#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdminActionConfirmDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_adminActionConfirmed
		#define GEODE_CONCEPT_CHECK_adminActionConfirmed
		GEODE_CONCEPT_FUNCTION_CHECK(adminActionConfirmed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AdminActionConfirmDelegate> : ModifyBase<ModifyDerive<Der, AdminActionConfirmDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminActionConfirmDelegate>>;
		using ModifyBase<ModifyDerive<Der, AdminActionConfirmDelegate>>::ModifyBase;
		using Base = AdminActionConfirmDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AdminActionConfirmDelegate, adminActionConfirmed, int, std::vector<int> const&, std::string const&)
		}
	};
}
