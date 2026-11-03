#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlatformFileDelegate.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_filesPicked
		#define GEODE_CONCEPT_CHECK_filesPicked
		GEODE_CONCEPT_FUNCTION_CHECK(filesPicked) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_fileShareFinished
		#define GEODE_CONCEPT_CHECK_fileShareFinished
		GEODE_CONCEPT_FUNCTION_CHECK(fileShareFinished) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlatformFileDelegate> : ModifyBase<ModifyDerive<Der, PlatformFileDelegate>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlatformFileDelegate>>;
		using ModifyBase<ModifyDerive<Der, PlatformFileDelegate>>::ModifyBase;
		using Base = PlatformFileDelegate;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlatformFileDelegate, filesPicked, std::vector<std::string> const&)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlatformFileDelegate, fileShareFinished, bool)
		}
	};
}
