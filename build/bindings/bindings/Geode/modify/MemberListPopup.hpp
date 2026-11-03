#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/MemberListPopup.hpp>
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

	#ifndef GEODE_STATICS_pickerRowState
		#define GEODE_STATICS_pickerRowState
		GEODE_AS_STATIC_FUNCTION(pickerRowState) 
	#endif

	#ifndef GEODE_STATICS_pickerCountBase
		#define GEODE_STATICS_pickerCountBase
		GEODE_AS_STATIC_FUNCTION(pickerCountBase) 
	#endif

	#ifndef GEODE_STATICS_friendPickerAdd
		#define GEODE_STATICS_friendPickerAdd
		GEODE_AS_STATIC_FUNCTION(friendPickerAdd) 
	#endif

	#ifndef GEODE_STATICS_friendPickerClosed
		#define GEODE_STATICS_friendPickerClosed
		GEODE_AS_STATIC_FUNCTION(friendPickerClosed) 
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

	#ifndef GEODE_STATICS_threadMembersFinished
		#define GEODE_STATICS_threadMembersFinished
		GEODE_AS_STATIC_FUNCTION(threadMembersFinished) 
	#endif

	#ifndef GEODE_STATICS_threadMembersFailed
		#define GEODE_STATICS_threadMembersFailed
		GEODE_AS_STATIC_FUNCTION(threadMembersFailed) 
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

	#ifndef GEODE_STATICS_applyAddOutcome
		#define GEODE_STATICS_applyAddOutcome
		GEODE_AS_STATIC_FUNCTION(applyAddOutcome) 
	#endif

	#ifndef GEODE_STATICS_buildRows
		#define GEODE_STATICS_buildRows
		GEODE_AS_STATIC_FUNCTION(buildRows) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddMember
		#define GEODE_STATICS_onAddMember
		GEODE_AS_STATIC_FUNCTION(onAddMember) 
	#endif

	#ifndef GEODE_STATICS_onAddPolicy
		#define GEODE_STATICS_onAddPolicy
		GEODE_AS_STATIC_FUNCTION(onAddPolicy) 
	#endif

	#ifndef GEODE_STATICS_onKickMember
		#define GEODE_STATICS_onKickMember
		GEODE_AS_STATIC_FUNCTION(onKickMember) 
	#endif

	#ifndef GEODE_STATICS_onMemberProfile
		#define GEODE_STATICS_onMemberProfile
		GEODE_AS_STATIC_FUNCTION(onMemberProfile) 
	#endif

	#ifndef GEODE_STATICS_onRevokeInvite
		#define GEODE_STATICS_onRevokeInvite
		GEODE_AS_STATIC_FUNCTION(onRevokeInvite) 
	#endif

	#ifndef GEODE_STATICS_onTransferOwner
		#define GEODE_STATICS_onTransferOwner
		GEODE_AS_STATIC_FUNCTION(onTransferOwner) 
	#endif

	#ifndef GEODE_STATICS_opPending
		#define GEODE_STATICS_opPending
		GEODE_AS_STATIC_FUNCTION(opPending) 
	#endif

	#ifndef GEODE_STATICS_refreshHost
		#define GEODE_STATICS_refreshHost
		GEODE_AS_STATIC_FUNCTION(refreshHost) 
	#endif

	#ifndef GEODE_STATICS_refreshPolicyBtn
		#define GEODE_STATICS_refreshPolicyBtn
		GEODE_AS_STATIC_FUNCTION(refreshPolicyBtn) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestPage
		#define GEODE_CONCEPT_CHECK_requestPage
		GEODE_CONCEPT_FUNCTION_CHECK(requestPage) 
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

	#ifndef GEODE_CONCEPT_CHECK_pickerRowState
		#define GEODE_CONCEPT_CHECK_pickerRowState
		GEODE_CONCEPT_FUNCTION_CHECK(pickerRowState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pickerCountBase
		#define GEODE_CONCEPT_CHECK_pickerCountBase
		GEODE_CONCEPT_FUNCTION_CHECK(pickerCountBase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendPickerAdd
		#define GEODE_CONCEPT_CHECK_friendPickerAdd
		GEODE_CONCEPT_FUNCTION_CHECK(friendPickerAdd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendPickerClosed
		#define GEODE_CONCEPT_CHECK_friendPickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(friendPickerClosed) 
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

	#ifndef GEODE_CONCEPT_CHECK_threadMembersFinished
		#define GEODE_CONCEPT_CHECK_threadMembersFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadMembersFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMembersFailed
		#define GEODE_CONCEPT_CHECK_threadMembersFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadMembersFailed) 
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

	#ifndef GEODE_CONCEPT_CHECK_applyAddOutcome
		#define GEODE_CONCEPT_CHECK_applyAddOutcome
		GEODE_CONCEPT_FUNCTION_CHECK(applyAddOutcome) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildRows
		#define GEODE_CONCEPT_CHECK_buildRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddMember
		#define GEODE_CONCEPT_CHECK_onAddMember
		GEODE_CONCEPT_FUNCTION_CHECK(onAddMember) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddPolicy
		#define GEODE_CONCEPT_CHECK_onAddPolicy
		GEODE_CONCEPT_FUNCTION_CHECK(onAddPolicy) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onKickMember
		#define GEODE_CONCEPT_CHECK_onKickMember
		GEODE_CONCEPT_FUNCTION_CHECK(onKickMember) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMemberProfile
		#define GEODE_CONCEPT_CHECK_onMemberProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onMemberProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRevokeInvite
		#define GEODE_CONCEPT_CHECK_onRevokeInvite
		GEODE_CONCEPT_FUNCTION_CHECK(onRevokeInvite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTransferOwner
		#define GEODE_CONCEPT_CHECK_onTransferOwner
		GEODE_CONCEPT_FUNCTION_CHECK(onTransferOwner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_opPending
		#define GEODE_CONCEPT_CHECK_opPending
		GEODE_CONCEPT_FUNCTION_CHECK(opPending) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshHost
		#define GEODE_CONCEPT_CHECK_refreshHost
		GEODE_CONCEPT_FUNCTION_CHECK(refreshHost) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshPolicyBtn
		#define GEODE_CONCEPT_CHECK_refreshPolicyBtn
		GEODE_CONCEPT_FUNCTION_CHECK(refreshPolicyBtn) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, MemberListPopup> : ModifyBase<ModifyDerive<Der, MemberListPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, MemberListPopup>>;
		using ModifyBase<ModifyDerive<Der, MemberListPopup>>::ModifyBase;
		using Base = MemberListPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xd3900, Thiscall, MemberListPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeb970, Default, MemberListPopup, create, GJMessageThread*, ThreadViewPopup*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5a3a0, Thiscall, MemberListPopup, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xed9c0, Thiscall, MemberListPopup, friendPicked, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xedb70, Thiscall, MemberListPopup, isRecipientSelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xedbf0, Thiscall, MemberListPopup, selectedRecipientCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xedc10, Thiscall, MemberListPopup, selectedRecipients, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xedc20, Thiscall, MemberListPopup, pickerRowState, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xedd60, Thiscall, MemberListPopup, pickerCountBase, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xedd90, Thiscall, MemberListPopup, friendPickerAdd, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xedd70, Thiscall, MemberListPopup, friendPickerClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xed4b0, Thiscall, MemberListPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xee880, Thiscall, MemberListPopup, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xeec90, Thiscall, MemberListPopup, threadUpdateFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xebfe0, Thiscall, MemberListPopup, threadMembersFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xebfe0, Thiscall, MemberListPopup, threadMembersFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec0b0, Thiscall, MemberListPopup, threadMessagesFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec110, Thiscall, MemberListPopup, threadMessagesFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec130, Thiscall, MemberListPopup, threadSearchFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec150, Thiscall, MemberListPopup, threadSearchFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec170, Thiscall, MemberListPopup, threadSendFinished, int, long long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec240, Thiscall, MemberListPopup, threadSendFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xee170, Thiscall, MemberListPopup, applyAddOutcome, GJMessageThread*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec5e0, Thiscall, MemberListPopup, buildRows, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xebaf0, Thiscall, MemberListPopup, init, GJMessageThread*, ThreadViewPopup*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xed910, Thiscall, MemberListPopup, onAddMember, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec400, Thiscall, MemberListPopup, onAddPolicy, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xed070, Thiscall, MemberListPopup, onKickMember, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xe8810, Thiscall, MemberListPopup, onMemberProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xece60, Thiscall, MemberListPopup, onRevokeInvite, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xed2a0, Thiscall, MemberListPopup, onTransferOwner, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MemberListPopup, opPending, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(MemberListPopup, refreshHost, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xec260, Thiscall, MemberListPopup, refreshPolicyBtn, )
		}
	};
}
