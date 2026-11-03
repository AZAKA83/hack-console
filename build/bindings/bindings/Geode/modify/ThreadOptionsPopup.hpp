#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ThreadOptionsPopup.hpp>
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
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

	#ifndef GEODE_STATICS_handBackSlot
		#define GEODE_STATICS_handBackSlot
		GEODE_AS_STATIC_FUNCTION(handBackSlot) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCancelRequest
		#define GEODE_STATICS_onCancelRequest
		GEODE_AS_STATIC_FUNCTION(onCancelRequest) 
	#endif

	#ifndef GEODE_STATICS_onDismissRemoved
		#define GEODE_STATICS_onDismissRemoved
		GEODE_AS_STATIC_FUNCTION(onDismissRemoved) 
	#endif

	#ifndef GEODE_STATICS_onHide
		#define GEODE_STATICS_onHide
		GEODE_AS_STATIC_FUNCTION(onHide) 
	#endif

	#ifndef GEODE_STATICS_onLeave
		#define GEODE_STATICS_onLeave
		GEODE_AS_STATIC_FUNCTION(onLeave) 
	#endif

	#ifndef GEODE_STATICS_onMembers
		#define GEODE_STATICS_onMembers
		GEODE_AS_STATIC_FUNCTION(onMembers) 
	#endif

	#ifndef GEODE_STATICS_onModLock
		#define GEODE_STATICS_onModLock
		GEODE_AS_STATIC_FUNCTION(onModLock) 
	#endif

	#ifndef GEODE_STATICS_onMuteRow
		#define GEODE_STATICS_onMuteRow
		GEODE_AS_STATIC_FUNCTION(onMuteRow) 
	#endif

	#ifndef GEODE_STATICS_onPinRow
		#define GEODE_STATICS_onPinRow
		GEODE_AS_STATIC_FUNCTION(onPinRow) 
	#endif

	#ifndef GEODE_STATICS_onRename
		#define GEODE_STATICS_onRename
		GEODE_AS_STATIC_FUNCTION(onRename) 
	#endif

	#ifndef GEODE_STATICS_onReport
		#define GEODE_STATICS_onReport
		GEODE_AS_STATIC_FUNCTION(onReport) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_handBackSlot
		#define GEODE_CONCEPT_CHECK_handBackSlot
		GEODE_CONCEPT_FUNCTION_CHECK(handBackSlot) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCancelRequest
		#define GEODE_CONCEPT_CHECK_onCancelRequest
		GEODE_CONCEPT_FUNCTION_CHECK(onCancelRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDismissRemoved
		#define GEODE_CONCEPT_CHECK_onDismissRemoved
		GEODE_CONCEPT_FUNCTION_CHECK(onDismissRemoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHide
		#define GEODE_CONCEPT_CHECK_onHide
		GEODE_CONCEPT_FUNCTION_CHECK(onHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLeave
		#define GEODE_CONCEPT_CHECK_onLeave
		GEODE_CONCEPT_FUNCTION_CHECK(onLeave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMembers
		#define GEODE_CONCEPT_CHECK_onMembers
		GEODE_CONCEPT_FUNCTION_CHECK(onMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onModLock
		#define GEODE_CONCEPT_CHECK_onModLock
		GEODE_CONCEPT_FUNCTION_CHECK(onModLock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMuteRow
		#define GEODE_CONCEPT_CHECK_onMuteRow
		GEODE_CONCEPT_FUNCTION_CHECK(onMuteRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPinRow
		#define GEODE_CONCEPT_CHECK_onPinRow
		GEODE_CONCEPT_FUNCTION_CHECK(onPinRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRename
		#define GEODE_CONCEPT_CHECK_onRename
		GEODE_CONCEPT_FUNCTION_CHECK(onRename) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReport
		#define GEODE_CONCEPT_CHECK_onReport
		GEODE_CONCEPT_FUNCTION_CHECK(onReport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ThreadOptionsPopup> : ModifyBase<ModifyDerive<Der, ThreadOptionsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ThreadOptionsPopup>>;
		using ModifyBase<ModifyDerive<Der, ThreadOptionsPopup>>::ModifyBase;
		using Base = ThreadOptionsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd3c00, Thiscall, ThreadOptionsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf41d0, Default, ThreadOptionsPopup, create, GJMessageThread*, ThreadViewPopup*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, ThreadOptionsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6b30, Thiscall, ThreadOptionsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5a80, Thiscall, ThreadOptionsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6120, Thiscall, ThreadOptionsPopup, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6500, Thiscall, ThreadOptionsPopup, threadUpdateFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6670, Thiscall, ThreadOptionsPopup, threadMessagesFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6720, Thiscall, ThreadOptionsPopup, threadMessagesFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf67d0, Thiscall, ThreadOptionsPopup, threadSearchFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6880, Thiscall, ThreadOptionsPopup, threadSearchFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6930, Thiscall, ThreadOptionsPopup, threadSendFinished, int, long long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf69e0, Thiscall, ThreadOptionsPopup, threadSendFailed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ThreadOptionsPopup, handBackSlot, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf4340, Thiscall, ThreadOptionsPopup, init, GJMessageThread*, ThreadViewPopup*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf57a0, Thiscall, ThreadOptionsPopup, onCancelRequest, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf51e0, Thiscall, ThreadOptionsPopup, onDismissRemoved, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5620, Thiscall, ThreadOptionsPopup, onHide, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5000, Thiscall, ThreadOptionsPopup, onLeave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf4fc0, Thiscall, ThreadOptionsPopup, onMembers, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5510, Thiscall, ThreadOptionsPopup, onModLock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf4c80, Thiscall, ThreadOptionsPopup, onMuteRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf4e20, Thiscall, ThreadOptionsPopup, onPinRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5380, Thiscall, ThreadOptionsPopup, onRename, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5950, Thiscall, ThreadOptionsPopup, onReport, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf5a30, Thiscall, ThreadOptionsPopup, onViewProfile, cocos2d::CCObject*)
		}
	};
}
