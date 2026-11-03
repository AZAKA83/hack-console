#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FontPreviewCell.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_draw
		#define GEODE_STATICS_draw
		GEODE_AS_STATIC_FUNCTION(draw) 
	#endif

	#ifndef GEODE_STATICS_loadFromIndex
		#define GEODE_STATICS_loadFromIndex
		GEODE_AS_STATIC_FUNCTION(loadFromIndex) 
	#endif

	#ifndef GEODE_STATICS_onSelectFont
		#define GEODE_STATICS_onSelectFont
		GEODE_AS_STATIC_FUNCTION(onSelectFont) 
	#endif

	#ifndef GEODE_STATICS_updateBGColor
		#define GEODE_STATICS_updateBGColor
		GEODE_AS_STATIC_FUNCTION(updateBGColor) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_draw
		#define GEODE_CONCEPT_CHECK_draw
		GEODE_CONCEPT_FUNCTION_CHECK(draw) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadFromIndex
		#define GEODE_CONCEPT_CHECK_loadFromIndex
		GEODE_CONCEPT_FUNCTION_CHECK(loadFromIndex) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectFont
		#define GEODE_CONCEPT_CHECK_onSelectFont
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectFont) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateBGColor
		#define GEODE_CONCEPT_CHECK_updateBGColor
		GEODE_CONCEPT_FUNCTION_CHECK(updateBGColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FontPreviewCell> : ModifyBase<ModifyDerive<Der, FontPreviewCell>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FontPreviewCell>>;
		using ModifyBase<ModifyDerive<Der, FontPreviewCell>>::ModifyBase;
		using Base = FontPreviewCell;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x89d10, Thiscall, FontPreviewCell)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3ff70, Thiscall, FontPreviewCell, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58dd60, Thiscall, FontPreviewCell, draw, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x58d9c0, Thiscall, FontPreviewCell, loadFromIndex, int, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FontPreviewCell, onSelectFont, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(FontPreviewCell, updateBGColor, int)
		}
	};
}
