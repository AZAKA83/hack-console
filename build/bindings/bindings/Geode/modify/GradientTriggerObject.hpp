#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GradientTriggerObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customObjectSetup
		#define GEODE_CONCEPT_CHECK_customObjectSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customObjectSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSaveString
		#define GEODE_CONCEPT_CHECK_getSaveString
		GEODE_CONCEPT_FUNCTION_CHECK(getSaveString) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GradientTriggerObject> : ModifyBase<ModifyDerive<Der, GradientTriggerObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GradientTriggerObject>>;
		using ModifyBase<ModifyDerive<Der, GradientTriggerObject>>::ModifyBase;
		using Base = GradientTriggerObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x637b60, Thiscall, GradientTriggerObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GradientTriggerObject, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x63b040, Thiscall, GradientTriggerObject, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x63b5e0, Thiscall, GradientTriggerObject, customObjectSetup, std::vector<std::string>&, std::vector<void*>&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x63b0c0, Thiscall, GradientTriggerObject, getSaveString, GJBaseGameLayer*)
		}
	};
}
