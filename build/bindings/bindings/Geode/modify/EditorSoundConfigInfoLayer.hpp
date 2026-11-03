#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EditorSoundConfigInfoLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_ccTouchMoved
		#define GEODE_STATICS_ccTouchMoved
		GEODE_AS_STATIC_FUNCTION(ccTouchMoved) 
	#endif

	#ifndef GEODE_STATICS_ccTouchEnded
		#define GEODE_STATICS_ccTouchEnded
		GEODE_AS_STATIC_FUNCTION(ccTouchEnded) 
	#endif

	#ifndef GEODE_STATICS_ccTouchCancelled
		#define GEODE_STATICS_ccTouchCancelled
		GEODE_AS_STATIC_FUNCTION(ccTouchCancelled) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_adminActionConfirmed
		#define GEODE_STATICS_adminActionConfirmed
		GEODE_AS_STATIC_FUNCTION(adminActionConfirmed) 
	#endif

	#ifndef GEODE_STATICS_downloadEditorSoundFinished
		#define GEODE_STATICS_downloadEditorSoundFinished
		GEODE_AS_STATIC_FUNCTION(downloadEditorSoundFinished) 
	#endif

	#ifndef GEODE_STATICS_downloadEditorSoundFailed
		#define GEODE_STATICS_downloadEditorSoundFailed
		GEODE_AS_STATIC_FUNCTION(downloadEditorSoundFailed) 
	#endif

	#ifndef GEODE_STATICS_deleteEditorSoundFinished
		#define GEODE_STATICS_deleteEditorSoundFinished
		GEODE_AS_STATIC_FUNCTION(deleteEditorSoundFinished) 
	#endif

	#ifndef GEODE_STATICS_deleteEditorSoundFailed
		#define GEODE_STATICS_deleteEditorSoundFailed
		GEODE_AS_STATIC_FUNCTION(deleteEditorSoundFailed) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_likedItem
		#define GEODE_STATICS_likedItem
		GEODE_AS_STATIC_FUNCTION(likedItem) 
	#endif

	#ifndef GEODE_STATICS_soundPackDescSaved
		#define GEODE_STATICS_soundPackDescSaved
		GEODE_AS_STATIC_FUNCTION(soundPackDescSaved) 
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

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_applyConfig
		#define GEODE_STATICS_applyConfig
		GEODE_AS_STATIC_FUNCTION(applyConfig) 
	#endif

	#ifndef GEODE_STATICS_buildSummary
		#define GEODE_STATICS_buildSummary
		GEODE_AS_STATIC_FUNCTION(buildSummary) 
	#endif

	#ifndef GEODE_STATICS_downloadMissingSFX
		#define GEODE_STATICS_downloadMissingSFX
		GEODE_AS_STATIC_FUNCTION(downloadMissingSFX) 
	#endif

	#ifndef GEODE_STATICS_editsServerDescription
		#define GEODE_STATICS_editsServerDescription
		GEODE_AS_STATIC_FUNCTION(editsServerDescription) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_isOwner
		#define GEODE_STATICS_isOwner
		GEODE_AS_STATIC_FUNCTION(isOwner) 
	#endif

	#ifndef GEODE_STATICS_missingSFXIDs
		#define GEODE_STATICS_missingSFXIDs
		GEODE_AS_STATIC_FUNCTION(missingSFXIDs) 
	#endif

	#ifndef GEODE_STATICS_onDeleteServer
		#define GEODE_STATICS_onDeleteServer
		GEODE_AS_STATIC_FUNCTION(onDeleteServer) 
	#endif

	#ifndef GEODE_STATICS_onDescription
		#define GEODE_STATICS_onDescription
		GEODE_AS_STATIC_FUNCTION(onDescription) 
	#endif

	#ifndef GEODE_STATICS_onDownloadSFX
		#define GEODE_STATICS_onDownloadSFX
		GEODE_AS_STATIC_FUNCTION(onDownloadSFX) 
	#endif

	#ifndef GEODE_STATICS_onDuplicate
		#define GEODE_STATICS_onDuplicate
		GEODE_AS_STATIC_FUNCTION(onDuplicate) 
	#endif

	#ifndef GEODE_STATICS_onFavorite
		#define GEODE_STATICS_onFavorite
		GEODE_AS_STATIC_FUNCTION(onFavorite) 
	#endif

	#ifndef GEODE_STATICS_onFeatureAdmin
		#define GEODE_STATICS_onFeatureAdmin
		GEODE_AS_STATIC_FUNCTION(onFeatureAdmin) 
	#endif

	#ifndef GEODE_STATICS_onInfo
		#define GEODE_STATICS_onInfo
		GEODE_AS_STATIC_FUNCTION(onInfo) 
	#endif

	#ifndef GEODE_STATICS_onLike
		#define GEODE_STATICS_onLike
		GEODE_AS_STATIC_FUNCTION(onLike) 
	#endif

	#ifndef GEODE_STATICS_onLoad
		#define GEODE_STATICS_onLoad
		GEODE_AS_STATIC_FUNCTION(onLoad) 
	#endif

	#ifndef GEODE_STATICS_onLocalDelete
		#define GEODE_STATICS_onLocalDelete
		GEODE_AS_STATIC_FUNCTION(onLocalDelete) 
	#endif

	#ifndef GEODE_STATICS_onMerge
		#define GEODE_STATICS_onMerge
		GEODE_AS_STATIC_FUNCTION(onMerge) 
	#endif

	#ifndef GEODE_STATICS_onOverwrite
		#define GEODE_STATICS_onOverwrite
		GEODE_AS_STATIC_FUNCTION(onOverwrite) 
	#endif

	#ifndef GEODE_STATICS_onShowDescription
		#define GEODE_STATICS_onShowDescription
		GEODE_AS_STATIC_FUNCTION(onShowDescription) 
	#endif

	#ifndef GEODE_STATICS_onUpdate
		#define GEODE_STATICS_onUpdate
		GEODE_AS_STATIC_FUNCTION(onUpdate) 
	#endif

	#ifndef GEODE_STATICS_onUpload
		#define GEODE_STATICS_onUpload
		GEODE_AS_STATIC_FUNCTION(onUpload) 
	#endif

	#ifndef GEODE_STATICS_onViewProfile
		#define GEODE_STATICS_onViewProfile
		GEODE_AS_STATIC_FUNCTION(onViewProfile) 
	#endif

	#ifndef GEODE_STATICS_refreshActionButtons
		#define GEODE_STATICS_refreshActionButtons
		GEODE_AS_STATIC_FUNCTION(refreshActionButtons) 
	#endif

	#ifndef GEODE_STATICS_refreshLikeState
		#define GEODE_STATICS_refreshLikeState
		GEODE_AS_STATIC_FUNCTION(refreshLikeState) 
	#endif

	#ifndef GEODE_STATICS_reloadWindow
		#define GEODE_STATICS_reloadWindow
		GEODE_AS_STATIC_FUNCTION(reloadWindow) 
	#endif

	#ifndef GEODE_STATICS_startDownload
		#define GEODE_STATICS_startDownload
		GEODE_AS_STATIC_FUNCTION(startDownload) 
	#endif

	#ifndef GEODE_STATICS_startServerDelete
		#define GEODE_STATICS_startServerDelete
		GEODE_AS_STATIC_FUNCTION(startServerDelete) 
	#endif

	#ifndef GEODE_STATICS_startSFXDownload
		#define GEODE_STATICS_startSFXDownload
		GEODE_AS_STATIC_FUNCTION(startSFXDownload) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchMoved
		#define GEODE_CONCEPT_CHECK_ccTouchMoved
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchMoved) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchEnded
		#define GEODE_CONCEPT_CHECK_ccTouchEnded
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchEnded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchCancelled
		#define GEODE_CONCEPT_CHECK_ccTouchCancelled
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchCancelled) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminActionConfirmed
		#define GEODE_CONCEPT_CHECK_adminActionConfirmed
		GEODE_CONCEPT_FUNCTION_CHECK(adminActionConfirmed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadEditorSoundFinished
		#define GEODE_CONCEPT_CHECK_downloadEditorSoundFinished
		GEODE_CONCEPT_FUNCTION_CHECK(downloadEditorSoundFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadEditorSoundFailed
		#define GEODE_CONCEPT_CHECK_downloadEditorSoundFailed
		GEODE_CONCEPT_FUNCTION_CHECK(downloadEditorSoundFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteEditorSoundFinished
		#define GEODE_CONCEPT_CHECK_deleteEditorSoundFinished
		GEODE_CONCEPT_FUNCTION_CHECK(deleteEditorSoundFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deleteEditorSoundFailed
		#define GEODE_CONCEPT_CHECK_deleteEditorSoundFailed
		GEODE_CONCEPT_FUNCTION_CHECK(deleteEditorSoundFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_likedItem
		#define GEODE_CONCEPT_CHECK_likedItem
		GEODE_CONCEPT_FUNCTION_CHECK(likedItem) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_soundPackDescSaved
		#define GEODE_CONCEPT_CHECK_soundPackDescSaved
		GEODE_CONCEPT_FUNCTION_CHECK(soundPackDescSaved) 
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

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_applyConfig
		#define GEODE_CONCEPT_CHECK_applyConfig
		GEODE_CONCEPT_FUNCTION_CHECK(applyConfig) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildSummary
		#define GEODE_CONCEPT_CHECK_buildSummary
		GEODE_CONCEPT_FUNCTION_CHECK(buildSummary) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_downloadMissingSFX
		#define GEODE_CONCEPT_CHECK_downloadMissingSFX
		GEODE_CONCEPT_FUNCTION_CHECK(downloadMissingSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_editsServerDescription
		#define GEODE_CONCEPT_CHECK_editsServerDescription
		GEODE_CONCEPT_FUNCTION_CHECK(editsServerDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isOwner
		#define GEODE_CONCEPT_CHECK_isOwner
		GEODE_CONCEPT_FUNCTION_CHECK(isOwner) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_missingSFXIDs
		#define GEODE_CONCEPT_CHECK_missingSFXIDs
		GEODE_CONCEPT_FUNCTION_CHECK(missingSFXIDs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDeleteServer
		#define GEODE_CONCEPT_CHECK_onDeleteServer
		GEODE_CONCEPT_FUNCTION_CHECK(onDeleteServer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDescription
		#define GEODE_CONCEPT_CHECK_onDescription
		GEODE_CONCEPT_FUNCTION_CHECK(onDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDownloadSFX
		#define GEODE_CONCEPT_CHECK_onDownloadSFX
		GEODE_CONCEPT_FUNCTION_CHECK(onDownloadSFX) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDuplicate
		#define GEODE_CONCEPT_CHECK_onDuplicate
		GEODE_CONCEPT_FUNCTION_CHECK(onDuplicate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFavorite
		#define GEODE_CONCEPT_CHECK_onFavorite
		GEODE_CONCEPT_FUNCTION_CHECK(onFavorite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFeatureAdmin
		#define GEODE_CONCEPT_CHECK_onFeatureAdmin
		GEODE_CONCEPT_FUNCTION_CHECK(onFeatureAdmin) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onInfo
		#define GEODE_CONCEPT_CHECK_onInfo
		GEODE_CONCEPT_FUNCTION_CHECK(onInfo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLike
		#define GEODE_CONCEPT_CHECK_onLike
		GEODE_CONCEPT_FUNCTION_CHECK(onLike) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLoad
		#define GEODE_CONCEPT_CHECK_onLoad
		GEODE_CONCEPT_FUNCTION_CHECK(onLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onLocalDelete
		#define GEODE_CONCEPT_CHECK_onLocalDelete
		GEODE_CONCEPT_FUNCTION_CHECK(onLocalDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMerge
		#define GEODE_CONCEPT_CHECK_onMerge
		GEODE_CONCEPT_FUNCTION_CHECK(onMerge) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOverwrite
		#define GEODE_CONCEPT_CHECK_onOverwrite
		GEODE_CONCEPT_FUNCTION_CHECK(onOverwrite) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onShowDescription
		#define GEODE_CONCEPT_CHECK_onShowDescription
		GEODE_CONCEPT_FUNCTION_CHECK(onShowDescription) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpdate
		#define GEODE_CONCEPT_CHECK_onUpdate
		GEODE_CONCEPT_FUNCTION_CHECK(onUpdate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUpload
		#define GEODE_CONCEPT_CHECK_onUpload
		GEODE_CONCEPT_FUNCTION_CHECK(onUpload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onViewProfile
		#define GEODE_CONCEPT_CHECK_onViewProfile
		GEODE_CONCEPT_FUNCTION_CHECK(onViewProfile) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshActionButtons
		#define GEODE_CONCEPT_CHECK_refreshActionButtons
		GEODE_CONCEPT_FUNCTION_CHECK(refreshActionButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshLikeState
		#define GEODE_CONCEPT_CHECK_refreshLikeState
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLikeState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_reloadWindow
		#define GEODE_CONCEPT_CHECK_reloadWindow
		GEODE_CONCEPT_FUNCTION_CHECK(reloadWindow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startDownload
		#define GEODE_CONCEPT_CHECK_startDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startDownload) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startServerDelete
		#define GEODE_CONCEPT_CHECK_startServerDelete
		GEODE_CONCEPT_FUNCTION_CHECK(startServerDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_startSFXDownload
		#define GEODE_CONCEPT_CHECK_startSFXDownload
		GEODE_CONCEPT_FUNCTION_CHECK(startSFXDownload) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EditorSoundConfigInfoLayer> : ModifyBase<ModifyDerive<Der, EditorSoundConfigInfoLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EditorSoundConfigInfoLayer>>;
		using ModifyBase<ModifyDerive<Der, EditorSoundConfigInfoLayer>>::ModifyBase;
		using Base = EditorSoundConfigInfoLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x191db0, Thiscall, EditorSoundConfigInfoLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x191b80, Default, EditorSoundConfigInfoLayer, create, GJEditorSoundConfig*, EditorSoundInfoKind, EditorSoundBrowserLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194ea0, Thiscall, EditorSoundConfigInfoLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194f70, Thiscall, EditorSoundConfigInfoLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194fe0, Thiscall, EditorSoundConfigInfoLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x195030, Thiscall, EditorSoundConfigInfoLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1989c0, Thiscall, EditorSoundConfigInfoLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196cd0, Thiscall, EditorSoundConfigInfoLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197d60, Thiscall, EditorSoundConfigInfoLayer, adminActionConfirmed, int, std::vector<int> const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198ba0, Thiscall, EditorSoundConfigInfoLayer, downloadEditorSoundFinished, GJEditorSoundConfig*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198de0, Thiscall, EditorSoundConfigInfoLayer, downloadEditorSoundFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x198f30, Thiscall, EditorSoundConfigInfoLayer, deleteEditorSoundFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x199160, Thiscall, EditorSoundConfigInfoLayer, deleteEditorSoundFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197d80, Thiscall, EditorSoundConfigInfoLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196da0, Thiscall, EditorSoundConfigInfoLayer, likedItem, LikeItemType, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x195eb0, Thiscall, EditorSoundConfigInfoLayer, soundPackDescSaved, std::string const&, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1961d0, Thiscall, EditorSoundConfigInfoLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1963c0, Thiscall, EditorSoundConfigInfoLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1964a0, Thiscall, EditorSoundConfigInfoLayer, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196bc0, Thiscall, EditorSoundConfigInfoLayer, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196bf0, Thiscall, EditorSoundConfigInfoLayer, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197140, Thiscall, EditorSoundConfigInfoLayer, applyConfig, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194920, Thiscall, EditorSoundConfigInfoLayer, buildSummary, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196a30, Thiscall, EditorSoundConfigInfoLayer, downloadMissingSFX, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundConfigInfoLayer, editsServerDescription, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1920b0, Thiscall, EditorSoundConfigInfoLayer, init, GJEditorSoundConfig*, EditorSoundInfoKind, EditorSoundBrowserLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196160, Thiscall, EditorSoundConfigInfoLayer, isOwner, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundConfigInfoLayer, missingSFXIDs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197ac0, Thiscall, EditorSoundConfigInfoLayer, onDeleteServer, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x195c20, Thiscall, EditorSoundConfigInfoLayer, onDescription, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1967a0, Thiscall, EditorSoundConfigInfoLayer, onDownloadSFX, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1955e0, Thiscall, EditorSoundConfigInfoLayer, onDuplicate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1950c0, Thiscall, EditorSoundConfigInfoLayer, onFavorite, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundConfigInfoLayer, onFeatureAdmin, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x195b80, Thiscall, EditorSoundConfigInfoLayer, onInfo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1959d0, Thiscall, EditorSoundConfigInfoLayer, onLike, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x196ec0, Thiscall, EditorSoundConfigInfoLayer, onLoad, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x195420, Thiscall, EditorSoundConfigInfoLayer, onLocalDelete, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197000, Thiscall, EditorSoundConfigInfoLayer, onMerge, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1976d0, Thiscall, EditorSoundConfigInfoLayer, onOverwrite, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x195c00, Thiscall, EditorSoundConfigInfoLayer, onShowDescription, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1950b0, Thiscall, EditorSoundConfigInfoLayer, onUpdate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x197800, Thiscall, EditorSoundConfigInfoLayer, onUpload, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1964f0, Thiscall, EditorSoundConfigInfoLayer, onViewProfile, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x195710, Thiscall, EditorSoundConfigInfoLayer, refreshActionButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194690, Thiscall, EditorSoundConfigInfoLayer, refreshLikeState, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundConfigInfoLayer, reloadWindow, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x194840, Thiscall, EditorSoundConfigInfoLayer, startDownload, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundConfigInfoLayer, startServerDelete, std::string const&, std::vector<int> const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(EditorSoundConfigInfoLayer, startSFXDownload, )
		}
	};
}
