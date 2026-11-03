#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelFeatureLayer.hpp>
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

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDown
		#define GEODE_CONCEPT_CHECK_onDown
		GEODE_CONCEPT_FUNCTION_CHECK(onDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDown2
		#define GEODE_CONCEPT_CHECK_onDown2
		GEODE_CONCEPT_FUNCTION_CHECK(onDown2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRemoveValues
		#define GEODE_CONCEPT_CHECK_onRemoveValues
		GEODE_CONCEPT_FUNCTION_CHECK(onRemoveValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetEpicOnly
		#define GEODE_CONCEPT_CHECK_onSetEpicOnly
		GEODE_CONCEPT_FUNCTION_CHECK(onSetEpicOnly) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSetFeatured
		#define GEODE_CONCEPT_CHECK_onSetFeatured
		GEODE_CONCEPT_FUNCTION_CHECK(onSetFeatured) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleEpic
		#define GEODE_CONCEPT_CHECK_onToggleEpic
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleEpic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUp
		#define GEODE_CONCEPT_CHECK_onUp
		GEODE_CONCEPT_FUNCTION_CHECK(onUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUp2
		#define GEODE_CONCEPT_CHECK_onUp2
		GEODE_CONCEPT_FUNCTION_CHECK(onUp2) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateStars
		#define GEODE_CONCEPT_CHECK_updateStars
		GEODE_CONCEPT_FUNCTION_CHECK(updateStars) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelFeatureLayer> : ModifyBase<ModifyDerive<Der, LevelFeatureLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelFeatureLayer>>;
		using ModifyBase<ModifyDerive<Der, LevelFeatureLayer>>::ModifyBase;
		using Base = LevelFeatureLayer;
        using Derived = Der;
		void apply() override {

		}
	};
}
