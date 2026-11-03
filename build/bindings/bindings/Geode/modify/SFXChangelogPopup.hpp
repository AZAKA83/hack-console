#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXChangelogPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_buildContent
		#define GEODE_STATICS_buildContent
		GEODE_AS_STATIC_FUNCTION(buildContent) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCredits
		#define GEODE_STATICS_onCredits
		GEODE_AS_STATIC_FUNCTION(onCredits) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildContent
		#define GEODE_CONCEPT_CHECK_buildContent
		GEODE_CONCEPT_FUNCTION_CHECK(buildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCredits
		#define GEODE_CONCEPT_CHECK_onCredits
		GEODE_CONCEPT_FUNCTION_CHECK(onCredits) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXChangelogPopup> : ModifyBase<ModifyDerive<Der, SFXChangelogPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXChangelogPopup>>;
		using ModifyBase<ModifyDerive<Der, SFXChangelogPopup>>::ModifyBase;
		using Base = SFXChangelogPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x6218d0, Thiscall, SFXChangelogPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXChangelogPopup, create, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x621370, Thiscall, SFXChangelogPopup, buildContent, cocos2d::CCNode*, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXChangelogPopup, init, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x621270, Thiscall, SFXChangelogPopup, onCredits, cocos2d::CCObject*)
		}
	};
}
