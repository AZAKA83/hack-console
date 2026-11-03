#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/KeybindingsLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
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

	#ifndef GEODE_STATICS_rebuildContent
		#define GEODE_STATICS_rebuildContent
		GEODE_AS_STATIC_FUNCTION(rebuildContent) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_textChanged
		#define GEODE_STATICS_textChanged
		GEODE_AS_STATIC_FUNCTION(textChanged) 
	#endif

	#ifndef GEODE_STATICS_showTab
		#define GEODE_STATICS_showTab
		GEODE_AS_STATIC_FUNCTION(showTab) 
	#endif

	#ifndef GEODE_STATICS_setupTabs
		#define GEODE_STATICS_setupTabs
		GEODE_AS_STATIC_FUNCTION(setupTabs) 
	#endif

	#ifndef GEODE_STATICS_actionsToShow
		#define GEODE_STATICS_actionsToShow
		GEODE_AS_STATIC_FUNCTION(actionsToShow) 
	#endif

	#ifndef GEODE_STATICS_nameForAction
		#define GEODE_STATICS_nameForAction
		GEODE_AS_STATIC_FUNCTION(nameForAction) 
	#endif

	#ifndef GEODE_STATICS_openBindingEditor
		#define GEODE_STATICS_openBindingEditor
		GEODE_AS_STATIC_FUNCTION(openBindingEditor) 
	#endif

	#ifndef GEODE_STATICS_showControllerChords
		#define GEODE_STATICS_showControllerChords
		GEODE_AS_STATIC_FUNCTION(showControllerChords) 
	#endif

	#ifndef GEODE_STATICS_settingsEntries
		#define GEODE_STATICS_settingsEntries
		GEODE_AS_STATIC_FUNCTION(settingsEntries) 
	#endif

	#ifndef GEODE_STATICS_buildContentForTab
		#define GEODE_STATICS_buildContentForTab
		GEODE_AS_STATIC_FUNCTION(buildContentForTab) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onAddBinding
		#define GEODE_STATICS_onAddBinding
		GEODE_AS_STATIC_FUNCTION(onAddBinding) 
	#endif

	#ifndef GEODE_STATICS_onClearSearch
		#define GEODE_STATICS_onClearSearch
		GEODE_AS_STATIC_FUNCTION(onClearSearch) 
	#endif

	#ifndef GEODE_STATICS_onEditBinding
		#define GEODE_STATICS_onEditBinding
		GEODE_AS_STATIC_FUNCTION(onEditBinding) 
	#endif

	#ifndef GEODE_STATICS_onSettings
		#define GEODE_STATICS_onSettings
		GEODE_AS_STATIC_FUNCTION(onSettings) 
	#endif

	#ifndef GEODE_STATICS_buildControllerGlyph
		#define GEODE_STATICS_buildControllerGlyph
		GEODE_AS_STATIC_FUNCTION(buildControllerGlyph) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
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

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_textChanged
		#define GEODE_CONCEPT_CHECK_textChanged
		GEODE_CONCEPT_FUNCTION_CHECK(textChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTab
		#define GEODE_CONCEPT_CHECK_showTab
		GEODE_CONCEPT_FUNCTION_CHECK(showTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setupTabs
		#define GEODE_CONCEPT_CHECK_setupTabs
		GEODE_CONCEPT_FUNCTION_CHECK(setupTabs) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsToShow
		#define GEODE_CONCEPT_CHECK_actionsToShow
		GEODE_CONCEPT_FUNCTION_CHECK(actionsToShow) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_nameForAction
		#define GEODE_CONCEPT_CHECK_nameForAction
		GEODE_CONCEPT_FUNCTION_CHECK(nameForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_openBindingEditor
		#define GEODE_CONCEPT_CHECK_openBindingEditor
		GEODE_CONCEPT_FUNCTION_CHECK(openBindingEditor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showControllerChords
		#define GEODE_CONCEPT_CHECK_showControllerChords
		GEODE_CONCEPT_FUNCTION_CHECK(showControllerChords) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_settingsEntries
		#define GEODE_CONCEPT_CHECK_settingsEntries
		GEODE_CONCEPT_FUNCTION_CHECK(settingsEntries) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_crossCheckGlobalConflicts
		#define GEODE_CONCEPT_CHECK_crossCheckGlobalConflicts
		GEODE_CONCEPT_FUNCTION_CHECK(crossCheckGlobalConflicts) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildContentForTab
		#define GEODE_CONCEPT_CHECK_buildContentForTab
		GEODE_CONCEPT_FUNCTION_CHECK(buildContentForTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getActionTable
		#define GEODE_CONCEPT_CHECK_getActionTable
		GEODE_CONCEPT_FUNCTION_CHECK(getActionTable) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onAddBinding
		#define GEODE_CONCEPT_CHECK_onAddBinding
		GEODE_CONCEPT_FUNCTION_CHECK(onAddBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearSearch
		#define GEODE_CONCEPT_CHECK_onClearSearch
		GEODE_CONCEPT_FUNCTION_CHECK(onClearSearch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onEditBinding
		#define GEODE_CONCEPT_CHECK_onEditBinding
		GEODE_CONCEPT_FUNCTION_CHECK(onEditBinding) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSettings
		#define GEODE_CONCEPT_CHECK_onSettings
		GEODE_CONCEPT_FUNCTION_CHECK(onSettings) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildControllerGlyph
		#define GEODE_CONCEPT_CHECK_buildControllerGlyph
		GEODE_CONCEPT_FUNCTION_CHECK(buildControllerGlyph) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tintGlyph
		#define GEODE_CONCEPT_CHECK_tintGlyph
		GEODE_CONCEPT_FUNCTION_CHECK(tintGlyph) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, KeybindingsLayer> : ModifyBase<ModifyDerive<Der, KeybindingsLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, KeybindingsLayer>>;
		using ModifyBase<ModifyDerive<Der, KeybindingsLayer>>::ModifyBase;
		using Base = KeybindingsLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3d53a0, Thiscall, KeybindingsLayer)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5650, Default, KeybindingsLayer, create, GameSettingsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8630, Thiscall, KeybindingsLayer, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8760, Thiscall, KeybindingsLayer, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8840, Thiscall, KeybindingsLayer, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d88e0, Thiscall, KeybindingsLayer, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x19e0f0, Thiscall, KeybindingsLayer, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8980, Thiscall, KeybindingsLayer, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8480, Thiscall, KeybindingsLayer, textChanged, CCTextInputNode*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d77e0, Thiscall, KeybindingsLayer, showTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d6050, Thiscall, KeybindingsLayer, setupTabs, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d7db0, Thiscall, KeybindingsLayer, actionsToShow, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d80a0, Thiscall, KeybindingsLayer, nameForAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d80f0, Thiscall, KeybindingsLayer, openBindingEditor, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8120, Thiscall, KeybindingsLayer, showControllerChords, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8140, Thiscall, KeybindingsLayer, settingsEntries, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, crossCheckGlobalConflicts, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d6750, Thiscall, KeybindingsLayer, buildContentForTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, getActionTable, int&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d57f0, Thiscall, KeybindingsLayer, init, GameSettingsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d7d50, Thiscall, KeybindingsLayer, onAddBinding, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8440, Thiscall, KeybindingsLayer, onClearSearch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d7cb0, Thiscall, KeybindingsLayer, onEditBinding, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d8230, Thiscall, KeybindingsLayer, onSettings, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d6350, Default, KeybindingsLayer, buildControllerGlyph, int, bool&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(KeybindingsLayer, tintGlyph, cocos2d::CCSprite*, cocos2d::ccColor3B)
		}
	};
}
