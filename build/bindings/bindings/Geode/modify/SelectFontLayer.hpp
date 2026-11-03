#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectFontLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangeFont
		#define GEODE_CONCEPT_CHECK_onChangeFont
		GEODE_CONCEPT_FUNCTION_CHECK(onChangeFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateFontLabel
		#define GEODE_CONCEPT_CHECK_updateFontLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateFontLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectFontLayer> : ModifyBase<ModifyDerive<Der, SelectFontLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectFontLayer>>;
		using ModifyBase<ModifyDerive<Der, SelectFontLayer>>::ModifyBase;
		using Base = SelectFontLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
