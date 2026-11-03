#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FriendPickerDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_selectedRecipientCount
		#define GEODE_STATICS_selectedRecipientCount
		GEODE_AS_STATIC_FUNCTION(selectedRecipientCount) 
	#endif

	#ifndef GEODE_STATICS_selectedRecipients
		#define GEODE_STATICS_selectedRecipients
		GEODE_AS_STATIC_FUNCTION(selectedRecipients) 
	#endif

	#ifndef GEODE_STATICS_pickerRowState
		#define GEODE_STATICS_pickerRowState
		GEODE_AS_STATIC_FUNCTION(pickerRowState) 
	#endif

	#ifndef GEODE_STATICS_pickerCountBase
		#define GEODE_STATICS_pickerCountBase
		GEODE_AS_STATIC_FUNCTION(pickerCountBase) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_friendPicked
		#define GEODE_CONCEPT_CHECK_friendPicked
		GEODE_CONCEPT_FUNCTION_CHECK(friendPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isRecipientSelected
		#define GEODE_CONCEPT_CHECK_isRecipientSelected
		GEODE_CONCEPT_FUNCTION_CHECK(isRecipientSelected) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedRecipientCount
		#define GEODE_CONCEPT_CHECK_selectedRecipientCount
		GEODE_CONCEPT_FUNCTION_CHECK(selectedRecipientCount) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_selectedRecipients
		#define GEODE_CONCEPT_CHECK_selectedRecipients
		GEODE_CONCEPT_FUNCTION_CHECK(selectedRecipients) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_clearRecipients
		#define GEODE_CONCEPT_CHECK_clearRecipients
		GEODE_CONCEPT_FUNCTION_CHECK(clearRecipients) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendPickerClosed
		#define GEODE_CONCEPT_CHECK_friendPickerClosed
		GEODE_CONCEPT_FUNCTION_CHECK(friendPickerClosed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pickerRowState
		#define GEODE_CONCEPT_CHECK_pickerRowState
		GEODE_CONCEPT_FUNCTION_CHECK(pickerRowState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_pickerCountBase
		#define GEODE_CONCEPT_CHECK_pickerCountBase
		GEODE_CONCEPT_FUNCTION_CHECK(pickerCountBase) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_friendPickerAdd
		#define GEODE_CONCEPT_CHECK_friendPickerAdd
		GEODE_CONCEPT_FUNCTION_CHECK(friendPickerAdd) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FriendPickerDelegate> : ModifyBase<ModifyDerive<Der, FriendPickerDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FriendPickerDelegate>>;
		using ModifyBase<ModifyDerive<Der, FriendPickerDelegate>>::ModifyBase;
		using Base = FriendPickerDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendPickerDelegate, friendPicked, GJUserScore*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendPickerDelegate, isRecipientSelected, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendPickerDelegate, selectedRecipientCount, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendPickerDelegate, selectedRecipients, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendPickerDelegate, clearRecipients, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendPickerDelegate, friendPickerClosed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98e00, Thiscall, FriendPickerDelegate, pickerRowState, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x98e00, Thiscall, FriendPickerDelegate, pickerCountBase, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(FriendPickerDelegate, friendPickerAdd, )
		}
	};
}
