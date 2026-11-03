#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SFXFolderPickerPopup.hpp>
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

	#ifndef GEODE_STATICS_keyBackClicked
		#define GEODE_STATICS_keyBackClicked
		GEODE_AS_STATIC_FUNCTION(keyBackClicked) 
	#endif

	#ifndef GEODE_STATICS_setTextPopupClosed
		#define GEODE_STATICS_setTextPopupClosed
		GEODE_AS_STATIC_FUNCTION(setTextPopupClosed) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onClose
		#define GEODE_STATICS_onClose
		GEODE_AS_STATIC_FUNCTION(onClose) 
	#endif

	#ifndef GEODE_STATICS_onConfirm
		#define GEODE_STATICS_onConfirm
		GEODE_AS_STATIC_FUNCTION(onConfirm) 
	#endif

	#ifndef GEODE_STATICS_onNewFolder
		#define GEODE_STATICS_onNewFolder
		GEODE_AS_STATIC_FUNCTION(onNewFolder) 
	#endif

	#ifndef GEODE_STATICS_onPickFolder
		#define GEODE_STATICS_onPickFolder
		GEODE_AS_STATIC_FUNCTION(onPickFolder) 
	#endif

	#ifndef GEODE_STATICS_onSave
		#define GEODE_STATICS_onSave
		GEODE_AS_STATIC_FUNCTION(onSave) 
	#endif

	#ifndef GEODE_STATICS_onSelectAll
		#define GEODE_STATICS_onSelectAll
		GEODE_AS_STATIC_FUNCTION(onSelectAll) 
	#endif

	#ifndef GEODE_STATICS_pickFolder
		#define GEODE_STATICS_pickFolder
		GEODE_AS_STATIC_FUNCTION(pickFolder) 
	#endif

	#ifndef GEODE_STATICS_rebuildList
		#define GEODE_STATICS_rebuildList
		GEODE_AS_STATIC_FUNCTION(rebuildList) 
	#endif

	#ifndef GEODE_STATICS_refreshList
		#define GEODE_STATICS_refreshList
		GEODE_AS_STATIC_FUNCTION(refreshList) 
	#endif

	#ifndef GEODE_STATICS_updateActionBtn
		#define GEODE_STATICS_updateActionBtn
		GEODE_AS_STATIC_FUNCTION(updateActionBtn) 
	#endif

	#ifndef GEODE_STATICS_updateShareHint
		#define GEODE_STATICS_updateShareHint
		GEODE_AS_STATIC_FUNCTION(updateShareHint) 
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

	#ifndef GEODE_CONCEPT_CHECK_keyBackClicked
		#define GEODE_CONCEPT_CHECK_keyBackClicked
		GEODE_CONCEPT_FUNCTION_CHECK(keyBackClicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setTextPopupClosed
		#define GEODE_CONCEPT_CHECK_setTextPopupClosed
		GEODE_CONCEPT_FUNCTION_CHECK(setTextPopupClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onClose
		#define GEODE_CONCEPT_CHECK_onClose
		GEODE_CONCEPT_FUNCTION_CHECK(onClose) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onConfirm
		#define GEODE_CONCEPT_CHECK_onConfirm
		GEODE_CONCEPT_FUNCTION_CHECK(onConfirm) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onNewFolder
		#define GEODE_CONCEPT_CHECK_onNewFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onNewFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onPickFolder
		#define GEODE_CONCEPT_CHECK_onPickFolder
		GEODE_CONCEPT_FUNCTION_CHECK(onPickFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSave
		#define GEODE_CONCEPT_CHECK_onSave
		GEODE_CONCEPT_FUNCTION_CHECK(onSave) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onSelectAll
		#define GEODE_CONCEPT_CHECK_onSelectAll
		GEODE_CONCEPT_FUNCTION_CHECK(onSelectAll) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pickFolder
		#define GEODE_CONCEPT_CHECK_pickFolder
		GEODE_CONCEPT_FUNCTION_CHECK(pickFolder) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildList
		#define GEODE_CONCEPT_CHECK_rebuildList
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_refreshList
		#define GEODE_CONCEPT_CHECK_refreshList
		GEODE_CONCEPT_FUNCTION_CHECK(refreshList) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateActionBtn
		#define GEODE_CONCEPT_CHECK_updateActionBtn
		GEODE_CONCEPT_FUNCTION_CHECK(updateActionBtn) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateShareHint
		#define GEODE_CONCEPT_CHECK_updateShareHint
		GEODE_CONCEPT_FUNCTION_CHECK(updateShareHint) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SFXFolderPickerPopup> : ModifyBase<ModifyDerive<Der, SFXFolderPickerPopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SFXFolderPickerPopup>>;
		using ModifyBase<ModifyDerive<Der, SFXFolderPickerPopup>>::ModifyBase;
		using Base = SFXFolderPickerPopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xc3c00, Thiscall, SFXFolderPickerPopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3ce0, Default, SFXFolderPickerPopup, create, SFXFolderPickerMode, std::string const&, std::set<int> const&, SFXFolderPickerDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6920, Thiscall, SFXFolderPickerPopup, ccTouchBegan, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6990, Thiscall, SFXFolderPickerPopup, ccTouchMoved, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6a00, Thiscall, SFXFolderPickerPopup, ccTouchEnded, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6a50, Thiscall, SFXFolderPickerPopup, ccTouchCancelled, cocos2d::CCTouch*, cocos2d::CCEvent*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc68c0, Thiscall, SFXFolderPickerPopup, keyBackClicked, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6780, Thiscall, SFXFolderPickerPopup, setTextPopupClosed, SetTextPopup*, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc3eb0, Thiscall, SFXFolderPickerPopup, init, SFXFolderPickerMode, std::string const&, std::set<int> const&, SFXFolderPickerDelegate*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6860, Thiscall, SFXFolderPickerPopup, onClose, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6330, Thiscall, SFXFolderPickerPopup, onConfirm, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6400, Thiscall, SFXFolderPickerPopup, onNewFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6270, Thiscall, SFXFolderPickerPopup, onPickFolder, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc6560, Thiscall, SFXFolderPickerPopup, onSave, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc65d0, Thiscall, SFXFolderPickerPopup, onSelectAll, cocos2d::CCObject*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(SFXFolderPickerPopup, pickFolder, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc4e00, Thiscall, SFXFolderPickerPopup, rebuildList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5da0, Thiscall, SFXFolderPickerPopup, refreshList, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5fa0, Thiscall, SFXFolderPickerPopup, updateActionBtn, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc5e00, Thiscall, SFXFolderPickerPopup, updateShareHint, )
		}
	};
}
