#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCNodeContainer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCNodeContainer> : ModifyBase<ModifyDerive<Der, CCNodeContainer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCNodeContainer>>;
		using ModifyBase<ModifyDerive<Der, CCNodeContainer>>::ModifyBase;
		using Base = CCNodeContainer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x353030, Thiscall, CCNodeContainer)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCNodeContainer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x8b060, Thiscall, CCNodeContainer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x353070, Thiscall, CCNodeContainer, visit, )
		}
	};
}
