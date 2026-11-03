#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MusicChangelogPopup.hpp>
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


	template<class Der>
	struct ModifyDerive<Der, MusicChangelogPopup> : ModifyBase<ModifyDerive<Der, MusicChangelogPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MusicChangelogPopup>>;
		using ModifyBase<ModifyDerive<Der, MusicChangelogPopup>>::ModifyBase;
		using Base = MusicChangelogPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicChangelogPopup, create, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x47fa60, Thiscall, MusicChangelogPopup, buildContent, cocos2d::CCNode*, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MusicChangelogPopup, init, cocos2d::CCArray*)
		}
	};
}
