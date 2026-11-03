#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/EmotePickerPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_buttonAnchor
		#define GEODE_STATICS_buttonAnchor
		GEODE_AS_STATIC_FUNCTION(buttonAnchor) 
	#endif

	#ifndef GEODE_STATICS_openAt
		#define GEODE_STATICS_openAt
		GEODE_AS_STATIC_FUNCTION(openAt) 
	#endif

	#ifndef GEODE_STATICS_ccTouchBegan
		#define GEODE_STATICS_ccTouchBegan
		GEODE_AS_STATIC_FUNCTION(ccTouchBegan) 
	#endif

	#ifndef GEODE_STATICS_keyDown
		#define GEODE_STATICS_keyDown
		GEODE_AS_STATIC_FUNCTION(keyDown) 
	#endif

	#ifndef GEODE_STATICS_show
		#define GEODE_STATICS_show
		GEODE_AS_STATIC_FUNCTION(show) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_onBuildWindowContent
		#define GEODE_STATICS_onBuildWindowContent
		GEODE_AS_STATIC_FUNCTION(onBuildWindowContent) 
	#endif

	#ifndef GEODE_STATICS_onWindowResized
		#define GEODE_STATICS_onWindowResized
		GEODE_AS_STATIC_FUNCTION(onWindowResized) 
	#endif

	#ifndef GEODE_STATICS_addCell
		#define GEODE_STATICS_addCell
		GEODE_AS_STATIC_FUNCTION(addCell) 
	#endif

	#ifndef GEODE_STATICS_canAddEmote
		#define GEODE_STATICS_canAddEmote
		GEODE_AS_STATIC_FUNCTION(canAddEmote) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_layoutEmoteGrid
		#define GEODE_STATICS_layoutEmoteGrid
		GEODE_AS_STATIC_FUNCTION(layoutEmoteGrid) 
	#endif

	#ifndef GEODE_STATICS_onPickEmote
		#define GEODE_STATICS_onPickEmote
		GEODE_AS_STATIC_FUNCTION(onPickEmote) 
	#endif

	#ifndef GEODE_STATICS_refreshEnabled
		#define GEODE_STATICS_refreshEnabled
		GEODE_AS_STATIC_FUNCTION(refreshEnabled) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_toggle
		#define GEODE_CONCEPT_CHECK_toggle
		GEODE_CONCEPT_FUNCTION_CHECK(toggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buttonAnchor
		#define GEODE_CONCEPT_CHECK_buttonAnchor
		GEODE_CONCEPT_FUNCTION_CHECK(buttonAnchor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openAt
		#define GEODE_CONCEPT_CHECK_openAt
		GEODE_CONCEPT_FUNCTION_CHECK(openAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createPicker
		#define GEODE_CONCEPT_CHECK_createPicker
		GEODE_CONCEPT_FUNCTION_CHECK(createPicker) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_togglePicker
		#define GEODE_CONCEPT_CHECK_togglePicker
		GEODE_CONCEPT_FUNCTION_CHECK(togglePicker) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ccTouchBegan
		#define GEODE_CONCEPT_CHECK_ccTouchBegan
		GEODE_CONCEPT_FUNCTION_CHECK(ccTouchBegan) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyDown
		#define GEODE_CONCEPT_CHECK_keyDown
		GEODE_CONCEPT_FUNCTION_CHECK(keyDown) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_show
		#define GEODE_CONCEPT_CHECK_show
		GEODE_CONCEPT_FUNCTION_CHECK(show) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBuildWindowContent
		#define GEODE_CONCEPT_CHECK_onBuildWindowContent
		GEODE_CONCEPT_FUNCTION_CHECK(onBuildWindowContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onWindowResized
		#define GEODE_CONCEPT_CHECK_onWindowResized
		GEODE_CONCEPT_FUNCTION_CHECK(onWindowResized) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCell
		#define GEODE_CONCEPT_CHECK_addCell
		GEODE_CONCEPT_FUNCTION_CHECK(addCell) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canAddEmote
		#define GEODE_CONCEPT_CHECK_canAddEmote
		GEODE_CONCEPT_FUNCTION_CHECK(canAddEmote) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_layoutEmoteGrid
		#define GEODE_CONCEPT_CHECK_layoutEmoteGrid
		GEODE_CONCEPT_FUNCTION_CHECK(layoutEmoteGrid) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPickEmote
		#define GEODE_CONCEPT_CHECK_onPickEmote
		GEODE_CONCEPT_FUNCTION_CHECK(onPickEmote) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshEnabled
		#define GEODE_CONCEPT_CHECK_refreshEnabled
		GEODE_CONCEPT_FUNCTION_CHECK(refreshEnabled) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, EmotePickerPopup> : ModifyBase<ModifyDerive<Der, EmotePickerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, EmotePickerPopup>>;
		using ModifyBase<ModifyDerive<Der, EmotePickerPopup>>::ModifyBase;
		using Base = EmotePickerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x1236e0, Thiscall, EmotePickerPopup)
			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x123430, Thiscall, EmotePickerPopup, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EmotePickerPopup, create, CCTextInputNode*, cocos2d::CCPoint, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EmotePickerPopup, toggle, EmotePickerPopup*, EmotePickerDelegate*, cocos2d::CCNode*, CCTextInputNode*, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x1237e0, Default, EmotePickerPopup, buttonAnchor, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x123840, Default, EmotePickerPopup, openAt, EmotePickerPopup*, EmotePickerDelegate*, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EmotePickerPopup, createPicker, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(EmotePickerPopup, togglePicker, EmotePickerPopup*, EmotePickerDelegate*, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124390, Thiscall, EmotePickerPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124a30, Thiscall, EmotePickerPopup, keyDown, cocos2d::enumKeyCodes, double)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124b00, Thiscall, EmotePickerPopup, show, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124b10, Thiscall, EmotePickerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x123c60, Thiscall, EmotePickerPopup, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x123c70, Thiscall, EmotePickerPopup, onBuildWindowContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124380, Thiscall, EmotePickerPopup, onWindowResized, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x123f70, Thiscall, EmotePickerPopup, addCell, EmoteDef const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124520, Thiscall, EmotePickerPopup, canAddEmote, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x123970, Thiscall, EmotePickerPopup, init, CCTextInputNode*, cocos2d::CCPoint, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124050, Thiscall, EmotePickerPopup, layoutEmoteGrid, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124780, Thiscall, EmotePickerPopup, onPickEmote, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x124640, Thiscall, EmotePickerPopup, refreshEnabled, )
		}
	};
}
