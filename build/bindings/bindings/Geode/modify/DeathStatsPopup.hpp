#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DeathStatsPopup.hpp>
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClearFetched
		#define GEODE_STATICS_onClearFetched
		GEODE_AS_STATIC_FUNCTION(onClearFetched) 
	#endif

	#ifndef GEODE_STATICS_onClearLocal
		#define GEODE_STATICS_onClearLocal
		GEODE_AS_STATIC_FUNCTION(onClearLocal) 
	#endif

	#ifndef GEODE_STATICS_onFetch
		#define GEODE_STATICS_onFetch
		GEODE_AS_STATIC_FUNCTION(onFetch) 
	#endif

	#ifndef GEODE_STATICS_pollFetch
		#define GEODE_STATICS_pollFetch
		GEODE_AS_STATIC_FUNCTION(pollFetch) 
	#endif

	#ifndef GEODE_STATICS_setStatus
		#define GEODE_STATICS_setStatus
		GEODE_AS_STATIC_FUNCTION(setStatus) 
	#endif

	#ifndef GEODE_STATICS_showResult
		#define GEODE_STATICS_showResult
		GEODE_AS_STATIC_FUNCTION(showResult) 
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

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearFetched
		#define GEODE_CONCEPT_CHECK_onClearFetched
		GEODE_CONCEPT_FUNCTION_CHECK(onClearFetched) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClearLocal
		#define GEODE_CONCEPT_CHECK_onClearLocal
		GEODE_CONCEPT_FUNCTION_CHECK(onClearLocal) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onFetch
		#define GEODE_CONCEPT_CHECK_onFetch
		GEODE_CONCEPT_FUNCTION_CHECK(onFetch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pollFetch
		#define GEODE_CONCEPT_CHECK_pollFetch
		GEODE_CONCEPT_FUNCTION_CHECK(pollFetch) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setStatus
		#define GEODE_CONCEPT_CHECK_setStatus
		GEODE_CONCEPT_FUNCTION_CHECK(setStatus) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_showResult
		#define GEODE_CONCEPT_CHECK_showResult
		GEODE_CONCEPT_FUNCTION_CHECK(showResult) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DeathStatsPopup> : ModifyBase<ModifyDerive<Der, DeathStatsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DeathStatsPopup>>;
		using ModifyBase<ModifyDerive<Der, DeathStatsPopup>>::ModifyBase;
		using Base = DeathStatsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x11e320, Thiscall, DeathStatsPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathStatsPopup, create, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, DeathStatsPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11fb20, Thiscall, DeathStatsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11e430, Thiscall, DeathStatsPopup, init, LevelEditorLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11faa0, Thiscall, DeathStatsPopup, onClearFetched, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11fa10, Thiscall, DeathStatsPopup, onClearLocal, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11ef00, Thiscall, DeathStatsPopup, onFetch, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11f210, Thiscall, DeathStatsPopup, pollFetch, float)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathStatsPopup, setStatus, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x11f2f0, Thiscall, DeathStatsPopup, showResult, )
		}
	};
}
