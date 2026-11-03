#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/InvitesPopup.hpp>
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

	#ifndef GEODE_STATICS_requestPage
		#define GEODE_STATICS_requestPage
		GEODE_AS_STATIC_FUNCTION(requestPage) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_threadInvitesFinished
		#define GEODE_STATICS_threadInvitesFinished
		GEODE_AS_STATIC_FUNCTION(threadInvitesFinished) 
	#endif

	#ifndef GEODE_STATICS_threadInvitesFailed
		#define GEODE_STATICS_threadInvitesFailed
		GEODE_AS_STATIC_FUNCTION(threadInvitesFailed) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFinished
		#define GEODE_STATICS_threadUpdateFinished
		GEODE_AS_STATIC_FUNCTION(threadUpdateFinished) 
	#endif

	#ifndef GEODE_STATICS_threadUpdateFailed
		#define GEODE_STATICS_threadUpdateFailed
		GEODE_AS_STATIC_FUNCTION(threadUpdateFailed) 
	#endif

	#ifndef GEODE_STATICS_acceptInvite
		#define GEODE_STATICS_acceptInvite
		GEODE_AS_STATIC_FUNCTION(acceptInvite) 
	#endif

	#ifndef GEODE_STATICS_buildRows
		#define GEODE_STATICS_buildRows
		GEODE_AS_STATIC_FUNCTION(buildRows) 
	#endif

	#ifndef GEODE_STATICS_declineInvite
		#define GEODE_STATICS_declineInvite
		GEODE_AS_STATIC_FUNCTION(declineInvite) 
	#endif

	#ifndef GEODE_STATICS_layoutTitleInfo
		#define GEODE_STATICS_layoutTitleInfo
		GEODE_AS_STATIC_FUNCTION(layoutTitleInfo) 
	#endif

	#ifndef GEODE_STATICS_onAccept
		#define GEODE_STATICS_onAccept
		GEODE_AS_STATIC_FUNCTION(onAccept) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onDecline
		#define GEODE_STATICS_onDecline
		GEODE_AS_STATIC_FUNCTION(onDecline) 
	#endif

	#ifndef GEODE_STATICS_onToggleIgnored
		#define GEODE_STATICS_onToggleIgnored
		GEODE_AS_STATIC_FUNCTION(onToggleIgnored) 
	#endif

	#ifndef GEODE_STATICS_onViewInviter
		#define GEODE_STATICS_onViewInviter
		GEODE_AS_STATIC_FUNCTION(onViewInviter) 
	#endif

	#ifndef GEODE_STATICS_onViewMembers
		#define GEODE_STATICS_onViewMembers
		GEODE_AS_STATIC_FUNCTION(onViewMembers) 
	#endif

	#ifndef GEODE_STATICS_onViewRequest
		#define GEODE_STATICS_onViewRequest
		GEODE_AS_STATIC_FUNCTION(onViewRequest) 
	#endif

	#ifndef GEODE_STATICS_removeInviteRow
		#define GEODE_STATICS_removeInviteRow
		GEODE_AS_STATIC_FUNCTION(removeInviteRow) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestPage
		#define GEODE_CONCEPT_CHECK_requestPage
		GEODE_CONCEPT_FUNCTION_CHECK(requestPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadInvitesFinished
		#define GEODE_CONCEPT_CHECK_threadInvitesFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadInvitesFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadInvitesFailed
		#define GEODE_CONCEPT_CHECK_threadInvitesFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadInvitesFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFinished
		#define GEODE_CONCEPT_CHECK_threadUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFailed
		#define GEODE_CONCEPT_CHECK_threadUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_acceptInvite
		#define GEODE_CONCEPT_CHECK_acceptInvite
		GEODE_CONCEPT_FUNCTION_CHECK(acceptInvite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildRows
		#define GEODE_CONCEPT_CHECK_buildRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_declineInvite
		#define GEODE_CONCEPT_CHECK_declineInvite
		GEODE_CONCEPT_FUNCTION_CHECK(declineInvite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutTitleInfo
		#define GEODE_CONCEPT_CHECK_layoutTitleInfo
		GEODE_CONCEPT_FUNCTION_CHECK(layoutTitleInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAccept
		#define GEODE_CONCEPT_CHECK_onAccept
		GEODE_CONCEPT_FUNCTION_CHECK(onAccept) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDecline
		#define GEODE_CONCEPT_CHECK_onDecline
		GEODE_CONCEPT_FUNCTION_CHECK(onDecline) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleIgnored
		#define GEODE_CONCEPT_CHECK_onToggleIgnored
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleIgnored) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewInviter
		#define GEODE_CONCEPT_CHECK_onViewInviter
		GEODE_CONCEPT_FUNCTION_CHECK(onViewInviter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewMembers
		#define GEODE_CONCEPT_CHECK_onViewMembers
		GEODE_CONCEPT_FUNCTION_CHECK(onViewMembers) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewRequest
		#define GEODE_CONCEPT_CHECK_onViewRequest
		GEODE_CONCEPT_FUNCTION_CHECK(onViewRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeInviteRow
		#define GEODE_CONCEPT_CHECK_removeInviteRow
		GEODE_CONCEPT_FUNCTION_CHECK(removeInviteRow) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, InvitesPopup> : ModifyBase<ModifyDerive<Der, InvitesPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, InvitesPopup>>;
		using ModifyBase<ModifyDerive<Der, InvitesPopup>>::ModifyBase;
		using Base = InvitesPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd3d60, Thiscall, InvitesPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InvitesPopup, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf6b60, Thiscall, InvitesPopup, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, InvitesPopup, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7380, Thiscall, InvitesPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9730, Thiscall, InvitesPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7570, Thiscall, InvitesPopup, threadInvitesFinished, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf75d0, Thiscall, InvitesPopup, threadInvitesFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf98c0, Thiscall, InvitesPopup, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9bd0, Thiscall, InvitesPopup, threadUpdateFailed, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InvitesPopup, acceptInvite, GJMessageThread*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7a30, Thiscall, InvitesPopup, buildRows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9580, Thiscall, InvitesPopup, declineInvite, GJMessageThread*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InvitesPopup, layoutTitleInfo, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9370, Thiscall, InvitesPopup, onAccept, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf74f0, Thiscall, InvitesPopup, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9550, Thiscall, InvitesPopup, onDecline, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf7200, Thiscall, InvitesPopup, onToggleIgnored, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9190, Thiscall, InvitesPopup, onViewInviter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf91d0, Thiscall, InvitesPopup, onViewMembers, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xf9220, Thiscall, InvitesPopup, onViewRequest, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(InvitesPopup, removeInviteRow, int)
		}
	};
}
