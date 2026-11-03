#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TimeSpeedControl.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAudioTimeSpeedToggle
		#define GEODE_STATICS_onAudioTimeSpeedToggle
		GEODE_AS_STATIC_FUNCTION(onAudioTimeSpeedToggle) 
	#endif

	#ifndef GEODE_STATICS_timeSliderChanged
		#define GEODE_STATICS_timeSliderChanged
		GEODE_AS_STATIC_FUNCTION(timeSliderChanged) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAudioTimeSpeedToggle
		#define GEODE_CONCEPT_CHECK_onAudioTimeSpeedToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onAudioTimeSpeedToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timeSliderChanged
		#define GEODE_CONCEPT_CHECK_timeSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(timeSliderChanged) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TimeSpeedControl> : ModifyBase<ModifyDerive<Der, TimeSpeedControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TimeSpeedControl>>;
		using ModifyBase<ModifyDerive<Der, TimeSpeedControl>>::ModifyBase;
		using Base = TimeSpeedControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x47080, Thiscall, TimeSpeedControl)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66d6e0, Default, TimeSpeedControl, create, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66d790, Thiscall, TimeSpeedControl, init, GJBaseGameLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66ddd0, Thiscall, TimeSpeedControl, onAudioTimeSpeedToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66dc50, Thiscall, TimeSpeedControl, timeSliderChanged, cocos2d::CCObject*)
		}
	};
}
