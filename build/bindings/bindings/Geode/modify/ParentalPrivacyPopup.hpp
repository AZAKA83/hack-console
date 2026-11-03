#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ParentalPrivacyPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFinished
		#define GEODE_STATICS_getUserInfoFinished
		GEODE_AS_STATIC_FUNCTION(getUserInfoFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserInfoFailed
		#define GEODE_STATICS_getUserInfoFailed
		GEODE_AS_STATIC_FUNCTION(getUserInfoFailed) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsFinished
		#define GEODE_STATICS_updateSettingsFinished
		GEODE_AS_STATIC_FUNCTION(updateSettingsFinished) 
	#endif

	#ifndef GEODE_STATICS_updateSettingsFailed
		#define GEODE_STATICS_updateSettingsFailed
		GEODE_AS_STATIC_FUNCTION(updateSettingsFailed) 
	#endif

	#ifndef GEODE_STATICS_checkPending
		#define GEODE_STATICS_checkPending
		GEODE_AS_STATIC_FUNCTION(checkPending) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_snapshotIsForOtherAccount
		#define GEODE_STATICS_snapshotIsForOtherAccount
		GEODE_AS_STATIC_FUNCTION(snapshotIsForOtherAccount) 
	#endif

	#ifndef GEODE_STATICS_startWithScore
		#define GEODE_STATICS_startWithScore
		GEODE_AS_STATIC_FUNCTION(startWithScore) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserInfoFinished
		#define GEODE_CONCEPT_CHECK_getUserInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(getUserInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserInfoFailed
		#define GEODE_CONCEPT_CHECK_getUserInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(getUserInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSettingsFinished
		#define GEODE_CONCEPT_CHECK_updateSettingsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(updateSettingsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSettingsFailed
		#define GEODE_CONCEPT_CHECK_updateSettingsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(updateSettingsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkPending
		#define GEODE_CONCEPT_CHECK_checkPending
		GEODE_CONCEPT_FUNCTION_CHECK(checkPending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_snapshotIsForOtherAccount
		#define GEODE_CONCEPT_CHECK_snapshotIsForOtherAccount
		GEODE_CONCEPT_FUNCTION_CHECK(snapshotIsForOtherAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startWithScore
		#define GEODE_CONCEPT_CHECK_startWithScore
		GEODE_CONCEPT_FUNCTION_CHECK(startWithScore) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ParentalPrivacyPopup> : ModifyBase<ModifyDerive<Der, ParentalPrivacyPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ParentalPrivacyPopup>>;
		using ModifyBase<ModifyDerive<Der, ParentalPrivacyPopup>>::ModifyBase;
		using Base = ParentalPrivacyPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4cac00, Thiscall, ParentalPrivacyPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d4010, Default, ParentalPrivacyPopup, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d55b0, Thiscall, ParentalPrivacyPopup, getUserInfoFinished, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d5670, Thiscall, ParentalPrivacyPopup, getUserInfoFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d5720, Thiscall, ParentalPrivacyPopup, updateSettingsFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d5eb0, Thiscall, ParentalPrivacyPopup, updateSettingsFailed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalPrivacyPopup, checkPending, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalPrivacyPopup, init, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalPrivacyPopup, snapshotIsForOtherAccount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ParentalPrivacyPopup, startWithScore, GJUserScore*)
		}
	};
}
