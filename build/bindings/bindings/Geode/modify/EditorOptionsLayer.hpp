#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorOptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupOptions
		#define GEODE_CONCEPT_CHECK_setupOptions
		GEODE_CONCEPT_FUNCTION_CHECK(setupOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButtonRows
		#define GEODE_CONCEPT_CHECK_onButtonRows
		GEODE_CONCEPT_FUNCTION_CHECK(onButtonRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButtonsPerRow
		#define GEODE_CONCEPT_CHECK_onButtonsPerRow
		GEODE_CONCEPT_FUNCTION_CHECK(onButtonsPerRow) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorOptionsLayer> : ModifyBase<ModifyDerive<Der, EditorOptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorOptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorOptionsLayer>>::ModifyBase;
		using Base = EditorOptionsLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
