#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ReviewChoiceSheet.hpp>
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

	#ifndef GEODE_STATICS_onChoice
		#define GEODE_STATICS_onChoice
		GEODE_AS_STATIC_FUNCTION(onChoice) 
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

	#ifndef GEODE_CONCEPT_CHECK_onChoice
		#define GEODE_CONCEPT_CHECK_onChoice
		GEODE_CONCEPT_FUNCTION_CHECK(onChoice) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ReviewChoiceSheet> : ModifyBase<ModifyDerive<Der, ReviewChoiceSheet>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ReviewChoiceSheet>>;
		using ModifyBase<ModifyDerive<Der, ReviewChoiceSheet>>::ModifyBase;
		using Base = ReviewChoiceSheet;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x60ac50, Thiscall, ReviewChoiceSheet)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xae200, Default, ReviewChoiceSheet, create, ReviewChoiceDelegate*, int, char const*, std::string const&, std::vector<std::string> const&, std::vector<char const*> const&, bool, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, ReviewChoiceSheet, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaed70, Thiscall, ReviewChoiceSheet, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xae380, Thiscall, ReviewChoiceSheet, init, ReviewChoiceDelegate*, int, char const*, std::string const&, std::vector<std::string> const&, std::vector<char const*> const&, bool, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xaeb30, Thiscall, ReviewChoiceSheet, onChoice, cocos2d::CCObject*)
		}
	};
}
