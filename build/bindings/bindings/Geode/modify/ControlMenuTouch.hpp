#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ControlMenuTouch.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_addMenu
		#define GEODE_STATICS_addMenu
		GEODE_AS_STATIC_FUNCTION(addMenu) 
	#endif

	#ifndef GEODE_STATICS_began
		#define GEODE_STATICS_began
		GEODE_AS_STATIC_FUNCTION(began) 
	#endif

	#ifndef GEODE_STATICS_cancelled
		#define GEODE_STATICS_cancelled
		GEODE_AS_STATIC_FUNCTION(cancelled) 
	#endif

	#ifndef GEODE_STATICS_ended
		#define GEODE_STATICS_ended
		GEODE_AS_STATIC_FUNCTION(ended) 
	#endif

	#ifndef GEODE_STATICS_moved
		#define GEODE_STATICS_moved
		GEODE_AS_STATIC_FUNCTION(moved) 
	#endif

	#ifndef GEODE_STATICS_tracking
		#define GEODE_STATICS_tracking
		GEODE_AS_STATIC_FUNCTION(tracking) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_addMenu
		#define GEODE_CONCEPT_CHECK_addMenu
		GEODE_CONCEPT_FUNCTION_CHECK(addMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_began
		#define GEODE_CONCEPT_CHECK_began
		GEODE_CONCEPT_FUNCTION_CHECK(began) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cancelled
		#define GEODE_CONCEPT_CHECK_cancelled
		GEODE_CONCEPT_FUNCTION_CHECK(cancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ended
		#define GEODE_CONCEPT_CHECK_ended
		GEODE_CONCEPT_FUNCTION_CHECK(ended) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moved
		#define GEODE_CONCEPT_CHECK_moved
		GEODE_CONCEPT_FUNCTION_CHECK(moved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tracking
		#define GEODE_CONCEPT_CHECK_tracking
		GEODE_CONCEPT_FUNCTION_CHECK(tracking) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ControlMenuTouch> : ModifyBase<ModifyDerive<Der, ControlMenuTouch>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ControlMenuTouch>>;
		using ModifyBase<ModifyDerive<Der, ControlMenuTouch>>::ModifyBase;
		using Base = ControlMenuTouch;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControlMenuTouch, addMenu, cocos2d::CCMenu*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControlMenuTouch, began, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControlMenuTouch, cancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControlMenuTouch, ended, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControlMenuTouch, moved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ControlMenuTouch, tracking, )
		}
	};
}
