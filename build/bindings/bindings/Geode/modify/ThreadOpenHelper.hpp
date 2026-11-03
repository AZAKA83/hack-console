#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ThreadOpenHelper.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_check
		#define GEODE_STATICS_check
		GEODE_AS_STATIC_FUNCTION(check) 
	#endif

	#ifndef GEODE_STATICS_showRulesOnce
		#define GEODE_STATICS_showRulesOnce
		GEODE_AS_STATIC_FUNCTION(showRulesOnce) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_check
		#define GEODE_CONCEPT_CHECK_check
		GEODE_CONCEPT_FUNCTION_CHECK(check) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showRulesOnce
		#define GEODE_CONCEPT_CHECK_showRulesOnce
		GEODE_CONCEPT_FUNCTION_CHECK(showRulesOnce) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ThreadOpenHelper> : ModifyBase<ModifyDerive<Der, ThreadOpenHelper>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ThreadOpenHelper>>;
		using ModifyBase<ModifyDerive<Der, ThreadOpenHelper>>::ModifyBase;
		using Base = ThreadOpenHelper;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadOpenHelper, check, int, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3fd0, Thiscall, ThreadOpenHelper, showRulesOnce, )
		}
	};
}
