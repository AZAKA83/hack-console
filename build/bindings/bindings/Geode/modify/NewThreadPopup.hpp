#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NewThreadPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_emotePickerKeyDown
		#define GEODE_STATICS_emotePickerKeyDown
		GEODE_AS_STATIC_FUNCTION(emotePickerKeyDown) 
	#endif

	#ifndef GEODE_STATICS_emotePickerClosed
		#define GEODE_STATICS_emotePickerClosed
		GEODE_AS_STATIC_FUNCTION(emotePickerClosed) 
	#endif

	#ifndef GEODE_STATICS_emotePicked
		#define GEODE_STATICS_emotePicked
		GEODE_AS_STATIC_FUNCTION(emotePicked) 
	#endif

	#ifndef GEODE_STATICS_levelPicked
		#define GEODE_STATICS_levelPicked
		GEODE_AS_STATIC_FUNCTION(levelPicked) 
	#endif

	#ifndef GEODE_STATICS_listPicked
		#define GEODE_STATICS_listPicked
		GEODE_AS_STATIC_FUNCTION(listPicked) 
	#endif

	#ifndef GEODE_STATICS_shareIDPicked
		#define GEODE_STATICS_shareIDPicked
		GEODE_AS_STATIC_FUNCTION(shareIDPicked) 
	#endif

	#ifndef GEODE_STATICS_friendPicked
		#define GEODE_STATICS_friendPicked
		GEODE_AS_STATIC_FUNCTION(friendPicked) 
	#endif

	#ifndef GEODE_STATICS_isRecipientSelected
		#define GEODE_STATICS_isRecipientSelected
		GEODE_AS_STATIC_FUNCTION(isRecipientSelected) 
	#endif

	#ifndef GEODE_STATICS_selectedRecipientCount
		#define GEODE_STATICS_selectedRecipientCount
		GEODE_AS_STATIC_FUNCTION(selectedRecipientCount) 
	#endif

	#ifndef GEODE_STATICS_selectedRecipients
		#define GEODE_STATICS_selectedRecipients
		GEODE_AS_STATIC_FUNCTION(selectedRecipients) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_threadSendFinished
		#define GEODE_STATICS_threadSendFinished
		GEODE_AS_STATIC_FUNCTION(threadSendFinished) 
	#endif

	#ifndef GEODE_STATICS_threadSendFailed
		#define GEODE_STATICS_threadSendFailed
		GEODE_AS_STATIC_FUNCTION(threadSendFailed) 
	#endif

	#ifndef GEODE_STATICS_applyMode
		#define GEODE_STATICS_applyMode
		GEODE_AS_STATIC_FUNCTION(applyMode) 
	#endif

	#ifndef GEODE_STATICS_bodyCharLimit
		#define GEODE_STATICS_bodyCharLimit
		GEODE_AS_STATIC_FUNCTION(bodyCharLimit) 
	#endif

	#ifndef GEODE_STATICS_bodyEmoteCap
		#define GEODE_STATICS_bodyEmoteCap
		GEODE_AS_STATIC_FUNCTION(bodyEmoteCap) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_insertShareToken
		#define GEODE_STATICS_insertShareToken
		GEODE_AS_STATIC_FUNCTION(insertShareToken) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onEmotes
		#define GEODE_STATICS_onEmotes
		GEODE_AS_STATIC_FUNCTION(onEmotes) 
	#endif

	#ifndef GEODE_STATICS_onOpenPicker
		#define GEODE_STATICS_onOpenPicker
		GEODE_AS_STATIC_FUNCTION(onOpenPicker) 
	#endif

	#ifndef GEODE_STATICS_onPickIcon
		#define GEODE_STATICS_onPickIcon
		GEODE_AS_STATIC_FUNCTION(onPickIcon) 
	#endif

	#ifndef GEODE_STATICS_onSend
		#define GEODE_STATICS_onSend
		GEODE_AS_STATIC_FUNCTION(onSend) 
	#endif

	#ifndef GEODE_STATICS_onShareLevel
		#define GEODE_STATICS_onShareLevel
		GEODE_AS_STATIC_FUNCTION(onShareLevel) 
	#endif

	#ifndef GEODE_STATICS_onToggleMode
		#define GEODE_STATICS_onToggleMode
		GEODE_AS_STATIC_FUNCTION(onToggleMode) 
	#endif

	#ifndef GEODE_STATICS_refreshIconSlot
		#define GEODE_STATICS_refreshIconSlot
		GEODE_AS_STATIC_FUNCTION(refreshIconSlot) 
	#endif

	#ifndef GEODE_STATICS_setSendPending
		#define GEODE_STATICS_setSendPending
		GEODE_AS_STATIC_FUNCTION(setSendPending) 
	#endif

	#ifndef GEODE_STATICS_updateCharCount
		#define GEODE_STATICS_updateCharCount
		GEODE_AS_STATIC_FUNCTION(updateCharCount) 
	#endif

	#ifndef GEODE_STATICS_updateRecipientLabel
		#define GEODE_STATICS_updateRecipientLabel
		GEODE_AS_STATIC_FUNCTION(updateRecipientLabel) 
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

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePickerKeyDown
		#define GEODE_CONCEPT_CHECK_emotePickerKeyDown
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerKeyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePickerClosed
		#define GEODE_CONCEPT_CHECK_emotePickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePicked
		#define GEODE_CONCEPT_CHECK_emotePicked
		GEODE_CONCEPT_FUNCTION_CHECK(emotePicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_levelPicked
		#define GEODE_CONCEPT_CHECK_levelPicked
		GEODE_CONCEPT_FUNCTION_CHECK(levelPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_listPicked
		#define GEODE_CONCEPT_CHECK_listPicked
		GEODE_CONCEPT_FUNCTION_CHECK(listPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_shareIDPicked
		#define GEODE_CONCEPT_CHECK_shareIDPicked
		GEODE_CONCEPT_FUNCTION_CHECK(shareIDPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendPicked
		#define GEODE_CONCEPT_CHECK_friendPicked
		GEODE_CONCEPT_FUNCTION_CHECK(friendPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRecipientSelected
		#define GEODE_CONCEPT_CHECK_isRecipientSelected
		GEODE_CONCEPT_FUNCTION_CHECK(isRecipientSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedRecipientCount
		#define GEODE_CONCEPT_CHECK_selectedRecipientCount
		GEODE_CONCEPT_FUNCTION_CHECK(selectedRecipientCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedRecipients
		#define GEODE_CONCEPT_CHECK_selectedRecipients
		GEODE_CONCEPT_FUNCTION_CHECK(selectedRecipients) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFinished
		#define GEODE_CONCEPT_CHECK_threadSendFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFailed
		#define GEODE_CONCEPT_CHECK_threadSendFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyMode
		#define GEODE_CONCEPT_CHECK_applyMode
		GEODE_CONCEPT_FUNCTION_CHECK(applyMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bodyCharLimit
		#define GEODE_CONCEPT_CHECK_bodyCharLimit
		GEODE_CONCEPT_FUNCTION_CHECK(bodyCharLimit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bodyEmoteCap
		#define GEODE_CONCEPT_CHECK_bodyEmoteCap
		GEODE_CONCEPT_FUNCTION_CHECK(bodyEmoteCap) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertShareToken
		#define GEODE_CONCEPT_CHECK_insertShareToken
		GEODE_CONCEPT_FUNCTION_CHECK(insertShareToken) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEmotes
		#define GEODE_CONCEPT_CHECK_onEmotes
		GEODE_CONCEPT_FUNCTION_CHECK(onEmotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenPicker
		#define GEODE_CONCEPT_CHECK_onOpenPicker
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenPicker) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPickIcon
		#define GEODE_CONCEPT_CHECK_onPickIcon
		GEODE_CONCEPT_FUNCTION_CHECK(onPickIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSend
		#define GEODE_CONCEPT_CHECK_onSend
		GEODE_CONCEPT_FUNCTION_CHECK(onSend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShareLevel
		#define GEODE_CONCEPT_CHECK_onShareLevel
		GEODE_CONCEPT_FUNCTION_CHECK(onShareLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleMode
		#define GEODE_CONCEPT_CHECK_onToggleMode
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshIconSlot
		#define GEODE_CONCEPT_CHECK_refreshIconSlot
		GEODE_CONCEPT_FUNCTION_CHECK(refreshIconSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setSendPending
		#define GEODE_CONCEPT_CHECK_setSendPending
		GEODE_CONCEPT_FUNCTION_CHECK(setSendPending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCharCount
		#define GEODE_CONCEPT_CHECK_updateCharCount
		GEODE_CONCEPT_FUNCTION_CHECK(updateCharCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateRecipientLabel
		#define GEODE_CONCEPT_CHECK_updateRecipientLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateRecipientLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NewThreadPopup> : ModifyBase<ModifyDerive<Der, NewThreadPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NewThreadPopup>>;
		using ModifyBase<ModifyDerive<Der, NewThreadPopup>>::ModifyBase;
		using Base = NewThreadPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd3a60, Thiscall, NewThreadPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeeda0, Default, NewThreadPopup, create, int, std::string const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3e30, Thiscall, NewThreadPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0510, Thiscall, NewThreadPopup, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3d00, Thiscall, NewThreadPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe2e50, Thiscall, NewThreadPopup, emotePickerKeyDown, EmotePickerPopup*, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf06f0, Thiscall, NewThreadPopup, emotePickerClosed, EmotePickerPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0880, Thiscall, NewThreadPopup, emotePicked, EmotePickerPopup*, EmoteDef const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1330, Thiscall, NewThreadPopup, levelPicked, GJGameLevel*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1430, Thiscall, NewThreadPopup, listPicked, GJLevelList*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1520, Thiscall, NewThreadPopup, shareIDPicked, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1db0, Thiscall, NewThreadPopup, friendPicked, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1a20, Thiscall, NewThreadPopup, isRecipientSelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf19f0, Thiscall, NewThreadPopup, selectedRecipientCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1a10, Thiscall, NewThreadPopup, selectedRecipients, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf10d0, Thiscall, NewThreadPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf33e0, Thiscall, NewThreadPopup, threadSendFinished, int, long long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3c10, Thiscall, NewThreadPopup, threadSendFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0ac0, Thiscall, NewThreadPopup, applyMode, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewThreadPopup, bodyCharLimit, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewThreadPopup, bodyEmoteCap, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeefd0, Thiscall, NewThreadPopup, init, int, std::string const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1610, Thiscall, NewThreadPopup, insertShareToken, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf3d90, Thiscall, NewThreadPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf05a0, Thiscall, NewThreadPopup, onEmotes, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1d50, Thiscall, NewThreadPopup, onOpenPicker, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0780, Thiscall, NewThreadPopup, onPickIcon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf2020, Thiscall, NewThreadPopup, onSend, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf12f0, Thiscall, NewThreadPopup, onShareLevel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf0700, Thiscall, NewThreadPopup, onToggleMode, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewThreadPopup, refreshIconSlot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1f40, Thiscall, NewThreadPopup, setSendPending, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewThreadPopup, updateCharCount, cocos2d::CCLabelBMFont*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf1aa0, Thiscall, NewThreadPopup, updateRecipientLabel, )
		}
	};
}
