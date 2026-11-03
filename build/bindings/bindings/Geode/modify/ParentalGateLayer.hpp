#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ParentalGateLayer.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_create
		#define GEODE_STATICS_create
		GEODE_AS_STATIC_FUNCTION(create) 
	#endif

	#ifndef GEODE_STATICS_init
		#define GEODE_STATICS_init
		GEODE_AS_STATIC_FUNCTION(init) 
	#endif

	#ifndef GEODE_STATICS_onDone
		#define GEODE_STATICS_onDone
		GEODE_AS_STATIC_FUNCTION(onDone) 
	#endif

	#ifndef GEODE_STATICS_generateChallenge
		#define GEODE_STATICS_generateChallenge
		GEODE_AS_STATIC_FUNCTION(generateChallenge) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_onDone
		#define GEODE_CONCEPT_CHECK_onDone
		GEODE_CONCEPT_FUNCTION_CHECK(onDone) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_generateChallenge
		#define GEODE_CONCEPT_CHECK_generateChallenge
		GEODE_CONCEPT_FUNCTION_CHECK(generateChallenge) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ParentalGateLayer> : ModifyBase<ModifyDerive<Der, ParentalGateLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ParentalGateLayer>>;
		using ModifyBase<ModifyDerive<Der, ParentalGateLayer>>::ModifyBase;
		using Base = ParentalGateLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d3ba0, Default, ParentalGateLayer, create, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d3ca0, Thiscall, ParentalGateLayer, init, )
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d3ee0, Thiscall, ParentalGateLayer, onDone, cocos2d::CCObject*)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x4d3d00, Thiscall, ParentalGateLayer, generateChallenge, )
		}
	};
}
