#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TabbedPopupLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_pageChanged
		#define GEODE_STATICS_pageChanged
		GEODE_AS_STATIC_FUNCTION(pageChanged) 
	#endif

	#ifndef GEODE_STATICS_showTab
		#define GEODE_STATICS_showTab
		GEODE_AS_STATIC_FUNCTION(showTab) 
	#endif

	#ifndef GEODE_STATICS_addCloseButton
		#define GEODE_STATICS_addCloseButton
		GEODE_AS_STATIC_FUNCTION(addCloseButton) 
	#endif

	#ifndef GEODE_STATICS_addTab
		#define GEODE_STATICS_addTab
		GEODE_AS_STATIC_FUNCTION(addTab) 
	#endif

	#ifndef GEODE_STATICS_createTabButtons
		#define GEODE_STATICS_createTabButtons
		GEODE_AS_STATIC_FUNCTION(createTabButtons) 
	#endif

	#ifndef GEODE_STATICS_onTab
		#define GEODE_STATICS_onTab
		GEODE_AS_STATIC_FUNCTION(onTab) 
	#endif

	#ifndef GEODE_STATICS_onTabPage
		#define GEODE_STATICS_onTabPage
		GEODE_AS_STATIC_FUNCTION(onTabPage) 
	#endif

	#ifndef GEODE_STATICS_refreshPageButtons
		#define GEODE_STATICS_refreshPageButtons
		GEODE_AS_STATIC_FUNCTION(refreshPageButtons) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_pageChanged
		#define GEODE_CONCEPT_CHECK_pageChanged
		GEODE_CONCEPT_FUNCTION_CHECK(pageChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showTab
		#define GEODE_CONCEPT_CHECK_showTab
		GEODE_CONCEPT_FUNCTION_CHECK(showTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addCloseButton
		#define GEODE_CONCEPT_CHECK_addCloseButton
		GEODE_CONCEPT_FUNCTION_CHECK(addCloseButton) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_addTab
		#define GEODE_CONCEPT_CHECK_addTab
		GEODE_CONCEPT_FUNCTION_CHECK(addTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_beginTab
		#define GEODE_CONCEPT_CHECK_beginTab
		GEODE_CONCEPT_FUNCTION_CHECK(beginTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createTabButtons
		#define GEODE_CONCEPT_CHECK_createTabButtons
		GEODE_CONCEPT_FUNCTION_CHECK(createTabButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_ensurePopupPage
		#define GEODE_CONCEPT_CHECK_ensurePopupPage
		GEODE_CONCEPT_FUNCTION_CHECK(ensurePopupPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPopupPage
		#define GEODE_CONCEPT_CHECK_getPopupPage
		GEODE_CONCEPT_FUNCTION_CHECK(getPopupPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_offsetToNextPage
		#define GEODE_CONCEPT_CHECK_offsetToNextPage
		GEODE_CONCEPT_FUNCTION_CHECK(offsetToNextPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTab
		#define GEODE_CONCEPT_CHECK_onTab
		GEODE_CONCEPT_FUNCTION_CHECK(onTab) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onTabPage
		#define GEODE_CONCEPT_CHECK_onTabPage
		GEODE_CONCEPT_FUNCTION_CHECK(onTabPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pageForButtonCount
		#define GEODE_CONCEPT_CHECK_pageForButtonCount
		GEODE_CONCEPT_FUNCTION_CHECK(pageForButtonCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshPageButtons
		#define GEODE_CONCEPT_CHECK_refreshPageButtons
		GEODE_CONCEPT_FUNCTION_CHECK(refreshPageButtons) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshTabButtons
		#define GEODE_CONCEPT_CHECK_refreshTabButtons
		GEODE_CONCEPT_FUNCTION_CHECK(refreshTabButtons) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TabbedPopupLayer> : ModifyBase<ModifyDerive<Der, TabbedPopupLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TabbedPopupLayer>>;
		using ModifyBase<ModifyDerive<Der, TabbedPopupLayer>>::ModifyBase;
		using Base = TabbedPopupLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66d090, Thiscall, TabbedPopupLayer, pageChanged, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66cc10, Thiscall, TabbedPopupLayer, showTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66c2a0, Thiscall, TabbedPopupLayer, addCloseButton, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66c3a0, Thiscall, TabbedPopupLayer, addTab, std::string const&, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TabbedPopupLayer, beginTab, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66c5b0, Thiscall, TabbedPopupLayer, createTabButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66c650, Thiscall, TabbedPopupLayer, createTabButtons, float, float, float, float, float, float)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TabbedPopupLayer, ensurePopupPage, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TabbedPopupLayer, getPopupPage, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TabbedPopupLayer, offsetToNextPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66cfa0, Thiscall, TabbedPopupLayer, onTab, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66cfe0, Thiscall, TabbedPopupLayer, onTabPage, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TabbedPopupLayer, pageForButtonCount, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x66ced0, Thiscall, TabbedPopupLayer, refreshPageButtons, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TabbedPopupLayer, refreshTabButtons, char const*, char const*)
		}
	};
}
