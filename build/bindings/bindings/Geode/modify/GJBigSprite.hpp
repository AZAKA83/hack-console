#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJBigSprite.hpp>
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

	#ifndef GEODE_CONCEPT_CHECK_finishedLoadingSpriteAsync
		#define GEODE_CONCEPT_CHECK_finishedLoadingSpriteAsync
		GEODE_CONCEPT_FUNCTION_CHECK(finishedLoadingSpriteAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadSpriteAsync
		#define GEODE_CONCEPT_CHECK_loadSpriteAsync
		GEODE_CONCEPT_FUNCTION_CHECK(loadSpriteAsync) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadAll
		#define GEODE_CONCEPT_CHECK_unloadAll
		GEODE_CONCEPT_FUNCTION_CHECK(unloadAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadSprite
		#define GEODE_CONCEPT_CHECK_unloadSprite
		GEODE_CONCEPT_FUNCTION_CHECK(unloadSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSpriteVisibility
		#define GEODE_CONCEPT_CHECK_updateSpriteVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateSpriteVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJBigSprite> : ModifyBase<ModifyDerive<Der, GJBigSprite>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJBigSprite>>;
		using ModifyBase<ModifyDerive<Der, GJBigSprite>>::ModifyBase;
		using Base = GJBigSprite;
        using Derived = Der;
		void apply() override {

		}
	};
}
