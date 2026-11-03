#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/GJSearchObject.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_createFromKey
		#define GEODE_STATICS_createFromKey
		GEODE_AS_STATIC_FUNCTION(createFromKey) 
	#endif

	#ifndef GEODE_STATICS_getSearchKey
		#define GEODE_STATICS_getSearchKey
		GEODE_AS_STATIC_FUNCTION(getSearchKey) 
	#endif

	#ifndef GEODE_STATICS_getKey
		#define GEODE_STATICS_getKey
		GEODE_AS_STATIC_FUNCTION(getKey) 
	#endif

	#ifndef GEODE_STATICS_getPageObject
		#define GEODE_STATICS_getPageObject
		GEODE_AS_STATIC_FUNCTION(getPageObject) 
	#endif

	#ifndef GEODE_STATICS_isLevelSearchObject
		#define GEODE_STATICS_isLevelSearchObject
		GEODE_AS_STATIC_FUNCTION(isLevelSearchObject) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_createFromKey
		#define GEODE_CONCEPT_CHECK_createFromKey
		GEODE_CONCEPT_FUNCTION_CHECK(createFromKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getSearchKey
		#define GEODE_CONCEPT_CHECK_getSearchKey
		GEODE_CONCEPT_FUNCTION_CHECK(getSearchKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getKey
		#define GEODE_CONCEPT_CHECK_getKey
		GEODE_CONCEPT_FUNCTION_CHECK(getKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextPageKey
		#define GEODE_CONCEPT_CHECK_getNextPageKey
		GEODE_CONCEPT_FUNCTION_CHECK(getNextPageKey) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getNextPageObject
		#define GEODE_CONCEPT_CHECK_getNextPageObject
		GEODE_CONCEPT_FUNCTION_CHECK(getNextPageObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPageObject
		#define GEODE_CONCEPT_CHECK_getPageObject
		GEODE_CONCEPT_FUNCTION_CHECK(getPageObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_getPrevPageObject
		#define GEODE_CONCEPT_CHECK_getPrevPageObject
		GEODE_CONCEPT_FUNCTION_CHECK(getPrevPageObject) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_isLevelSearchObject
		#define GEODE_CONCEPT_CHECK_isLevelSearchObject
		GEODE_CONCEPT_FUNCTION_CHECK(isLevelSearchObject) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, GJSearchObject> : ModifyBase<ModifyDerive<Der, GJSearchObject>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, GJSearchObject>>;
		using ModifyBase<ModifyDerive<Der, GJSearchObject>>::ModifyBase;
		using Base = GJSearchObject;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x218e00, Thiscall, GJSearchObject)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26fc30, Default, GJSearchObject, create, SearchType)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26fd10, Default, GJSearchObject, create, SearchType, std::string)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26fe40, Default, GJSearchObject, create, SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x26f4f0, Default, GJSearchObject, createFromKey, char const*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270440, Default, GJSearchObject, getSearchKey, SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x270180, Thiscall, GJSearchObject, getKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSearchObject, getNextPageKey, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSearchObject, getNextPageObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2702d0, Thiscall, GJSearchObject, getPageObject, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSearchObject, getPrevPageObject, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(GJSearchObject, init, SearchType, std::string, std::string, std::string, int, bool, bool, bool, int, bool, bool, bool, bool, bool, bool, bool, bool, bool, bool, int, int, int)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x2709b0, Thiscall, GJSearchObject, isLevelSearchObject, )
		}
	};
}
