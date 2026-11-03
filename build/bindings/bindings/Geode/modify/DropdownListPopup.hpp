#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DropdownListPopup.hpp>
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

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_buildRows
		#define GEODE_STATICS_buildRows
		GEODE_AS_STATIC_FUNCTION(buildRows) 
	#endif

	#ifndef GEODE_STATICS_closeSelf
		#define GEODE_STATICS_closeSelf
		GEODE_AS_STATIC_FUNCTION(closeSelf) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onRowSelected
		#define GEODE_STATICS_onRowSelected
		GEODE_AS_STATIC_FUNCTION(onRowSelected) 
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

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildRows
		#define GEODE_CONCEPT_CHECK_buildRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeSelf
		#define GEODE_CONCEPT_CHECK_closeSelf
		GEODE_CONCEPT_FUNCTION_CHECK(closeSelf) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRowSelected
		#define GEODE_CONCEPT_CHECK_onRowSelected
		GEODE_CONCEPT_FUNCTION_CHECK(onRowSelected) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DropdownListPopup> : ModifyBase<ModifyDerive<Der, DropdownListPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DropdownListPopup>>;
		using ModifyBase<ModifyDerive<Der, DropdownListPopup>>::ModifyBase;
		using Base = DropdownListPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1204f0, Thiscall, DropdownListPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DropdownListPopup, create, std::vector<DropdownListRow> const&, cocos2d::CCPoint, DropdownListStyle const&, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1222c0, Thiscall, DropdownListPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1223c0, Thiscall, DropdownListPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122480, Thiscall, DropdownListPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x122520, Thiscall, DropdownListPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1225c0, Thiscall, DropdownListPopup, keyBackClicked, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DropdownListPopup, buildRows, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DropdownListPopup, closeSelf, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DropdownListPopup, init, std::vector<DropdownListRow> const&, cocos2d::CCPoint, DropdownListStyle const&, cocos2d::CCObject*, cocos2d::SEL_MenuHandler)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DropdownListPopup, onRowSelected, cocos2d::CCObject*)
		}
	};
}
