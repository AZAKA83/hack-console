#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ThreadDescPopup.hpp>
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

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_emotePicked
		#define GEODE_STATICS_emotePicked
		GEODE_AS_STATIC_FUNCTION(emotePicked) 
	#endif

	#ifndef GEODE_STATICS_emotePickerClosed
		#define GEODE_STATICS_emotePickerClosed
		GEODE_AS_STATIC_FUNCTION(emotePickerClosed) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFinished
		#define GEODE_STATICS_threadUpdateFinished
		GEODE_AS_STATIC_FUNCTION(threadUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFailed
		#define GEODE_STATICS_threadUpdateFailed
		GEODE_AS_STATIC_FUNCTION(threadUpdateFailed) 
	#endif

	#ifndef GEODE_STATICS_threadMessagesFinished
		#define GEODE_STATICS_threadMessagesFinished
		GEODE_AS_STATIC_FUNCTION(threadMessagesFinished) 
	#endif

	#ifndef GEODE_STATICS_threadMessagesFailed
		#define GEODE_STATICS_threadMessagesFailed
		GEODE_AS_STATIC_FUNCTION(threadMessagesFailed) 
	#endif

	#ifndef GEODE_STATICS_threadSearchFinished
		#define GEODE_STATICS_threadSearchFinished
		GEODE_AS_STATIC_FUNCTION(threadSearchFinished) 
	#endif

	#ifndef GEODE_STATICS_threadSearchFailed
		#define GEODE_STATICS_threadSearchFailed
		GEODE_AS_STATIC_FUNCTION(threadSearchFailed) 
	#endif

	#ifndef GEODE_STATICS_threadSendFinished
		#define GEODE_STATICS_threadSendFinished
		GEODE_AS_STATIC_FUNCTION(threadSendFinished) 
	#endif

	#ifndef GEODE_STATICS_threadSendFailed
		#define GEODE_STATICS_threadSendFailed
		GEODE_AS_STATIC_FUNCTION(threadSendFailed) 
	#endif

	#ifndef GEODE_STATICS_buildUI
		#define GEODE_STATICS_buildUI
		GEODE_AS_STATIC_FUNCTION(buildUI) 
	#endif

	#ifndef GEODE_STATICS_finishSave
		#define GEODE_STATICS_finishSave
		GEODE_AS_STATIC_FUNCTION(finishSave) 
	#endif

	#ifndef GEODE_STATICS_handBackSlot
		#define GEODE_STATICS_handBackSlot
		GEODE_AS_STATIC_FUNCTION(handBackSlot) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEmotes
		#define GEODE_STATICS_onEmotes
		GEODE_AS_STATIC_FUNCTION(onEmotes) 
	#endif

	#ifndef GEODE_STATICS_onPickIcon
		#define GEODE_STATICS_onPickIcon
		GEODE_AS_STATIC_FUNCTION(onPickIcon) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_refreshIconSlot
		#define GEODE_STATICS_refreshIconSlot
		GEODE_AS_STATIC_FUNCTION(refreshIconSlot) 
	#endif

	#ifndef GEODE_STATICS_sendDescription
		#define GEODE_STATICS_sendDescription
		GEODE_AS_STATIC_FUNCTION(sendDescription) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePicked
		#define GEODE_CONCEPT_CHECK_emotePicked
		GEODE_CONCEPT_FUNCTION_CHECK(emotePicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePickerClosed
		#define GEODE_CONCEPT_CHECK_emotePickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFinished
		#define GEODE_CONCEPT_CHECK_threadUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFailed
		#define GEODE_CONCEPT_CHECK_threadUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMessagesFinished
		#define GEODE_CONCEPT_CHECK_threadMessagesFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadMessagesFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMessagesFailed
		#define GEODE_CONCEPT_CHECK_threadMessagesFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadMessagesFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSearchFinished
		#define GEODE_CONCEPT_CHECK_threadSearchFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSearchFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSearchFailed
		#define GEODE_CONCEPT_CHECK_threadSearchFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSearchFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFinished
		#define GEODE_CONCEPT_CHECK_threadSendFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFailed
		#define GEODE_CONCEPT_CHECK_threadSendFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildUI
		#define GEODE_CONCEPT_CHECK_buildUI
		GEODE_CONCEPT_FUNCTION_CHECK(buildUI) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_finishSave
		#define GEODE_CONCEPT_CHECK_finishSave
		GEODE_CONCEPT_FUNCTION_CHECK(finishSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handBackSlot
		#define GEODE_CONCEPT_CHECK_handBackSlot
		GEODE_CONCEPT_FUNCTION_CHECK(handBackSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEmotes
		#define GEODE_CONCEPT_CHECK_onEmotes
		GEODE_CONCEPT_FUNCTION_CHECK(onEmotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPickIcon
		#define GEODE_CONCEPT_CHECK_onPickIcon
		GEODE_CONCEPT_FUNCTION_CHECK(onPickIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshIconSlot
		#define GEODE_CONCEPT_CHECK_refreshIconSlot
		GEODE_CONCEPT_FUNCTION_CHECK(refreshIconSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sendDescription
		#define GEODE_CONCEPT_CHECK_sendDescription
		GEODE_CONCEPT_FUNCTION_CHECK(sendDescription) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ThreadDescPopup> : ModifyBase<ModifyDerive<Der, ThreadDescPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ThreadDescPopup>>;
		using ModifyBase<ModifyDerive<Der, ThreadDescPopup>>::ModifyBase;
		using Base = ThreadDescPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd4140, Thiscall, ThreadDescPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadDescPopup, create, GJMessageThread*, ThreadViewPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, ThreadDescPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe920, Thiscall, ThreadDescPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfd4a0, Thiscall, ThreadDescPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfdb70, Thiscall, ThreadDescPopup, emotePicked, EmotePickerPopup*, EmoteDef const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfdbc0, Thiscall, ThreadDescPopup, emotePickerClosed, EmotePickerPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe2a0, Thiscall, ThreadDescPopup, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe3c0, Thiscall, ThreadDescPopup, threadUpdateFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe500, Thiscall, ThreadDescPopup, threadMessagesFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe5b0, Thiscall, ThreadDescPopup, threadMessagesFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe660, Thiscall, ThreadDescPopup, threadSearchFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe710, Thiscall, ThreadDescPopup, threadSearchFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe7c0, Thiscall, ThreadDescPopup, threadSendFinished, int, long long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfe870, Thiscall, ThreadDescPopup, threadSendFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfc920, Thiscall, ThreadDescPopup, buildUI, bool, std::string const&, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadDescPopup, finishSave, char const*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadDescPopup, handBackSlot, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadDescPopup, init, GJMessageThread*, ThreadViewPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfda40, Thiscall, ThreadDescPopup, onEmotes, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfd940, Thiscall, ThreadDescPopup, onPickIcon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xfdbd0, Thiscall, ThreadDescPopup, onSave, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadDescPopup, refreshIconSlot, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadDescPopup, sendDescription, )
		}
	};
}
