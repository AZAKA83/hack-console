#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/LevelCell.hpp>
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

	#ifndef GEODE_STATICS_inRecallMode
		#define GEODE_STATICS_inRecallMode
		GEODE_AS_STATIC_FUNCTION(inRecallMode) 
	#endif

	#ifndef GEODE_STATICS_loadCustomLevelCell
		#define GEODE_STATICS_loadCustomLevelCell
		GEODE_AS_STATIC_FUNCTION(loadCustomLevelCell) 
	#endif

	#ifndef GEODE_STATICS_loadFromLevel
		#define GEODE_STATICS_loadFromLevel
		GEODE_AS_STATIC_FUNCTION(loadFromLevel) 
	#endif

	#ifndef GEODE_STATICS_loadLocalLevelCell
		#define GEODE_STATICS_loadLocalLevelCell
		GEODE_AS_STATIC_FUNCTION(loadLocalLevelCell) 
	#endif

	#ifndef GEODE_STATICS_onClick
		#define GEODE_STATICS_onClick
		GEODE_AS_STATIC_FUNCTION(onClick) 
	#endif

	#ifndef GEODE_STATICS_onToggle
		#define GEODE_STATICS_onToggle
		GEODE_AS_STATIC_FUNCTION(onToggle) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_playRecallUnlock
		#define GEODE_STATICS_playRecallUnlock
		GEODE_AS_STATIC_FUNCTION(playRecallUnlock) 
	#endif

	#ifndef GEODE_STATICS_recallChestReady
		#define GEODE_STATICS_recallChestReady
		GEODE_AS_STATIC_FUNCTION(recallChestReady) 
	#endif

	#ifndef GEODE_STATICS_recallLevel
		#define GEODE_STATICS_recallLevel
		GEODE_AS_STATIC_FUNCTION(recallLevel) 
	#endif

	#ifndef GEODE_STATICS_recallSavedLevel
		#define GEODE_STATICS_recallSavedLevel
		GEODE_AS_STATIC_FUNCTION(recallSavedLevel) 
	#endif

	#ifndef GEODE_STATICS_updateCellMode
		#define GEODE_STATICS_updateCellMode
		GEODE_AS_STATIC_FUNCTION(updateCellMode) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inRecallMode
		#define GEODE_CONCEPT_CHECK_inRecallMode
		GEODE_CONCEPT_FUNCTION_CHECK(inRecallMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadCustomLevelCell
		#define GEODE_CONCEPT_CHECK_loadCustomLevelCell
		GEODE_CONCEPT_FUNCTION_CHECK(loadCustomLevelCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromLevel
		#define GEODE_CONCEPT_CHECK_loadFromLevel
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadLocalLevelCell
		#define GEODE_CONCEPT_CHECK_loadLocalLevelCell
		GEODE_CONCEPT_FUNCTION_CHECK(loadLocalLevelCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClick
		#define GEODE_CONCEPT_CHECK_onClick
		GEODE_CONCEPT_FUNCTION_CHECK(onClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggle
		#define GEODE_CONCEPT_CHECK_onToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playRecallUnlock
		#define GEODE_CONCEPT_CHECK_playRecallUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(playRecallUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recallChestReady
		#define GEODE_CONCEPT_CHECK_recallChestReady
		GEODE_CONCEPT_FUNCTION_CHECK(recallChestReady) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recallLevel
		#define GEODE_CONCEPT_CHECK_recallLevel
		GEODE_CONCEPT_FUNCTION_CHECK(recallLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_recallSavedLevel
		#define GEODE_CONCEPT_CHECK_recallSavedLevel
		GEODE_CONCEPT_FUNCTION_CHECK(recallSavedLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCellMode
		#define GEODE_CONCEPT_CHECK_updateCellMode
		GEODE_CONCEPT_FUNCTION_CHECK(updateCellMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateToggle
		#define GEODE_CONCEPT_CHECK_updateToggle
		GEODE_CONCEPT_FUNCTION_CHECK(updateToggle) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, LevelCell> : ModifyBase<ModifyDerive<Der, LevelCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, LevelCell>>;
		using ModifyBase<ModifyDerive<Der, LevelCell>>::ModifyBase;
		using Base = LevelCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x148990, Thiscall, LevelCell, char const*, float, float)
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x148870, Thiscall, LevelCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelCell, create, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148a50, Thiscall, LevelCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14d560, Thiscall, LevelCell, draw, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelCell, inRecallMode, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x149120, Thiscall, LevelCell, loadCustomLevelCell, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148a80, Thiscall, LevelCell, loadFromLevel, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14c7f0, Thiscall, LevelCell, loadLocalLevelCell, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14d200, Thiscall, LevelCell, onClick, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148c70, Thiscall, LevelCell, onToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14d520, Thiscall, LevelCell, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148d30, Thiscall, LevelCell, playRecallUnlock, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelCell, recallChestReady, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x148cc0, Thiscall, LevelCell, recallLevel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(LevelCell, recallSavedLevel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelCell, updateBGColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x14d050, Thiscall, LevelCell, updateCellMode, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(LevelCell, updateToggle, )
		}
	};
}
