#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ReportPopup.hpp>
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

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_buildReasonRows
		#define GEODE_STATICS_buildReasonRows
		GEODE_AS_STATIC_FUNCTION(buildReasonRows) 
	#endif

	#ifndef GEODE_STATICS_contentTypeColor
		#define GEODE_STATICS_contentTypeColor
		GEODE_AS_STATIC_FUNCTION(contentTypeColor) 
	#endif

	#ifndef GEODE_STATICS_contentTypeName
		#define GEODE_STATICS_contentTypeName
		GEODE_AS_STATIC_FUNCTION(contentTypeName) 
	#endif

	#ifndef GEODE_STATICS_createForComment
		#define GEODE_STATICS_createForComment
		GEODE_AS_STATIC_FUNCTION(createForComment) 
	#endif

	#ifndef GEODE_STATICS_createForFriendRequest
		#define GEODE_STATICS_createForFriendRequest
		GEODE_AS_STATIC_FUNCTION(createForFriendRequest) 
	#endif

	#ifndef GEODE_STATICS_createForLevel
		#define GEODE_STATICS_createForLevel
		GEODE_AS_STATIC_FUNCTION(createForLevel) 
	#endif

	#ifndef GEODE_STATICS_createForList
		#define GEODE_STATICS_createForList
		GEODE_AS_STATIC_FUNCTION(createForList) 
	#endif

	#ifndef GEODE_STATICS_createForMessage
		#define GEODE_STATICS_createForMessage
		GEODE_AS_STATIC_FUNCTION(createForMessage) 
	#endif

	#ifndef GEODE_STATICS_createForSoundConfig
		#define GEODE_STATICS_createForSoundConfig
		GEODE_AS_STATIC_FUNCTION(createForSoundConfig) 
	#endif

	#ifndef GEODE_STATICS_createForThread
		#define GEODE_STATICS_createForThread
		GEODE_AS_STATIC_FUNCTION(createForThread) 
	#endif

	#ifndef GEODE_STATICS_createForUser
		#define GEODE_STATICS_createForUser
		GEODE_AS_STATIC_FUNCTION(createForUser) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onReasonToggle
		#define GEODE_STATICS_onReasonToggle
		GEODE_AS_STATIC_FUNCTION(onReasonToggle) 
	#endif

	#ifndef GEODE_STATICS_onSubmit
		#define GEODE_STATICS_onSubmit
		GEODE_AS_STATIC_FUNCTION(onSubmit) 
	#endif

	#ifndef GEODE_STATICS_reasonIndicesForTextModeration
		#define GEODE_STATICS_reasonIndicesForTextModeration
		GEODE_AS_STATIC_FUNCTION(reasonIndicesForTextModeration) 
	#endif

	#ifndef GEODE_STATICS_reasonIndicesForType
		#define GEODE_STATICS_reasonIndicesForType
		GEODE_AS_STATIC_FUNCTION(reasonIndicesForType) 
	#endif

	#ifndef GEODE_STATICS_reasonIndicesForUploadModeration
		#define GEODE_STATICS_reasonIndicesForUploadModeration
		GEODE_AS_STATIC_FUNCTION(reasonIndicesForUploadModeration) 
	#endif

	#ifndef GEODE_STATICS_reasonLabel
		#define GEODE_STATICS_reasonLabel
		GEODE_AS_STATIC_FUNCTION(reasonLabel) 
	#endif

	#ifndef GEODE_STATICS_reasonShortLabel
		#define GEODE_STATICS_reasonShortLabel
		GEODE_AS_STATIC_FUNCTION(reasonShortLabel) 
	#endif

	#ifndef GEODE_STATICS_selectedReasons
		#define GEODE_STATICS_selectedReasons
		GEODE_AS_STATIC_FUNCTION(selectedReasons) 
	#endif

	#ifndef GEODE_STATICS_surfaceName
		#define GEODE_STATICS_surfaceName
		GEODE_AS_STATIC_FUNCTION(surfaceName) 
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

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildReasonRows
		#define GEODE_CONCEPT_CHECK_buildReasonRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildReasonRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_contentTypeColor
		#define GEODE_CONCEPT_CHECK_contentTypeColor
		GEODE_CONCEPT_FUNCTION_CHECK(contentTypeColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_contentTypeName
		#define GEODE_CONCEPT_CHECK_contentTypeName
		GEODE_CONCEPT_FUNCTION_CHECK(contentTypeName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createForComment
		#define GEODE_CONCEPT_CHECK_createForComment
		GEODE_CONCEPT_FUNCTION_CHECK(createForComment) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createForFriendRequest
		#define GEODE_CONCEPT_CHECK_createForFriendRequest
		GEODE_CONCEPT_FUNCTION_CHECK(createForFriendRequest) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createForLevel
		#define GEODE_CONCEPT_CHECK_createForLevel
		GEODE_CONCEPT_FUNCTION_CHECK(createForLevel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createForList
		#define GEODE_CONCEPT_CHECK_createForList
		GEODE_CONCEPT_FUNCTION_CHECK(createForList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createForMessage
		#define GEODE_CONCEPT_CHECK_createForMessage
		GEODE_CONCEPT_FUNCTION_CHECK(createForMessage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createForSoundConfig
		#define GEODE_CONCEPT_CHECK_createForSoundConfig
		GEODE_CONCEPT_FUNCTION_CHECK(createForSoundConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createForThread
		#define GEODE_CONCEPT_CHECK_createForThread
		GEODE_CONCEPT_FUNCTION_CHECK(createForThread) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createForUser
		#define GEODE_CONCEPT_CHECK_createForUser
		GEODE_CONCEPT_FUNCTION_CHECK(createForUser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReasonToggle
		#define GEODE_CONCEPT_CHECK_onReasonToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onReasonToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSubmit
		#define GEODE_CONCEPT_CHECK_onSubmit
		GEODE_CONCEPT_FUNCTION_CHECK(onSubmit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reasonIndicesForTextModeration
		#define GEODE_CONCEPT_CHECK_reasonIndicesForTextModeration
		GEODE_CONCEPT_FUNCTION_CHECK(reasonIndicesForTextModeration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reasonIndicesForType
		#define GEODE_CONCEPT_CHECK_reasonIndicesForType
		GEODE_CONCEPT_FUNCTION_CHECK(reasonIndicesForType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reasonIndicesForUploadModeration
		#define GEODE_CONCEPT_CHECK_reasonIndicesForUploadModeration
		GEODE_CONCEPT_FUNCTION_CHECK(reasonIndicesForUploadModeration) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reasonLabel
		#define GEODE_CONCEPT_CHECK_reasonLabel
		GEODE_CONCEPT_FUNCTION_CHECK(reasonLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reasonShortLabel
		#define GEODE_CONCEPT_CHECK_reasonShortLabel
		GEODE_CONCEPT_FUNCTION_CHECK(reasonShortLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedReasons
		#define GEODE_CONCEPT_CHECK_selectedReasons
		GEODE_CONCEPT_FUNCTION_CHECK(selectedReasons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_surfaceName
		#define GEODE_CONCEPT_CHECK_surfaceName
		GEODE_CONCEPT_FUNCTION_CHECK(surfaceName) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ReportPopup> : ModifyBase<ModifyDerive<Der, ReportPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ReportPopup>>;
		using ModifyBase<ModifyDerive<Der, ReportPopup>>::ModifyBase;
		using Base = ReportPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xbe590, Thiscall, ReportPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbf0a0, Default, ReportPopup, create, ReportPopupConfig const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, ReportPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f60, Thiscall, ReportPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1e10, Thiscall, ReportPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbec10, Thiscall, ReportPopup, buildReasonRows, std::vector<int> const&, cocos2d::CCMenu*, cocos2d::CCNode*, cocos2d::CCObject*, cocos2d::SEL_MenuHandler, float, float, float, float, float, float, std::vector<CCMenuItemToggler*>&, int, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, contentTypeColor, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbe9c0, Thiscall, ReportPopup, contentTypeName, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, createForComment, GJComment*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, createForFriendRequest, GJFriendRequest*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, createForLevel, GJGameLevel*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, createForList, GJLevelList*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, createForMessage, GJUserMessage*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, createForSoundConfig, GJEditorSoundConfig*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, createForThread, GJMessageThread*, GJThreadMessage*, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, createForUser, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc07f0, Thiscall, ReportPopup, init, ReportPopupConfig const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, onReasonToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc1460, Thiscall, ReportPopup, onSubmit, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, reasonIndicesForTextModeration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, reasonIndicesForType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, reasonIndicesForUploadModeration, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, reasonLabel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, reasonShortLabel, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReportPopup, selectedReasons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xbeb80, Thiscall, ReportPopup, surfaceName, int)
		}
	};
}
