#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_sharedState
		#define GEODE_STATICS_sharedState
		GEODE_AS_STATIC_FUNCTION(sharedState) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_addDLToActive
		#define GEODE_STATICS_addDLToActive
		GEODE_AS_STATIC_FUNCTION(addDLToActive) 
	#endif

	#ifndef GEODE_STATICS_backupAccount
		#define GEODE_STATICS_backupAccount
		GEODE_AS_STATIC_FUNCTION(backupAccount) 
	#endif

	#ifndef GEODE_STATICS_getAccountBackupURL
		#define GEODE_STATICS_getAccountBackupURL
		GEODE_AS_STATIC_FUNCTION(getAccountBackupURL) 
	#endif

	#ifndef GEODE_STATICS_getAccountSyncURL
		#define GEODE_STATICS_getAccountSyncURL
		GEODE_AS_STATIC_FUNCTION(getAccountSyncURL) 
	#endif

	#ifndef GEODE_STATICS_getShaPassword
		#define GEODE_STATICS_getShaPassword
		GEODE_AS_STATIC_FUNCTION(getShaPassword) 
	#endif

	#ifndef GEODE_STATICS_handleIt
		#define GEODE_STATICS_handleIt
		GEODE_AS_STATIC_FUNCTION(handleIt) 
	#endif

	#ifndef GEODE_STATICS_linkToAccount
		#define GEODE_STATICS_linkToAccount
		GEODE_AS_STATIC_FUNCTION(linkToAccount) 
	#endif

	#ifndef GEODE_STATICS_loginAccount
		#define GEODE_STATICS_loginAccount
		GEODE_AS_STATIC_FUNCTION(loginAccount) 
	#endif

	#ifndef GEODE_STATICS_onBackupAccountCompleted
		#define GEODE_STATICS_onBackupAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onBackupAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountBackupURLCompleted
		#define GEODE_STATICS_onGetAccountBackupURLCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountBackupURLCompleted) 
	#endif

	#ifndef GEODE_STATICS_onGetAccountSyncURLCompleted
		#define GEODE_STATICS_onGetAccountSyncURLCompleted
		GEODE_AS_STATIC_FUNCTION(onGetAccountSyncURLCompleted) 
	#endif

	#ifndef GEODE_STATICS_onLoginAccountCompleted
		#define GEODE_STATICS_onLoginAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onLoginAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onOpenRegisterCompleted
		#define GEODE_STATICS_onOpenRegisterCompleted
		GEODE_AS_STATIC_FUNCTION(onOpenRegisterCompleted) 
	#endif

	#ifndef GEODE_STATICS_onProcessHttpRequestCompleted
		#define GEODE_STATICS_onProcessHttpRequestCompleted
		GEODE_AS_STATIC_FUNCTION(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_STATICS_onRegisterAccountCompleted
		#define GEODE_STATICS_onRegisterAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onRegisterAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onSyncAccountCompleted
		#define GEODE_STATICS_onSyncAccountCompleted
		GEODE_AS_STATIC_FUNCTION(onSyncAccountCompleted) 
	#endif

	#ifndef GEODE_STATICS_onUpdateAccountSettingsCompleted
		#define GEODE_STATICS_onUpdateAccountSettingsCompleted
		GEODE_AS_STATIC_FUNCTION(onUpdateAccountSettingsCompleted) 
	#endif

	#ifndef GEODE_STATICS_openRegister
		#define GEODE_STATICS_openRegister
		GEODE_AS_STATIC_FUNCTION(openRegister) 
	#endif

	#ifndef GEODE_STATICS_ProcessHttpRequest
		#define GEODE_STATICS_ProcessHttpRequest
		GEODE_AS_STATIC_FUNCTION(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_STATICS_registerAccount
		#define GEODE_STATICS_registerAccount
		GEODE_AS_STATIC_FUNCTION(registerAccount) 
	#endif

	#ifndef GEODE_STATICS_showAccountNeededAlert
		#define GEODE_STATICS_showAccountNeededAlert
		GEODE_AS_STATIC_FUNCTION(showAccountNeededAlert) 
	#endif

	#ifndef GEODE_STATICS_syncAccount
		#define GEODE_STATICS_syncAccount
		GEODE_AS_STATIC_FUNCTION(syncAccount) 
	#endif

	#ifndef GEODE_STATICS_unlinkFromAccount
		#define GEODE_STATICS_unlinkFromAccount
		GEODE_AS_STATIC_FUNCTION(unlinkFromAccount) 
	#endif

	#ifndef GEODE_STATICS_updateAccountSettings
		#define GEODE_STATICS_updateAccountSettings
		GEODE_AS_STATIC_FUNCTION(updateAccountSettings) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_get
		#define GEODE_CONCEPT_CHECK_get
		GEODE_CONCEPT_FUNCTION_CHECK(get) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addDLToActive
		#define GEODE_CONCEPT_CHECK_addDLToActive
		GEODE_CONCEPT_FUNCTION_CHECK(addDLToActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_backupAccount
		#define GEODE_CONCEPT_CHECK_backupAccount
		GEODE_CONCEPT_FUNCTION_CHECK(backupAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dataLoaded
		#define GEODE_CONCEPT_CHECK_dataLoaded
		GEODE_CONCEPT_FUNCTION_CHECK(dataLoaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_encodeDataTo
		#define GEODE_CONCEPT_CHECK_encodeDataTo
		GEODE_CONCEPT_FUNCTION_CHECK(encodeDataTo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstSetup
		#define GEODE_CONCEPT_CHECK_firstSetup
		GEODE_CONCEPT_FUNCTION_CHECK(firstSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountBackupURL
		#define GEODE_CONCEPT_CHECK_getAccountBackupURL
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountBackupURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getAccountSyncURL
		#define GEODE_CONCEPT_CHECK_getAccountSyncURL
		GEODE_CONCEPT_FUNCTION_CHECK(getAccountSyncURL) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getDLObject
		#define GEODE_CONCEPT_CHECK_getDLObject
		GEODE_CONCEPT_FUNCTION_CHECK(getDLObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getShaPassword
		#define GEODE_CONCEPT_CHECK_getShaPassword
		GEODE_CONCEPT_FUNCTION_CHECK(getShaPassword) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleIt
		#define GEODE_CONCEPT_CHECK_handleIt
		GEODE_CONCEPT_FUNCTION_CHECK(handleIt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItDelayed
		#define GEODE_CONCEPT_CHECK_handleItDelayed
		GEODE_CONCEPT_FUNCTION_CHECK(handleItDelayed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_handleItND
		#define GEODE_CONCEPT_CHECK_handleItND
		GEODE_CONCEPT_FUNCTION_CHECK(handleItND) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isDLActive
		#define GEODE_CONCEPT_CHECK_isDLActive
		GEODE_CONCEPT_FUNCTION_CHECK(isDLActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_linkToAccount
		#define GEODE_CONCEPT_CHECK_linkToAccount
		GEODE_CONCEPT_FUNCTION_CHECK(linkToAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loginAccount
		#define GEODE_CONCEPT_CHECK_loginAccount
		GEODE_CONCEPT_FUNCTION_CHECK(loginAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBackupAccountCompleted
		#define GEODE_CONCEPT_CHECK_onBackupAccountCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onBackupAccountCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetAccountBackupURLCompleted
		#define GEODE_CONCEPT_CHECK_onGetAccountBackupURLCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetAccountBackupURLCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGetAccountSyncURLCompleted
		#define GEODE_CONCEPT_CHECK_onGetAccountSyncURLCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onGetAccountSyncURLCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLoginAccountCompleted
		#define GEODE_CONCEPT_CHECK_onLoginAccountCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onLoginAccountCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenRegisterCompleted
		#define GEODE_CONCEPT_CHECK_onOpenRegisterCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenRegisterCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		#define GEODE_CONCEPT_CHECK_onProcessHttpRequestCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onProcessHttpRequestCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRegisterAccountCompleted
		#define GEODE_CONCEPT_CHECK_onRegisterAccountCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onRegisterAccountCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSyncAccountCompleted
		#define GEODE_CONCEPT_CHECK_onSyncAccountCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onSyncAccountCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdateAccountSettingsCompleted
		#define GEODE_CONCEPT_CHECK_onUpdateAccountSettingsCompleted
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdateAccountSettingsCompleted) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openRegister
		#define GEODE_CONCEPT_CHECK_openRegister
		GEODE_CONCEPT_FUNCTION_CHECK(openRegister) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ProcessHttpRequest
		#define GEODE_CONCEPT_CHECK_ProcessHttpRequest
		GEODE_CONCEPT_FUNCTION_CHECK(ProcessHttpRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerAccount
		#define GEODE_CONCEPT_CHECK_registerAccount
		GEODE_CONCEPT_FUNCTION_CHECK(registerAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_removeDLFromActive
		#define GEODE_CONCEPT_CHECK_removeDLFromActive
		GEODE_CONCEPT_FUNCTION_CHECK(removeDLFromActive) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showAccountNeededAlert
		#define GEODE_CONCEPT_CHECK_showAccountNeededAlert
		GEODE_CONCEPT_FUNCTION_CHECK(showAccountNeededAlert) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_syncAccount
		#define GEODE_CONCEPT_CHECK_syncAccount
		GEODE_CONCEPT_FUNCTION_CHECK(syncAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unlinkFromAccount
		#define GEODE_CONCEPT_CHECK_unlinkFromAccount
		GEODE_CONCEPT_FUNCTION_CHECK(unlinkFromAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAccountSettings
		#define GEODE_CONCEPT_CHECK_updateAccountSettings
		GEODE_CONCEPT_FUNCTION_CHECK(updateAccountSettings) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountManager> : ModifyBase<ModifyDerive<Der, GJAccountManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountManager>>;
		using ModifyBase<ModifyDerive<Der, GJAccountManager>>::ModifyBase;
		using Base = GJAccountManager;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3050d0, Thiscall, GJAccountManager)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, get, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305170, Default, GJAccountManager, sharedState, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3057d0, Thiscall, GJAccountManager, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305810, Thiscall, GJAccountManager, addDLToActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, addDLToActive, char const*, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3074d0, Thiscall, GJAccountManager, backupAccount, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, dataLoaded, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, encodeDataTo, DS_Dictionary*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, firstSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306e70, Thiscall, GJAccountManager, getAccountBackupURL, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307ef0, Thiscall, GJAccountManager, getAccountSyncURL, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, getDLObject, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x30a0b0, Thiscall, GJAccountManager, getShaPassword, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305500, Thiscall, GJAccountManager, handleIt, bool, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, handleItDelayed, bool, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, handleItND, cocos2d::CCNode*, void*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, isDLActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309590, Thiscall, GJAccountManager, linkToAccount, std::string, std::string, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3065e0, Thiscall, GJAccountManager, loginAccount, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x307ab0, Thiscall, GJAccountManager, onBackupAccountCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3071e0, Thiscall, GJAccountManager, onGetAccountBackupURLCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308260, Thiscall, GJAccountManager, onGetAccountSyncURLCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306a60, Thiscall, GJAccountManager, onLoginAccountCompleted, std::string, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(GJAccountManager, onOpenRegisterCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305400, Thiscall, GJAccountManager, onProcessHttpRequestCompleted, cocos2d::extension::CCHttpClient*, cocos2d::extension::CCHttpResponse*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306190, Thiscall, GJAccountManager, onRegisterAccountCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3087e0, Thiscall, GJAccountManager, onSyncAccountCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309f40, Thiscall, GJAccountManager, onUpdateAccountSettingsCompleted, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x306330, Thiscall, GJAccountManager, openRegister, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3052b0, Thiscall, GJAccountManager, ProcessHttpRequest, std::string, std::string, std::string, GJHttpType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x305e50, Thiscall, GJAccountManager, registerAccount, std::string, std::string, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountManager, removeDLFromActive, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309820, Thiscall, GJAccountManager, showAccountNeededAlert, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x308550, Thiscall, GJAccountManager, syncAccount, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309900, Thiscall, GJAccountManager, unlinkFromAccount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x309ab0, Thiscall, GJAccountManager, updateAccountSettings, int, int, int, int, int, std::string, std::string, std::string, std::string, std::string, std::string, std::string)
		}
	};
}
