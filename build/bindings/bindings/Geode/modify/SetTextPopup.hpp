#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SetTextPopup.hpp>
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

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_emotePickerClosed
		#define GEODE_STATICS_emotePickerClosed
		GEODE_AS_STATIC_FUNCTION(emotePickerClosed) 
	#endif

	#ifndef GEODE_STATICS_addInfoButton
		#define GEODE_STATICS_addInfoButton
		GEODE_AS_STATIC_FUNCTION(addInfoButton) 
	#endif

	#ifndef GEODE_STATICS_addInfoLabel
		#define GEODE_STATICS_addInfoLabel
		GEODE_AS_STATIC_FUNCTION(addInfoLabel) 
	#endif

	#ifndef GEODE_STATICS_addPathLabel
		#define GEODE_STATICS_addPathLabel
		GEODE_AS_STATIC_FUNCTION(addPathLabel) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCancel
		#define GEODE_STATICS_onCancel
		GEODE_AS_STATIC_FUNCTION(onCancel) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onEmotes
		#define GEODE_STATICS_onEmotes
		GEODE_AS_STATIC_FUNCTION(onEmotes) 
	#endif

	#ifndef GEODE_STATICS_onResetValue
		#define GEODE_STATICS_onResetValue
		GEODE_AS_STATIC_FUNCTION(onResetValue) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePickerClosed
		#define GEODE_CONCEPT_CHECK_emotePickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInfoButton
		#define GEODE_CONCEPT_CHECK_addInfoButton
		GEODE_CONCEPT_FUNCTION_CHECK(addInfoButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addInfoLabel
		#define GEODE_CONCEPT_CHECK_addInfoLabel
		GEODE_CONCEPT_FUNCTION_CHECK(addInfoLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addPathLabel
		#define GEODE_CONCEPT_CHECK_addPathLabel
		GEODE_CONCEPT_FUNCTION_CHECK(addPathLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCancel
		#define GEODE_CONCEPT_CHECK_onCancel
		GEODE_CONCEPT_FUNCTION_CHECK(onCancel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEmotes
		#define GEODE_CONCEPT_CHECK_onEmotes
		GEODE_CONCEPT_FUNCTION_CHECK(onEmotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onResetValue
		#define GEODE_CONCEPT_CHECK_onResetValue
		GEODE_CONCEPT_FUNCTION_CHECK(onResetValue) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateTextInputLabel
		#define GEODE_CONCEPT_CHECK_updateTextInputLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateTextInputLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SetTextPopup> : ModifyBase<ModifyDerive<Der, SetTextPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SetTextPopup>>;
		using ModifyBase<ModifyDerive<Der, SetTextPopup>>::ModifyBase;
		using Base = SetTextPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetTextPopup, SetTextPopup, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x399820, Thiscall, SetTextPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a6f70, Default, SetTextPopup, create, std::string, std::string, int, std::string, std::string, bool, float, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a8740, Thiscall, SetTextPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a83c0, Thiscall, SetTextPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1265d0, Thiscall, SetTextPopup, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a7f10, Thiscall, SetTextPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a290, Thiscall, SetTextPopup, emotePickerClosed, EmotePickerPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetTextPopup, addInfoButton, std::string const&, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetTextPopup, addInfoLabel, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SetTextPopup, addPathLabel, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a71f0, Thiscall, SetTextPopup, init, std::string, std::string, int, std::string, std::string, bool, float, bool, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a8460, Thiscall, SetTextPopup, onCancel, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a85a0, Thiscall, SetTextPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a8470, Thiscall, SetTextPopup, onEmotes, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a7eb0, Thiscall, SetTextPopup, onResetValue, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SetTextPopup, updateTextInputLabel, )
		}
	};
}
