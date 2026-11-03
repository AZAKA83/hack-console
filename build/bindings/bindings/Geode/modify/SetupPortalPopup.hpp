#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetupPortalPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_determineStartValues
		#define GEODE_CONCEPT_CHECK_determineStartValues
		GEODE_CONCEPT_FUNCTION_CHECK(determineStartValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditCameraSettings
		#define GEODE_CONCEPT_CHECK_onEditCameraSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onEditCameraSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onUnboundMode
		#define GEODE_CONCEPT_CHECK_onUnboundMode
		GEODE_CONCEPT_FUNCTION_CHECK(onUnboundMode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_sliderChanged
		#define GEODE_CONCEPT_CHECK_sliderChanged
		GEODE_CONCEPT_FUNCTION_CHECK(sliderChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraEasing
		#define GEODE_CONCEPT_CHECK_updateCameraEasing
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraEasing) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraEasingLabel
		#define GEODE_CONCEPT_CHECK_updateCameraEasingLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraEasingLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraPadding
		#define GEODE_CONCEPT_CHECK_updateCameraPadding
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraPadding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCameraPaddingLabel
		#define GEODE_CONCEPT_CHECK_updateCameraPaddingLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCameraPaddingLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateItemVisibility
		#define GEODE_CONCEPT_CHECK_updateItemVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateItemVisibility) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetupPortalPopup> : ModifyBase<ModifyDerive<Der, SetupPortalPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetupPortalPopup>>;
		using ModifyBase<ModifyDerive<Der, SetupPortalPopup>>::ModifyBase;
		using Base = SetupPortalPopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
