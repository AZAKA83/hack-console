#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/FileSaveManager.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
    
	#ifndef GEODE_CONCEPT_CHECK_sharedState
		#define GEODE_CONCEPT_CHECK_sharedState
		GEODE_CONCEPT_FUNCTION_CHECK(sharedState) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_firstLoad
		#define GEODE_CONCEPT_CHECK_firstLoad
		GEODE_CONCEPT_FUNCTION_CHECK(firstLoad) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getStoreData
		#define GEODE_CONCEPT_CHECK_getStoreData
		GEODE_CONCEPT_FUNCTION_CHECK(getStoreData) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_loadDataFromFile
		#define GEODE_CONCEPT_CHECK_loadDataFromFile
		GEODE_CONCEPT_FUNCTION_CHECK(loadDataFromFile) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, FileSaveManager> : ModifyBase<ModifyDerive<Der, FileSaveManager>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, FileSaveManager>>;
		using ModifyBase<ModifyDerive<Der, FileSaveManager>>::ModifyBase;
		using Base = FileSaveManager;
        using Derived = Der;
		void apply() override {

		}
	};
}
