#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/RateStarsModLayer.hpp>
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

	#ifndef GEODE_STATICS_getStarsButton
		#define GEODE_STATICS_getStarsButton
		GEODE_AS_STATIC_FUNCTION(getStarsButton) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onFeature
		#define GEODE_STATICS_onFeature
		GEODE_AS_STATIC_FUNCTION(onFeature) 
	#endif

	#ifndef GEODE_STATICS_onRate
		#define GEODE_STATICS_onRate
		GEODE_AS_STATIC_FUNCTION(onRate) 
	#endif

	#ifndef GEODE_STATICS_onToggleCoins
		#define GEODE_STATICS_onToggleCoins
		GEODE_AS_STATIC_FUNCTION(onToggleCoins) 
	#endif

	#ifndef GEODE_STATICS_selectDemon
		#define GEODE_STATICS_selectDemon
		GEODE_AS_STATIC_FUNCTION(selectDemon) 
	#endif

	#ifndef GEODE_STATICS_selectRating
		#define GEODE_STATICS_selectRating
		GEODE_AS_STATIC_FUNCTION(selectRating) 
	#endif

	#ifndef GEODE_STATICS_updateDemonRow
		#define GEODE_STATICS_updateDemonRow
		GEODE_AS_STATIC_FUNCTION(updateDemonRow) 
	#endif

	#ifndef GEODE_STATICS_updateDSprite
		#define GEODE_STATICS_updateDSprite
		GEODE_AS_STATIC_FUNCTION(updateDSprite) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
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

	#ifndef GEODE_CONCEPT_CHECK_getStarsButton
		#define GEODE_CONCEPT_CHECK_getStarsButton
		GEODE_CONCEPT_FUNCTION_CHECK(getStarsButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFeature
		#define GEODE_CONCEPT_CHECK_onFeature
		GEODE_CONCEPT_FUNCTION_CHECK(onFeature) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRate
		#define GEODE_CONCEPT_CHECK_onRate
		GEODE_CONCEPT_FUNCTION_CHECK(onRate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleCoins
		#define GEODE_CONCEPT_CHECK_onToggleCoins
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleCoins) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectDemon
		#define GEODE_CONCEPT_CHECK_selectDemon
		GEODE_CONCEPT_FUNCTION_CHECK(selectDemon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectRating
		#define GEODE_CONCEPT_CHECK_selectRating
		GEODE_CONCEPT_FUNCTION_CHECK(selectRating) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDemonRow
		#define GEODE_CONCEPT_CHECK_updateDemonRow
		GEODE_CONCEPT_FUNCTION_CHECK(updateDemonRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDSprite
		#define GEODE_CONCEPT_CHECK_updateDSprite
		GEODE_CONCEPT_FUNCTION_CHECK(updateDSprite) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, RateStarsModLayer> : ModifyBase<ModifyDerive<Der, RateStarsModLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, RateStarsModLayer>>;
		using ModifyBase<ModifyDerive<Der, RateStarsModLayer>>::ModifyBase;
		using Base = RateStarsModLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x55f360, Thiscall, RateStarsModLayer)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, create, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x560840, Thiscall, RateStarsModLayer, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x560640, Thiscall, RateStarsModLayer, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x5606c0, Thiscall, RateStarsModLayer, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x560780, Thiscall, RateStarsModLayer, onClosePopup, UploadActionPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, getStarsButton, int, cocos2d::SEL_MenuHandler, cocos2d::CCMenu*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55f4b0, Thiscall, RateStarsModLayer, init, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, onFeature, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, onRate, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, onToggleCoins, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, selectDemon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x560040, Thiscall, RateStarsModLayer, selectRating, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, updateDemonRow, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(RateStarsModLayer, updateDSprite, )
		}
	};
}
