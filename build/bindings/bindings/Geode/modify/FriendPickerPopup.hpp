#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendPickerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_requestPage
		#define GEODE_STATICS_requestPage
		GEODE_AS_STATIC_FUNCTION(requestPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_virtualRowCount
		#define GEODE_STATICS_virtualRowCount
		GEODE_AS_STATIC_FUNCTION(virtualRowCount) 
	#endif

	#ifndef GEODE_STATICS_virtualRowHeight
		#define GEODE_STATICS_virtualRowHeight
		GEODE_AS_STATIC_FUNCTION(virtualRowHeight) 
	#endif

	#ifndef GEODE_STATICS_mountVirtualRow
		#define GEODE_STATICS_mountVirtualRow
		GEODE_AS_STATIC_FUNCTION(mountVirtualRow) 
	#endif

	#ifndef GEODE_STATICS_getUserListFinished
		#define GEODE_STATICS_getUserListFinished
		GEODE_AS_STATIC_FUNCTION(getUserListFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserListFailed
		#define GEODE_STATICS_getUserListFailed
		GEODE_AS_STATIC_FUNCTION(getUserListFailed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_buildRows
		#define GEODE_STATICS_buildRows
		GEODE_AS_STATIC_FUNCTION(buildRows) 
	#endif

	#ifndef GEODE_STATICS_delayedRebuild
		#define GEODE_STATICS_delayedRebuild
		GEODE_AS_STATIC_FUNCTION(delayedRebuild) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearAll
		#define GEODE_STATICS_onClearAll
		GEODE_AS_STATIC_FUNCTION(onClearAll) 
	#endif

	#ifndef GEODE_STATICS_onDone
		#define GEODE_STATICS_onDone
		GEODE_AS_STATIC_FUNCTION(onDone) 
	#endif

	#ifndef GEODE_STATICS_onGlobalSearch
		#define GEODE_STATICS_onGlobalSearch
		GEODE_AS_STATIC_FUNCTION(onGlobalSearch) 
	#endif

	#ifndef GEODE_STATICS_onPickFriend
		#define GEODE_STATICS_onPickFriend
		GEODE_AS_STATIC_FUNCTION(onPickFriend) 
	#endif

	#ifndef GEODE_STATICS_onShowProfile
		#define GEODE_STATICS_onShowProfile
		GEODE_AS_STATIC_FUNCTION(onShowProfile) 
	#endif

	#ifndef GEODE_STATICS_onToggleSelectedView
		#define GEODE_STATICS_onToggleSelectedView
		GEODE_AS_STATIC_FUNCTION(onToggleSelectedView) 
	#endif

	#ifndef GEODE_STATICS_updateCountLabel
		#define GEODE_STATICS_updateCountLabel
		GEODE_AS_STATIC_FUNCTION(updateCountLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestPage
		#define GEODE_CONCEPT_CHECK_requestPage
		GEODE_CONCEPT_FUNCTION_CHECK(requestPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_virtualRowCount
		#define GEODE_CONCEPT_CHECK_virtualRowCount
		GEODE_CONCEPT_FUNCTION_CHECK(virtualRowCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_virtualRowHeight
		#define GEODE_CONCEPT_CHECK_virtualRowHeight
		GEODE_CONCEPT_FUNCTION_CHECK(virtualRowHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mountVirtualRow
		#define GEODE_CONCEPT_CHECK_mountVirtualRow
		GEODE_CONCEPT_FUNCTION_CHECK(mountVirtualRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserListFinished
		#define GEODE_CONCEPT_CHECK_getUserListFinished
		GEODE_CONCEPT_FUNCTION_CHECK(getUserListFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserListFailed
		#define GEODE_CONCEPT_CHECK_getUserListFailed
		GEODE_CONCEPT_FUNCTION_CHECK(getUserListFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildRows
		#define GEODE_CONCEPT_CHECK_buildRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_delayedRebuild
		#define GEODE_CONCEPT_CHECK_delayedRebuild
		GEODE_CONCEPT_FUNCTION_CHECK(delayedRebuild) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearAll
		#define GEODE_CONCEPT_CHECK_onClearAll
		GEODE_CONCEPT_FUNCTION_CHECK(onClearAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDone
		#define GEODE_CONCEPT_CHECK_onDone
		GEODE_CONCEPT_FUNCTION_CHECK(onDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGlobalSearch
		#define GEODE_CONCEPT_CHECK_onGlobalSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onGlobalSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPickFriend
		#define GEODE_CONCEPT_CHECK_onPickFriend
		GEODE_CONCEPT_FUNCTION_CHECK(onPickFriend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowProfile
		#define GEODE_CONCEPT_CHECK_onShowProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onShowProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSelectedView
		#define GEODE_CONCEPT_CHECK_onToggleSelectedView
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSelectedView) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCountLabel
		#define GEODE_CONCEPT_CHECK_updateCountLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCountLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendPickerPopup> : ModifyBase<ModifyDerive<Der, FriendPickerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendPickerPopup>>;
		using ModifyBase<ModifyDerive<Der, FriendPickerPopup>>::ModifyBase;
		using Base = FriendPickerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd3780, Thiscall, FriendPickerPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe6ab0, Default, FriendPickerPopup, create, FriendPickerDelegate*, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, FriendPickerPopup, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8b20, Thiscall, FriendPickerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8440, Thiscall, FriendPickerPopup, virtualRowCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8460, Thiscall, FriendPickerPopup, virtualRowHeight, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8470, Thiscall, FriendPickerPopup, mountVirtualRow, int, cocos2d::CCNode*, cocos2d::CCMenu*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe75e0, Thiscall, FriendPickerPopup, getUserListFinished, cocos2d::CCArray*, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe76b0, Thiscall, FriendPickerPopup, getUserListFailed, UserListType, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe7820, Thiscall, FriendPickerPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8120, Thiscall, FriendPickerPopup, buildRows, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FriendPickerPopup, delayedRebuild, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe6c60, Thiscall, FriendPickerPopup, init, FriendPickerDelegate*, bool, bool, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8ae0, Thiscall, FriendPickerPopup, onClearAll, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8a40, Thiscall, FriendPickerPopup, onDone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe79e0, Thiscall, FriendPickerPopup, onGlobalSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8850, Thiscall, FriendPickerPopup, onPickFriend, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8810, Thiscall, FriendPickerPopup, onShowProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe7980, Thiscall, FriendPickerPopup, onToggleSelectedView, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FriendPickerPopup, updateCountLabel, )
		}
	};
}
