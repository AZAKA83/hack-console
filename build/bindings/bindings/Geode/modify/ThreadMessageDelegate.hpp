#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ThreadMessageDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_threadListFinished
		#define GEODE_CONCEPT_CHECK_threadListFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadListFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadListFailed
		#define GEODE_CONCEPT_CHECK_threadListFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadListFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMessagesFinished
		#define GEODE_CONCEPT_CHECK_threadMessagesFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadMessagesFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMessagesFailed
		#define GEODE_CONCEPT_CHECK_threadMessagesFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadMessagesFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSearchFinished
		#define GEODE_CONCEPT_CHECK_threadSearchFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSearchFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSearchFailed
		#define GEODE_CONCEPT_CHECK_threadSearchFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSearchFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFinished
		#define GEODE_CONCEPT_CHECK_threadSendFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadSendFailed
		#define GEODE_CONCEPT_CHECK_threadSendFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadSendFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFinished
		#define GEODE_CONCEPT_CHECK_threadUpdateFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadUpdateFailed
		#define GEODE_CONCEPT_CHECK_threadUpdateFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadUpdateFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMembersFinished
		#define GEODE_CONCEPT_CHECK_threadMembersFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadMembersFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadMembersFailed
		#define GEODE_CONCEPT_CHECK_threadMembersFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadMembersFailed) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadInvitesFinished
		#define GEODE_CONCEPT_CHECK_threadInvitesFinished
		GEODE_CONCEPT_FUNCTION_CHECK(threadInvitesFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_threadInvitesFailed
		#define GEODE_CONCEPT_CHECK_threadInvitesFailed
		GEODE_CONCEPT_FUNCTION_CHECK(threadInvitesFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ThreadMessageDelegate> : ModifyBase<ModifyDerive<Der, ThreadMessageDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ThreadMessageDelegate>>;
		using ModifyBase<ModifyDerive<Der, ThreadMessageDelegate>>::ModifyBase;
		using Base = ThreadMessageDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadListFinished, cocos2d::CCArray*, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadListFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadMessagesFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadMessagesFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadSearchFinished, int, cocos2d::CCArray*, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadSearchFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadSendFinished, int, long long)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadSendFailed, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadUpdateFinished, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadUpdateFailed, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadMembersFinished, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadMembersFailed, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadInvitesFinished, cocos2d::CCArray*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(ThreadMessageDelegate, threadInvitesFailed, )
		}
	};
}
