#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SocialLinksPopup.hpp>
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

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onOK
		#define GEODE_STATICS_onOK
		GEODE_AS_STATIC_FUNCTION(onOK) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOK
		#define GEODE_CONCEPT_CHECK_onOK
		GEODE_CONCEPT_FUNCTION_CHECK(onOK) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SocialLinksPopup> : ModifyBase<ModifyDerive<Der, SocialLinksPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SocialLinksPopup>>;
		using ModifyBase<ModifyDerive<Der, SocialLinksPopup>>::ModifyBase;
		using Base = SocialLinksPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x3991b0, Thiscall, SocialLinksPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SocialLinksPopup, create, GJAccountSettingsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a00c0, Thiscall, SocialLinksPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39f330, Thiscall, SocialLinksPopup, init, GJAccountSettingsLayer*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x3a0020, Thiscall, SocialLinksPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39fe70, Thiscall, SocialLinksPopup, onOK, cocos2d::CCObject*)
		}
	};
}
