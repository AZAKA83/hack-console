#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FLAlertLayer.hpp>
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_addCloseButton
		#define GEODE_STATICS_addCloseButton
		GEODE_AS_STATIC_FUNCTION(addCloseButton) 
	#endif

	#ifndef GEODE_STATICS_cancelKeyboardSlide
		#define GEODE_STATICS_cancelKeyboardSlide
		GEODE_AS_STATIC_FUNCTION(cancelKeyboardSlide) 
	#endif

	#ifndef GEODE_STATICS_containsNode
		#define GEODE_STATICS_containsNode
		GEODE_AS_STATIC_FUNCTION(containsNode) 
	#endif

	#ifndef GEODE_STATICS_incrementForcePrio
		#define GEODE_STATICS_incrementForcePrio
		GEODE_AS_STATIC_FUNCTION(incrementForcePrio) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_keyboardRaise
		#define GEODE_STATICS_keyboardRaise
		GEODE_AS_STATIC_FUNCTION(keyboardRaise) 
	#endif

	#ifndef GEODE_STATICS_onButton
		#define GEODE_STATICS_onButton
		GEODE_AS_STATIC_FUNCTION(onButton) 
	#endif

	#ifndef GEODE_STATICS_onButtonTag
		#define GEODE_STATICS_onButtonTag
		GEODE_AS_STATIC_FUNCTION(onButtonTag) 
	#endif

	#ifndef GEODE_STATICS_ownedTouchPrio
		#define GEODE_STATICS_ownedTouchPrio
		GEODE_AS_STATIC_FUNCTION(ownedTouchPrio) 
	#endif

	#ifndef GEODE_STATICS_rebuildContentDeferred
		#define GEODE_STATICS_rebuildContentDeferred
		GEODE_AS_STATIC_FUNCTION(rebuildContentDeferred) 
	#endif

	#ifndef GEODE_STATICS_requestRebuild
		#define GEODE_STATICS_requestRebuild
		GEODE_AS_STATIC_FUNCTION(requestRebuild) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
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

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownsTouchPrio
		#define GEODE_CONCEPT_CHECK_ownsTouchPrio
		GEODE_CONCEPT_FUNCTION_CHECK(ownsTouchPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCloseButton
		#define GEODE_CONCEPT_CHECK_addCloseButton
		GEODE_CONCEPT_FUNCTION_CHECK(addCloseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_cancelKeyboardSlide
		#define GEODE_CONCEPT_CHECK_cancelKeyboardSlide
		GEODE_CONCEPT_FUNCTION_CHECK(cancelKeyboardSlide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_containsNode
		#define GEODE_CONCEPT_CHECK_containsNode
		GEODE_CONCEPT_FUNCTION_CHECK(containsNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_incrementForcePrio
		#define GEODE_CONCEPT_CHECK_incrementForcePrio
		GEODE_CONCEPT_FUNCTION_CHECK(incrementForcePrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyboardRaise
		#define GEODE_CONCEPT_CHECK_keyboardRaise
		GEODE_CONCEPT_FUNCTION_CHECK(keyboardRaise) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButton
		#define GEODE_CONCEPT_CHECK_onButton
		GEODE_CONCEPT_FUNCTION_CHECK(onButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onButtonTag
		#define GEODE_CONCEPT_CHECK_onButtonTag
		GEODE_CONCEPT_FUNCTION_CHECK(onButtonTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownedTouchPrio
		#define GEODE_CONCEPT_CHECK_ownedTouchPrio
		GEODE_CONCEPT_FUNCTION_CHECK(ownedTouchPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildContentDeferred
		#define GEODE_CONCEPT_CHECK_rebuildContentDeferred
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContentDeferred) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestRebuild
		#define GEODE_CONCEPT_CHECK_requestRebuild
		GEODE_CONCEPT_FUNCTION_CHECK(requestRebuild) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FLAlertLayer> : ModifyBase<ModifyDerive<Der, FLAlertLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FLAlertLayer>>;
		using ModifyBase<ModifyDerive<Der, FLAlertLayer>>::ModifyBase;
		using Base = FLAlertLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x5a280, Thiscall, FLAlertLayer, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x5a3f0, Thiscall, FLAlertLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FLAlertLayer, create, char const*, const std::string&, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FLAlertLayer, create, FLAlertLayerProtocol*, char const*, std::string, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a560, Default, FLAlertLayer, create, FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a610, Default, FLAlertLayer, create, FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b6e0, Thiscall, FLAlertLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b860, Thiscall, FLAlertLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b780, Thiscall, FLAlertLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b7f0, Thiscall, FLAlertLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bab0, Thiscall, FLAlertLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b550, Thiscall, FLAlertLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b4c0, Thiscall, FLAlertLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FLAlertLayer, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b8a0, Thiscall, FLAlertLayer, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FLAlertLayer, ownsTouchPrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bb10, Thiscall, FLAlertLayer, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bc70, Thiscall, FLAlertLayer, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b3a0, Thiscall, FLAlertLayer, addCloseButton, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, cancelKeyboardSlide, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, containsNode, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5bd10, Thiscall, FLAlertLayer, incrementForcePrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a720, Thiscall, FLAlertLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a810, Thiscall, FLAlertLayer, init, FLAlertLayerProtocol*, char const*, std::string, char const*, char const*, float, bool, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, keyboardRaise, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b640, Thiscall, FLAlertLayer, onButton, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5b670, Thiscall, FLAlertLayer, onButtonTag, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, ownedTouchPrio, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, rebuildContentDeferred, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FLAlertLayer, requestRebuild, )
		}
	};
}
