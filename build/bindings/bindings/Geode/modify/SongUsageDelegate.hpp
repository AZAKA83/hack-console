#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/SongUsageDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_songUsageFinished
		#define GEODE_CONCEPT_CHECK_songUsageFinished
		GEODE_CONCEPT_FUNCTION_CHECK(songUsageFinished) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_songUsageFailed
		#define GEODE_CONCEPT_CHECK_songUsageFailed
		GEODE_CONCEPT_FUNCTION_CHECK(songUsageFailed) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, SongUsageDelegate> : ModifyBase<ModifyDerive<Der, SongUsageDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, SongUsageDelegate>>;
		using ModifyBase<ModifyDerive<Der, SongUsageDelegate>>::ModifyBase;
		using Base = SongUsageDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongUsageDelegate, songUsageFinished, int, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(SongUsageDelegate, songUsageFailed, int)
		}
	};
}
