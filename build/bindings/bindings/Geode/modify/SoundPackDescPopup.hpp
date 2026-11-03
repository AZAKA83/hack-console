#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SoundPackDescPopup.hpp>
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

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_emotePicked
		#define GEODE_STATICS_emotePicked
		GEODE_AS_STATIC_FUNCTION(emotePicked) 
	#endif

	#ifndef GEODE_STATICS_emotePickerClosed
		#define GEODE_STATICS_emotePickerClosed
		GEODE_AS_STATIC_FUNCTION(emotePickerClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onEmotes
		#define GEODE_STATICS_onEmotes
		GEODE_AS_STATIC_FUNCTION(onEmotes) 
	#endif

	#ifndef GEODE_STATICS_onPickIcon
		#define GEODE_STATICS_onPickIcon
		GEODE_AS_STATIC_FUNCTION(onPickIcon) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_refreshIconSlot
		#define GEODE_STATICS_refreshIconSlot
		GEODE_AS_STATIC_FUNCTION(refreshIconSlot) 
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

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePicked
		#define GEODE_CONCEPT_CHECK_emotePicked
		GEODE_CONCEPT_FUNCTION_CHECK(emotePicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emotePickerClosed
		#define GEODE_CONCEPT_CHECK_emotePickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(emotePickerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEmotes
		#define GEODE_CONCEPT_CHECK_onEmotes
		GEODE_CONCEPT_FUNCTION_CHECK(onEmotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPickIcon
		#define GEODE_CONCEPT_CHECK_onPickIcon
		GEODE_CONCEPT_FUNCTION_CHECK(onPickIcon) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshIconSlot
		#define GEODE_CONCEPT_CHECK_refreshIconSlot
		GEODE_CONCEPT_FUNCTION_CHECK(refreshIconSlot) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SoundPackDescPopup> : ModifyBase<ModifyDerive<Der, SoundPackDescPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SoundPackDescPopup>>;
		using ModifyBase<ModifyDerive<Der, SoundPackDescPopup>>::ModifyBase;
		using Base = SoundPackDescPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x191a30, Thiscall, SoundPackDescPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SoundPackDescPopup, create, std::string const&, std::string const&, SoundPackDescDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, SoundPackDescPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a5c0, Thiscall, SoundPackDescPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x199b70, Thiscall, SoundPackDescPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a240, Thiscall, SoundPackDescPopup, emotePicked, EmotePickerPopup*, EmoteDef const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a290, Thiscall, SoundPackDescPopup, emotePickerClosed, EmotePickerPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x199220, Thiscall, SoundPackDescPopup, init, std::string const&, std::string const&, SoundPackDescDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a110, Thiscall, SoundPackDescPopup, onEmotes, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a010, Thiscall, SoundPackDescPopup, onPickIcon, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19a2a0, Thiscall, SoundPackDescPopup, onSave, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SoundPackDescPopup, refreshIconSlot, )
		}
	};
}
