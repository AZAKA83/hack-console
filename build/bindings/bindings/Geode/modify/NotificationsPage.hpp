#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NotificationsPage.hpp>
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_loadNotificationsFinished
		#define GEODE_STATICS_loadNotificationsFinished
		GEODE_AS_STATIC_FUNCTION(loadNotificationsFinished) 
	#endif

	#ifndef GEODE_STATICS_loadNotificationsFailed
		#define GEODE_STATICS_loadNotificationsFailed
		GEODE_AS_STATIC_FUNCTION(loadNotificationsFailed) 
	#endif

	#ifndef GEODE_STATICS_notificationRewardFinished
		#define GEODE_STATICS_notificationRewardFinished
		GEODE_AS_STATIC_FUNCTION(notificationRewardFinished) 
	#endif

	#ifndef GEODE_STATICS_notificationRewardFailed
		#define GEODE_STATICS_notificationRewardFailed
		GEODE_AS_STATIC_FUNCTION(notificationRewardFailed) 
	#endif

	#ifndef GEODE_STATICS_notificationMuteFinished
		#define GEODE_STATICS_notificationMuteFinished
		GEODE_AS_STATIC_FUNCTION(notificationMuteFinished) 
	#endif

	#ifndef GEODE_STATICS_notificationMuteFailed
		#define GEODE_STATICS_notificationMuteFailed
		GEODE_AS_STATIC_FUNCTION(notificationMuteFailed) 
	#endif

	#ifndef GEODE_STATICS_loadPage
		#define GEODE_STATICS_loadPage
		GEODE_AS_STATIC_FUNCTION(loadPage) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFilter
		#define GEODE_STATICS_onFilter
		GEODE_AS_STATIC_FUNCTION(onFilter) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_reloadCells
		#define GEODE_STATICS_reloadCells
		GEODE_AS_STATIC_FUNCTION(reloadCells) 
	#endif

	#ifndef GEODE_STATICS_setupBrowser
		#define GEODE_STATICS_setupBrowser
		GEODE_AS_STATIC_FUNCTION(setupBrowser) 
	#endif

	#ifndef GEODE_STATICS_updateCountLabel
		#define GEODE_STATICS_updateCountLabel
		GEODE_AS_STATIC_FUNCTION(updateCountLabel) 
	#endif

	#ifndef GEODE_STATICS_updatePageArrows
		#define GEODE_STATICS_updatePageArrows
		GEODE_AS_STATIC_FUNCTION(updatePageArrows) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ownsTouchPrio
		#define GEODE_CONCEPT_CHECK_ownsTouchPrio
		GEODE_CONCEPT_FUNCTION_CHECK(ownsTouchPrio) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadNotificationsFinished
		#define GEODE_CONCEPT_CHECK_loadNotificationsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(loadNotificationsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadNotificationsFailed
		#define GEODE_CONCEPT_CHECK_loadNotificationsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(loadNotificationsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_notificationRewardFinished
		#define GEODE_CONCEPT_CHECK_notificationRewardFinished
		GEODE_CONCEPT_FUNCTION_CHECK(notificationRewardFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_notificationRewardFailed
		#define GEODE_CONCEPT_CHECK_notificationRewardFailed
		GEODE_CONCEPT_FUNCTION_CHECK(notificationRewardFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_notificationMuteFinished
		#define GEODE_CONCEPT_CHECK_notificationMuteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(notificationMuteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_notificationMuteFailed
		#define GEODE_CONCEPT_CHECK_notificationMuteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(notificationMuteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPage
		#define GEODE_CONCEPT_CHECK_loadPage
		GEODE_CONCEPT_FUNCTION_CHECK(loadPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFilter
		#define GEODE_CONCEPT_CHECK_onFilter
		GEODE_CONCEPT_FUNCTION_CHECK(onFilter) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadCells
		#define GEODE_CONCEPT_CHECK_reloadCells
		GEODE_CONCEPT_FUNCTION_CHECK(reloadCells) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupBrowser
		#define GEODE_CONCEPT_CHECK_setupBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(setupBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCountLabel
		#define GEODE_CONCEPT_CHECK_updateCountLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCountLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updatePageArrows
		#define GEODE_CONCEPT_CHECK_updatePageArrows
		GEODE_CONCEPT_FUNCTION_CHECK(updatePageArrows) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NotificationsPage> : ModifyBase<ModifyDerive<Der, NotificationsPage>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NotificationsPage>>;
		using ModifyBase<ModifyDerive<Der, NotificationsPage>>::ModifyBase;
		using Base = NotificationsPage;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x477bb0, Thiscall, NotificationsPage)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationsPage, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x477cf0, Thiscall, NotificationsPage, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46290, Thiscall, NotificationsPage, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4787b0, Thiscall, NotificationsPage, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NotificationsPage, ownsTouchPrio, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x478a40, Thiscall, NotificationsPage, loadNotificationsFinished, cocos2d::CCArray*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x478bd0, Thiscall, NotificationsPage, loadNotificationsFailed, int, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x478c30, Thiscall, NotificationsPage, notificationRewardFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x478e90, Thiscall, NotificationsPage, notificationRewardFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x478f90, Thiscall, NotificationsPage, notificationMuteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x478fe0, Thiscall, NotificationsPage, notificationMuteFailed, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationsPage, loadPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4786f0, Thiscall, NotificationsPage, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4784e0, Thiscall, NotificationsPage, onFilter, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4790d0, Thiscall, NotificationsPage, onNextPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4790e0, Thiscall, NotificationsPage, onPrevPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x478620, Thiscall, NotificationsPage, onUpdate, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationsPage, reloadCells, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationsPage, setupBrowser, cocos2d::CCArray*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationsPage, updateCountLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationsPage, updatePageArrows, )
		}
	};
}
