#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/OptionsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_customSetup
		#define GEODE_STATICS_customSetup
		GEODE_AS_STATIC_FUNCTION(customSetup) 
	#endif

	#ifndef GEODE_STATICS_layerHidden
		#define GEODE_STATICS_layerHidden
		GEODE_AS_STATIC_FUNCTION(layerHidden) 
	#endif

	#ifndef GEODE_STATICS_volumeChanged
		#define GEODE_STATICS_volumeChanged
		GEODE_AS_STATIC_FUNCTION(volumeChanged) 
	#endif

	#ifndef GEODE_STATICS_musicSliderChanged
		#define GEODE_STATICS_musicSliderChanged
		GEODE_AS_STATIC_FUNCTION(musicSliderChanged) 
	#endif

	#ifndef GEODE_STATICS_onAccount
		#define GEODE_STATICS_onAccount
		GEODE_AS_STATIC_FUNCTION(onAccount) 
	#endif

	#ifndef GEODE_STATICS_onHelp
		#define GEODE_STATICS_onHelp
		GEODE_AS_STATIC_FUNCTION(onHelp) 
	#endif

	#ifndef GEODE_STATICS_onMenuMusic
		#define GEODE_STATICS_onMenuMusic
		GEODE_AS_STATIC_FUNCTION(onMenuMusic) 
	#endif

	#ifndef GEODE_STATICS_onOptions
		#define GEODE_STATICS_onOptions
		GEODE_AS_STATIC_FUNCTION(onOptions) 
	#endif

	#ifndef GEODE_STATICS_onParental
		#define GEODE_STATICS_onParental
		GEODE_AS_STATIC_FUNCTION(onParental) 
	#endif

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_onSecretVault
		#define GEODE_STATICS_onSecretVault
		GEODE_AS_STATIC_FUNCTION(onSecretVault) 
	#endif

	#ifndef GEODE_STATICS_onSoundtracks
		#define GEODE_STATICS_onSoundtracks
		GEODE_AS_STATIC_FUNCTION(onSoundtracks) 
	#endif

	#ifndef GEODE_STATICS_onSupport
		#define GEODE_STATICS_onSupport
		GEODE_AS_STATIC_FUNCTION(onSupport) 
	#endif

	#ifndef GEODE_STATICS_onVideo
		#define GEODE_STATICS_onVideo
		GEODE_AS_STATIC_FUNCTION(onVideo) 
	#endif

	#ifndef GEODE_STATICS_sfxSliderChanged
		#define GEODE_STATICS_sfxSliderChanged
		GEODE_AS_STATIC_FUNCTION(sfxSliderChanged) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_customSetup
		#define GEODE_CONCEPT_CHECK_customSetup
		GEODE_CONCEPT_FUNCTION_CHECK(customSetup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layerHidden
		#define GEODE_CONCEPT_CHECK_layerHidden
		GEODE_CONCEPT_FUNCTION_CHECK(layerHidden) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_volumeChanged
		#define GEODE_CONCEPT_CHECK_volumeChanged
		GEODE_CONCEPT_FUNCTION_CHECK(volumeChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createToggleButton
		#define GEODE_CONCEPT_CHECK_createToggleButton
		GEODE_CONCEPT_FUNCTION_CHECK(createToggleButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_exitLayer
		#define GEODE_CONCEPT_CHECK_exitLayer
		GEODE_CONCEPT_FUNCTION_CHECK(exitLayer) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_musicSliderChanged
		#define GEODE_CONCEPT_CHECK_musicSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(musicSliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAccount
		#define GEODE_CONCEPT_CHECK_onAccount
		GEODE_CONCEPT_FUNCTION_CHECK(onAccount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onHelp
		#define GEODE_CONCEPT_CHECK_onHelp
		GEODE_CONCEPT_FUNCTION_CHECK(onHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onMenuMusic
		#define GEODE_CONCEPT_CHECK_onMenuMusic
		GEODE_CONCEPT_FUNCTION_CHECK(onMenuMusic) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOptions
		#define GEODE_CONCEPT_CHECK_onOptions
		GEODE_CONCEPT_FUNCTION_CHECK(onOptions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onParental
		#define GEODE_CONCEPT_CHECK_onParental
		GEODE_CONCEPT_FUNCTION_CHECK(onParental) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onProgressBar
		#define GEODE_CONCEPT_CHECK_onProgressBar
		GEODE_CONCEPT_FUNCTION_CHECK(onProgressBar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRate
		#define GEODE_CONCEPT_CHECK_onRate
		GEODE_CONCEPT_FUNCTION_CHECK(onRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRecordReplays
		#define GEODE_CONCEPT_CHECK_onRecordReplays
		GEODE_CONCEPT_FUNCTION_CHECK(onRecordReplays) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSecretVault
		#define GEODE_CONCEPT_CHECK_onSecretVault
		GEODE_CONCEPT_FUNCTION_CHECK(onSecretVault) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSoundtracks
		#define GEODE_CONCEPT_CHECK_onSoundtracks
		GEODE_CONCEPT_FUNCTION_CHECK(onSoundtracks) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSupport
		#define GEODE_CONCEPT_CHECK_onSupport
		GEODE_CONCEPT_FUNCTION_CHECK(onSupport) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onVideo
		#define GEODE_CONCEPT_CHECK_onVideo
		GEODE_CONCEPT_FUNCTION_CHECK(onVideo) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sfxSliderChanged
		#define GEODE_CONCEPT_CHECK_sfxSliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sfxSliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tryEnableRecord
		#define GEODE_CONCEPT_CHECK_tryEnableRecord
		GEODE_CONCEPT_FUNCTION_CHECK(tryEnableRecord) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, OptionsLayer> : ModifyBase<ModifyDerive<Der, OptionsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, OptionsLayer>>;
		using ModifyBase<ModifyDerive<Der, OptionsLayer>>::ModifyBase;
		using Base = OptionsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x4ca7f0, Thiscall, OptionsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cae60, Thiscall, OptionsLayer, customSetup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cc590, Thiscall, OptionsLayer, layerHidden, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsLayer, FLAlert_Clicked, FLAlertLayer*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cada0, Thiscall, OptionsLayer, volumeChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsLayer, createToggleButton, std::string, cocos2d::SEL_MenuHandler, bool, cocos2d::CCMenu*, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsLayer, exitLayer, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cbb20, Thiscall, OptionsLayer, musicSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cc4a0, Thiscall, OptionsLayer, onAccount, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cc570, Thiscall, OptionsLayer, onHelp, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cba10, Thiscall, OptionsLayer, onMenuMusic, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cbc30, Thiscall, OptionsLayer, onOptions, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cbc60, Thiscall, OptionsLayer, onParental, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsLayer, onProgressBar, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cc4f0, Thiscall, OptionsLayer, onRate, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsLayer, onRecordReplays, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cbd30, Thiscall, OptionsLayer, onSecretVault, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x93e20, Thiscall, OptionsLayer, onSoundtracks, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cc450, Thiscall, OptionsLayer, onSupport, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4cc430, Thiscall, OptionsLayer, onVideo, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x182390, Thiscall, OptionsLayer, sfxSliderChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(OptionsLayer, tryEnableRecord, )
		}
	};
}
