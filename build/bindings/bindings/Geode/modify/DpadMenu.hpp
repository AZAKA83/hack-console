#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DpadMenu.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_arrowForTouch
		#define GEODE_STATICS_arrowForTouch
		GEODE_AS_STATIC_FUNCTION(arrowForTouch) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_arrowForTouch
		#define GEODE_CONCEPT_CHECK_arrowForTouch
		GEODE_CONCEPT_FUNCTION_CHECK(arrowForTouch) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DpadMenu> : ModifyBase<ModifyDerive<Der, DpadMenu>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DpadMenu>>;
		using ModifyBase<ModifyDerive<Der, DpadMenu>>::ModifyBase;
		using Base = DpadMenu;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1f3370, Thiscall, DpadMenu)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DpadMenu, create, cocos2d::CCPoint, cocos2d::CCSize, cocos2d::CCSize)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f3100, Thiscall, DpadMenu, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1f31f0, Thiscall, DpadMenu, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DpadMenu, arrowForTouch, cocos2d::CCTouch*)
		}
	};
}
