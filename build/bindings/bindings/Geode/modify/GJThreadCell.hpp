#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJThreadCell.hpp>
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

	#ifndef GEODE_STATICS_loadFromThread
		#define GEODE_STATICS_loadFromThread
		GEODE_AS_STATIC_FUNCTION(loadFromThread) 
	#endif

	#ifndef GEODE_STATICS_onShowMembers
		#define GEODE_STATICS_onShowMembers
		GEODE_AS_STATIC_FUNCTION(onShowMembers) 
	#endif

	#ifndef GEODE_STATICS_onThreadOptions
		#define GEODE_STATICS_onThreadOptions
		GEODE_AS_STATIC_FUNCTION(onThreadOptions) 
	#endif

	#ifndef GEODE_STATICS_onToggleSelect
		#define GEODE_STATICS_onToggleSelect
		GEODE_AS_STATIC_FUNCTION(onToggleSelect) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_onViewThread
		#define GEODE_STATICS_onViewThread
		GEODE_AS_STATIC_FUNCTION(onViewThread) 
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

	#ifndef GEODE_CONCEPT_CHECK_loadFromThread
		#define GEODE_CONCEPT_CHECK_loadFromThread
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromThread) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowMembers
		#define GEODE_CONCEPT_CHECK_onShowMembers
		GEODE_CONCEPT_FUNCTION_CHECK(onShowMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onThreadOptions
		#define GEODE_CONCEPT_CHECK_onThreadOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onThreadOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSelect
		#define GEODE_CONCEPT_CHECK_onToggleSelect
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSelect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewThread
		#define GEODE_CONCEPT_CHECK_onViewThread
		GEODE_CONCEPT_FUNCTION_CHECK(onViewThread) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJThreadCell> : ModifyBase<ModifyDerive<Der, GJThreadCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJThreadCell>>;
		using ModifyBase<ModifyDerive<Der, GJThreadCell>>::ModifyBase;
		using Base = GJThreadCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1592e0, Thiscall, GJThreadCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff70, Thiscall, GJThreadCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1487a0, Thiscall, GJThreadCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1597d0, Thiscall, GJThreadCell, loadFromThread, GJMessageThread*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15ab80, Thiscall, GJThreadCell, onShowMembers, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15ac30, Thiscall, GJThreadCell, onThreadOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15abc0, Thiscall, GJThreadCell, onToggleSelect, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15ab40, Thiscall, GJThreadCell, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x15ab10, Thiscall, GJThreadCell, onViewThread, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJThreadCell, updateBGColor, int)
		}
	};
}
