#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/PlayerCheckpoint.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_deserializeFromString
		#define GEODE_STATICS_deserializeFromString
		GEODE_AS_STATIC_FUNCTION(deserializeFromString) 
	#endif

	#ifndef GEODE_STATICS_serializeToString
		#define GEODE_STATICS_serializeToString
		GEODE_AS_STATIC_FUNCTION(serializeToString) 
	#endif

	#ifndef GEODE_STATICS_verifyMatch
		#define GEODE_STATICS_verifyMatch
		GEODE_AS_STATIC_FUNCTION(verifyMatch) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_deserializeFromString
		#define GEODE_CONCEPT_CHECK_deserializeFromString
		GEODE_CONCEPT_FUNCTION_CHECK(deserializeFromString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_serializeToString
		#define GEODE_CONCEPT_CHECK_serializeToString
		GEODE_CONCEPT_FUNCTION_CHECK(serializeToString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_verifyMatch
		#define GEODE_CONCEPT_CHECK_verifyMatch
		GEODE_CONCEPT_FUNCTION_CHECK(verifyMatch) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, PlayerCheckpoint> : ModifyBase<ModifyDerive<Der, PlayerCheckpoint>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, PlayerCheckpoint>>;
		using ModifyBase<ModifyDerive<Der, PlayerCheckpoint>>::ModifyBase;
		using Base = PlayerCheckpoint;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_CONSTRUCTOR(base::get() + 0x520a60, Thiscall, PlayerCheckpoint, )
			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x520ed0, Thiscall, PlayerCheckpoint)
			GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_INLINE(PlayerCheckpoint, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x52ed00, Thiscall, PlayerCheckpoint, init, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, deserializeFromString, std::string const&, GJBaseGameLayer*)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, serializeToString, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(PlayerCheckpoint, verifyMatch, PlayerCheckpoint*)
		}
	};
}
