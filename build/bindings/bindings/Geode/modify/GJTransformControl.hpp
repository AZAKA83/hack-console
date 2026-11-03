#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJTransformControl.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
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

	#ifndef GEODE_STATICS_applyFreeRotation
		#define GEODE_STATICS_applyFreeRotation
		GEODE_AS_STATIC_FUNCTION(applyFreeRotation) 
	#endif

	#ifndef GEODE_STATICS_getOppositeHandleTag
		#define GEODE_STATICS_getOppositeHandleTag
		GEODE_AS_STATIC_FUNCTION(getOppositeHandleTag) 
	#endif

	#ifndef GEODE_STATICS_moveAnchorTo
		#define GEODE_STATICS_moveAnchorTo
		GEODE_AS_STATIC_FUNCTION(moveAnchorTo) 
	#endif

	#ifndef GEODE_STATICS_onToggleFreeRotation
		#define GEODE_STATICS_onToggleFreeRotation
		GEODE_AS_STATIC_FUNCTION(onToggleFreeRotation) 
	#endif

	#ifndef GEODE_STATICS_onToggleGridSnap
		#define GEODE_STATICS_onToggleGridSnap
		GEODE_AS_STATIC_FUNCTION(onToggleGridSnap) 
	#endif

	#ifndef GEODE_STATICS_onToggleLockScale
		#define GEODE_STATICS_onToggleLockScale
		GEODE_AS_STATIC_FUNCTION(onToggleLockScale) 
	#endif

	#ifndef GEODE_STATICS_onToggleOppositeAnchor
		#define GEODE_STATICS_onToggleOppositeAnchor
		GEODE_AS_STATIC_FUNCTION(onToggleOppositeAnchor) 
	#endif

	#ifndef GEODE_STATICS_refreshControl
		#define GEODE_STATICS_refreshControl
		GEODE_AS_STATIC_FUNCTION(refreshControl) 
	#endif

	#ifndef GEODE_STATICS_scaleButtons
		#define GEODE_STATICS_scaleButtons
		GEODE_AS_STATIC_FUNCTION(scaleButtons) 
	#endif

	#ifndef GEODE_STATICS_snapAngleTo45
		#define GEODE_STATICS_snapAngleTo45
		GEODE_AS_STATIC_FUNCTION(snapAngleTo45) 
	#endif

	#ifndef GEODE_STATICS_snapToGrid
		#define GEODE_STATICS_snapToGrid
		GEODE_AS_STATIC_FUNCTION(snapToGrid) 
	#endif

	#ifndef GEODE_STATICS_snapToNearestVertex
		#define GEODE_STATICS_snapToNearestVertex
		GEODE_AS_STATIC_FUNCTION(snapToNearestVertex) 
	#endif

	#ifndef GEODE_STATICS_updateButtons
		#define GEODE_STATICS_updateButtons
		GEODE_AS_STATIC_FUNCTION(updateButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_applyFreeRotation
		#define GEODE_CONCEPT_CHECK_applyFreeRotation
		GEODE_CONCEPT_FUNCTION_CHECK(applyFreeRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyRotation
		#define GEODE_CONCEPT_CHECK_applyRotation
		GEODE_CONCEPT_FUNCTION_CHECK(applyRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_calculateRotationOffset
		#define GEODE_CONCEPT_CHECK_calculateRotationOffset
		GEODE_CONCEPT_FUNCTION_CHECK(calculateRotationOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishTouch
		#define GEODE_CONCEPT_CHECK_finishTouch
		GEODE_CONCEPT_FUNCTION_CHECK(finishTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getOppositeHandleTag
		#define GEODE_CONCEPT_CHECK_getOppositeHandleTag
		GEODE_CONCEPT_FUNCTION_CHECK(getOppositeHandleTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromState
		#define GEODE_CONCEPT_CHECK_loadFromState
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadValues
		#define GEODE_CONCEPT_CHECK_loadValues
		GEODE_CONCEPT_FUNCTION_CHECK(loadValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveAnchorTo
		#define GEODE_CONCEPT_CHECK_moveAnchorTo
		GEODE_CONCEPT_FUNCTION_CHECK(moveAnchorTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleFreeRotation
		#define GEODE_CONCEPT_CHECK_onToggleFreeRotation
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleFreeRotation) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleGridSnap
		#define GEODE_CONCEPT_CHECK_onToggleGridSnap
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleGridSnap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleLockScale
		#define GEODE_CONCEPT_CHECK_onToggleLockScale
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleLockScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleOppositeAnchor
		#define GEODE_CONCEPT_CHECK_onToggleOppositeAnchor
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleOppositeAnchor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshControl
		#define GEODE_CONCEPT_CHECK_refreshControl
		GEODE_CONCEPT_FUNCTION_CHECK(refreshControl) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_saveToState
		#define GEODE_CONCEPT_CHECK_saveToState
		GEODE_CONCEPT_FUNCTION_CHECK(saveToState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scaleButtons
		#define GEODE_CONCEPT_CHECK_scaleButtons
		GEODE_CONCEPT_FUNCTION_CHECK(scaleButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_snapAngleTo45
		#define GEODE_CONCEPT_CHECK_snapAngleTo45
		GEODE_CONCEPT_FUNCTION_CHECK(snapAngleTo45) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_snapToGrid
		#define GEODE_CONCEPT_CHECK_snapToGrid
		GEODE_CONCEPT_FUNCTION_CHECK(snapToGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_snapToNearestVertex
		#define GEODE_CONCEPT_CHECK_snapToNearestVertex
		GEODE_CONCEPT_FUNCTION_CHECK(snapToNearestVertex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_spriteByTag
		#define GEODE_CONCEPT_CHECK_spriteByTag
		GEODE_CONCEPT_FUNCTION_CHECK(spriteByTag) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAnchorSprite
		#define GEODE_CONCEPT_CHECK_updateAnchorSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateAnchorSprite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateButtons
		#define GEODE_CONCEPT_CHECK_updateButtons
		GEODE_CONCEPT_FUNCTION_CHECK(updateButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateMinMaxPositions
		#define GEODE_CONCEPT_CHECK_updateMinMaxPositions
		GEODE_CONCEPT_FUNCTION_CHECK(updateMinMaxPositions) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJTransformControl> : ModifyBase<ModifyDerive<Der, GJTransformControl>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJTransformControl>>;
		using ModifyBase<ModifyDerive<Der, GJTransformControl>>::ModifyBase;
		using Base = GJTransformControl;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a4fb0, Thiscall, GJTransformControl, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a6f20, Thiscall, GJTransformControl, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7410, Thiscall, GJTransformControl, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7cb0, Thiscall, GJTransformControl, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a7fd0, Thiscall, GJTransformControl, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJTransformControl, applyFreeRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, applyRotation, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, calculateRotationOffset, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, finishTouch, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJTransformControl, getOppositeHandleTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, loadFromState, GJTransformState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, loadValues, GameObject*, cocos2d::CCArray*, std::unordered_map<int, GameObjectEditorState>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJTransformControl, moveAnchorTo, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a5d00, Thiscall, GJTransformControl, onToggleFreeRotation, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a5c10, Thiscall, GJTransformControl, onToggleGridSnap, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJTransformControl, onToggleLockScale, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a5b20, Thiscall, GJTransformControl, onToggleOppositeAnchor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a5880, Thiscall, GJTransformControl, refreshControl, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, saveToState, GJTransformState&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a5df0, Thiscall, GJTransformControl, scaleButtons, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJTransformControl, snapAngleTo45, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJTransformControl, snapToGrid, cocos2d::CCPoint, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJTransformControl, snapToNearestVertex, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, spriteByTag, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, updateAnchorSprite, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1a5ff0, Thiscall, GJTransformControl, updateButtons, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJTransformControl, updateMinMaxPositions, )
		}
	};
}
