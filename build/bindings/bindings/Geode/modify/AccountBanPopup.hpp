#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AccountBanPopup.hpp>
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

	#ifndef GEODE_STATICS_pageChanged
		#define GEODE_STATICS_pageChanged
		GEODE_AS_STATIC_FUNCTION(pageChanged) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_adminActionConfirmed
		#define GEODE_STATICS_adminActionConfirmed
		GEODE_AS_STATIC_FUNCTION(adminActionConfirmed) 
	#endif

	#ifndef GEODE_STATICS_adminCommentBanFinished
		#define GEODE_STATICS_adminCommentBanFinished
		GEODE_AS_STATIC_FUNCTION(adminCommentBanFinished) 
	#endif

	#ifndef GEODE_STATICS_adminCommentBanFailed
		#define GEODE_STATICS_adminCommentBanFailed
		GEODE_AS_STATIC_FUNCTION(adminCommentBanFailed) 
	#endif

	#ifndef GEODE_STATICS_adminCommentUnbanFinished
		#define GEODE_STATICS_adminCommentUnbanFinished
		GEODE_AS_STATIC_FUNCTION(adminCommentUnbanFinished) 
	#endif

	#ifndef GEODE_STATICS_adminCommentUnbanFailed
		#define GEODE_STATICS_adminCommentUnbanFailed
		GEODE_AS_STATIC_FUNCTION(adminCommentUnbanFailed) 
	#endif

	#ifndef GEODE_STATICS_adminUploadBanFinished
		#define GEODE_STATICS_adminUploadBanFinished
		GEODE_AS_STATIC_FUNCTION(adminUploadBanFinished) 
	#endif

	#ifndef GEODE_STATICS_adminUploadBanFailed
		#define GEODE_STATICS_adminUploadBanFailed
		GEODE_AS_STATIC_FUNCTION(adminUploadBanFailed) 
	#endif

	#ifndef GEODE_STATICS_adminUploadUnbanFinished
		#define GEODE_STATICS_adminUploadUnbanFinished
		GEODE_AS_STATIC_FUNCTION(adminUploadUnbanFinished) 
	#endif

	#ifndef GEODE_STATICS_adminUploadUnbanFailed
		#define GEODE_STATICS_adminUploadUnbanFailed
		GEODE_AS_STATIC_FUNCTION(adminUploadUnbanFailed) 
	#endif

	#ifndef GEODE_STATICS_adminMessageBanFinished
		#define GEODE_STATICS_adminMessageBanFinished
		GEODE_AS_STATIC_FUNCTION(adminMessageBanFinished) 
	#endif

	#ifndef GEODE_STATICS_adminMessageBanFailed
		#define GEODE_STATICS_adminMessageBanFailed
		GEODE_AS_STATIC_FUNCTION(adminMessageBanFailed) 
	#endif

	#ifndef GEODE_STATICS_adminMessageUnbanFinished
		#define GEODE_STATICS_adminMessageUnbanFinished
		GEODE_AS_STATIC_FUNCTION(adminMessageUnbanFinished) 
	#endif

	#ifndef GEODE_STATICS_adminMessageUnbanFailed
		#define GEODE_STATICS_adminMessageUnbanFailed
		GEODE_AS_STATIC_FUNCTION(adminMessageUnbanFailed) 
	#endif

	#ifndef GEODE_STATICS_adminFreezeFinished
		#define GEODE_STATICS_adminFreezeFinished
		GEODE_AS_STATIC_FUNCTION(adminFreezeFinished) 
	#endif

	#ifndef GEODE_STATICS_adminFreezeFailed
		#define GEODE_STATICS_adminFreezeFailed
		GEODE_AS_STATIC_FUNCTION(adminFreezeFailed) 
	#endif

	#ifndef GEODE_STATICS_adminUnfreezeFinished
		#define GEODE_STATICS_adminUnfreezeFinished
		GEODE_AS_STATIC_FUNCTION(adminUnfreezeFinished) 
	#endif

	#ifndef GEODE_STATICS_adminUnfreezeFailed
		#define GEODE_STATICS_adminUnfreezeFailed
		GEODE_AS_STATIC_FUNCTION(adminUnfreezeFailed) 
	#endif

	#ifndef GEODE_STATICS_adminTrendingBanFinished
		#define GEODE_STATICS_adminTrendingBanFinished
		GEODE_AS_STATIC_FUNCTION(adminTrendingBanFinished) 
	#endif

	#ifndef GEODE_STATICS_adminTrendingBanFailed
		#define GEODE_STATICS_adminTrendingBanFailed
		GEODE_AS_STATIC_FUNCTION(adminTrendingBanFailed) 
	#endif

	#ifndef GEODE_STATICS_adminTrendingUnbanFinished
		#define GEODE_STATICS_adminTrendingUnbanFinished
		GEODE_AS_STATIC_FUNCTION(adminTrendingUnbanFinished) 
	#endif

	#ifndef GEODE_STATICS_adminTrendingUnbanFailed
		#define GEODE_STATICS_adminTrendingUnbanFailed
		GEODE_AS_STATIC_FUNCTION(adminTrendingUnbanFailed) 
	#endif

	#ifndef GEODE_STATICS_adminNameLockFinished
		#define GEODE_STATICS_adminNameLockFinished
		GEODE_AS_STATIC_FUNCTION(adminNameLockFinished) 
	#endif

	#ifndef GEODE_STATICS_adminNameLockFailed
		#define GEODE_STATICS_adminNameLockFailed
		GEODE_AS_STATIC_FUNCTION(adminNameLockFailed) 
	#endif

	#ifndef GEODE_STATICS_adminNameUnlockFinished
		#define GEODE_STATICS_adminNameUnlockFinished
		GEODE_AS_STATIC_FUNCTION(adminNameUnlockFinished) 
	#endif

	#ifndef GEODE_STATICS_adminNameUnlockFailed
		#define GEODE_STATICS_adminNameUnlockFailed
		GEODE_AS_STATIC_FUNCTION(adminNameUnlockFailed) 
	#endif

	#ifndef GEODE_STATICS_adminQueueMuteFinished
		#define GEODE_STATICS_adminQueueMuteFinished
		GEODE_AS_STATIC_FUNCTION(adminQueueMuteFinished) 
	#endif

	#ifndef GEODE_STATICS_adminQueueMuteFailed
		#define GEODE_STATICS_adminQueueMuteFailed
		GEODE_AS_STATIC_FUNCTION(adminQueueMuteFailed) 
	#endif

	#ifndef GEODE_STATICS_adminQueueUnmuteFinished
		#define GEODE_STATICS_adminQueueUnmuteFinished
		GEODE_AS_STATIC_FUNCTION(adminQueueUnmuteFinished) 
	#endif

	#ifndef GEODE_STATICS_adminQueueUnmuteFailed
		#define GEODE_STATICS_adminQueueUnmuteFailed
		GEODE_AS_STATIC_FUNCTION(adminQueueUnmuteFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_actionFailed
		#define GEODE_STATICS_actionFailed
		GEODE_AS_STATIC_FUNCTION(actionFailed) 
	#endif

	#ifndef GEODE_STATICS_banLanded
		#define GEODE_STATICS_banLanded
		GEODE_AS_STATIC_FUNCTION(banLanded) 
	#endif

	#ifndef GEODE_STATICS_banStateShort
		#define GEODE_STATICS_banStateShort
		GEODE_AS_STATIC_FUNCTION(banStateShort) 
	#endif

	#ifndef GEODE_STATICS_banStateText
		#define GEODE_STATICS_banStateText
		GEODE_AS_STATIC_FUNCTION(banStateText) 
	#endif

	#ifndef GEODE_STATICS_executeAction
		#define GEODE_STATICS_executeAction
		GEODE_AS_STATIC_FUNCTION(executeAction) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCommentBan
		#define GEODE_STATICS_onCommentBan
		GEODE_AS_STATIC_FUNCTION(onCommentBan) 
	#endif

	#ifndef GEODE_STATICS_onCommentUnban
		#define GEODE_STATICS_onCommentUnban
		GEODE_AS_STATIC_FUNCTION(onCommentUnban) 
	#endif

	#ifndef GEODE_STATICS_onFreeze
		#define GEODE_STATICS_onFreeze
		GEODE_AS_STATIC_FUNCTION(onFreeze) 
	#endif

	#ifndef GEODE_STATICS_onLevelUploadBan
		#define GEODE_STATICS_onLevelUploadBan
		GEODE_AS_STATIC_FUNCTION(onLevelUploadBan) 
	#endif

	#ifndef GEODE_STATICS_onLevelUploadUnban
		#define GEODE_STATICS_onLevelUploadUnban
		GEODE_AS_STATIC_FUNCTION(onLevelUploadUnban) 
	#endif

	#ifndef GEODE_STATICS_onMessageBan
		#define GEODE_STATICS_onMessageBan
		GEODE_AS_STATIC_FUNCTION(onMessageBan) 
	#endif

	#ifndef GEODE_STATICS_onMessageUnban
		#define GEODE_STATICS_onMessageUnban
		GEODE_AS_STATIC_FUNCTION(onMessageUnban) 
	#endif

	#ifndef GEODE_STATICS_onNameLock
		#define GEODE_STATICS_onNameLock
		GEODE_AS_STATIC_FUNCTION(onNameLock) 
	#endif

	#ifndef GEODE_STATICS_onNameUnlock
		#define GEODE_STATICS_onNameUnlock
		GEODE_AS_STATIC_FUNCTION(onNameUnlock) 
	#endif

	#ifndef GEODE_STATICS_onQueueMute
		#define GEODE_STATICS_onQueueMute
		GEODE_AS_STATIC_FUNCTION(onQueueMute) 
	#endif

	#ifndef GEODE_STATICS_onQueueUnmute
		#define GEODE_STATICS_onQueueUnmute
		GEODE_AS_STATIC_FUNCTION(onQueueUnmute) 
	#endif

	#ifndef GEODE_STATICS_onTrendingBan
		#define GEODE_STATICS_onTrendingBan
		GEODE_AS_STATIC_FUNCTION(onTrendingBan) 
	#endif

	#ifndef GEODE_STATICS_onTrendingUnban
		#define GEODE_STATICS_onTrendingUnban
		GEODE_AS_STATIC_FUNCTION(onTrendingUnban) 
	#endif

	#ifndef GEODE_STATICS_onUnfreeze
		#define GEODE_STATICS_onUnfreeze
		GEODE_AS_STATIC_FUNCTION(onUnfreeze) 
	#endif

	#ifndef GEODE_STATICS_refreshBanRows
		#define GEODE_STATICS_refreshBanRows
		GEODE_AS_STATIC_FUNCTION(refreshBanRows) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageChanged
		#define GEODE_CONCEPT_CHECK_pageChanged
		GEODE_CONCEPT_FUNCTION_CHECK(pageChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminActionConfirmed
		#define GEODE_CONCEPT_CHECK_adminActionConfirmed
		GEODE_CONCEPT_FUNCTION_CHECK(adminActionConfirmed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentBanFinished
		#define GEODE_CONCEPT_CHECK_adminCommentBanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentBanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentBanFailed
		#define GEODE_CONCEPT_CHECK_adminCommentBanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentBanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentUnbanFinished
		#define GEODE_CONCEPT_CHECK_adminCommentUnbanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentUnbanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentUnbanFailed
		#define GEODE_CONCEPT_CHECK_adminCommentUnbanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentUnbanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadBanFinished
		#define GEODE_CONCEPT_CHECK_adminUploadBanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadBanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadBanFailed
		#define GEODE_CONCEPT_CHECK_adminUploadBanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadBanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadUnbanFinished
		#define GEODE_CONCEPT_CHECK_adminUploadUnbanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadUnbanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadUnbanFailed
		#define GEODE_CONCEPT_CHECK_adminUploadUnbanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadUnbanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageBanFinished
		#define GEODE_CONCEPT_CHECK_adminMessageBanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageBanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageBanFailed
		#define GEODE_CONCEPT_CHECK_adminMessageBanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageBanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageUnbanFinished
		#define GEODE_CONCEPT_CHECK_adminMessageUnbanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageUnbanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageUnbanFailed
		#define GEODE_CONCEPT_CHECK_adminMessageUnbanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageUnbanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminFreezeFinished
		#define GEODE_CONCEPT_CHECK_adminFreezeFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminFreezeFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminFreezeFailed
		#define GEODE_CONCEPT_CHECK_adminFreezeFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminFreezeFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUnfreezeFinished
		#define GEODE_CONCEPT_CHECK_adminUnfreezeFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminUnfreezeFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUnfreezeFailed
		#define GEODE_CONCEPT_CHECK_adminUnfreezeFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminUnfreezeFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingBanFinished
		#define GEODE_CONCEPT_CHECK_adminTrendingBanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingBanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingBanFailed
		#define GEODE_CONCEPT_CHECK_adminTrendingBanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingBanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingUnbanFinished
		#define GEODE_CONCEPT_CHECK_adminTrendingUnbanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingUnbanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingUnbanFailed
		#define GEODE_CONCEPT_CHECK_adminTrendingUnbanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingUnbanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameLockFinished
		#define GEODE_CONCEPT_CHECK_adminNameLockFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameLockFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameLockFailed
		#define GEODE_CONCEPT_CHECK_adminNameLockFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameLockFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameUnlockFinished
		#define GEODE_CONCEPT_CHECK_adminNameUnlockFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameUnlockFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameUnlockFailed
		#define GEODE_CONCEPT_CHECK_adminNameUnlockFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameUnlockFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueMuteFinished
		#define GEODE_CONCEPT_CHECK_adminQueueMuteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueMuteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueMuteFailed
		#define GEODE_CONCEPT_CHECK_adminQueueMuteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueMuteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueUnmuteFinished
		#define GEODE_CONCEPT_CHECK_adminQueueUnmuteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueUnmuteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueUnmuteFailed
		#define GEODE_CONCEPT_CHECK_adminQueueUnmuteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueUnmuteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dropdownSelectionChanged
		#define GEODE_CONCEPT_CHECK_dropdownSelectionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(dropdownSelectionChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionFailed
		#define GEODE_CONCEPT_CHECK_actionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(actionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_banLanded
		#define GEODE_CONCEPT_CHECK_banLanded
		GEODE_CONCEPT_FUNCTION_CHECK(banLanded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_banStateShort
		#define GEODE_CONCEPT_CHECK_banStateShort
		GEODE_CONCEPT_FUNCTION_CHECK(banStateShort) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_banStateText
		#define GEODE_CONCEPT_CHECK_banStateText
		GEODE_CONCEPT_FUNCTION_CHECK(banStateText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_executeAction
		#define GEODE_CONCEPT_CHECK_executeAction
		GEODE_CONCEPT_FUNCTION_CHECK(executeAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCommentBan
		#define GEODE_CONCEPT_CHECK_onCommentBan
		GEODE_CONCEPT_FUNCTION_CHECK(onCommentBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCommentUnban
		#define GEODE_CONCEPT_CHECK_onCommentUnban
		GEODE_CONCEPT_FUNCTION_CHECK(onCommentUnban) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFreeze
		#define GEODE_CONCEPT_CHECK_onFreeze
		GEODE_CONCEPT_FUNCTION_CHECK(onFreeze) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelUploadBan
		#define GEODE_CONCEPT_CHECK_onLevelUploadBan
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelUploadBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLevelUploadUnban
		#define GEODE_CONCEPT_CHECK_onLevelUploadUnban
		GEODE_CONCEPT_FUNCTION_CHECK(onLevelUploadUnban) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMessageBan
		#define GEODE_CONCEPT_CHECK_onMessageBan
		GEODE_CONCEPT_FUNCTION_CHECK(onMessageBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMessageUnban
		#define GEODE_CONCEPT_CHECK_onMessageUnban
		GEODE_CONCEPT_FUNCTION_CHECK(onMessageUnban) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNameLock
		#define GEODE_CONCEPT_CHECK_onNameLock
		GEODE_CONCEPT_FUNCTION_CHECK(onNameLock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNameUnlock
		#define GEODE_CONCEPT_CHECK_onNameUnlock
		GEODE_CONCEPT_FUNCTION_CHECK(onNameUnlock) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onQueueMute
		#define GEODE_CONCEPT_CHECK_onQueueMute
		GEODE_CONCEPT_FUNCTION_CHECK(onQueueMute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onQueueUnmute
		#define GEODE_CONCEPT_CHECK_onQueueUnmute
		GEODE_CONCEPT_FUNCTION_CHECK(onQueueUnmute) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTrendingBan
		#define GEODE_CONCEPT_CHECK_onTrendingBan
		GEODE_CONCEPT_FUNCTION_CHECK(onTrendingBan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTrendingUnban
		#define GEODE_CONCEPT_CHECK_onTrendingUnban
		GEODE_CONCEPT_FUNCTION_CHECK(onTrendingUnban) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnfreeze
		#define GEODE_CONCEPT_CHECK_onUnfreeze
		GEODE_CONCEPT_FUNCTION_CHECK(onUnfreeze) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshBanRows
		#define GEODE_CONCEPT_CHECK_refreshBanRows
		GEODE_CONCEPT_FUNCTION_CHECK(refreshBanRows) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AccountBanPopup> : ModifyBase<ModifyDerive<Der, AccountBanPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AccountBanPopup>>;
		using ModifyBase<ModifyDerive<Der, AccountBanPopup>>::ModifyBase;
		using Base = AccountBanPopup;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, create, int, std::string const&, int, int, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, AccountBanPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa7990, Thiscall, AccountBanPopup, pageChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xabc00, Thiscall, AccountBanPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa95e0, Thiscall, AccountBanPopup, adminActionConfirmed, int, std::vector<int> const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaaf20, Thiscall, AccountBanPopup, adminCommentBanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminCommentBanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab010, Thiscall, AccountBanPopup, adminCommentUnbanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminCommentUnbanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab100, Thiscall, AccountBanPopup, adminUploadBanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminUploadBanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab1f0, Thiscall, AccountBanPopup, adminUploadUnbanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminUploadUnbanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab2e0, Thiscall, AccountBanPopup, adminMessageBanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminMessageBanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab3c0, Thiscall, AccountBanPopup, adminMessageUnbanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminMessageUnbanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab4b0, Thiscall, AccountBanPopup, adminFreezeFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminFreezeFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab5a0, Thiscall, AccountBanPopup, adminUnfreezeFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminUnfreezeFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab690, Thiscall, AccountBanPopup, adminTrendingBanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminTrendingBanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab780, Thiscall, AccountBanPopup, adminTrendingUnbanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminTrendingUnbanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab860, Thiscall, AccountBanPopup, adminNameLockFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminNameLockFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab940, Thiscall, AccountBanPopup, adminNameUnlockFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminNameUnlockFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaba30, Thiscall, AccountBanPopup, adminQueueMuteFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminQueueMuteFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xabb20, Thiscall, AccountBanPopup, adminQueueUnmuteFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xab000, Thiscall, AccountBanPopup, adminQueueUnmuteFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xabbb0, Thiscall, AccountBanPopup, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(AccountBanPopup, dropdownSelectionChanged, Dropdown*, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, actionFailed, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, banLanded, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, banStateShort, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, banStateText, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, executeAction, int, std::vector<int> const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6c70, Thiscall, AccountBanPopup, init, int, std::string const&, int, int, int, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa7cb0, Thiscall, AccountBanPopup, onCommentBan, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa7f90, Thiscall, AccountBanPopup, onCommentUnban, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8760, Thiscall, AccountBanPopup, onFreeze, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa7e20, Thiscall, AccountBanPopup, onLevelUploadBan, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa81b0, Thiscall, AccountBanPopup, onLevelUploadUnban, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa83d0, Thiscall, AccountBanPopup, onMessageBan, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8540, Thiscall, AccountBanPopup, onMessageUnban, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, onNameLock, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, onNameUnlock, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa9080, Thiscall, AccountBanPopup, onQueueMute, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa93c0, Thiscall, AccountBanPopup, onQueueUnmute, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8b10, Thiscall, AccountBanPopup, onTrendingBan, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa8e30, Thiscall, AccountBanPopup, onTrendingUnban, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa88f0, Thiscall, AccountBanPopup, onUnfreeze, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AccountBanPopup, refreshBanRows, )
		}
	};
}
