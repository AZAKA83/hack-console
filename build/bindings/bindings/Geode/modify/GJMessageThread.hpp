#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJMessageThread.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createRoleBadge
		#define GEODE_STATICS_createRoleBadge
		GEODE_AS_STATIC_FUNCTION(createRoleBadge) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createRoleBadge
		#define GEODE_CONCEPT_CHECK_createRoleBadge
		GEODE_CONCEPT_FUNCTION_CHECK(createRoleBadge) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJMessageThread> : ModifyBase<ModifyDerive<Der, GJMessageThread>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJMessageThread>>;
		using ModifyBase<ModifyDerive<Der, GJMessageThread>>::ModifyBase;
		using Base = GJMessageThread;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xabf30, Thiscall, GJMessageThread)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJMessageThread, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x24f260, Thiscall, GJMessageThread, createRoleBadge, float)
		}
	};
}
