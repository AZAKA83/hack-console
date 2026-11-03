#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TutorialPopup.hpp>
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

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_animateMenu
		#define GEODE_CONCEPT_CHECK_animateMenu
		GEODE_CONCEPT_FUNCTION_CHECK(animateMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeTutorial
		#define GEODE_CONCEPT_CHECK_closeTutorial
		GEODE_CONCEPT_FUNCTION_CHECK(closeTutorial) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerForCallback
		#define GEODE_CONCEPT_CHECK_registerForCallback
		GEODE_CONCEPT_FUNCTION_CHECK(registerForCallback) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TutorialPopup> : ModifyBase<ModifyDerive<Der, TutorialPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TutorialPopup>>;
		using ModifyBase<ModifyDerive<Der, TutorialPopup>>::ModifyBase;
		using Base = TutorialPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
