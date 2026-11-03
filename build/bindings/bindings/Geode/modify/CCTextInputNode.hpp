#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CCTextInputNode.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_visit
		#define GEODE_STATICS_visit
		GEODE_AS_STATIC_FUNCTION(visit) 
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

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_onClickTrackNode
		#define GEODE_STATICS_onClickTrackNode
		GEODE_AS_STATIC_FUNCTION(onClickTrackNode) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillShow
		#define GEODE_STATICS_keyboardWillShow
		GEODE_AS_STATIC_FUNCTION(keyboardWillShow) 
	#endif

	#ifndef GEODE_STATICS_keyboardWillHide
		#define GEODE_STATICS_keyboardWillHide
		GEODE_AS_STATIC_FUNCTION(keyboardWillHide) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldInsertText
		#define GEODE_STATICS_onTextFieldInsertText
		GEODE_AS_STATIC_FUNCTION(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldAttachWithIME
		#define GEODE_STATICS_onTextFieldAttachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldDetachWithIME
		#define GEODE_STATICS_onTextFieldDetachWithIME
		GEODE_AS_STATIC_FUNCTION(onTextFieldDetachWithIME) 
	#endif

	#ifndef GEODE_STATICS_onExit
		#define GEODE_STATICS_onExit
		GEODE_AS_STATIC_FUNCTION(onExit) 
	#endif

	#ifndef GEODE_STATICS_onTextFieldDeleteBackward
		#define GEODE_STATICS_onTextFieldDeleteBackward
		GEODE_AS_STATIC_FUNCTION(onTextFieldDeleteBackward) 
	#endif

	#ifndef GEODE_STATICS_scrollWheel
		#define GEODE_STATICS_scrollWheel
		GEODE_AS_STATIC_FUNCTION(scrollWheel) 
	#endif

	#ifndef GEODE_STATICS_rightClick
		#define GEODE_STATICS_rightClick
		GEODE_AS_STATIC_FUNCTION(rightClick) 
	#endif

	#ifndef GEODE_STATICS_addTextArea
		#define GEODE_STATICS_addTextArea
		GEODE_AS_STATIC_FUNCTION(addTextArea) 
	#endif

	#ifndef GEODE_STATICS_armHold
		#define GEODE_STATICS_armHold
		GEODE_AS_STATIC_FUNCTION(armHold) 
	#endif

	#ifndef GEODE_STATICS_canClearText
		#define GEODE_STATICS_canClearText
		GEODE_AS_STATIC_FUNCTION(canClearText) 
	#endif

	#ifndef GEODE_STATICS_canCopyText
		#define GEODE_STATICS_canCopyText
		GEODE_AS_STATIC_FUNCTION(canCopyText) 
	#endif

	#ifndef GEODE_STATICS_clearText
		#define GEODE_STATICS_clearText
		GEODE_AS_STATIC_FUNCTION(clearText) 
	#endif

	#ifndef GEODE_STATICS_closeActiveInput
		#define GEODE_STATICS_closeActiveInput
		GEODE_AS_STATIC_FUNCTION(closeActiveInput) 
	#endif

	#ifndef GEODE_STATICS_containsTouchPoint
		#define GEODE_STATICS_containsTouchPoint
		GEODE_AS_STATIC_FUNCTION(containsTouchPoint) 
	#endif

	#ifndef GEODE_STATICS_copyText
		#define GEODE_STATICS_copyText
		GEODE_AS_STATIC_FUNCTION(copyText) 
	#endif

	#ifndef GEODE_STATICS_displayToRawIndex
		#define GEODE_STATICS_displayToRawIndex
		GEODE_AS_STATIC_FUNCTION(displayToRawIndex) 
	#endif

	#ifndef GEODE_STATICS_doneFromIME
		#define GEODE_STATICS_doneFromIME
		GEODE_AS_STATIC_FUNCTION(doneFromIME) 
	#endif

	#ifndef GEODE_STATICS_emoteTokenContaining
		#define GEODE_STATICS_emoteTokenContaining
		GEODE_AS_STATIC_FUNCTION(emoteTokenContaining) 
	#endif

	#ifndef GEODE_STATICS_emoteTokenEndingAt
		#define GEODE_STATICS_emoteTokenEndingAt
		GEODE_AS_STATIC_FUNCTION(emoteTokenEndingAt) 
	#endif

	#ifndef GEODE_STATICS_emoteTokenStartingAt
		#define GEODE_STATICS_emoteTokenStartingAt
		GEODE_AS_STATIC_FUNCTION(emoteTokenStartingAt) 
	#endif

	#ifndef GEODE_STATICS_enableTextScroll
		#define GEODE_STATICS_enableTextScroll
		GEODE_AS_STATIC_FUNCTION(enableTextScroll) 
	#endif

	#ifndef GEODE_STATICS_getBoxRect
		#define GEODE_STATICS_getBoxRect
		GEODE_AS_STATIC_FUNCTION(getBoxRect) 
	#endif

	#ifndef GEODE_STATICS_getTextRowCount
		#define GEODE_STATICS_getTextRowCount
		GEODE_AS_STATIC_FUNCTION(getTextRowCount) 
	#endif

	#ifndef GEODE_STATICS_getWorldRect
		#define GEODE_STATICS_getWorldRect
		GEODE_AS_STATIC_FUNCTION(getWorldRect) 
	#endif

	#ifndef GEODE_STATICS_holdTimerFired
		#define GEODE_STATICS_holdTimerFired
		GEODE_AS_STATIC_FUNCTION(holdTimerFired) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_insertAtCursor
		#define GEODE_STATICS_insertAtCursor
		GEODE_AS_STATIC_FUNCTION(insertAtCursor) 
	#endif

	#ifndef GEODE_STATICS_isCoveredByPopup
		#define GEODE_STATICS_isCoveredByPopup
		GEODE_AS_STATIC_FUNCTION(isCoveredByPopup) 
	#endif

	#ifndef GEODE_STATICS_isVisibleInTree
		#define GEODE_STATICS_isVisibleInTree
		GEODE_AS_STATIC_FUNCTION(isVisibleInTree) 
	#endif

	#ifndef GEODE_STATICS_moveCursorToEnd
		#define GEODE_STATICS_moveCursorToEnd
		GEODE_AS_STATIC_FUNCTION(moveCursorToEnd) 
	#endif

	#ifndef GEODE_STATICS_moveCursorVertical
		#define GEODE_STATICS_moveCursorVertical
		GEODE_AS_STATIC_FUNCTION(moveCursorVertical) 
	#endif

	#ifndef GEODE_STATICS_openEditMenu
		#define GEODE_STATICS_openEditMenu
		GEODE_AS_STATIC_FUNCTION(openEditMenu) 
	#endif

	#ifndef GEODE_STATICS_pasteText
		#define GEODE_STATICS_pasteText
		GEODE_AS_STATIC_FUNCTION(pasteText) 
	#endif

	#ifndef GEODE_STATICS_rawToDisplayIndex
		#define GEODE_STATICS_rawToDisplayIndex
		GEODE_AS_STATIC_FUNCTION(rawToDisplayIndex) 
	#endif

	#ifndef GEODE_STATICS_refreshLabel
		#define GEODE_STATICS_refreshLabel
		GEODE_AS_STATIC_FUNCTION(refreshLabel) 
	#endif

	#ifndef GEODE_STATICS_scrollToCursor
		#define GEODE_STATICS_scrollToCursor
		GEODE_AS_STATIC_FUNCTION(scrollToCursor) 
	#endif

	#ifndef GEODE_STATICS_setAllowNewlines
		#define GEODE_STATICS_setAllowNewlines
		GEODE_AS_STATIC_FUNCTION(setAllowNewlines) 
	#endif

	#ifndef GEODE_STATICS_setMaxTextAreaHeight
		#define GEODE_STATICS_setMaxTextAreaHeight
		GEODE_AS_STATIC_FUNCTION(setMaxTextAreaHeight) 
	#endif

	#ifndef GEODE_STATICS_setParseEmotes
		#define GEODE_STATICS_setParseEmotes
		GEODE_AS_STATIC_FUNCTION(setParseEmotes) 
	#endif

	#ifndef GEODE_STATICS_setString
		#define GEODE_STATICS_setString
		GEODE_AS_STATIC_FUNCTION(setString) 
	#endif

	#ifndef GEODE_STATICS_setTextScrollViewSize
		#define GEODE_STATICS_setTextScrollViewSize
		GEODE_AS_STATIC_FUNCTION(setTextScrollViewSize) 
	#endif

	#ifndef GEODE_STATICS_setUnicodeText
		#define GEODE_STATICS_setUnicodeText
		GEODE_AS_STATIC_FUNCTION(setUnicodeText) 
	#endif

	#ifndef GEODE_STATICS_setWheelRange
		#define GEODE_STATICS_setWheelRange
		GEODE_AS_STATIC_FUNCTION(setWheelRange) 
	#endif

	#ifndef GEODE_STATICS_showHoldMenu
		#define GEODE_STATICS_showHoldMenu
		GEODE_AS_STATIC_FUNCTION(showHoldMenu) 
	#endif

	#ifndef GEODE_STATICS_updateBlinkLabelToChar
		#define GEODE_STATICS_updateBlinkLabelToChar
		GEODE_AS_STATIC_FUNCTION(updateBlinkLabelToChar) 
	#endif

	#ifndef GEODE_STATICS_updateCursorPosition
		#define GEODE_STATICS_updateCursorPosition
		GEODE_AS_STATIC_FUNCTION(updateCursorPosition) 
	#endif

	#ifndef GEODE_STATICS_updateDefaultFontValues
		#define GEODE_STATICS_updateDefaultFontValues
		GEODE_AS_STATIC_FUNCTION(updateDefaultFontValues) 
	#endif

	#ifndef GEODE_STATICS_updateLabel
		#define GEODE_STATICS_updateLabel
		GEODE_AS_STATIC_FUNCTION(updateLabel) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_visit
		#define GEODE_CONCEPT_CHECK_visit
		GEODE_CONCEPT_FUNCTION_CHECK(visit) 
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

	#ifndef GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		#define GEODE_CONCEPT_CHECK_registerWithTouchDispatcher
		GEODE_CONCEPT_FUNCTION_CHECK(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClickTrackNode
		#define GEODE_CONCEPT_CHECK_onClickTrackNode
		GEODE_CONCEPT_FUNCTION_CHECK(onClickTrackNode) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyboardWillShow
		#define GEODE_CONCEPT_CHECK_keyboardWillShow
		GEODE_CONCEPT_FUNCTION_CHECK(keyboardWillShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyboardWillHide
		#define GEODE_CONCEPT_CHECK_keyboardWillHide
		GEODE_CONCEPT_FUNCTION_CHECK(keyboardWillHide) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldInsertText
		#define GEODE_CONCEPT_CHECK_onTextFieldInsertText
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldInsertText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldAttachWithIME
		#define GEODE_CONCEPT_CHECK_onTextFieldAttachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldAttachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldDetachWithIME
		#define GEODE_CONCEPT_CHECK_onTextFieldDetachWithIME
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldDetachWithIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onExit
		#define GEODE_CONCEPT_CHECK_onExit
		GEODE_CONCEPT_FUNCTION_CHECK(onExit) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTextFieldDeleteBackward
		#define GEODE_CONCEPT_CHECK_onTextFieldDeleteBackward
		GEODE_CONCEPT_FUNCTION_CHECK(onTextFieldDeleteBackward) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollWheel
		#define GEODE_CONCEPT_CHECK_scrollWheel
		GEODE_CONCEPT_FUNCTION_CHECK(scrollWheel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rightClick
		#define GEODE_CONCEPT_CHECK_rightClick
		GEODE_CONCEPT_FUNCTION_CHECK(rightClick) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTextArea
		#define GEODE_CONCEPT_CHECK_addTextArea
		GEODE_CONCEPT_FUNCTION_CHECK(addTextArea) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_armHold
		#define GEODE_CONCEPT_CHECK_armHold
		GEODE_CONCEPT_FUNCTION_CHECK(armHold) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canClearText
		#define GEODE_CONCEPT_CHECK_canClearText
		GEODE_CONCEPT_FUNCTION_CHECK(canClearText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_canCopyText
		#define GEODE_CONCEPT_CHECK_canCopyText
		GEODE_CONCEPT_FUNCTION_CHECK(canCopyText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearText
		#define GEODE_CONCEPT_CHECK_clearText
		GEODE_CONCEPT_FUNCTION_CHECK(clearText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeActiveInput
		#define GEODE_CONCEPT_CHECK_closeActiveInput
		GEODE_CONCEPT_FUNCTION_CHECK(closeActiveInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_closeEditMenu
		#define GEODE_CONCEPT_CHECK_closeEditMenu
		GEODE_CONCEPT_FUNCTION_CHECK(closeEditMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_containsTouchPoint
		#define GEODE_CONCEPT_CHECK_containsTouchPoint
		GEODE_CONCEPT_FUNCTION_CHECK(containsTouchPoint) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_copyText
		#define GEODE_CONCEPT_CHECK_copyText
		GEODE_CONCEPT_FUNCTION_CHECK(copyText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_disarmHold
		#define GEODE_CONCEPT_CHECK_disarmHold
		GEODE_CONCEPT_FUNCTION_CHECK(disarmHold) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_displayToRawIndex
		#define GEODE_CONCEPT_CHECK_displayToRawIndex
		GEODE_CONCEPT_FUNCTION_CHECK(displayToRawIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_doneFromIME
		#define GEODE_CONCEPT_CHECK_doneFromIME
		GEODE_CONCEPT_FUNCTION_CHECK(doneFromIME) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emoteTokenContaining
		#define GEODE_CONCEPT_CHECK_emoteTokenContaining
		GEODE_CONCEPT_FUNCTION_CHECK(emoteTokenContaining) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emoteTokenEndingAt
		#define GEODE_CONCEPT_CHECK_emoteTokenEndingAt
		GEODE_CONCEPT_FUNCTION_CHECK(emoteTokenEndingAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_emoteTokenStartingAt
		#define GEODE_CONCEPT_CHECK_emoteTokenStartingAt
		GEODE_CONCEPT_FUNCTION_CHECK(emoteTokenStartingAt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enableTextScroll
		#define GEODE_CONCEPT_CHECK_enableTextScroll
		GEODE_CONCEPT_FUNCTION_CHECK(enableTextScroll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_forceOffset
		#define GEODE_CONCEPT_CHECK_forceOffset
		GEODE_CONCEPT_FUNCTION_CHECK(forceOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getBoxRect
		#define GEODE_CONCEPT_CHECK_getBoxRect
		GEODE_CONCEPT_FUNCTION_CHECK(getBoxRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getString
		#define GEODE_CONCEPT_CHECK_getString
		GEODE_CONCEPT_FUNCTION_CHECK(getString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextLabel
		#define GEODE_CONCEPT_CHECK_getTextLabel
		GEODE_CONCEPT_FUNCTION_CHECK(getTextLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getTextRowCount
		#define GEODE_CONCEPT_CHECK_getTextRowCount
		GEODE_CONCEPT_FUNCTION_CHECK(getTextRowCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getWorldRect
		#define GEODE_CONCEPT_CHECK_getWorldRect
		GEODE_CONCEPT_FUNCTION_CHECK(getWorldRect) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_holdTimerFired
		#define GEODE_CONCEPT_CHECK_holdTimerFired
		GEODE_CONCEPT_FUNCTION_CHECK(holdTimerFired) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_insertAtCursor
		#define GEODE_CONCEPT_CHECK_insertAtCursor
		GEODE_CONCEPT_FUNCTION_CHECK(insertAtCursor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isCoveredByPopup
		#define GEODE_CONCEPT_CHECK_isCoveredByPopup
		GEODE_CONCEPT_FUNCTION_CHECK(isCoveredByPopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isVisibleInTree
		#define GEODE_CONCEPT_CHECK_isVisibleInTree
		GEODE_CONCEPT_FUNCTION_CHECK(isVisibleInTree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveCursorToEnd
		#define GEODE_CONCEPT_CHECK_moveCursorToEnd
		GEODE_CONCEPT_FUNCTION_CHECK(moveCursorToEnd) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_moveCursorVertical
		#define GEODE_CONCEPT_CHECK_moveCursorVertical
		GEODE_CONCEPT_FUNCTION_CHECK(moveCursorVertical) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openEditMenu
		#define GEODE_CONCEPT_CHECK_openEditMenu
		GEODE_CONCEPT_FUNCTION_CHECK(openEditMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pasteText
		#define GEODE_CONCEPT_CHECK_pasteText
		GEODE_CONCEPT_FUNCTION_CHECK(pasteText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rawToDisplayIndex
		#define GEODE_CONCEPT_CHECK_rawToDisplayIndex
		GEODE_CONCEPT_FUNCTION_CHECK(rawToDisplayIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshLabel
		#define GEODE_CONCEPT_CHECK_refreshLabel
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_scrollToCursor
		#define GEODE_CONCEPT_CHECK_scrollToCursor
		GEODE_CONCEPT_FUNCTION_CHECK(scrollToCursor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAllowedChars
		#define GEODE_CONCEPT_CHECK_setAllowedChars
		GEODE_CONCEPT_FUNCTION_CHECK(setAllowedChars) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAllowNewlines
		#define GEODE_CONCEPT_CHECK_setAllowNewlines
		GEODE_CONCEPT_FUNCTION_CHECK(setAllowNewlines) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setDelegate
		#define GEODE_CONCEPT_CHECK_setDelegate
		GEODE_CONCEPT_FUNCTION_CHECK(setDelegate) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelNormalColor
		#define GEODE_CONCEPT_CHECK_setLabelNormalColor
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelNormalColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelPlaceholderColor
		#define GEODE_CONCEPT_CHECK_setLabelPlaceholderColor
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelPlaceholderColor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelPlaceholderScale
		#define GEODE_CONCEPT_CHECK_setLabelPlaceholderScale
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelPlaceholderScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxLabelLength
		#define GEODE_CONCEPT_CHECK_setMaxLabelLength
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxLabelLength) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxLabelScale
		#define GEODE_CONCEPT_CHECK_setMaxLabelScale
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxLabelScale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxLabelWidth
		#define GEODE_CONCEPT_CHECK_setMaxLabelWidth
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxLabelWidth) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setMaxTextAreaHeight
		#define GEODE_CONCEPT_CHECK_setMaxTextAreaHeight
		GEODE_CONCEPT_FUNCTION_CHECK(setMaxTextAreaHeight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setParseEmotes
		#define GEODE_CONCEPT_CHECK_setParseEmotes
		GEODE_CONCEPT_FUNCTION_CHECK(setParseEmotes) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setString
		#define GEODE_CONCEPT_CHECK_setString
		GEODE_CONCEPT_FUNCTION_CHECK(setString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextScrollViewSize
		#define GEODE_CONCEPT_CHECK_setTextScrollViewSize
		GEODE_CONCEPT_FUNCTION_CHECK(setTextScrollViewSize) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setUnicodeText
		#define GEODE_CONCEPT_CHECK_setUnicodeText
		GEODE_CONCEPT_FUNCTION_CHECK(setUnicodeText) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setWheelRange
		#define GEODE_CONCEPT_CHECK_setWheelRange
		GEODE_CONCEPT_FUNCTION_CHECK(setWheelRange) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showHoldMenu
		#define GEODE_CONCEPT_CHECK_showHoldMenu
		GEODE_CONCEPT_FUNCTION_CHECK(showHoldMenu) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlinkLabel
		#define GEODE_CONCEPT_CHECK_updateBlinkLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlinkLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBlinkLabelToChar
		#define GEODE_CONCEPT_CHECK_updateBlinkLabelToChar
		GEODE_CONCEPT_FUNCTION_CHECK(updateBlinkLabelToChar) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateCursorPosition
		#define GEODE_CONCEPT_CHECK_updateCursorPosition
		GEODE_CONCEPT_FUNCTION_CHECK(updateCursorPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateDefaultFontValues
		#define GEODE_CONCEPT_CHECK_updateDefaultFontValues
		GEODE_CONCEPT_FUNCTION_CHECK(updateDefaultFontValues) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateLabel
		#define GEODE_CONCEPT_CHECK_updateLabel
		GEODE_CONCEPT_FUNCTION_CHECK(updateLabel) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CCTextInputNode> : ModifyBase<ModifyDerive<Der, CCTextInputNode>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CCTextInputNode>>;
		using ModifyBase<ModifyDerive<Der, CCTextInputNode>>::ModifyBase;
		using Base = CCTextInputNode;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, create, float, float, char const*, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, create, float, float, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54260, Default, CCTextInputNode, create, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54e30, Thiscall, CCTextInputNode, visit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58bd0, Thiscall, CCTextInputNode, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58eb0, Thiscall, CCTextInputNode, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58d40, Thiscall, CCTextInputNode, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58e20, Thiscall, CCTextInputNode, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59a40, Thiscall, CCTextInputNode, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57110, Thiscall, CCTextInputNode, textChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x570f0, Thiscall, CCTextInputNode, onClickTrackNode, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x56f10, Thiscall, CCTextInputNode, keyboardWillShow, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57030, Thiscall, CCTextInputNode, keyboardWillHide, cocos2d::CCIMEKeyboardNotificationInfo&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x571f0, Thiscall, CCTextInputNode, onTextFieldInsertText, cocos2d::CCTextFieldTTF*, char const*, int, cocos2d::enumKeyCodes)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57b70, Thiscall, CCTextInputNode, onTextFieldAttachWithIME, cocos2d::CCTextFieldTTF*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x57e50, Thiscall, CCTextInputNode, onTextFieldDetachWithIME, cocos2d::CCTextFieldTTF*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58fb0, Thiscall, CCTextInputNode, onExit, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55810, Thiscall, CCTextInputNode, onTextFieldDeleteBackward, cocos2d::CCTextFieldTTF*, char const*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x595c0, Thiscall, CCTextInputNode, scrollWheel, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59150, Thiscall, CCTextInputNode, rightClick, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54770, Thiscall, CCTextInputNode, addTextArea, TextArea*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, armHold, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, canClearText, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, canCopyText, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, clearText, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, closeActiveInput, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, closeEditMenu, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, containsTouchPoint, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, copyText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, disarmHold, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, displayToRawIndex, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, doneFromIME, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, emoteTokenContaining, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, emoteTokenEndingAt, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, emoteTokenStartingAt, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, enableTextScroll, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, forceOffset, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getBoxRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, getString, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, getTextLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getTextRowCount, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, getWorldRect, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59050, Thiscall, CCTextInputNode, holdTimerFired, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54510, Thiscall, CCTextInputNode, init, float, float, char const*, char const*, int, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54f50, Thiscall, CCTextInputNode, insertAtCursor, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, isCoveredByPopup, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, isVisibleInTree, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, moveCursorToEnd, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, moveCursorVertical, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59440, Thiscall, CCTextInputNode, openEditMenu, cocos2d::CCPoint)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, pasteText, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55460, Thiscall, CCTextInputNode, rawToDisplayIndex, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x565a0, Thiscall, CCTextInputNode, refreshLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54aa0, Thiscall, CCTextInputNode, scrollToCursor, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setAllowedChars, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setAllowNewlines, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setDelegate, TextInputDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setLabelNormalColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setLabelPlaceholderColor, cocos2d::ccColor3B)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setLabelPlaceholderScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setMaxLabelLength, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setMaxLabelScale, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, setMaxLabelWidth, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setMaxTextAreaHeight, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setParseEmotes, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54ea0, Thiscall, CCTextInputNode, setString, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setTextScrollViewSize, cocos2d::CCSize)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setUnicodeText, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(CCTextInputNode, setWheelRange, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x59110, Thiscall, CCTextInputNode, showHoldMenu, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CCTextInputNode, updateBlinkLabel, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x568b0, Thiscall, CCTextInputNode, updateBlinkLabelToChar, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x583a0, Thiscall, CCTextInputNode, updateCursorPosition, cocos2d::CCPoint, cocos2d::CCRect)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x54c30, Thiscall, CCTextInputNode, updateDefaultFontValues, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x55d20, Thiscall, CCTextInputNode, updateLabel, std::string)
		}
	};
}
