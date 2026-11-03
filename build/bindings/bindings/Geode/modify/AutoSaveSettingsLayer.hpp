#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AutoSaveSettingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_valueDidChange
		#define GEODE_STATICS_valueDidChange
		GEODE_AS_STATIC_FUNCTION(valueDidChange) 
	#endif

	#ifndef GEODE_STATICS_getValue
		#define GEODE_STATICS_getValue
		GEODE_AS_STATIC_FUNCTION(getValue) 
	#endif

	#ifndef GEODE_STATICS_getBackupCap
		#define GEODE_STATICS_getBackupCap
		GEODE_AS_STATIC_FUNCTION(getBackupCap) 
	#endif

	#ifndef GEODE_STATICS_getBackupDirectory
		#define GEODE_STATICS_getBackupDirectory
		GEODE_AS_STATIC_FUNCTION(getBackupDirectory) 
	#endif

	#ifndef GEODE_STATICS_getCustomBackupDirectory
		#define GEODE_STATICS_getCustomBackupDirectory
		GEODE_AS_STATIC_FUNCTION(getCustomBackupDirectory) 
	#endif

	#ifndef GEODE_STATICS_onAdvanced
		#define GEODE_STATICS_onAdvanced
		GEODE_AS_STATIC_FUNCTION(onAdvanced) 
	#endif

	#ifndef GEODE_STATICS_onOpenBackupDir
		#define GEODE_STATICS_onOpenBackupDir
		GEODE_AS_STATIC_FUNCTION(onOpenBackupDir) 
	#endif

	#ifndef GEODE_STATICS_onSelectBackupDir
		#define GEODE_STATICS_onSelectBackupDir
		GEODE_AS_STATIC_FUNCTION(onSelectBackupDir) 
	#endif

	#ifndef GEODE_STATICS_openBackupDirectory
		#define GEODE_STATICS_openBackupDirectory
		GEODE_AS_STATIC_FUNCTION(openBackupDirectory) 
	#endif

	#ifndef GEODE_STATICS_setBackupCap
		#define GEODE_STATICS_setBackupCap
		GEODE_AS_STATIC_FUNCTION(setBackupCap) 
	#endif

	#ifndef GEODE_STATICS_setBackupDirectory
		#define GEODE_STATICS_setBackupDirectory
		GEODE_AS_STATIC_FUNCTION(setBackupDirectory) 
	#endif

	#ifndef GEODE_STATICS_updateBackupDirLabel
		#define GEODE_STATICS_updateBackupDirLabel
		GEODE_AS_STATIC_FUNCTION(updateBackupDirLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valueDidChange
		#define GEODE_CONCEPT_CHECK_valueDidChange
		GEODE_CONCEPT_FUNCTION_CHECK(valueDidChange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getValue
		#define GEODE_CONCEPT_CHECK_getValue
		GEODE_CONCEPT_FUNCTION_CHECK(getValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackupCap
		#define GEODE_CONCEPT_CHECK_getBackupCap
		GEODE_CONCEPT_FUNCTION_CHECK(getBackupCap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBackupDirectory
		#define GEODE_CONCEPT_CHECK_getBackupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(getBackupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getCustomBackupDirectory
		#define GEODE_CONCEPT_CHECK_getCustomBackupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(getCustomBackupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAdvanced
		#define GEODE_CONCEPT_CHECK_onAdvanced
		GEODE_CONCEPT_FUNCTION_CHECK(onAdvanced) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenBackupDir
		#define GEODE_CONCEPT_CHECK_onOpenBackupDir
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenBackupDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectBackupDir
		#define GEODE_CONCEPT_CHECK_onSelectBackupDir
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectBackupDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openBackupDirectory
		#define GEODE_CONCEPT_CHECK_openBackupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(openBackupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackupCap
		#define GEODE_CONCEPT_CHECK_setBackupCap
		GEODE_CONCEPT_FUNCTION_CHECK(setBackupCap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setBackupDirectory
		#define GEODE_CONCEPT_CHECK_setBackupDirectory
		GEODE_CONCEPT_FUNCTION_CHECK(setBackupDirectory) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBackupDirLabel
		#define GEODE_CONCEPT_CHECK_updateBackupDirLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateBackupDirLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AutoSaveSettingsLayer> : ModifyBase<ModifyDerive<Der, AutoSaveSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AutoSaveSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, AutoSaveSettingsLayer>>::ModifyBase;
		using Base = AutoSaveSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x9ad80, Thiscall, AutoSaveSettingsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9ae60, Default, AutoSaveSettingsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9afa0, Thiscall, AutoSaveSettingsLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9d560, Thiscall, AutoSaveSettingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9c2b0, Thiscall, AutoSaveSettingsLayer, valueDidChange, int, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9bfa0, Thiscall, AutoSaveSettingsLayer, getValue, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoSaveSettingsLayer, getBackupCap, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoSaveSettingsLayer, getBackupDirectory, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoSaveSettingsLayer, getCustomBackupDirectory, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9d260, Thiscall, AutoSaveSettingsLayer, onAdvanced, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9c830, Thiscall, AutoSaveSettingsLayer, onOpenBackupDir, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x9c610, Thiscall, AutoSaveSettingsLayer, onSelectBackupDir, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoSaveSettingsLayer, openBackupDirectory, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoSaveSettingsLayer, setBackupCap, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoSaveSettingsLayer, setBackupDirectory, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AutoSaveSettingsLayer, updateBackupDirLabel, )
		}
	};
}
