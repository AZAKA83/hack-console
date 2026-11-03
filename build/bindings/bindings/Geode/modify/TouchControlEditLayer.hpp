#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TouchControlEditLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onEnter
		#define GEODE_STATICS_onEnter
		GEODE_AS_STATIC_FUNCTION(onEnter) 
	#endif

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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_activeNode
		#define GEODE_STATICS_activeNode
		GEODE_AS_STATIC_FUNCTION(activeNode) 
	#endif

	#ifndef GEODE_STATICS_beginDeadzoneDrag
		#define GEODE_STATICS_beginDeadzoneDrag
		GEODE_AS_STATIC_FUNCTION(beginDeadzoneDrag) 
	#endif

	#ifndef GEODE_STATICS_buildHud
		#define GEODE_STATICS_buildHud
		GEODE_AS_STATIC_FUNCTION(buildHud) 
	#endif

	#ifndef GEODE_STATICS_buildNodes
		#define GEODE_STATICS_buildNodes
		GEODE_AS_STATIC_FUNCTION(buildNodes) 
	#endif

	#ifndef GEODE_STATICS_clearNodes
		#define GEODE_STATICS_clearNodes
		GEODE_AS_STATIC_FUNCTION(clearNodes) 
	#endif

	#ifndef GEODE_STATICS_commitToTarget
		#define GEODE_STATICS_commitToTarget
		GEODE_AS_STATIC_FUNCTION(commitToTarget) 
	#endif

	#ifndef GEODE_STATICS_copyTouchFrom
		#define GEODE_STATICS_copyTouchFrom
		GEODE_AS_STATIC_FUNCTION(copyTouchFrom) 
	#endif

	#ifndef GEODE_STATICS_globalDpad
		#define GEODE_STATICS_globalDpad
		GEODE_AS_STATIC_FUNCTION(globalDpad) 
	#endif

	#ifndef GEODE_STATICS_hideSiblings
		#define GEODE_STATICS_hideSiblings
		GEODE_AS_STATIC_FUNCTION(hideSiblings) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onApplyGlobal
		#define GEODE_STATICS_onApplyGlobal
		GEODE_AS_STATIC_FUNCTION(onApplyGlobal) 
	#endif

	#ifndef GEODE_STATICS_onCopy
		#define GEODE_STATICS_onCopy
		GEODE_AS_STATIC_FUNCTION(onCopy) 
	#endif

	#ifndef GEODE_STATICS_onOK
		#define GEODE_STATICS_onOK
		GEODE_AS_STATIC_FUNCTION(onOK) 
	#endif

	#ifndef GEODE_STATICS_onPaste
		#define GEODE_STATICS_onPaste
		GEODE_AS_STATIC_FUNCTION(onPaste) 
	#endif

	#ifndef GEODE_STATICS_onReset
		#define GEODE_STATICS_onReset
		GEODE_AS_STATIC_FUNCTION(onReset) 
	#endif

	#ifndef GEODE_STATICS_onSlots
		#define GEODE_STATICS_onSlots
		GEODE_AS_STATIC_FUNCTION(onSlots) 
	#endif

	#ifndef GEODE_STATICS_refreshHud
		#define GEODE_STATICS_refreshHud
		GEODE_AS_STATIC_FUNCTION(refreshHud) 
	#endif

	#ifndef GEODE_STATICS_reloadNodes
		#define GEODE_STATICS_reloadNodes
		GEODE_AS_STATIC_FUNCTION(reloadNodes) 
	#endif

	#ifndef GEODE_STATICS_restoreSiblings
		#define GEODE_STATICS_restoreSiblings
		GEODE_AS_STATIC_FUNCTION(restoreSiblings) 
	#endif

	#ifndef GEODE_STATICS_saveTarget
		#define GEODE_STATICS_saveTarget
		GEODE_AS_STATIC_FUNCTION(saveTarget) 
	#endif

	#ifndef GEODE_STATICS_updateHandles
		#define GEODE_STATICS_updateHandles
		GEODE_AS_STATIC_FUNCTION(updateHandles) 
	#endif

	#ifndef GEODE_STATICS_updateHudVisibility
		#define GEODE_STATICS_updateHudVisibility
		GEODE_AS_STATIC_FUNCTION(updateHudVisibility) 
	#endif

	#ifndef GEODE_STATICS_updateJumpGuide
		#define GEODE_STATICS_updateJumpGuide
		GEODE_AS_STATIC_FUNCTION(updateJumpGuide) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEnter
		#define GEODE_CONCEPT_CHECK_onEnter
		GEODE_CONCEPT_FUNCTION_CHECK(onEnter) 
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

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_activeNode
		#define GEODE_CONCEPT_CHECK_activeNode
		GEODE_CONCEPT_FUNCTION_CHECK(activeNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_beginDeadzoneDrag
		#define GEODE_CONCEPT_CHECK_beginDeadzoneDrag
		GEODE_CONCEPT_FUNCTION_CHECK(beginDeadzoneDrag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildHud
		#define GEODE_CONCEPT_CHECK_buildHud
		GEODE_CONCEPT_FUNCTION_CHECK(buildHud) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildNodes
		#define GEODE_CONCEPT_CHECK_buildNodes
		GEODE_CONCEPT_FUNCTION_CHECK(buildNodes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearNodes
		#define GEODE_CONCEPT_CHECK_clearNodes
		GEODE_CONCEPT_FUNCTION_CHECK(clearNodes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commitToTarget
		#define GEODE_CONCEPT_CHECK_commitToTarget
		GEODE_CONCEPT_FUNCTION_CHECK(commitToTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyTouchFrom
		#define GEODE_CONCEPT_CHECK_copyTouchFrom
		GEODE_CONCEPT_FUNCTION_CHECK(copyTouchFrom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_globalDpad
		#define GEODE_CONCEPT_CHECK_globalDpad
		GEODE_CONCEPT_FUNCTION_CHECK(globalDpad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_hideSiblings
		#define GEODE_CONCEPT_CHECK_hideSiblings
		GEODE_CONCEPT_FUNCTION_CHECK(hideSiblings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onApplyGlobal
		#define GEODE_CONCEPT_CHECK_onApplyGlobal
		GEODE_CONCEPT_FUNCTION_CHECK(onApplyGlobal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCopy
		#define GEODE_CONCEPT_CHECK_onCopy
		GEODE_CONCEPT_FUNCTION_CHECK(onCopy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOK
		#define GEODE_CONCEPT_CHECK_onOK
		GEODE_CONCEPT_FUNCTION_CHECK(onOK) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPaste
		#define GEODE_CONCEPT_CHECK_onPaste
		GEODE_CONCEPT_FUNCTION_CHECK(onPaste) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReset
		#define GEODE_CONCEPT_CHECK_onReset
		GEODE_CONCEPT_FUNCTION_CHECK(onReset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSlots
		#define GEODE_CONCEPT_CHECK_onSlots
		GEODE_CONCEPT_FUNCTION_CHECK(onSlots) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshHud
		#define GEODE_CONCEPT_CHECK_refreshHud
		GEODE_CONCEPT_FUNCTION_CHECK(refreshHud) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadNodes
		#define GEODE_CONCEPT_CHECK_reloadNodes
		GEODE_CONCEPT_FUNCTION_CHECK(reloadNodes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_restoreSiblings
		#define GEODE_CONCEPT_CHECK_restoreSiblings
		GEODE_CONCEPT_FUNCTION_CHECK(restoreSiblings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveTarget
		#define GEODE_CONCEPT_CHECK_saveTarget
		GEODE_CONCEPT_FUNCTION_CHECK(saveTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHandles
		#define GEODE_CONCEPT_CHECK_updateHandles
		GEODE_CONCEPT_FUNCTION_CHECK(updateHandles) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateHudVisibility
		#define GEODE_CONCEPT_CHECK_updateHudVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateHudVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateJumpGuide
		#define GEODE_CONCEPT_CHECK_updateJumpGuide
		GEODE_CONCEPT_FUNCTION_CHECK(updateJumpGuide) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TouchControlEditLayer> : ModifyBase<ModifyDerive<Der, TouchControlEditLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TouchControlEditLayer>>;
		using ModifyBase<ModifyDerive<Der, TouchControlEditLayer>>::ModifyBase;
		using Base = TouchControlEditLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x452460, Thiscall, TouchControlEditLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x452140, Default, TouchControlEditLayer, create, bool, LevelControlConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4566d0, Thiscall, TouchControlEditLayer, onEnter, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4567c0, Thiscall, TouchControlEditLayer, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454180, Thiscall, TouchControlEditLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454640, Thiscall, TouchControlEditLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454aa0, Thiscall, TouchControlEditLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x83ef0, Thiscall, TouchControlEditLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x134dc0, Thiscall, TouchControlEditLayer, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454f70, Thiscall, TouchControlEditLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453bc0, Thiscall, TouchControlEditLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453f00, Thiscall, TouchControlEditLayer, getValue, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, activeNode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, beginDeadzoneDrag, GJUINode*, cocos2d::CCPoint const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x452cc0, Thiscall, TouchControlEditLayer, buildHud, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x452560, Thiscall, TouchControlEditLayer, buildNodes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, clearNodes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, commitToTarget, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, copyTouchFrom, LevelControlConfig*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, globalDpad, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, hideSiblings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, init, bool, LevelControlConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x456590, Thiscall, TouchControlEditLayer, onApplyGlobal, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4559f0, Thiscall, TouchControlEditLayer, onCopy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454f30, Thiscall, TouchControlEditLayer, onOK, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x455c80, Thiscall, TouchControlEditLayer, onPaste, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x454fa0, Thiscall, TouchControlEditLayer, onReset, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4563a0, Thiscall, TouchControlEditLayer, onSlots, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, refreshHud, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, reloadNodes, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, restoreSiblings, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, saveTarget, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, updateHandles, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TouchControlEditLayer, updateHudVisibility, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x453a30, Thiscall, TouchControlEditLayer, updateJumpGuide, )
		}
	};
}
