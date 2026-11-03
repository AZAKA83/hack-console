#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SelectFontLayer2.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_registerWithTouchDispatcher
		#define GEODE_STATICS_registerWithTouchDispatcher
		GEODE_AS_STATIC_FUNCTION(registerWithTouchDispatcher) 
	#endif

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_cellPerformedAction
		#define GEODE_STATICS_cellPerformedAction
		GEODE_AS_STATIC_FUNCTION(cellPerformedAction) 
	#endif

	#ifndef GEODE_STATICS_getSelectedCellIdx
		#define GEODE_STATICS_getSelectedCellIdx
		GEODE_AS_STATIC_FUNCTION(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_loadPreviewSheet
		#define GEODE_STATICS_loadPreviewSheet
		GEODE_AS_STATIC_FUNCTION(loadPreviewSheet) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onSelectFont
		#define GEODE_STATICS_onSelectFont
		GEODE_AS_STATIC_FUNCTION(onSelectFont) 
	#endif

	#ifndef GEODE_STATICS_unloadPreviewSheet
		#define GEODE_STATICS_unloadPreviewSheet
		GEODE_AS_STATIC_FUNCTION(unloadPreviewSheet) 
	#endif

    
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

	#ifndef GEODE_CONCEPT_CHECK_cellPerformedAction
		#define GEODE_CONCEPT_CHECK_cellPerformedAction
		GEODE_CONCEPT_FUNCTION_CHECK(cellPerformedAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSelectedCellIdx
		#define GEODE_CONCEPT_CHECK_getSelectedCellIdx
		GEODE_CONCEPT_FUNCTION_CHECK(getSelectedCellIdx) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadPreviewSheet
		#define GEODE_CONCEPT_CHECK_loadPreviewSheet
		GEODE_CONCEPT_FUNCTION_CHECK(loadPreviewSheet) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectFont
		#define GEODE_CONCEPT_CHECK_onSelectFont
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unloadPreviewSheet
		#define GEODE_CONCEPT_CHECK_unloadPreviewSheet
		GEODE_CONCEPT_FUNCTION_CHECK(unloadPreviewSheet) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SelectFontLayer2> : ModifyBase<ModifyDerive<Der, SelectFontLayer2>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SelectFontLayer2>>;
		using ModifyBase<ModifyDerive<Der, SelectFontLayer2>>::ModifyBase;
		using Base = SelectFontLayer2;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x58d8c0, Thiscall, SelectFontLayer2)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectFontLayer2, create, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x46290, Thiscall, SelectFontLayer2, registerWithTouchDispatcher, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x99f90, Thiscall, SelectFontLayer2, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58e2d0, Thiscall, SelectFontLayer2, cellPerformedAction, TableViewCell*, int, CellAction, cocos2d::CCNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58e330, Thiscall, SelectFontLayer2, getSelectedCellIdx, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58de50, Thiscall, SelectFontLayer2, init, LevelEditorLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectFontLayer2, loadPreviewSheet, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectFontLayer2, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectFontLayer2, onSelectFont, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SelectFontLayer2, unloadPreviewSheet, )
		}
	};
}
