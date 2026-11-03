#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJLinkObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_getTitle
		#define GEODE_STATICS_getTitle
		GEODE_AS_STATIC_FUNCTION(getTitle) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_getTitle
		#define GEODE_CONCEPT_CHECK_getTitle
		GEODE_CONCEPT_FUNCTION_CHECK(getTitle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJLinkObject> : ModifyBase<ModifyDerive<Der, GJLinkObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJLinkObject>>;
		using ModifyBase<ModifyDerive<Der, GJLinkObject>>::ModifyBase;
		using Base = GJLinkObject;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJLinkObject, getTitle, )
		}
	};
}
