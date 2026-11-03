#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJNotificationCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_loadFromNotification
		#define GEODE_STATICS_loadFromNotification
		GEODE_AS_STATIC_FUNCTION(loadFromNotification) 
	#endif

	#ifndef GEODE_STATICS_onClaimReward
		#define GEODE_STATICS_onClaimReward
		GEODE_AS_STATIC_FUNCTION(onClaimReward) 
	#endif

	#ifndef GEODE_STATICS_onMute
		#define GEODE_STATICS_onMute
		GEODE_AS_STATIC_FUNCTION(onMute) 
	#endif

	#ifndef GEODE_STATICS_onShowBody
		#define GEODE_STATICS_onShowBody
		GEODE_AS_STATIC_FUNCTION(onShowBody) 
	#endif

	#ifndef GEODE_STATICS_onViewTarget
		#define GEODE_STATICS_onViewTarget
		GEODE_AS_STATIC_FUNCTION(onViewTarget) 
	#endif

	#ifndef GEODE_STATICS_refreshChest
		#define GEODE_STATICS_refreshChest
		GEODE_AS_STATIC_FUNCTION(refreshChest) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromNotification
		#define GEODE_CONCEPT_CHECK_loadFromNotification
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromNotification) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClaimReward
		#define GEODE_CONCEPT_CHECK_onClaimReward
		GEODE_CONCEPT_FUNCTION_CHECK(onClaimReward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMute
		#define GEODE_CONCEPT_CHECK_onMute
		GEODE_CONCEPT_FUNCTION_CHECK(onMute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowBody
		#define GEODE_CONCEPT_CHECK_onShowBody
		GEODE_CONCEPT_FUNCTION_CHECK(onShowBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewTarget
		#define GEODE_CONCEPT_CHECK_onViewTarget
		GEODE_CONCEPT_FUNCTION_CHECK(onViewTarget) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshChest
		#define GEODE_CONCEPT_CHECK_refreshChest
		GEODE_CONCEPT_FUNCTION_CHECK(refreshChest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJNotificationCell> : ModifyBase<ModifyDerive<Der, GJNotificationCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJNotificationCell>>;
		using ModifyBase<ModifyDerive<Der, GJNotificationCell>>::ModifyBase;
		using Base = GJNotificationCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x15ac70, Thiscall, GJNotificationCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff70, Thiscall, GJNotificationCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1487a0, Thiscall, GJNotificationCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15c4c0, Thiscall, GJNotificationCell, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15b0d0, Thiscall, GJNotificationCell, loadFromNotification, GJNotification*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15c810, Thiscall, GJNotificationCell, onClaimReward, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15c1a0, Thiscall, GJNotificationCell, onMute, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15c890, Thiscall, GJNotificationCell, onShowBody, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15c6e0, Thiscall, GJNotificationCell, onViewTarget, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJNotificationCell, refreshChest, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJNotificationCell, updateBGColor, int)
		}
	};
}
