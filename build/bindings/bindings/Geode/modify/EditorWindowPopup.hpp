#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorWindowPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
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

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_handleAction
		#define GEODE_STATICS_handleAction
		GEODE_AS_STATIC_FUNCTION(handleAction) 
	#endif

	#ifndef GEODE_STATICS_onBuildWindowContent
		#define GEODE_STATICS_onBuildWindowContent
		GEODE_AS_STATIC_FUNCTION(onBuildWindowContent) 
	#endif

	#ifndef GEODE_STATICS_onFieldEnter
		#define GEODE_STATICS_onFieldEnter
		GEODE_AS_STATIC_FUNCTION(onFieldEnter) 
	#endif

	#ifndef GEODE_STATICS_initWindow
		#define GEODE_STATICS_initWindow
		GEODE_AS_STATIC_FUNCTION(initWindow) 
	#endif

	#ifndef GEODE_STATICS_beginTouch
		#define GEODE_STATICS_beginTouch
		GEODE_AS_STATIC_FUNCTION(beginTouch) 
	#endif

	#ifndef GEODE_STATICS_isInCloseButton
		#define GEODE_STATICS_isInCloseButton
		GEODE_AS_STATIC_FUNCTION(isInCloseButton) 
	#endif

	#ifndef GEODE_STATICS_activeField
		#define GEODE_STATICS_activeField
		GEODE_AS_STATIC_FUNCTION(activeField) 
	#endif

	#ifndef GEODE_STATICS_applyWindowSize
		#define GEODE_STATICS_applyWindowSize
		GEODE_AS_STATIC_FUNCTION(applyWindowSize) 
	#endif

	#ifndef GEODE_STATICS_blurField
		#define GEODE_STATICS_blurField
		GEODE_AS_STATIC_FUNCTION(blurField) 
	#endif

	#ifndef GEODE_STATICS_clampWindowCenter
		#define GEODE_STATICS_clampWindowCenter
		GEODE_AS_STATIC_FUNCTION(clampWindowCenter) 
	#endif

	#ifndef GEODE_STATICS_clampWindowOnScreen
		#define GEODE_STATICS_clampWindowOnScreen
		GEODE_AS_STATIC_FUNCTION(clampWindowOnScreen) 
	#endif

	#ifndef GEODE_STATICS_contentCenter
		#define GEODE_STATICS_contentCenter
		GEODE_AS_STATIC_FUNCTION(contentCenter) 
	#endif

	#ifndef GEODE_STATICS_dismissDropdowns
		#define GEODE_STATICS_dismissDropdowns
		GEODE_AS_STATIC_FUNCTION(dismissDropdowns) 
	#endif

	#ifndef GEODE_STATICS_fieldHoldsKeys
		#define GEODE_STATICS_fieldHoldsKeys
		GEODE_AS_STATIC_FUNCTION(fieldHoldsKeys) 
	#endif

	#ifndef GEODE_STATICS_getResizeCorner
		#define GEODE_STATICS_getResizeCorner
		GEODE_AS_STATIC_FUNCTION(getResizeCorner) 
	#endif

	#ifndef GEODE_STATICS_isInDragHandle
		#define GEODE_STATICS_isInDragHandle
		GEODE_AS_STATIC_FUNCTION(isInDragHandle) 
	#endif

	#ifndef GEODE_STATICS_layoutWindow
		#define GEODE_STATICS_layoutWindow
		GEODE_AS_STATIC_FUNCTION(layoutWindow) 
	#endif

	#ifndef GEODE_STATICS_moveWindowTo
		#define GEODE_STATICS_moveWindowTo
		GEODE_AS_STATIC_FUNCTION(moveWindowTo) 
	#endif

	#ifndef GEODE_STATICS_setLockAspectRatio
		#define GEODE_STATICS_setLockAspectRatio
		GEODE_AS_STATIC_FUNCTION(setLockAspectRatio) 
	#endif

	#ifndef GEODE_STATICS_setWindowScaleBounds
		#define GEODE_STATICS_setWindowScaleBounds
		GEODE_AS_STATIC_FUNCTION(setWindowScaleBounds) 
	#endif

	#ifndef GEODE_STATICS_setWindowSizeBounds
		#define GEODE_STATICS_setWindowSizeBounds
		GEODE_AS_STATIC_FUNCTION(setWindowSizeBounds) 
	#endif

	#ifndef GEODE_STATICS_syncWindowCenter
		#define GEODE_STATICS_syncWindowCenter
		GEODE_AS_STATIC_FUNCTION(syncWindowCenter) 
	#endif

	#ifndef GEODE_STATICS_touchIsOnField
		#define GEODE_STATICS_touchIsOnField
		GEODE_AS_STATIC_FUNCTION(touchIsOnField) 
	#endif

	#ifndef GEODE_STATICS_touchRect
		#define GEODE_STATICS_touchRect
		GEODE_AS_STATIC_FUNCTION(touchRect) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleAction
		#define GEODE_CONCEPT_CHECK_handleAction
		GEODE_CONCEPT_FUNCTION_CHECK(handleAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBuildWindowContent
		#define GEODE_CONCEPT_CHECK_onBuildWindowContent
		GEODE_CONCEPT_FUNCTION_CHECK(onBuildWindowContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onWindowResized
		#define GEODE_CONCEPT_CHECK_onWindowResized
		GEODE_CONCEPT_FUNCTION_CHECK(onWindowResized) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFieldEnter
		#define GEODE_CONCEPT_CHECK_onFieldEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onFieldEnter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initWindow
		#define GEODE_CONCEPT_CHECK_initWindow
		GEODE_CONCEPT_FUNCTION_CHECK(initWindow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_beginTouch
		#define GEODE_CONCEPT_CHECK_beginTouch
		GEODE_CONCEPT_FUNCTION_CHECK(beginTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isInCloseButton
		#define GEODE_CONCEPT_CHECK_isInCloseButton
		GEODE_CONCEPT_FUNCTION_CHECK(isInCloseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeField
		#define GEODE_CONCEPT_CHECK_activeField
		GEODE_CONCEPT_FUNCTION_CHECK(activeField) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyWindowSize
		#define GEODE_CONCEPT_CHECK_applyWindowSize
		GEODE_CONCEPT_FUNCTION_CHECK(applyWindowSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_blurField
		#define GEODE_CONCEPT_CHECK_blurField
		GEODE_CONCEPT_FUNCTION_CHECK(blurField) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clampWindowCenter
		#define GEODE_CONCEPT_CHECK_clampWindowCenter
		GEODE_CONCEPT_FUNCTION_CHECK(clampWindowCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clampWindowOnScreen
		#define GEODE_CONCEPT_CHECK_clampWindowOnScreen
		GEODE_CONCEPT_FUNCTION_CHECK(clampWindowOnScreen) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_contentCenter
		#define GEODE_CONCEPT_CHECK_contentCenter
		GEODE_CONCEPT_FUNCTION_CHECK(contentCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dismissDropdowns
		#define GEODE_CONCEPT_CHECK_dismissDropdowns
		GEODE_CONCEPT_FUNCTION_CHECK(dismissDropdowns) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fieldHoldsKeys
		#define GEODE_CONCEPT_CHECK_fieldHoldsKeys
		GEODE_CONCEPT_FUNCTION_CHECK(fieldHoldsKeys) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getResizeCorner
		#define GEODE_CONCEPT_CHECK_getResizeCorner
		GEODE_CONCEPT_FUNCTION_CHECK(getResizeCorner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isInDragHandle
		#define GEODE_CONCEPT_CHECK_isInDragHandle
		GEODE_CONCEPT_FUNCTION_CHECK(isInDragHandle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutWindow
		#define GEODE_CONCEPT_CHECK_layoutWindow
		GEODE_CONCEPT_FUNCTION_CHECK(layoutWindow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveWindowTo
		#define GEODE_CONCEPT_CHECK_moveWindowTo
		GEODE_CONCEPT_FUNCTION_CHECK(moveWindowTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLockAspectRatio
		#define GEODE_CONCEPT_CHECK_setLockAspectRatio
		GEODE_CONCEPT_FUNCTION_CHECK(setLockAspectRatio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWindowScaleBounds
		#define GEODE_CONCEPT_CHECK_setWindowScaleBounds
		GEODE_CONCEPT_FUNCTION_CHECK(setWindowScaleBounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWindowSizeBounds
		#define GEODE_CONCEPT_CHECK_setWindowSizeBounds
		GEODE_CONCEPT_FUNCTION_CHECK(setWindowSizeBounds) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncWindowCenter
		#define GEODE_CONCEPT_CHECK_syncWindowCenter
		GEODE_CONCEPT_FUNCTION_CHECK(syncWindowCenter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchIsOnField
		#define GEODE_CONCEPT_CHECK_touchIsOnField
		GEODE_CONCEPT_FUNCTION_CHECK(touchIsOnField) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_touchRect
		#define GEODE_CONCEPT_CHECK_touchRect
		GEODE_CONCEPT_FUNCTION_CHECK(touchRect) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorWindowPopup> : ModifyBase<ModifyDerive<Der, EditorWindowPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorWindowPopup>>;
		using ModifyBase<ModifyDerive<Der, EditorWindowPopup>>::ModifyBase;
		using Base = EditorWindowPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x123530, Thiscall, EditorWindowPopup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17fcc0, Thiscall, EditorWindowPopup, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17eca0, Thiscall, EditorWindowPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17f360, Thiscall, EditorWindowPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17f7c0, Thiscall, EditorWindowPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17f980, Thiscall, EditorWindowPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17faf0, Thiscall, EditorWindowPopup, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17fcb0, Thiscall, EditorWindowPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17fd00, Thiscall, EditorWindowPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17fc80, Thiscall, EditorWindowPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17fba0, Thiscall, EditorWindowPopup, handleAction, int, bool, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorWindowPopup, onBuildWindowContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EditorWindowPopup, onWindowResized, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17fc70, Thiscall, EditorWindowPopup, onFieldEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17dde0, Thiscall, EditorWindowPopup, initWindow, EditorUI*, float, float, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17edd0, Thiscall, EditorWindowPopup, beginTouch, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17e7f0, Thiscall, EditorWindowPopup, isInCloseButton, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, activeField, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17e6d0, Thiscall, EditorWindowPopup, applyWindowSize, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, blurField, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17e930, Thiscall, EditorWindowPopup, clampWindowCenter, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17eaa0, Thiscall, EditorWindowPopup, clampWindowOnScreen, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17e420, Thiscall, EditorWindowPopup, contentCenter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17ec40, Thiscall, EditorWindowPopup, dismissDropdowns, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, fieldHoldsKeys, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, getResizeCorner, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, isInDragHandle, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17e520, Thiscall, EditorWindowPopup, layoutWindow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, moveWindowTo, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, setLockAspectRatio, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, setWindowScaleBounds, float, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, setWindowSizeBounds, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x17e4a0, Thiscall, EditorWindowPopup, syncWindowCenter, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, touchIsOnField, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorWindowPopup, touchRect, )
		}
	};
}
