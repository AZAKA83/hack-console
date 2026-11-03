#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/TextAlertPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_inheritOpacity
		#define GEODE_STATICS_inheritOpacity
		GEODE_AS_STATIC_FUNCTION(inheritOpacity) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_replaceIn
		#define GEODE_STATICS_replaceIn
		GEODE_AS_STATIC_FUNCTION(replaceIn) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_inheritOpacity
		#define GEODE_CONCEPT_CHECK_inheritOpacity
		GEODE_CONCEPT_FUNCTION_CHECK(inheritOpacity) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_replaceIn
		#define GEODE_CONCEPT_CHECK_replaceIn
		GEODE_CONCEPT_FUNCTION_CHECK(replaceIn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setAlertPosition
		#define GEODE_CONCEPT_CHECK_setAlertPosition
		GEODE_CONCEPT_FUNCTION_CHECK(setAlertPosition) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelColor
		#define GEODE_CONCEPT_CHECK_setLabelColor
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelColor) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, TextAlertPopup> : ModifyBase<ModifyDerive<Der, TextAlertPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, TextAlertPopup>>;
		using ModifyBase<ModifyDerive<Der, TextAlertPopup>>::ModifyBase;
		using Base = TextAlertPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x399b80, Thiscall, TextAlertPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a8760, Default, TextAlertPopup, create, std::string, float, float, int, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextAlertPopup, inheritOpacity, TextAlertPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a8890, Thiscall, TextAlertPopup, init, std::string, float, float, int, std::string)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(TextAlertPopup, replaceIn, cocos2d::CCNode*, int, TextAlertPopup*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextAlertPopup, setAlertPosition, cocos2d::CCPoint, cocos2d::CCPoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(TextAlertPopup, setLabelColor, cocos2d::ccColor3B)
		}
	};
}
