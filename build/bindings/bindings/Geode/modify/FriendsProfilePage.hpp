#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendsProfilePage.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_getUserListFinished
		#define GEODE_STATICS_getUserListFinished
		GEODE_AS_STATIC_FUNCTION(getUserListFinished) 
	#endif

	#ifndef GEODE_STATICS_getUserListFailed
		#define GEODE_STATICS_getUserListFailed
		GEODE_AS_STATIC_FUNCTION(getUserListFailed) 
	#endif

	#ifndef GEODE_STATICS_userListChanged
		#define GEODE_STATICS_userListChanged
		GEODE_AS_STATIC_FUNCTION(userListChanged) 
	#endif

	#ifndef GEODE_STATICS_forceReloadList
		#define GEODE_STATICS_forceReloadList
		GEODE_AS_STATIC_FUNCTION(forceReloadList) 
	#endif

	#ifndef GEODE_STATICS_requestPage
		#define GEODE_STATICS_requestPage
		GEODE_AS_STATIC_FUNCTION(requestPage) 
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
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

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_filterUsersWithQuery
		#define GEODE_STATICS_filterUsersWithQuery
		GEODE_AS_STATIC_FUNCTION(filterUsersWithQuery) 
	#endif

	#ifndef GEODE_STATICS_getActiveUserList
		#define GEODE_STATICS_getActiveUserList
		GEODE_AS_STATIC_FUNCTION(getActiveUserList) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onGlobalSearch
		#define GEODE_STATICS_onGlobalSearch
		GEODE_AS_STATIC_FUNCTION(onGlobalSearch) 
	#endif

	#ifndef GEODE_STATICS_onSendMessage
		#define GEODE_STATICS_onSendMessage
		GEODE_AS_STATIC_FUNCTION(onSendMessage) 
	#endif

	#ifndef GEODE_STATICS_onSwitchList
		#define GEODE_STATICS_onSwitchList
		GEODE_AS_STATIC_FUNCTION(onSwitchList) 
	#endif

	#ifndef GEODE_STATICS_onToggleSort
		#define GEODE_STATICS_onToggleSort
		GEODE_AS_STATIC_FUNCTION(onToggleSort) 
	#endif

	#ifndef GEODE_STATICS_onToggleSortDir
		#define GEODE_STATICS_onToggleSortDir
		GEODE_AS_STATIC_FUNCTION(onToggleSortDir) 
	#endif

	#ifndef GEODE_STATICS_onUnblock
		#define GEODE_STATICS_onUnblock
		GEODE_AS_STATIC_FUNCTION(onUnblock) 
	#endif

	#ifndef GEODE_STATICS_onUnfollow
		#define GEODE_STATICS_onUnfollow
		GEODE_AS_STATIC_FUNCTION(onUnfollow) 
	#endif

	#ifndef GEODE_STATICS_onUnmute
		#define GEODE_STATICS_onUnmute
		GEODE_AS_STATIC_FUNCTION(onUnmute) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_rebuildList
		#define GEODE_STATICS_rebuildList
		GEODE_AS_STATIC_FUNCTION(rebuildList) 
	#endif

	#ifndef GEODE_STATICS_sortUsers
		#define GEODE_STATICS_sortUsers
		GEODE_AS_STATIC_FUNCTION(sortUsers) 
	#endif

	#ifndef GEODE_STATICS_updateCountLabel
		#define GEODE_STATICS_updateCountLabel
		GEODE_AS_STATIC_FUNCTION(updateCountLabel) 
	#endif

	#ifndef GEODE_STATICS_updateSortLabel
		#define GEODE_STATICS_updateSortLabel
		GEODE_AS_STATIC_FUNCTION(updateSortLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserListFinished
		#define GEODE_CONCEPT_CHECK_getUserListFinished
		GEODE_CONCEPT_FUNCTION_CHECK(getUserListFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getUserListFailed
		#define GEODE_CONCEPT_CHECK_getUserListFailed
		GEODE_CONCEPT_FUNCTION_CHECK(getUserListFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_userListChanged
		#define GEODE_CONCEPT_CHECK_userListChanged
		GEODE_CONCEPT_FUNCTION_CHECK(userListChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceReloadList
		#define GEODE_CONCEPT_CHECK_forceReloadList
		GEODE_CONCEPT_FUNCTION_CHECK(forceReloadList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestPage
		#define GEODE_CONCEPT_CHECK_requestPage
		GEODE_CONCEPT_FUNCTION_CHECK(requestPage) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_filterUsersWithQuery
		#define GEODE_CONCEPT_CHECK_filterUsersWithQuery
		GEODE_CONCEPT_FUNCTION_CHECK(filterUsersWithQuery) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActiveUserList
		#define GEODE_CONCEPT_CHECK_getActiveUserList
		GEODE_CONCEPT_FUNCTION_CHECK(getActiveUserList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGlobalSearch
		#define GEODE_CONCEPT_CHECK_onGlobalSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onGlobalSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSendMessage
		#define GEODE_CONCEPT_CHECK_onSendMessage
		GEODE_CONCEPT_FUNCTION_CHECK(onSendMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSwitchList
		#define GEODE_CONCEPT_CHECK_onSwitchList
		GEODE_CONCEPT_FUNCTION_CHECK(onSwitchList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSort
		#define GEODE_CONCEPT_CHECK_onToggleSort
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSort) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSortDir
		#define GEODE_CONCEPT_CHECK_onToggleSortDir
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSortDir) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnblock
		#define GEODE_CONCEPT_CHECK_onUnblock
		GEODE_CONCEPT_FUNCTION_CHECK(onUnblock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnfollow
		#define GEODE_CONCEPT_CHECK_onUnfollow
		GEODE_CONCEPT_FUNCTION_CHECK(onUnfollow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnmute
		#define GEODE_CONCEPT_CHECK_onUnmute
		GEODE_CONCEPT_FUNCTION_CHECK(onUnmute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildList
		#define GEODE_CONCEPT_CHECK_rebuildList
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sortUsers
		#define GEODE_CONCEPT_CHECK_sortUsers
		GEODE_CONCEPT_FUNCTION_CHECK(sortUsers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCountLabel
		#define GEODE_CONCEPT_CHECK_updateCountLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCountLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSortLabel
		#define GEODE_CONCEPT_CHECK_updateSortLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateSortLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendsProfilePage> : ModifyBase<ModifyDerive<Der, FriendsProfilePage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendsProfilePage>>;
		using ModifyBase<ModifyDerive<Der, FriendsProfilePage>>::ModifyBase;
		using Base = FriendsProfilePage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x213240, Thiscall, FriendsProfilePage)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213430, Default, FriendsProfilePage, create, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214d40, Thiscall, FriendsProfilePage, getUserListFinished, cocos2d::CCArray*, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x215600, Thiscall, FriendsProfilePage, getUserListFailed, UserListType, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1265d0, Thiscall, FriendsProfilePage, userListChanged, cocos2d::CCArray*, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2156d0, Thiscall, FriendsProfilePage, forceReloadList, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, FriendsProfilePage, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214740, Thiscall, FriendsProfilePage, virtualRowCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8460, Thiscall, FriendsProfilePage, virtualRowHeight, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214770, Thiscall, FriendsProfilePage, mountVirtualRow, int, cocos2d::CCNode*, cocos2d::CCMenu*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x215f00, Thiscall, FriendsProfilePage, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216150, Thiscall, FriendsProfilePage, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2161e0, Thiscall, FriendsProfilePage, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2162b0, Thiscall, FriendsProfilePage, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216300, Thiscall, FriendsProfilePage, textChanged, CCTextInputNode*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FriendsProfilePage, filterUsersWithQuery, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FriendsProfilePage, getActiveUserList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x213620, Thiscall, FriendsProfilePage, init, UserListType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216b80, Thiscall, FriendsProfilePage, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x217060, Thiscall, FriendsProfilePage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216440, Thiscall, FriendsProfilePage, onGlobalSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2157c0, Thiscall, FriendsProfilePage, onSendMessage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216fa0, Thiscall, FriendsProfilePage, onSwitchList, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214ba0, Thiscall, FriendsProfilePage, onToggleSort, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x214c40, Thiscall, FriendsProfilePage, onToggleSortDir, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x215cc0, Thiscall, FriendsProfilePage, onUnblock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x215840, Thiscall, FriendsProfilePage, onUnfollow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x215a80, Thiscall, FriendsProfilePage, onUnmute, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x216e80, Thiscall, FriendsProfilePage, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8810, Thiscall, FriendsProfilePage, onViewProfile, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FriendsProfilePage, rebuildList, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FriendsProfilePage, sortUsers, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2145a0, Thiscall, FriendsProfilePage, updateCountLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FriendsProfilePage, updateSortLabel, )
		}
	};
}
