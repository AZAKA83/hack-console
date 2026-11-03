#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCMenuExtra.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disableRepeatPress
		#define GEODE_CONCEPT_CHECK_disableRepeatPress
		GEODE_CONCEPT_FUNCTION_CHECK(disableRepeatPress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableRepeatPress
		#define GEODE_CONCEPT_CHECK_enableRepeatPress
		GEODE_CONCEPT_FUNCTION_CHECK(enableRepeatPress) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fireSelectedItem
		#define GEODE_CONCEPT_CHECK_fireSelectedItem
		GEODE_CONCEPT_FUNCTION_CHECK(fireSelectedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repeatSelectionChanged
		#define GEODE_CONCEPT_CHECK_repeatSelectionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(repeatSelectionChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_repeatTick
		#define GEODE_CONCEPT_CHECK_repeatTick
		GEODE_CONCEPT_FUNCTION_CHECK(repeatTick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stopRepeat
		#define GEODE_CONCEPT_CHECK_stopRepeat
		GEODE_CONCEPT_FUNCTION_CHECK(stopRepeat) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCMenuExtra> : ModifyBase<ModifyDerive<Der, CCMenuExtra>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCMenuExtra>>;
		using ModifyBase<ModifyDerive<Der, CCMenuExtra>>::ModifyBase;
		using Base = CCMenuExtra;
        using Derived = Der;
		void apply() override {

		}
	};
}
