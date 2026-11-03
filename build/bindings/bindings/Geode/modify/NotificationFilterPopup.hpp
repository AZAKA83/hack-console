#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NotificationFilterPopup.hpp>
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onDownloadMilestones
		#define GEODE_STATICS_onDownloadMilestones
		GEODE_AS_STATIC_FUNCTION(onDownloadMilestones) 
	#endif

	#ifndef GEODE_STATICS_onFollowerMilestones
		#define GEODE_STATICS_onFollowerMilestones
		GEODE_AS_STATIC_FUNCTION(onFollowerMilestones) 
	#endif

	#ifndef GEODE_STATICS_onFollowUploads
		#define GEODE_STATICS_onFollowUploads
		GEODE_AS_STATIC_FUNCTION(onFollowUploads) 
	#endif

	#ifndef GEODE_STATICS_onFriendAccepts
		#define GEODE_STATICS_onFriendAccepts
		GEODE_AS_STATIC_FUNCTION(onFriendAccepts) 
	#endif

	#ifndef GEODE_STATICS_onFriendRated
		#define GEODE_STATICS_onFriendRated
		GEODE_AS_STATIC_FUNCTION(onFriendRated) 
	#endif

	#ifndef GEODE_STATICS_onFriendUploads
		#define GEODE_STATICS_onFriendUploads
		GEODE_AS_STATIC_FUNCTION(onFriendUploads) 
	#endif

	#ifndef GEODE_STATICS_onSocialAlerts
		#define GEODE_STATICS_onSocialAlerts
		GEODE_AS_STATIC_FUNCTION(onSocialAlerts) 
	#endif

	#ifndef GEODE_STATICS_savedMask
		#define GEODE_STATICS_savedMask
		GEODE_AS_STATIC_FUNCTION(savedMask) 
	#endif

	#ifndef GEODE_STATICS_toggleSource
		#define GEODE_STATICS_toggleSource
		GEODE_AS_STATIC_FUNCTION(toggleSource) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadMilestones
		#define GEODE_CONCEPT_CHECK_onDownloadMilestones
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadMilestones) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFollowerMilestones
		#define GEODE_CONCEPT_CHECK_onFollowerMilestones
		GEODE_CONCEPT_FUNCTION_CHECK(onFollowerMilestones) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFollowUploads
		#define GEODE_CONCEPT_CHECK_onFollowUploads
		GEODE_CONCEPT_FUNCTION_CHECK(onFollowUploads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFriendAccepts
		#define GEODE_CONCEPT_CHECK_onFriendAccepts
		GEODE_CONCEPT_FUNCTION_CHECK(onFriendAccepts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFriendRated
		#define GEODE_CONCEPT_CHECK_onFriendRated
		GEODE_CONCEPT_FUNCTION_CHECK(onFriendRated) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFriendUploads
		#define GEODE_CONCEPT_CHECK_onFriendUploads
		GEODE_CONCEPT_FUNCTION_CHECK(onFriendUploads) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSocialAlerts
		#define GEODE_CONCEPT_CHECK_onSocialAlerts
		GEODE_CONCEPT_FUNCTION_CHECK(onSocialAlerts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_savedMask
		#define GEODE_CONCEPT_CHECK_savedMask
		GEODE_CONCEPT_FUNCTION_CHECK(savedMask) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggleSource
		#define GEODE_CONCEPT_CHECK_toggleSource
		GEODE_CONCEPT_FUNCTION_CHECK(toggleSource) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NotificationFilterPopup> : ModifyBase<ModifyDerive<Der, NotificationFilterPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NotificationFilterPopup>>;
		using ModifyBase<ModifyDerive<Der, NotificationFilterPopup>>::ModifyBase;
		using Base = NotificationFilterPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x60ac50, Thiscall, NotificationFilterPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationFilterPopup, create, NotificationsPage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, NotificationFilterPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x479e30, Thiscall, NotificationFilterPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4790f0, Thiscall, NotificationFilterPopup, init, NotificationsPage*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x479d40, Thiscall, NotificationFilterPopup, onDownloadMilestones, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x479d50, Thiscall, NotificationFilterPopup, onFollowerMilestones, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x479d30, Thiscall, NotificationFilterPopup, onFollowUploads, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x479d60, Thiscall, NotificationFilterPopup, onFriendAccepts, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x479d70, Thiscall, NotificationFilterPopup, onFriendRated, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x479d20, Thiscall, NotificationFilterPopup, onFriendUploads, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x479d80, Thiscall, NotificationFilterPopup, onSocialAlerts, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationFilterPopup, savedMask, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NotificationFilterPopup, toggleSource, int)
		}
	};
}
