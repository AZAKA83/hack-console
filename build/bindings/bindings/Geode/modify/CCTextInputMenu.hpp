#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCTextInputMenu.hpp>
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_rightClick
		#define GEODE_STATICS_rightClick
		GEODE_AS_STATIC_FUNCTION(rightClick) 
	#endif

	#ifndef GEODE_STATICS_closeDeferred
		#define GEODE_STATICS_closeDeferred
		GEODE_AS_STATIC_FUNCTION(closeDeferred) 
	#endif

	#ifndef GEODE_STATICS_closeNextFrame
		#define GEODE_STATICS_closeNextFrame
		GEODE_AS_STATIC_FUNCTION(closeNextFrame) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClear
		#define GEODE_STATICS_onClear
		GEODE_AS_STATIC_FUNCTION(onClear) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rightClick
		#define GEODE_CONCEPT_CHECK_rightClick
		GEODE_CONCEPT_FUNCTION_CHECK(rightClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeDeferred
		#define GEODE_CONCEPT_CHECK_closeDeferred
		GEODE_CONCEPT_FUNCTION_CHECK(closeDeferred) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeNextFrame
		#define GEODE_CONCEPT_CHECK_closeNextFrame
		GEODE_CONCEPT_FUNCTION_CHECK(closeNextFrame) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClear
		#define GEODE_CONCEPT_CHECK_onClear
		GEODE_CONCEPT_FUNCTION_CHECK(onClear) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCTextInputMenu> : ModifyBase<ModifyDerive<Der, CCTextInputMenu>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCTextInputMenu>>;
		using ModifyBase<ModifyDerive<Der, CCTextInputMenu>>::ModifyBase;
		using Base = CCTextInputMenu;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4d250, Thiscall, CCTextInputMenu)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputMenu, create, CCTextInputNode*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db60, Thiscall, CCTextInputMenu, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dad0, Thiscall, CCTextInputMenu, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dbd0, Thiscall, CCTextInputMenu, rightClick, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputMenu, closeDeferred, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputMenu, closeNextFrame, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d290, Thiscall, CCTextInputMenu, init, CCTextInputNode*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dd50, Thiscall, CCTextInputMenu, onClear, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dc40, Thiscall, CCTextInputMenu, onCopy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dcf0, Thiscall, CCTextInputMenu, onPaste, cocos2d::CCObject*)
		}
	};
}
