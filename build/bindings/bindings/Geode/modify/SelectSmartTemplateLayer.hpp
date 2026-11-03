#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectSmartTemplateLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectSmartTemplateLayer> : ModifyBase<ModifyDerive<Der, SelectSmartTemplateLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectSmartTemplateLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectSmartTemplateLayer>>::ModifyBase;
		using Base = SelectSmartTemplateLayer;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectSmartTemplateLayer, create, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectSmartTemplateLayer, customSetup, )
		}
	};
}
