#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJWriteMessagePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadMessageFinished
		#define GEODE_CONCEPT_CHECK_uploadMessageFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadMessageFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadMessageFailed
		#define GEODE_CONCEPT_CHECK_uploadMessageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadMessageFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_FLAlert_Clicked
		#define GEODE_CONCEPT_CHECK_FLAlert_Clicked
		GEODE_CONCEPT_FUNCTION_CHECK(FLAlert_Clicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeMessagePopup
		#define GEODE_CONCEPT_CHECK_closeMessagePopup
		GEODE_CONCEPT_FUNCTION_CHECK(closeMessagePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearBody
		#define GEODE_CONCEPT_CHECK_onClearBody
		GEODE_CONCEPT_FUNCTION_CHECK(onClearBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSend
		#define GEODE_CONCEPT_CHECK_onSend
		GEODE_CONCEPT_FUNCTION_CHECK(onSend) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBody
		#define GEODE_CONCEPT_CHECK_updateBody
		GEODE_CONCEPT_FUNCTION_CHECK(updateBody) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCharCountLabel
		#define GEODE_CONCEPT_CHECK_updateCharCountLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateCharCountLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateSubject
		#define GEODE_CONCEPT_CHECK_updateSubject
		GEODE_CONCEPT_FUNCTION_CHECK(updateSubject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateText
		#define GEODE_CONCEPT_CHECK_updateText
		GEODE_CONCEPT_FUNCTION_CHECK(updateText) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJWriteMessagePopup> : ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>>;
		using ModifyBase<ModifyDerive<Der, GJWriteMessagePopup>>::ModifyBase;
		using Base = GJWriteMessagePopup;
        using Derived = Der;
		void apply() override {

		}
	};
}
