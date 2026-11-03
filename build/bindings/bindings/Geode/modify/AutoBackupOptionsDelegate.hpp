#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AutoBackupOptionsDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_backupsChanged
		#define GEODE_CONCEPT_CHECK_backupsChanged
		GEODE_CONCEPT_FUNCTION_CHECK(backupsChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AutoBackupOptionsDelegate> : ModifyBase<ModifyDerive<Der, AutoBackupOptionsDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AutoBackupOptionsDelegate>>;
		using ModifyBase<ModifyDerive<Der, AutoBackupOptionsDelegate>>::ModifyBase;
		using Base = AutoBackupOptionsDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AutoBackupOptionsDelegate, backupsChanged, )
		}
	};
}
