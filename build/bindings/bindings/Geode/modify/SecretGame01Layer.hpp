#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SecretGame01Layer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_didSelectCorrectObject
		#define GEODE_CONCEPT_CHECK_didSelectCorrectObject
		GEODE_CONCEPT_FUNCTION_CHECK(didSelectCorrectObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameStep01
		#define GEODE_CONCEPT_CHECK_gameStep01
		GEODE_CONCEPT_FUNCTION_CHECK(gameStep01) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_gameStep02
		#define GEODE_CONCEPT_CHECK_gameStep02
		GEODE_CONCEPT_FUNCTION_CHECK(gameStep02) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCountForDifficulty
		#define GEODE_CONCEPT_CHECK_getCountForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getCountForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getFrameForDifficulty
		#define GEODE_CONCEPT_CHECK_getFrameForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getFrameForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getRowsForDifficulty
		#define GEODE_CONCEPT_CHECK_getRowsForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getRowsForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTimeForDifficulty
		#define GEODE_CONCEPT_CHECK_getTimeForDifficulty
		GEODE_CONCEPT_FUNCTION_CHECK(getTimeForDifficulty) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectButton
		#define GEODE_CONCEPT_CHECK_onSelectButton
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGame
		#define GEODE_CONCEPT_CHECK_resetGame
		GEODE_CONCEPT_FUNCTION_CHECK(resetGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resetGameTimer
		#define GEODE_CONCEPT_CHECK_resetGameTimer
		GEODE_CONCEPT_FUNCTION_CHECK(resetGameTimer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleOutGame
		#define GEODE_CONCEPT_CHECK_scaleOutGame
		GEODE_CONCEPT_FUNCTION_CHECK(scaleOutGame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showGameOver
		#define GEODE_CONCEPT_CHECK_showGameOver
		GEODE_CONCEPT_FUNCTION_CHECK(showGameOver) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showGameWon
		#define GEODE_CONCEPT_CHECK_showGameWon
		GEODE_CONCEPT_FUNCTION_CHECK(showGameWon) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SecretGame01Layer> : ModifyBase<ModifyDerive<Der, SecretGame01Layer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SecretGame01Layer>>;
		using ModifyBase<ModifyDerive<Der, SecretGame01Layer>>::ModifyBase;
		using Base = SecretGame01Layer;
        using Derived = Der;
		void apply() override {

		}
	};
}
