#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ReportQueuePopup.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_rebuildContent
		#define GEODE_STATICS_rebuildContent
		GEODE_AS_STATIC_FUNCTION(rebuildContent) 
	#endif

	#ifndef GEODE_STATICS_requestPage
		#define GEODE_STATICS_requestPage
		GEODE_AS_STATIC_FUNCTION(requestPage) 
	#endif

	#ifndef GEODE_STATICS_dropdownSelectionChanged
		#define GEODE_STATICS_dropdownSelectionChanged
		GEODE_AS_STATIC_FUNCTION(dropdownSelectionChanged) 
	#endif

	#ifndef GEODE_STATICS_adminReportQueueFinished
		#define GEODE_STATICS_adminReportQueueFinished
		GEODE_AS_STATIC_FUNCTION(adminReportQueueFinished) 
	#endif

	#ifndef GEODE_STATICS_adminReportQueueFailed
		#define GEODE_STATICS_adminReportQueueFailed
		GEODE_AS_STATIC_FUNCTION(adminReportQueueFailed) 
	#endif

	#ifndef GEODE_STATICS_buildRows
		#define GEODE_STATICS_buildRows
		GEODE_AS_STATIC_FUNCTION(buildRows) 
	#endif

	#ifndef GEODE_STATICS_onOpenAuthor
		#define GEODE_STATICS_onOpenAuthor
		GEODE_AS_STATIC_FUNCTION(onOpenAuthor) 
	#endif

	#ifndef GEODE_STATICS_onOpenReview
		#define GEODE_STATICS_onOpenReview
		GEODE_AS_STATIC_FUNCTION(onOpenReview) 
	#endif

	#ifndef GEODE_STATICS_onRefresh
		#define GEODE_STATICS_onRefresh
		GEODE_AS_STATIC_FUNCTION(onRefresh) 
	#endif

	#ifndef GEODE_STATICS_onReportedContentChanged
		#define GEODE_STATICS_onReportedContentChanged
		GEODE_AS_STATIC_FUNCTION(onReportedContentChanged) 
	#endif

	#ifndef GEODE_STATICS_onToggleSort
		#define GEODE_STATICS_onToggleSort
		GEODE_AS_STATIC_FUNCTION(onToggleSort) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_rebuildContent
		#define GEODE_CONCEPT_CHECK_rebuildContent
		GEODE_CONCEPT_FUNCTION_CHECK(rebuildContent) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_requestPage
		#define GEODE_CONCEPT_CHECK_requestPage
		GEODE_CONCEPT_FUNCTION_CHECK(requestPage) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_dropdownSelectionChanged
		#define GEODE_CONCEPT_CHECK_dropdownSelectionChanged
		GEODE_CONCEPT_FUNCTION_CHECK(dropdownSelectionChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminReportQueueFinished
		#define GEODE_CONCEPT_CHECK_adminReportQueueFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminReportQueueFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminReportQueueFailed
		#define GEODE_CONCEPT_CHECK_adminReportQueueFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminReportQueueFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_buildRows
		#define GEODE_CONCEPT_CHECK_buildRows
		GEODE_CONCEPT_FUNCTION_CHECK(buildRows) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenAuthor
		#define GEODE_CONCEPT_CHECK_onOpenAuthor
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenAuthor) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onOpenReview
		#define GEODE_CONCEPT_CHECK_onOpenReview
		GEODE_CONCEPT_FUNCTION_CHECK(onOpenReview) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onRefresh
		#define GEODE_CONCEPT_CHECK_onRefresh
		GEODE_CONCEPT_FUNCTION_CHECK(onRefresh) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onReportedContentChanged
		#define GEODE_CONCEPT_CHECK_onReportedContentChanged
		GEODE_CONCEPT_FUNCTION_CHECK(onReportedContentChanged) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onToggleSort
		#define GEODE_CONCEPT_CHECK_onToggleSort
		GEODE_CONCEPT_FUNCTION_CHECK(onToggleSort) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ReportQueuePopup> : ModifyBase<ModifyDerive<Der, ReportQueuePopup>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ReportQueuePopup>>;
		using ModifyBase<ModifyDerive<Der, ReportQueuePopup>>::ModifyBase;
		using Base = ReportQueuePopup;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0xc74e0, Thiscall, ReportQueuePopup)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ReportQueuePopup, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7640, Thiscall, ReportQueuePopup, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc95b0, Thiscall, ReportQueuePopup, rebuildContent, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7ee0, Thiscall, ReportQueuePopup, requestPage, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9610, Thiscall, ReportQueuePopup, dropdownSelectionChanged, Dropdown*, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc7f70, Thiscall, ReportQueuePopup, adminReportQueueFinished, cocos2d::CCArray*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc80a0, Thiscall, ReportQueuePopup, adminReportQueueFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc80f0, Thiscall, ReportQueuePopup, buildRows, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc94d0, Thiscall, ReportQueuePopup, onOpenAuthor, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc9540, Thiscall, ReportQueuePopup, onOpenReview, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc95b0, Thiscall, ReportQueuePopup, onRefresh, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xb33a0, Thiscall, ReportQueuePopup, onReportedContentChanged, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0xc95c0, Thiscall, ReportQueuePopup, onToggleSort, cocos2d::CCObject*)
		}
	};
}
