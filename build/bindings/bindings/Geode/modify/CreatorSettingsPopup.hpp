#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CreatorSettingsPopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFinished
		#define GEODE_STATICS_uploadActionFinished
		GEODE_AS_STATIC_FUNCTION(uploadActionFinished) 
	#endif

	#ifndef GEODE_STATICS_uploadActionFailed
		#define GEODE_STATICS_uploadActionFailed
		GEODE_AS_STATIC_FUNCTION(uploadActionFailed) 
	#endif

	#ifndef GEODE_STATICS_onClosePopup
		#define GEODE_STATICS_onClosePopup
		GEODE_AS_STATIC_FUNCTION(onClosePopup) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onControls
		#define GEODE_STATICS_onControls
		GEODE_AS_STATIC_FUNCTION(onControls) 
	#endif

	#ifndef GEODE_STATICS_onDescription
		#define GEODE_STATICS_onDescription
		GEODE_AS_STATIC_FUNCTION(onDescription) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFinished
		#define GEODE_CONCEPT_CHECK_uploadActionFinished
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_uploadActionFailed
		#define GEODE_CONCEPT_CHECK_uploadActionFailed
		GEODE_CONCEPT_FUNCTION_CHECK(uploadActionFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClosePopup
		#define GEODE_CONCEPT_CHECK_onClosePopup
		GEODE_CONCEPT_FUNCTION_CHECK(onClosePopup) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onControls
		#define GEODE_CONCEPT_CHECK_onControls
		GEODE_CONCEPT_FUNCTION_CHECK(onControls) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDescription
		#define GEODE_CONCEPT_CHECK_onDescription
		GEODE_CONCEPT_FUNCTION_CHECK(onDescription) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CreatorSettingsPopup> : ModifyBase<ModifyDerive<Der, CreatorSettingsPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CreatorSettingsPopup>>;
		using ModifyBase<ModifyDerive<Der, CreatorSettingsPopup>>::ModifyBase;
		using Base = CreatorSettingsPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x448a90, Thiscall, CreatorSettingsPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x448910, Default, CreatorSettingsPopup, create, GJGameLevel*, CreatorSettingsDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x39a390, Thiscall, CreatorSettingsPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x448f50, Thiscall, CreatorSettingsPopup, setTextPopupClosed, SetTextPopup*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4491f0, Thiscall, CreatorSettingsPopup, uploadActionFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4492b0, Thiscall, CreatorSettingsPopup, uploadActionFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x449390, Thiscall, CreatorSettingsPopup, onClosePopup, UploadActionPopup*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x448490, Thiscall, CreatorSettingsPopup, init, GJGameLevel*, CreatorSettingsDelegate*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x448f20, Thiscall, CreatorSettingsPopup, onControls, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x448c00, Thiscall, CreatorSettingsPopup, onDescription, cocos2d::CCObject*)
		}
	};
}
