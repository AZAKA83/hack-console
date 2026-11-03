#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/CommentAdminDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_adminDeleteCommentsFinished
		#define GEODE_CONCEPT_CHECK_adminDeleteCommentsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminDeleteCommentsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminDeleteCommentsFailed
		#define GEODE_CONCEPT_CHECK_adminDeleteCommentsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminDeleteCommentsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentBanFinished
		#define GEODE_CONCEPT_CHECK_adminCommentBanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentBanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentBanFailed
		#define GEODE_CONCEPT_CHECK_adminCommentBanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentBanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentUnbanFinished
		#define GEODE_CONCEPT_CHECK_adminCommentUnbanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentUnbanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCommentUnbanFailed
		#define GEODE_CONCEPT_CHECK_adminCommentUnbanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminCommentUnbanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadBanFinished
		#define GEODE_CONCEPT_CHECK_adminUploadBanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadBanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadBanFailed
		#define GEODE_CONCEPT_CHECK_adminUploadBanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadBanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadUnbanFinished
		#define GEODE_CONCEPT_CHECK_adminUploadUnbanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadUnbanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUploadUnbanFailed
		#define GEODE_CONCEPT_CHECK_adminUploadUnbanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminUploadUnbanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageBanFinished
		#define GEODE_CONCEPT_CHECK_adminMessageBanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageBanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageBanFailed
		#define GEODE_CONCEPT_CHECK_adminMessageBanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageBanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageUnbanFinished
		#define GEODE_CONCEPT_CHECK_adminMessageUnbanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageUnbanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminMessageUnbanFailed
		#define GEODE_CONCEPT_CHECK_adminMessageUnbanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminMessageUnbanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminFreezeFinished
		#define GEODE_CONCEPT_CHECK_adminFreezeFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminFreezeFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminFreezeFailed
		#define GEODE_CONCEPT_CHECK_adminFreezeFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminFreezeFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUnfreezeFinished
		#define GEODE_CONCEPT_CHECK_adminUnfreezeFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminUnfreezeFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUnfreezeFailed
		#define GEODE_CONCEPT_CHECK_adminUnfreezeFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminUnfreezeFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingBanFinished
		#define GEODE_CONCEPT_CHECK_adminTrendingBanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingBanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingBanFailed
		#define GEODE_CONCEPT_CHECK_adminTrendingBanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingBanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingUnbanFinished
		#define GEODE_CONCEPT_CHECK_adminTrendingUnbanFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingUnbanFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminTrendingUnbanFailed
		#define GEODE_CONCEPT_CHECK_adminTrendingUnbanFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminTrendingUnbanFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameLockFinished
		#define GEODE_CONCEPT_CHECK_adminNameLockFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameLockFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameLockFailed
		#define GEODE_CONCEPT_CHECK_adminNameLockFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameLockFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameUnlockFinished
		#define GEODE_CONCEPT_CHECK_adminNameUnlockFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameUnlockFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminNameUnlockFailed
		#define GEODE_CONCEPT_CHECK_adminNameUnlockFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminNameUnlockFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueMuteFinished
		#define GEODE_CONCEPT_CHECK_adminQueueMuteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueMuteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueMuteFailed
		#define GEODE_CONCEPT_CHECK_adminQueueMuteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueMuteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueUnmuteFinished
		#define GEODE_CONCEPT_CHECK_adminQueueUnmuteFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueUnmuteFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminQueueUnmuteFailed
		#define GEODE_CONCEPT_CHECK_adminQueueUnmuteFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminQueueUnmuteFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUserHistoryFinished
		#define GEODE_CONCEPT_CHECK_adminUserHistoryFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminUserHistoryFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminUserHistoryFailed
		#define GEODE_CONCEPT_CHECK_adminUserHistoryFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminUserHistoryFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminReportedContentFinished
		#define GEODE_CONCEPT_CHECK_adminReportedContentFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminReportedContentFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminReportedContentFailed
		#define GEODE_CONCEPT_CHECK_adminReportedContentFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminReportedContentFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminClearReportsFinished
		#define GEODE_CONCEPT_CHECK_adminClearReportsFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminClearReportsFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminClearReportsFailed
		#define GEODE_CONCEPT_CHECK_adminClearReportsFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminClearReportsFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminReportQueueFinished
		#define GEODE_CONCEPT_CHECK_adminReportQueueFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminReportQueueFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminReportQueueFailed
		#define GEODE_CONCEPT_CHECK_adminReportQueueFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminReportQueueFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminAbuseInfoFinished
		#define GEODE_CONCEPT_CHECK_adminAbuseInfoFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminAbuseInfoFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminAbuseInfoFailed
		#define GEODE_CONCEPT_CHECK_adminAbuseInfoFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminAbuseInfoFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminAccountReviewFinished
		#define GEODE_CONCEPT_CHECK_adminAccountReviewFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminAccountReviewFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminAccountReviewFailed
		#define GEODE_CONCEPT_CHECK_adminAccountReviewFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminAccountReviewFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCloseCaseFinished
		#define GEODE_CONCEPT_CHECK_adminCloseCaseFinished
		GEODE_CONCEPT_FUNCTION_CHECK(adminCloseCaseFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_adminCloseCaseFailed
		#define GEODE_CONCEPT_CHECK_adminCloseCaseFailed
		GEODE_CONCEPT_FUNCTION_CHECK(adminCloseCaseFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, CommentAdminDelegate> : ModifyBase<ModifyDerive<Der, CommentAdminDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, CommentAdminDelegate>>;
		using ModifyBase<ModifyDerive<Der, CommentAdminDelegate>>::ModifyBase;
		using Base = CommentAdminDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminDeleteCommentsFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminDeleteCommentsFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminCommentBanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminCommentBanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminCommentUnbanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminCommentUnbanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminUploadBanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminUploadBanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminUploadUnbanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminUploadUnbanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminMessageBanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminMessageBanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminMessageUnbanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminMessageUnbanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminFreezeFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminFreezeFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminUnfreezeFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminUnfreezeFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminTrendingBanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminTrendingBanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminTrendingUnbanFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminTrendingUnbanFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminNameLockFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminNameLockFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminNameUnlockFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminNameUnlockFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminQueueMuteFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminQueueMuteFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminQueueUnmuteFinished, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminQueueUnmuteFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminUserHistoryFinished, int, cocos2d::CCArray*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminUserHistoryFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminReportedContentFinished, int, cocos2d::CCArray*, AdminReportedMeta const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminReportedContentFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminClearReportsFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminClearReportsFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminReportQueueFinished, cocos2d::CCArray*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminReportQueueFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminAbuseInfoFinished, int, cocos2d::CCArray*, AdminAbuseMeta const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminAbuseInfoFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminAccountReviewFinished, int, AccountReviewCard const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminAccountReviewFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminCloseCaseFinished, int, int, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(CommentAdminDelegate, adminCloseCaseFailed, int)
		}
	};
}
