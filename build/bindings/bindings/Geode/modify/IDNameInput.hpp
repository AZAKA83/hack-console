#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/IDNameInput.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_idNameBrowserClosed
		#define GEODE_STATICS_idNameBrowserClosed
		GEODE_AS_STATIC_FUNCTION(idNameBrowserClosed) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_textInputOpened
		#define GEODE_STATICS_textInputOpened
		GEODE_AS_STATIC_FUNCTION(textInputOpened) 
	#endif

	#ifndef GEODE_STATICS_textInputClosed
		#define GEODE_STATICS_textInputClosed
		GEODE_AS_STATIC_FUNCTION(textInputClosed) 
	#endif

	#ifndef GEODE_STATICS_textInputShouldOffset
		#define GEODE_STATICS_textInputShouldOffset
		GEODE_AS_STATIC_FUNCTION(textInputShouldOffset) 
	#endif

	#ifndef GEODE_STATICS_textInputReturn
		#define GEODE_STATICS_textInputReturn
		GEODE_AS_STATIC_FUNCTION(textInputReturn) 
	#endif

	#ifndef GEODE_STATICS_allowTextInput
		#define GEODE_STATICS_allowTextInput
		GEODE_AS_STATIC_FUNCTION(allowTextInput) 
	#endif

	#ifndef GEODE_STATICS_enterPressed
		#define GEODE_STATICS_enterPressed
		GEODE_AS_STATIC_FUNCTION(enterPressed) 
	#endif

	#ifndef GEODE_STATICS_dropdownListPopupClosed
		#define GEODE_STATICS_dropdownListPopupClosed
		GEODE_AS_STATIC_FUNCTION(dropdownListPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_collectMatches
		#define GEODE_STATICS_collectMatches
		GEODE_AS_STATIC_FUNCTION(collectMatches) 
	#endif

	#ifndef GEODE_STATICS_commitID
		#define GEODE_STATICS_commitID
		GEODE_AS_STATIC_FUNCTION(commitID) 
	#endif

	#ifndef GEODE_STATICS_commitTypedName
		#define GEODE_STATICS_commitTypedName
		GEODE_AS_STATIC_FUNCTION(commitTypedName) 
	#endif

	#ifndef GEODE_STATICS_dismissAutocomplete
		#define GEODE_STATICS_dismissAutocomplete
		GEODE_AS_STATIC_FUNCTION(dismissAutocomplete) 
	#endif

	#ifndef GEODE_STATICS_idNameTypeForItemValueType
		#define GEODE_STATICS_idNameTypeForItemValueType
		GEODE_AS_STATIC_FUNCTION(idNameTypeForItemValueType) 
	#endif

	#ifndef GEODE_STATICS_initCore
		#define GEODE_STATICS_initCore
		GEODE_AS_STATIC_FUNCTION(initCore) 
	#endif

	#ifndef GEODE_STATICS_nameLess
		#define GEODE_STATICS_nameLess
		GEODE_AS_STATIC_FUNCTION(nameLess) 
	#endif

	#ifndef GEODE_STATICS_onArrowLeft
		#define GEODE_STATICS_onArrowLeft
		GEODE_AS_STATIC_FUNCTION(onArrowLeft) 
	#endif

	#ifndef GEODE_STATICS_onArrowRight
		#define GEODE_STATICS_onArrowRight
		GEODE_AS_STATIC_FUNCTION(onArrowRight) 
	#endif

	#ifndef GEODE_STATICS_onAutocompleteRow
		#define GEODE_STATICS_onAutocompleteRow
		GEODE_AS_STATIC_FUNCTION(onAutocompleteRow) 
	#endif

	#ifndef GEODE_STATICS_onBrowser
		#define GEODE_STATICS_onBrowser
		GEODE_AS_STATIC_FUNCTION(onBrowser) 
	#endif

	#ifndef GEODE_STATICS_onNextFree
		#define GEODE_STATICS_onNextFree
		GEODE_AS_STATIC_FUNCTION(onNextFree) 
	#endif

	#ifndef GEODE_STATICS_refreshLabel
		#define GEODE_STATICS_refreshLabel
		GEODE_AS_STATIC_FUNCTION(refreshLabel) 
	#endif

	#ifndef GEODE_STATICS_revertToLastID
		#define GEODE_STATICS_revertToLastID
		GEODE_AS_STATIC_FUNCTION(revertToLastID) 
	#endif

	#ifndef GEODE_STATICS_setType
		#define GEODE_STATICS_setType
		GEODE_AS_STATIC_FUNCTION(setType) 
	#endif

	#ifndef GEODE_STATICS_stepArrow
		#define GEODE_STATICS_stepArrow
		GEODE_AS_STATIC_FUNCTION(stepArrow) 
	#endif

	#ifndef GEODE_STATICS_textIsPureInt
		#define GEODE_STATICS_textIsPureInt
		GEODE_AS_STATIC_FUNCTION(textIsPureInt) 
	#endif

	#ifndef GEODE_STATICS_updateAutocomplete
		#define GEODE_STATICS_updateAutocomplete
		GEODE_AS_STATIC_FUNCTION(updateAutocomplete) 
	#endif

	#ifndef GEODE_STATICS_useRank
		#define GEODE_STATICS_useRank
		GEODE_AS_STATIC_FUNCTION(useRank) 
	#endif

	#ifndef GEODE_STATICS_useRankLess
		#define GEODE_STATICS_useRankLess
		GEODE_AS_STATIC_FUNCTION(useRankLess) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_idNameBrowserClosed
		#define GEODE_CONCEPT_CHECK_idNameBrowserClosed
		GEODE_CONCEPT_FUNCTION_CHECK(idNameBrowserClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputOpened
		#define GEODE_CONCEPT_CHECK_textInputOpened
		GEODE_CONCEPT_FUNCTION_CHECK(textInputOpened) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputClosed
		#define GEODE_CONCEPT_CHECK_textInputClosed
		GEODE_CONCEPT_FUNCTION_CHECK(textInputClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputShouldOffset
		#define GEODE_CONCEPT_CHECK_textInputShouldOffset
		GEODE_CONCEPT_FUNCTION_CHECK(textInputShouldOffset) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textInputReturn
		#define GEODE_CONCEPT_CHECK_textInputReturn
		GEODE_CONCEPT_FUNCTION_CHECK(textInputReturn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_allowTextInput
		#define GEODE_CONCEPT_CHECK_allowTextInput
		GEODE_CONCEPT_FUNCTION_CHECK(allowTextInput) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_enterPressed
		#define GEODE_CONCEPT_CHECK_enterPressed
		GEODE_CONCEPT_FUNCTION_CHECK(enterPressed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dropdownListPopupClosed
		#define GEODE_CONCEPT_CHECK_dropdownListPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(dropdownListPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_collectMatches
		#define GEODE_CONCEPT_CHECK_collectMatches
		GEODE_CONCEPT_FUNCTION_CHECK(collectMatches) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commitID
		#define GEODE_CONCEPT_CHECK_commitID
		GEODE_CONCEPT_FUNCTION_CHECK(commitID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_commitTypedName
		#define GEODE_CONCEPT_CHECK_commitTypedName
		GEODE_CONCEPT_FUNCTION_CHECK(commitTypedName) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dismissAutocomplete
		#define GEODE_CONCEPT_CHECK_dismissAutocomplete
		GEODE_CONCEPT_FUNCTION_CHECK(dismissAutocomplete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_idNameTypeForItemValueType
		#define GEODE_CONCEPT_CHECK_idNameTypeForItemValueType
		GEODE_CONCEPT_FUNCTION_CHECK(idNameTypeForItemValueType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_initCore
		#define GEODE_CONCEPT_CHECK_initCore
		GEODE_CONCEPT_FUNCTION_CHECK(initCore) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameLess
		#define GEODE_CONCEPT_CHECK_nameLess
		GEODE_CONCEPT_FUNCTION_CHECK(nameLess) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArrowLeft
		#define GEODE_CONCEPT_CHECK_onArrowLeft
		GEODE_CONCEPT_FUNCTION_CHECK(onArrowLeft) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onArrowRight
		#define GEODE_CONCEPT_CHECK_onArrowRight
		GEODE_CONCEPT_FUNCTION_CHECK(onArrowRight) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAutocompleteRow
		#define GEODE_CONCEPT_CHECK_onAutocompleteRow
		GEODE_CONCEPT_FUNCTION_CHECK(onAutocompleteRow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onBrowser
		#define GEODE_CONCEPT_CHECK_onBrowser
		GEODE_CONCEPT_FUNCTION_CHECK(onBrowser) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNextFree
		#define GEODE_CONCEPT_CHECK_onNextFree
		GEODE_CONCEPT_FUNCTION_CHECK(onNextFree) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshLabel
		#define GEODE_CONCEPT_CHECK_refreshLabel
		GEODE_CONCEPT_FUNCTION_CHECK(refreshLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_revertToLastID
		#define GEODE_CONCEPT_CHECK_revertToLastID
		GEODE_CONCEPT_FUNCTION_CHECK(revertToLastID) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setType
		#define GEODE_CONCEPT_CHECK_setType
		GEODE_CONCEPT_FUNCTION_CHECK(setType) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_stepArrow
		#define GEODE_CONCEPT_CHECK_stepArrow
		GEODE_CONCEPT_FUNCTION_CHECK(stepArrow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textIsPureInt
		#define GEODE_CONCEPT_CHECK_textIsPureInt
		GEODE_CONCEPT_FUNCTION_CHECK(textIsPureInt) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateAutocomplete
		#define GEODE_CONCEPT_CHECK_updateAutocomplete
		GEODE_CONCEPT_FUNCTION_CHECK(updateAutocomplete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_useRank
		#define GEODE_CONCEPT_CHECK_useRank
		GEODE_CONCEPT_FUNCTION_CHECK(useRank) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_useRankLess
		#define GEODE_CONCEPT_CHECK_useRankLess
		GEODE_CONCEPT_FUNCTION_CHECK(useRankLess) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, IDNameInput> : ModifyBase<ModifyDerive<Der, IDNameInput>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, IDNameInput>>;
		using ModifyBase<ModifyDerive<Der, IDNameInput>>::ModifyBase;
		using Base = IDNameInput;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3c72b0, Thiscall, IDNameInput)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, create, FLAlertLayer*, TextInputDelegate*, int, int, std::string const&, cocos2d::CCPoint, float, int, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c9640, Thiscall, IDNameInput, idNameBrowserClosed, IDNameBrowserPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cabe0, Thiscall, IDNameInput, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cafc0, Thiscall, IDNameInput, textInputOpened, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cada0, Thiscall, IDNameInput, textInputClosed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cafe0, Thiscall, IDNameInput, textInputShouldOffset, CCTextInputNode*, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cb000, Thiscall, IDNameInput, textInputReturn, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cb020, Thiscall, IDNameInput, allowTextInput, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cb040, Thiscall, IDNameInput, enterPressed, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cb140, Thiscall, IDNameInput, dropdownListPopupClosed, DropdownListPopup*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, collectMatches, std::string const&, std::vector<DropdownListRow>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, commitID, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, commitTypedName, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, dismissAutocomplete, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, idNameTypeForItemValueType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, initCore, FLAlertLayer*, TextInputDelegate*, int, int, std::string const&, cocos2d::CCPoint, float, int, int, int, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, nameLess, std::string const&, int, std::string const&, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c8ad0, Thiscall, IDNameInput, onArrowLeft, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c8ae0, Thiscall, IDNameInput, onArrowRight, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3cb060, Thiscall, IDNameInput, onAutocompleteRow, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c8af0, Thiscall, IDNameInput, onBrowser, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3c8dd0, Thiscall, IDNameInput, onNextFree, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, refreshLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, revertToLastID, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, setType, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, stepArrow, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, textIsPureInt, std::string const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, updateAutocomplete, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, useRank, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(IDNameInput, useRankLess, std::unordered_map<int, int> const&, int, int)
		}
	};
}
