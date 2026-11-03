#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJCompactUserCell.hpp>
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

	#ifndef GEODE_STATICS_addStat
		#define GEODE_STATICS_addStat
		GEODE_AS_STATIC_FUNCTION(addStat) 
	#endif

	#ifndef GEODE_STATICS_buildUserRow
		#define GEODE_STATICS_buildUserRow
		GEODE_AS_STATIC_FUNCTION(buildUserRow) 
	#endif

	#ifndef GEODE_STATICS_createStatStrip
		#define GEODE_STATICS_createStatStrip
		GEODE_AS_STATIC_FUNCTION(createStatStrip) 
	#endif

	#ifndef GEODE_STATICS_loadFromScore
		#define GEODE_STATICS_loadFromScore
		GEODE_AS_STATIC_FUNCTION(loadFromScore) 
	#endif

	#ifndef GEODE_STATICS_onSendMessage
		#define GEODE_STATICS_onSendMessage
		GEODE_AS_STATIC_FUNCTION(onSendMessage) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
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

	#ifndef GEODE_CONCEPT_CHECK_addStat
		#define GEODE_CONCEPT_CHECK_addStat
		GEODE_CONCEPT_FUNCTION_CHECK(addStat) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildUserRow
		#define GEODE_CONCEPT_CHECK_buildUserRow
		GEODE_CONCEPT_FUNCTION_CHECK(buildUserRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStatStrip
		#define GEODE_CONCEPT_CHECK_createStatStrip
		GEODE_CONCEPT_FUNCTION_CHECK(createStatStrip) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromScore
		#define GEODE_CONCEPT_CHECK_loadFromScore
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromScore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSendMessage
		#define GEODE_CONCEPT_CHECK_onSendMessage
		GEODE_CONCEPT_FUNCTION_CHECK(onSendMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJCompactUserCell> : ModifyBase<ModifyDerive<Der, GJCompactUserCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJCompactUserCell>>;
		using ModifyBase<ModifyDerive<Der, GJCompactUserCell>>::ModifyBase;
		using Base = GJCompactUserCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x157bc0, Thiscall, GJCompactUserCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x400c0, Thiscall, GJCompactUserCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1487a0, Thiscall, GJCompactUserCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x158990, Thiscall, GJCompactUserCell, addStat, int, char const*, cocos2d::CCNode*, float&, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x157e90, Thiscall, GJCompactUserCell, buildUserRow, GJUserScore*, cocos2d::CCNode*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, float, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJCompactUserCell, createStatStrip, GJUserScore*, cocos2d::CCNode*, float, float, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x157c60, Thiscall, GJCompactUserCell, loadFromScore, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x158c00, Thiscall, GJCompactUserCell, onSendMessage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x157b80, Thiscall, GJCompactUserCell, onViewProfile, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJCompactUserCell, updateBGColor, int)
		}
	};
}
