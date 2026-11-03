#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NotificationListDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
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


	template<class Der>
	struct ModifyDerive<Der, NotificationListDelegate> : ModifyBase<ModifyDerive<Der, NotificationListDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NotificationListDelegate>>;
		using ModifyBase<ModifyDerive<Der, NotificationListDelegate>>::ModifyBase;
		using Base = NotificationListDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NotificationListDelegate, loadNotificationsFinished, cocos2d::CCArray*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NotificationListDelegate, loadNotificationsFailed, int, GJErrorCode)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NotificationListDelegate, notificationRewardFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NotificationListDelegate, notificationRewardFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NotificationListDelegate, notificationMuteFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(NotificationListDelegate, notificationMuteFailed, int)
		}
	};
}
