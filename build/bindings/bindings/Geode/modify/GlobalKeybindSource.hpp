#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GlobalKeybindSource.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_chordsForAction
		#define GEODE_STATICS_chordsForAction
		GEODE_AS_STATIC_FUNCTION(chordsForAction) 
	#endif

	#ifndef GEODE_STATICS_actionsForChord
		#define GEODE_STATICS_actionsForChord
		GEODE_AS_STATIC_FUNCTION(actionsForChord) 
	#endif

	#ifndef GEODE_STATICS_bindChord
		#define GEODE_STATICS_bindChord
		GEODE_AS_STATIC_FUNCTION(bindChord) 
	#endif

	#ifndef GEODE_STATICS_unbindChord
		#define GEODE_STATICS_unbindChord
		GEODE_AS_STATIC_FUNCTION(unbindChord) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_chordsForAction
		#define GEODE_CONCEPT_CHECK_chordsForAction
		GEODE_CONCEPT_FUNCTION_CHECK(chordsForAction) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_actionsForChord
		#define GEODE_CONCEPT_CHECK_actionsForChord
		GEODE_CONCEPT_FUNCTION_CHECK(actionsForChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_bindChord
		#define GEODE_CONCEPT_CHECK_bindChord
		GEODE_CONCEPT_FUNCTION_CHECK(bindChord) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unbindChord
		#define GEODE_CONCEPT_CHECK_unbindChord
		GEODE_CONCEPT_FUNCTION_CHECK(unbindChord) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GlobalKeybindSource> : ModifyBase<ModifyDerive<Der, GlobalKeybindSource>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GlobalKeybindSource>>;
		using ModifyBase<ModifyDerive<Der, GlobalKeybindSource>>::ModifyBase;
		using Base = GlobalKeybindSource;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5200, Thiscall, GlobalKeybindSource, chordsForAction, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5240, Thiscall, GlobalKeybindSource, actionsForChord, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d5280, Thiscall, GlobalKeybindSource, bindChord, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3d52b0, Thiscall, GlobalKeybindSource, unbindChord, int, int)
		}
	};
}
