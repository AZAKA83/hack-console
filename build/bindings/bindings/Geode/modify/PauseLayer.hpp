#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PauseLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_volumeChanged
		#define GEODE_STATICS_volumeChanged
		GEODE_AS_STATIC_FUNCTION(volumeChanged) 
	#endif

	#ifndef GEODE_STATICS_handleAction
		#define GEODE_STATICS_handleAction
		GEODE_AS_STATIC_FUNCTION(handleAction) 
	#endif

	#ifndef GEODE_STATICS_startPosSelected
		#define GEODE_STATICS_startPosSelected
		GEODE_AS_STATIC_FUNCTION(startPosSelected) 
	#endif

	#ifndef GEODE_STATICS_createStartPosPopupClosed
		#define GEODE_STATICS_createStartPosPopupClosed
		GEODE_AS_STATIC_FUNCTION(createStartPosPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_getQueuedStartPos
		#define GEODE_STATICS_getQueuedStartPos
		GEODE_AS_STATIC_FUNCTION(getQueuedStartPos) 
	#endif

	#ifndef GEODE_STATICS_goEdit
		#define GEODE_STATICS_goEdit
		GEODE_AS_STATIC_FUNCTION(goEdit) 
	#endif

	#ifndef GEODE_STATICS_musicSliderChanged
		#define GEODE_STATICS_musicSliderChanged
		GEODE_AS_STATIC_FUNCTION(musicSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_onChangeStartpos
		#define GEODE_STATICS_onChangeStartpos
		GEODE_AS_STATIC_FUNCTION(onChangeStartpos) 
	#endif

	#ifndef GEODE_STATICS_onCreateStartpos
		#define GEODE_STATICS_onCreateStartpos
		GEODE_AS_STATIC_FUNCTION(onCreateStartpos) 
	#endif

	#ifndef GEODE_STATICS_onEdit
		#define GEODE_STATICS_onEdit
		GEODE_AS_STATIC_FUNCTION(onEdit) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onNormalMode
		#define GEODE_STATICS_onNormalMode
		GEODE_AS_STATIC_FUNCTION(onNormalMode) 
	#endif

	#ifndef GEODE_STATICS_onPracticeMode
		#define GEODE_STATICS_onPracticeMode
		GEODE_AS_STATIC_FUNCTION(onPracticeMode) 
	#endif

	#ifndef GEODE_STATICS_onQuit
		#define GEODE_STATICS_onQuit
		GEODE_AS_STATIC_FUNCTION(onQuit) 
	#endif

	#ifndef GEODE_STATICS_onRecordReplays
		#define GEODE_STATICS_onRecordReplays
		GEODE_AS_STATIC_FUNCTION(onRecordReplays) 
	#endif

	#ifndef GEODE_STATICS_onReplay
		#define GEODE_STATICS_onReplay
		GEODE_AS_STATIC_FUNCTION(onReplay) 
	#endif

	#ifndef GEODE_STATICS_onRestart
		#define GEODE_STATICS_onRestart
		GEODE_AS_STATIC_FUNCTION(onRestart) 
	#endif

	#ifndef GEODE_STATICS_onRestartFull
		#define GEODE_STATICS_onRestartFull
		GEODE_AS_STATIC_FUNCTION(onRestartFull) 
	#endif

	#ifndef GEODE_STATICS_onResume
		#define GEODE_STATICS_onResume
		GEODE_AS_STATIC_FUNCTION(onResume) 
	#endif

	#ifndef GEODE_STATICS_onShowStartposBrowser
		#define GEODE_STATICS_onShowStartposBrowser
		GEODE_AS_STATIC_FUNCTION(onShowStartposBrowser) 
	#endif

	#ifndef GEODE_STATICS_onSideButtonPressed
		#define GEODE_STATICS_onSideButtonPressed
		GEODE_AS_STATIC_FUNCTION(onSideButtonPressed) 
	#endif

	#ifndef GEODE_STATICS_onTime
		#define GEODE_STATICS_onTime
		GEODE_AS_STATIC_FUNCTION(onTime) 
	#endif

	#ifndef GEODE_STATICS_onToggleUI
		#define GEODE_STATICS_onToggleUI
		GEODE_AS_STATIC_FUNCTION(onToggleUI) 
	#endif

	#ifndef GEODE_STATICS_onTryEdit
		#define GEODE_STATICS_onTryEdit
		GEODE_AS_STATIC_FUNCTION(onTryEdit) 
	#endif

	#ifndef GEODE_STATICS_setupLegacyProgressBars
		#define GEODE_STATICS_setupLegacyProgressBars
		GEODE_AS_STATIC_FUNCTION(setupLegacyProgressBars) 
	#endif

	#ifndef GEODE_STATICS_setupPlatformerLabels
		#define GEODE_STATICS_setupPlatformerLabels
		GEODE_AS_STATIC_FUNCTION(setupPlatformerLabels) 
	#endif

	#ifndef GEODE_STATICS_setupSessionProgressBar
		#define GEODE_STATICS_setupSessionProgressBar
		GEODE_AS_STATIC_FUNCTION(setupSessionProgressBar) 
	#endif

	#ifndef GEODE_STATICS_sfxSliderChanged
		#define GEODE_STATICS_sfxSliderChanged
		GEODE_AS_STATIC_FUNCTION(sfxSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_tryQuit
		#define GEODE_STATICS_tryQuit
		GEODE_AS_STATIC_FUNCTION(tryQuit) 
	#endif

	#ifndef GEODE_STATICS_tryShowBanner
		#define GEODE_STATICS_tryShowBanner
		GEODE_AS_STATIC_FUNCTION(tryShowBanner) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyUp
		#define GEODE_CONCEPT_CHECK_keyUp
		GEODE_CONCEPT_FUNCTION_CHECK(keyUp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_volumeChanged
		#define GEODE_CONCEPT_CHECK_volumeChanged
		GEODE_CONCEPT_FUNCTION_CHECK(volumeChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleAction
		#define GEODE_CONCEPT_CHECK_handleAction
		GEODE_CONCEPT_FUNCTION_CHECK(handleAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startPosSelected
		#define GEODE_CONCEPT_CHECK_startPosSelected
		GEODE_CONCEPT_FUNCTION_CHECK(startPosSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createStartPosPopupClosed
		#define GEODE_CONCEPT_CHECK_createStartPosPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(createStartPosPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_checkQuestsStatus
		#define GEODE_CONCEPT_CHECK_checkQuestsStatus
		GEODE_CONCEPT_FUNCTION_CHECK(checkQuestsStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getQueuedStartPos
		#define GEODE_CONCEPT_CHECK_getQueuedStartPos
		GEODE_CONCEPT_FUNCTION_CHECK(getQueuedStartPos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_goEdit
		#define GEODE_CONCEPT_CHECK_goEdit
		GEODE_CONCEPT_FUNCTION_CHECK(goEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicSliderChanged
		#define GEODE_CONCEPT_CHECK_musicSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(musicSliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onChangeStartpos
		#define GEODE_CONCEPT_CHECK_onChangeStartpos
		GEODE_CONCEPT_FUNCTION_CHECK(onChangeStartpos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCreateStartpos
		#define GEODE_CONCEPT_CHECK_onCreateStartpos
		GEODE_CONCEPT_FUNCTION_CHECK(onCreateStartpos) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEdit
		#define GEODE_CONCEPT_CHECK_onEdit
		GEODE_CONCEPT_FUNCTION_CHECK(onEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHelp
		#define GEODE_CONCEPT_CHECK_onHelp
		GEODE_CONCEPT_FUNCTION_CHECK(onHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNormalMode
		#define GEODE_CONCEPT_CHECK_onNormalMode
		GEODE_CONCEPT_FUNCTION_CHECK(onNormalMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPracticeMode
		#define GEODE_CONCEPT_CHECK_onPracticeMode
		GEODE_CONCEPT_FUNCTION_CHECK(onPracticeMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onQuit
		#define GEODE_CONCEPT_CHECK_onQuit
		GEODE_CONCEPT_FUNCTION_CHECK(onQuit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRecordReplays
		#define GEODE_CONCEPT_CHECK_onRecordReplays
		GEODE_CONCEPT_FUNCTION_CHECK(onRecordReplays) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReplay
		#define GEODE_CONCEPT_CHECK_onReplay
		GEODE_CONCEPT_FUNCTION_CHECK(onReplay) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRestart
		#define GEODE_CONCEPT_CHECK_onRestart
		GEODE_CONCEPT_FUNCTION_CHECK(onRestart) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRestartFull
		#define GEODE_CONCEPT_CHECK_onRestartFull
		GEODE_CONCEPT_FUNCTION_CHECK(onRestartFull) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResume
		#define GEODE_CONCEPT_CHECK_onResume
		GEODE_CONCEPT_FUNCTION_CHECK(onResume) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowStartposBrowser
		#define GEODE_CONCEPT_CHECK_onShowStartposBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(onShowStartposBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSideButtonPressed
		#define GEODE_CONCEPT_CHECK_onSideButtonPressed
		GEODE_CONCEPT_FUNCTION_CHECK(onSideButtonPressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTime
		#define GEODE_CONCEPT_CHECK_onTime
		GEODE_CONCEPT_FUNCTION_CHECK(onTime) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleUI
		#define GEODE_CONCEPT_CHECK_onToggleUI
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTryEdit
		#define GEODE_CONCEPT_CHECK_onTryEdit
		GEODE_CONCEPT_FUNCTION_CHECK(onTryEdit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupLegacyProgressBars
		#define GEODE_CONCEPT_CHECK_setupLegacyProgressBars
		GEODE_CONCEPT_FUNCTION_CHECK(setupLegacyProgressBars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupPlatformerLabels
		#define GEODE_CONCEPT_CHECK_setupPlatformerLabels
		GEODE_CONCEPT_FUNCTION_CHECK(setupPlatformerLabels) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupProgressBars
		#define GEODE_CONCEPT_CHECK_setupProgressBars
		GEODE_CONCEPT_FUNCTION_CHECK(setupProgressBars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupSessionProgressBar
		#define GEODE_CONCEPT_CHECK_setupSessionProgressBar
		GEODE_CONCEPT_FUNCTION_CHECK(setupSessionProgressBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxSliderChanged
		#define GEODE_CONCEPT_CHECK_sfxSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sfxSliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryQuit
		#define GEODE_CONCEPT_CHECK_tryQuit
		GEODE_CONCEPT_FUNCTION_CHECK(tryQuit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryShowBanner
		#define GEODE_CONCEPT_CHECK_tryShowBanner
		GEODE_CONCEPT_FUNCTION_CHECK(tryShowBanner) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PauseLayer> : ModifyBase<ModifyDerive<Der, PauseLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PauseLayer>>;
		using ModifyBase<ModifyDerive<Der, PauseLayer>>::ModifyBase;
		using Base = PauseLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4d6600, Thiscall, PauseLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PauseLayer, create, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dba00, Thiscall, PauseLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db900, Thiscall, PauseLayer, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d68e0, Thiscall, PauseLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db6f0, Thiscall, PauseLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PauseLayer, keyUp, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d6820, Thiscall, PauseLayer, volumeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db8b0, Thiscall, PauseLayer, handleAction, int, bool, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d92c0, Thiscall, PauseLayer, startPosSelected, StartPosBrowser*, int, StartPosObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d92e0, Thiscall, PauseLayer, createStartPosPopupClosed, CreateStartPosPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PauseLayer, checkQuestsStatus, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PauseLayer, createToggleButton, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d8f90, Thiscall, PauseLayer, getQueuedStartPos, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db450, Thiscall, PauseLayer, goEdit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PauseLayer, init, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1822f0, Thiscall, PauseLayer, musicSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d93c0, Thiscall, PauseLayer, onChangeStartpos, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d8ff0, Thiscall, PauseLayer, onCreateStartpos, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db250, Thiscall, PauseLayer, onEdit, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PauseLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dab90, Thiscall, PauseLayer, onNormalMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4daac0, Thiscall, PauseLayer, onPracticeMode, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db760, Thiscall, PauseLayer, onQuit, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PauseLayer, onRecordReplays, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PauseLayer, onReplay, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dae30, Thiscall, PauseLayer, onRestart, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4daf60, Thiscall, PauseLayer, onRestartFull, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4dac50, Thiscall, PauseLayer, onResume, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d9150, Thiscall, PauseLayer, onShowStartposBrowser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d9520, Thiscall, PauseLayer, onSideButtonPressed, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PauseLayer, onTime, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PauseLayer, onToggleUI, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db090, Thiscall, PauseLayer, onTryEdit, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4da1e0, Thiscall, PauseLayer, setupLegacyProgressBars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4da5d0, Thiscall, PauseLayer, setupPlatformerLabels, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PauseLayer, setupProgressBars, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d9d60, Thiscall, PauseLayer, setupSessionProgressBar, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182390, Thiscall, PauseLayer, sfxSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4db520, Thiscall, PauseLayer, tryQuit, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PauseLayer, tryShowBanner, float)
		}
	};
}
