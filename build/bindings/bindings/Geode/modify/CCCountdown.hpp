#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCCountdown.hpp>
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

	#ifndef GEODE_CONCEPT_CHECK_setOpacity
		#define GEODE_CONCEPT_CHECK_setOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(setOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_lapFinished
		#define GEODE_CONCEPT_CHECK_lapFinished
		GEODE_CONCEPT_FUNCTION_CHECK(lapFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startTimerWithSeconds
		#define GEODE_CONCEPT_CHECK_startTimerWithSeconds
		GEODE_CONCEPT_FUNCTION_CHECK(startTimerWithSeconds) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCCountdown> : ModifyBase<ModifyDerive<Der, CCCountdown>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCCountdown>>;
		using ModifyBase<ModifyDerive<Der, CCCountdown>>::ModifyBase;
		using Base = CCCountdown;
        using Derived = Der;
		void apply() override {

		}
	};
}
