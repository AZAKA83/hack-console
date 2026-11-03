#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorBuildStats.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_fromString
		#define GEODE_STATICS_fromString
		GEODE_AS_STATIC_FUNCTION(fromString) 
	#endif

	#ifndef GEODE_STATICS_toString
		#define GEODE_STATICS_toString
		GEODE_AS_STATIC_FUNCTION(toString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_fromString
		#define GEODE_CONCEPT_CHECK_fromString
		GEODE_CONCEPT_FUNCTION_CHECK(fromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_noteAction
		#define GEODE_CONCEPT_CHECK_noteAction
		GEODE_CONCEPT_FUNCTION_CHECK(noteAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toString
		#define GEODE_CONCEPT_CHECK_toString
		GEODE_CONCEPT_FUNCTION_CHECK(toString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorBuildStats> : ModifyBase<ModifyDerive<Der, EditorBuildStats>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorBuildStats>>;
		using ModifyBase<ModifyDerive<Der, EditorBuildStats>>::ModifyBase;
		using Base = EditorBuildStats;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorBuildStats, fromString, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorBuildStats, noteAction, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorBuildStats, toString, )
		}
	};
}
