#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlatformerControlsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_update
		#define GEODE_STATICS_update
		GEODE_AS_STATIC_FUNCTION(update) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_onLevelControlsRefreshed
		#define GEODE_STATICS_onLevelControlsRefreshed
		GEODE_AS_STATIC_FUNCTION(onLevelControlsRefreshed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_commitCustomDraft
		#define GEODE_STATICS_commitCustomDraft
		GEODE_AS_STATIC_FUNCTION(commitCustomDraft) 
	#endif

	#ifndef GEODE_STATICS_ensureCustomDraft
		#define GEODE_STATICS_ensureCustomDraft
		GEODE_AS_STATIC_FUNCTION(ensureCustomDraft) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onApplyCreator
		#define GEODE_STATICS_onApplyCreator
		GEODE_AS_STATIC_FUNCTION(onApplyCreator) 
	#endif

	#ifndef GEODE_STATICS_onController
		#define GEODE_STATICS_onController
		GEODE_AS_STATIC_FUNCTION(onController) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onKeyboard
		#define GEODE_STATICS_onKeyboard
		GEODE_AS_STATIC_FUNCTION(onKeyboard) 
	#endif

	#ifndef GEODE_STATICS_onToggleSource
		#define GEODE_STATICS_onToggleSource
		GEODE_AS_STATIC_FUNCTION(onToggleSource) 
	#endif

	#ifndef GEODE_STATICS_onToggleUpload
		#define GEODE_STATICS_onToggleUpload
		GEODE_AS_STATIC_FUNCTION(onToggleUpload) 
	#endif

	#ifndef GEODE_STATICS_onTouch
		#define GEODE_STATICS_onTouch
		GEODE_AS_STATIC_FUNCTION(onTouch) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_onUpload
		#define GEODE_STATICS_onUpload
		GEODE_AS_STATIC_FUNCTION(onUpload) 
	#endif

	#ifndef GEODE_STATICS_presentClasses
		#define GEODE_STATICS_presentClasses
		GEODE_AS_STATIC_FUNCTION(presentClasses) 
	#endif

	#ifndef GEODE_STATICS_reapplyRuntime
		#define GEODE_STATICS_reapplyRuntime
		GEODE_AS_STATIC_FUNCTION(reapplyRuntime) 
	#endif

	#ifndef GEODE_STATICS_refreshApplyVisible
		#define GEODE_STATICS_refreshApplyVisible
		GEODE_AS_STATIC_FUNCTION(refreshApplyVisible) 
	#endif

	#ifndef GEODE_STATICS_refreshClassUI
		#define GEODE_STATICS_refreshClassUI
		GEODE_AS_STATIC_FUNCTION(refreshClassUI) 
	#endif

	#ifndef GEODE_STATICS_refreshModeUI
		#define GEODE_STATICS_refreshModeUI
		GEODE_AS_STATIC_FUNCTION(refreshModeUI) 
	#endif

	#ifndef GEODE_STATICS_refreshUploadColumn
		#define GEODE_STATICS_refreshUploadColumn
		GEODE_AS_STATIC_FUNCTION(refreshUploadColumn) 
	#endif

	#ifndef GEODE_STATICS_sourceIsCustom
		#define GEODE_STATICS_sourceIsCustom
		GEODE_AS_STATIC_FUNCTION(sourceIsCustom) 
	#endif

	#ifndef GEODE_STATICS_syncSourceUI
		#define GEODE_STATICS_syncSourceUI
		GEODE_AS_STATIC_FUNCTION(syncSourceUI) 
	#endif

	#ifndef GEODE_STATICS_updateEditLabel
		#define GEODE_STATICS_updateEditLabel
		GEODE_AS_STATIC_FUNCTION(updateEditLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_update
		#define GEODE_CONCEPT_CHECK_update
		GEODE_CONCEPT_FUNCTION_CHECK(update) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelControlsRefreshed
		#define GEODE_CONCEPT_CHECK_onLevelControlsRefreshed
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelControlsRefreshed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commitCustomDraft
		#define GEODE_CONCEPT_CHECK_commitCustomDraft
		GEODE_CONCEPT_FUNCTION_CHECK(commitCustomDraft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ensureCustomDraft
		#define GEODE_CONCEPT_CHECK_ensureCustomDraft
		GEODE_CONCEPT_FUNCTION_CHECK(ensureCustomDraft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onApplyCreator
		#define GEODE_CONCEPT_CHECK_onApplyCreator
		GEODE_CONCEPT_FUNCTION_CHECK(onApplyCreator) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onController
		#define GEODE_CONCEPT_CHECK_onController
		GEODE_CONCEPT_FUNCTION_CHECK(onController) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onKeyboard
		#define GEODE_CONCEPT_CHECK_onKeyboard
		GEODE_CONCEPT_FUNCTION_CHECK(onKeyboard) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSource
		#define GEODE_CONCEPT_CHECK_onToggleSource
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSource) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleUpload
		#define GEODE_CONCEPT_CHECK_onToggleUpload
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleUpload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTouch
		#define GEODE_CONCEPT_CHECK_onTouch
		GEODE_CONCEPT_FUNCTION_CHECK(onTouch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpload
		#define GEODE_CONCEPT_CHECK_onUpload
		GEODE_CONCEPT_FUNCTION_CHECK(onUpload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_presentClasses
		#define GEODE_CONCEPT_CHECK_presentClasses
		GEODE_CONCEPT_FUNCTION_CHECK(presentClasses) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reapplyRuntime
		#define GEODE_CONCEPT_CHECK_reapplyRuntime
		GEODE_CONCEPT_FUNCTION_CHECK(reapplyRuntime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshApplyVisible
		#define GEODE_CONCEPT_CHECK_refreshApplyVisible
		GEODE_CONCEPT_FUNCTION_CHECK(refreshApplyVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshClassUI
		#define GEODE_CONCEPT_CHECK_refreshClassUI
		GEODE_CONCEPT_FUNCTION_CHECK(refreshClassUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshModeUI
		#define GEODE_CONCEPT_CHECK_refreshModeUI
		GEODE_CONCEPT_FUNCTION_CHECK(refreshModeUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshUploadColumn
		#define GEODE_CONCEPT_CHECK_refreshUploadColumn
		GEODE_CONCEPT_FUNCTION_CHECK(refreshUploadColumn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sourceIsCustom
		#define GEODE_CONCEPT_CHECK_sourceIsCustom
		GEODE_CONCEPT_FUNCTION_CHECK(sourceIsCustom) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncSourceUI
		#define GEODE_CONCEPT_CHECK_syncSourceUI
		GEODE_CONCEPT_FUNCTION_CHECK(syncSourceUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateEditLabel
		#define GEODE_CONCEPT_CHECK_updateEditLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateEditLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlatformerControlsPopup> : ModifyBase<ModifyDerive<Der, PlatformerControlsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlatformerControlsPopup>>;
		using ModifyBase<ModifyDerive<Der, PlatformerControlsPopup>>::ModifyBase;
		using Base = PlatformerControlsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4502c0, Thiscall, PlatformerControlsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x450060, Default, PlatformerControlsPopup, create, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4511a0, Thiscall, PlatformerControlsPopup, update, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451ce0, Thiscall, PlatformerControlsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451d20, Thiscall, PlatformerControlsPopup, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451eb0, Thiscall, PlatformerControlsPopup, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4520f0, Thiscall, PlatformerControlsPopup, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451460, Thiscall, PlatformerControlsPopup, onLevelControlsRefreshed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451fa0, Thiscall, PlatformerControlsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformerControlsPopup, commitCustomDraft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x450470, Thiscall, PlatformerControlsPopup, ensureCustomDraft, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x44f100, Thiscall, PlatformerControlsPopup, init, GJGameLevel*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4511f0, Thiscall, PlatformerControlsPopup, onApplyCreator, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451870, Thiscall, PlatformerControlsPopup, onController, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451600, Thiscall, PlatformerControlsPopup, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451810, Thiscall, PlatformerControlsPopup, onKeyboard, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451730, Thiscall, PlatformerControlsPopup, onToggleSource, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4517c0, Thiscall, PlatformerControlsPopup, onToggleUpload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4518c0, Thiscall, PlatformerControlsPopup, onTouch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451390, Thiscall, PlatformerControlsPopup, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451920, Thiscall, PlatformerControlsPopup, onUpload, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformerControlsPopup, presentClasses, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformerControlsPopup, reapplyRuntime, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformerControlsPopup, refreshApplyVisible, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x450e60, Thiscall, PlatformerControlsPopup, refreshClassUI, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformerControlsPopup, refreshModeUI, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformerControlsPopup, refreshUploadColumn, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformerControlsPopup, sourceIsCustom, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlatformerControlsPopup, syncSourceUI, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x451730, Thiscall, PlatformerControlsPopup, updateEditLabel, )
		}
	};
}
