#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/AdminActionConfirmPopup.hpp>
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

	#ifndef GEODE_STATICS_addHelp
		#define GEODE_STATICS_addHelp
		GEODE_AS_STATIC_FUNCTION(addHelp) 
	#endif

	#ifndef GEODE_STATICS_createContentDelete
		#define GEODE_STATICS_createContentDelete
		GEODE_AS_STATIC_FUNCTION(createContentDelete) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onCategoryToggle
		#define GEODE_STATICS_onCategoryToggle
		GEODE_AS_STATIC_FUNCTION(onCategoryToggle) 
	#endif

	#ifndef GEODE_STATICS_onConfirm
		#define GEODE_STATICS_onConfirm
		GEODE_AS_STATIC_FUNCTION(onConfirm) 
	#endif

	#ifndef GEODE_STATICS_selectedCategories
		#define GEODE_STATICS_selectedCategories
		GEODE_AS_STATIC_FUNCTION(selectedCategories) 
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

	#ifndef GEODE_CONCEPT_CHECK_addHelp
		#define GEODE_CONCEPT_CHECK_addHelp
		GEODE_CONCEPT_FUNCTION_CHECK(addHelp) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createContentDelete
		#define GEODE_CONCEPT_CHECK_createContentDelete
		GEODE_CONCEPT_FUNCTION_CHECK(createContentDelete) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onCategoryToggle
		#define GEODE_CONCEPT_CHECK_onCategoryToggle
		GEODE_CONCEPT_FUNCTION_CHECK(onCategoryToggle) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onConfirm
		#define GEODE_CONCEPT_CHECK_onConfirm
		GEODE_CONCEPT_FUNCTION_CHECK(onConfirm) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedCategories
		#define GEODE_CONCEPT_CHECK_selectedCategories
		GEODE_CONCEPT_FUNCTION_CHECK(selectedCategories) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, AdminActionConfirmPopup> : ModifyBase<ModifyDerive<Der, AdminActionConfirmPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, AdminActionConfirmPopup>>;
		using ModifyBase<ModifyDerive<Der, AdminActionConfirmPopup>>::ModifyBase;
		using Base = AdminActionConfirmPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xa5190, Thiscall, AdminActionConfirmPopup)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdminActionConfirmPopup, create, AdminActionConfirmDelegate*, int, char const*, std::string const&, char const*, std::vector<int> const&, std::string const&, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6580, Thiscall, AdminActionConfirmPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6530, Thiscall, AdminActionConfirmPopup, onClose, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdminActionConfirmPopup, addHelp, char const*, std::string const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa53b0, Thiscall, AdminActionConfirmPopup, createContentDelete, AdminActionConfirmDelegate*, int, char const*, std::string const&, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdminActionConfirmPopup, init, AdminActionConfirmDelegate*, int, char const*, std::string const&, char const*, std::vector<int> const&, std::string const&, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdminActionConfirmPopup, onCategoryToggle, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xa6240, Thiscall, AdminActionConfirmPopup, onConfirm, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(AdminActionConfirmPopup, selectedCategories, )
		}
	};
}
