#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJAccountSettingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_closeAccInputNodes
		#define GEODE_STATICS_closeAccInputNodes
		GEODE_AS_STATIC_FUNCTION(closeAccInputNodes) 
	#endif

	#ifndef GEODE_STATICS_createToggleButton
		#define GEODE_STATICS_createToggleButton
		GEODE_AS_STATIC_FUNCTION(createToggleButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onCommentSetting
		#define GEODE_STATICS_onCommentSetting
		GEODE_AS_STATIC_FUNCTION(onCommentSetting) 
	#endif

	#ifndef GEODE_STATICS_onFriendRequests
		#define GEODE_STATICS_onFriendRequests
		GEODE_AS_STATIC_FUNCTION(onFriendRequests) 
	#endif

	#ifndef GEODE_STATICS_onGroupFriends
		#define GEODE_STATICS_onGroupFriends
		GEODE_AS_STATIC_FUNCTION(onGroupFriends) 
	#endif

	#ifndef GEODE_STATICS_onMessageSetting
		#define GEODE_STATICS_onMessageSetting
		GEODE_AS_STATIC_FUNCTION(onMessageSetting) 
	#endif

	#ifndef GEODE_STATICS_onSocialLinks
		#define GEODE_STATICS_onSocialLinks
		GEODE_AS_STATIC_FUNCTION(onSocialLinks) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_updateScoreValues
		#define GEODE_STATICS_updateScoreValues
		GEODE_AS_STATIC_FUNCTION(updateScoreValues) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeAccInputNodes
		#define GEODE_CONCEPT_CHECK_closeAccInputNodes
		GEODE_CONCEPT_FUNCTION_CHECK(closeAccInputNodes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCommentSetting
		#define GEODE_CONCEPT_CHECK_onCommentSetting
		GEODE_CONCEPT_FUNCTION_CHECK(onCommentSetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFriendRequests
		#define GEODE_CONCEPT_CHECK_onFriendRequests
		GEODE_CONCEPT_FUNCTION_CHECK(onFriendRequests) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onGroupFriends
		#define GEODE_CONCEPT_CHECK_onGroupFriends
		GEODE_CONCEPT_FUNCTION_CHECK(onGroupFriends) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMessageSetting
		#define GEODE_CONCEPT_CHECK_onMessageSetting
		GEODE_CONCEPT_FUNCTION_CHECK(onMessageSetting) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSocialLinks
		#define GEODE_CONCEPT_CHECK_onSocialLinks
		GEODE_CONCEPT_FUNCTION_CHECK(onSocialLinks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateScoreValues
		#define GEODE_CONCEPT_CHECK_updateScoreValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateScoreValues) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJAccountSettingsLayer> : ModifyBase<ModifyDerive<Der, GJAccountSettingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJAccountSettingsLayer>>;
		using ModifyBase<ModifyDerive<Der, GJAccountSettingsLayer>>::ModifyBase;
		using Base = GJAccountSettingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJAccountSettingsLayer, create, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39f2f0, Thiscall, GJAccountSettingsLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39ec50, Thiscall, GJAccountSettingsLayer, closeAccInputNodes, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e790, Thiscall, GJAccountSettingsLayer, createToggleButton, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39c9d0, Thiscall, GJAccountSettingsLayer, init, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39edc0, Thiscall, GJAccountSettingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39eae0, Thiscall, GJAccountSettingsLayer, onCommentSetting, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39ea40, Thiscall, GJAccountSettingsLayer, onFriendRequests, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39eb80, Thiscall, GJAccountSettingsLayer, onGroupFriends, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e9a0, Thiscall, GJAccountSettingsLayer, onMessageSetting, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39e670, Thiscall, GJAccountSettingsLayer, onSocialLinks, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39ee00, Thiscall, GJAccountSettingsLayer, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39eff0, Thiscall, GJAccountSettingsLayer, updateScoreValues, )
		}
	};
}
