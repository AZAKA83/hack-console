#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CustomSFXRowMenu.hpp>
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

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CustomSFXRowMenu> : ModifyBase<ModifyDerive<Der, CustomSFXRowMenu>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CustomSFXRowMenu>>;
		using ModifyBase<ModifyDerive<Der, CustomSFXRowMenu>>::ModifyBase;
		using Base = CustomSFXRowMenu;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x15ff10, Thiscall, CustomSFXRowMenu)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CustomSFXRowMenu, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15ff50, Thiscall, CustomSFXRowMenu, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
		}
	};
}
