#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindingsSettingsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onEntry
		#define GEODE_STATICS_onEntry
		GEODE_AS_STATIC_FUNCTION(onEntry) 
	#endif

	#ifndef GEODE_STATICS_onExport
		#define GEODE_STATICS_onExport
		GEODE_AS_STATIC_FUNCTION(onExport) 
	#endif

	#ifndef GEODE_STATICS_onImport
		#define GEODE_STATICS_onImport
		GEODE_AS_STATIC_FUNCTION(onImport) 
	#endif

	#ifndef GEODE_STATICS_onReset
		#define GEODE_STATICS_onReset
		GEODE_AS_STATIC_FUNCTION(onReset) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEntry
		#define GEODE_CONCEPT_CHECK_onEntry
		GEODE_CONCEPT_FUNCTION_CHECK(onEntry) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExport
		#define GEODE_CONCEPT_CHECK_onExport
		GEODE_CONCEPT_FUNCTION_CHECK(onExport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onImport
		#define GEODE_CONCEPT_CHECK_onImport
		GEODE_CONCEPT_FUNCTION_CHECK(onImport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReset
		#define GEODE_CONCEPT_CHECK_onReset
		GEODE_CONCEPT_FUNCTION_CHECK(onReset) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeybindingsSettingsPopup> : ModifyBase<ModifyDerive<Der, KeybindingsSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindingsSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, KeybindingsSettingsPopup>>::ModifyBase;
		using Base = KeybindingsSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsSettingsPopup, create, KeybindingsLayer*, std::vector<KeybindSettingsEntry> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f90, Thiscall, KeybindingsSettingsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d9d80, Thiscall, KeybindingsSettingsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8e80, Thiscall, KeybindingsSettingsPopup, init, KeybindingsLayer*, std::vector<KeybindSettingsEntry> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f60, Thiscall, KeybindingsSettingsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d93c0, Thiscall, KeybindingsSettingsPopup, onEntry, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d9480, Thiscall, KeybindingsSettingsPopup, onExport, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d9640, Thiscall, KeybindingsSettingsPopup, onImport, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d9c60, Thiscall, KeybindingsSettingsPopup, onReset, cocos2d::CCObject*)
		}
	};
}
