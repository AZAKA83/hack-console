#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SearchButton.hpp>
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SearchButton> : ModifyBase<ModifyDerive<Der, SearchButton>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SearchButton>>;
		using ModifyBase<ModifyDerive<Der, SearchButton>>::ModifyBase;
		using Base = SearchButton;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x43b6d0, Thiscall, SearchButton)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x43b5e0, Default, SearchButton, create, char const*, char const*, float, char const*, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SearchButton, init, char const*, char const*, float, char const*, float)
		}
	};
}
