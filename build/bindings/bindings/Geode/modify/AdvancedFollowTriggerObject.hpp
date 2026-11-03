#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdvancedFollowTriggerObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_customObjectSetup
		#define GEODE_STATICS_customObjectSetup
		GEODE_AS_STATIC_FUNCTION(customObjectSetup) 
	#endif

	#ifndef GEODE_STATICS_getSaveString
		#define GEODE_STATICS_getSaveString
		GEODE_AS_STATIC_FUNCTION(getSaveString) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAdvancedFollowID
		#define GEODE_CONCEPT_CHECK_getAdvancedFollowID
		GEODE_CONCEPT_FUNCTION_CHECK(getAdvancedFollowID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AdvancedFollowTriggerObject> : ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>>;
		using ModifyBase<ModifyDerive<Der, AdvancedFollowTriggerObject>>::ModifyBase;
		using Base = AdvancedFollowTriggerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x637c20, Thiscall, AdvancedFollowTriggerObject, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x637d50, Thiscall, AdvancedFollowTriggerObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AdvancedFollowTriggerObject, create, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x63ef10, Thiscall, AdvancedFollowTriggerObject, customObjectSetup, std::vector<std::string>&, std::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x63d2e0, Thiscall, AdvancedFollowTriggerObject, getSaveString, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AdvancedFollowTriggerObject, getAdvancedFollowID, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AdvancedFollowTriggerObject, init, char const*)
		}
	};
}
