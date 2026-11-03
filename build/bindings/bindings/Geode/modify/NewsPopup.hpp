#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/NewsPopup.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_FLAlert_Clicked
		#define GEODE_STATICS_FLAlert_Clicked
		GEODE_AS_STATIC_FUNCTION(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_STATICS_musicActionFinished
		#define GEODE_STATICS_musicActionFinished
		GEODE_AS_STATIC_FUNCTION(musicActionFinished) 
	#endif

	#ifndef GEODE_STATICS_musicActionFailed
		#define GEODE_STATICS_musicActionFailed
		GEODE_AS_STATIC_FUNCTION(musicActionFailed) 
	#endif

	#ifndef GEODE_STATICS_newsImageDownloaded
		#define GEODE_STATICS_newsImageDownloaded
		GEODE_AS_STATIC_FUNCTION(newsImageDownloaded) 
	#endif

	#ifndef GEODE_STATICS_newsImageFailed
		#define GEODE_STATICS_newsImageFailed
		GEODE_AS_STATIC_FUNCTION(newsImageFailed) 
	#endif

	#ifndef GEODE_STATICS_onBlockClicked
		#define GEODE_STATICS_onBlockClicked
		GEODE_AS_STATIC_FUNCTION(onBlockClicked) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onNextPage
		#define GEODE_STATICS_onNextPage
		GEODE_AS_STATIC_FUNCTION(onNextPage) 
	#endif

	#ifndef GEODE_STATICS_onPrevPage
		#define GEODE_STATICS_onPrevPage
		GEODE_AS_STATIC_FUNCTION(onPrevPage) 
	#endif

	#ifndef GEODE_STATICS_pageReferencesImage
		#define GEODE_STATICS_pageReferencesImage
		GEODE_AS_STATIC_FUNCTION(pageReferencesImage) 
	#endif

	#ifndef GEODE_STATICS_prefetchPageImages
		#define GEODE_STATICS_prefetchPageImages
		GEODE_AS_STATIC_FUNCTION(prefetchPageImages) 
	#endif

	#ifndef GEODE_STATICS_rebuildPage
		#define GEODE_STATICS_rebuildPage
		GEODE_AS_STATIC_FUNCTION(rebuildPage) 
	#endif

	#ifndef GEODE_STATICS_refreshFromManager
		#define GEODE_STATICS_refreshFromManager
		GEODE_AS_STATIC_FUNCTION(refreshFromManager) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFinished
		#define GEODE_CONCEPT_CHECK_musicActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicActionFailed
		#define GEODE_CONCEPT_CHECK_musicActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(musicActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_newsImageDownloaded
		#define GEODE_CONCEPT_CHECK_newsImageDownloaded
		GEODE_CONCEPT_FUNCTION_CHECK(newsImageDownloaded) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_newsImageFailed
		#define GEODE_CONCEPT_CHECK_newsImageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(newsImageFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBlockClicked
		#define GEODE_CONCEPT_CHECK_onBlockClicked
		GEODE_CONCEPT_FUNCTION_CHECK(onBlockClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextPage
		#define GEODE_CONCEPT_CHECK_onNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(onNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPrevPage
		#define GEODE_CONCEPT_CHECK_onPrevPage
		GEODE_CONCEPT_FUNCTION_CHECK(onPrevPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageReferencesImage
		#define GEODE_CONCEPT_CHECK_pageReferencesImage
		GEODE_CONCEPT_FUNCTION_CHECK(pageReferencesImage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_prefetchPageImages
		#define GEODE_CONCEPT_CHECK_prefetchPageImages
		GEODE_CONCEPT_FUNCTION_CHECK(prefetchPageImages) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildPage
		#define GEODE_CONCEPT_CHECK_rebuildPage
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshFromManager
		#define GEODE_CONCEPT_CHECK_refreshFromManager
		GEODE_CONCEPT_FUNCTION_CHECK(refreshFromManager) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, NewsPopup> : ModifyBase<ModifyDerive<Der, NewsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, NewsPopup>>;
		using ModifyBase<ModifyDerive<Der, NewsPopup>>::ModifyBase;
		using Base = NewsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x49d9f0, Thiscall, NewsPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewsPopup, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49dbe0, Thiscall, NewsPopup, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0620, Thiscall, NewsPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a06a0, Thiscall, NewsPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a07a0, Thiscall, NewsPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0840, Thiscall, NewsPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f90, Thiscall, NewsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a05b0, Thiscall, NewsPopup, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a03d0, Thiscall, NewsPopup, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0410, Thiscall, NewsPopup, musicActionFinished, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0430, Thiscall, NewsPopup, musicActionFailed, GJMusicAction)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0480, Thiscall, NewsPopup, newsImageDownloaded, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4a0510, Thiscall, NewsPopup, newsImageFailed, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49fca0, Thiscall, NewsPopup, onBlockClicked, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewsPopup, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewsPopup, onNextPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewsPopup, onPrevPage, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewsPopup, pageReferencesImage, int, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewsPopup, prefetchPageImages, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x49e6c0, Thiscall, NewsPopup, rebuildPage, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(NewsPopup, refreshFromManager, )
		}
	};
}
