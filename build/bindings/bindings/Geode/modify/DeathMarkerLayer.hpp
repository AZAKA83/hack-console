#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/DeathMarkerLayer.hpp>
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

	#ifndef GEODE_STATICS_mountSection
		#define GEODE_STATICS_mountSection
		GEODE_AS_STATIC_FUNCTION(mountSection) 
	#endif

	#ifndef GEODE_STATICS_playMarkerSound
		#define GEODE_STATICS_playMarkerSound
		GEODE_AS_STATIC_FUNCTION(playMarkerSound) 
	#endif

	#ifndef GEODE_STATICS_playPendingLabelSound
		#define GEODE_STATICS_playPendingLabelSound
		GEODE_AS_STATIC_FUNCTION(playPendingLabelSound) 
	#endif

	#ifndef GEODE_STATICS_queueDeathLabelSound
		#define GEODE_STATICS_queueDeathLabelSound
		GEODE_AS_STATIC_FUNCTION(queueDeathLabelSound) 
	#endif

	#ifndef GEODE_STATICS_resolveBadgeCollisions
		#define GEODE_STATICS_resolveBadgeCollisions
		GEODE_AS_STATIC_FUNCTION(resolveBadgeCollisions) 
	#endif

	#ifndef GEODE_STATICS_setLabelsVisible
		#define GEODE_STATICS_setLabelsVisible
		GEODE_AS_STATIC_FUNCTION(setLabelsVisible) 
	#endif

	#ifndef GEODE_STATICS_tickDeathCountLabel
		#define GEODE_STATICS_tickDeathCountLabel
		GEODE_AS_STATIC_FUNCTION(tickDeathCountLabel) 
	#endif

	#ifndef GEODE_STATICS_timescale
		#define GEODE_STATICS_timescale
		GEODE_AS_STATIC_FUNCTION(timescale) 
	#endif

	#ifndef GEODE_STATICS_unmountSection
		#define GEODE_STATICS_unmountSection
		GEODE_AS_STATIC_FUNCTION(unmountSection) 
	#endif

	#ifndef GEODE_STATICS_updateVisibility
		#define GEODE_STATICS_updateVisibility
		GEODE_AS_STATIC_FUNCTION(updateVisibility) 
	#endif

	#ifndef GEODE_STATICS_setFlipped
		#define GEODE_STATICS_setFlipped
		GEODE_AS_STATIC_FUNCTION(setFlipped) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_create
		#define GEODE_CONCEPT_CHECK_create
		GEODE_CONCEPT_FUNCTION_CHECK(create) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_init
		#define GEODE_CONCEPT_CHECK_init
		GEODE_CONCEPT_FUNCTION_CHECK(init) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_mountSection
		#define GEODE_CONCEPT_CHECK_mountSection
		GEODE_CONCEPT_FUNCTION_CHECK(mountSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playMarkerSound
		#define GEODE_CONCEPT_CHECK_playMarkerSound
		GEODE_CONCEPT_FUNCTION_CHECK(playMarkerSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_playPendingLabelSound
		#define GEODE_CONCEPT_CHECK_playPendingLabelSound
		GEODE_CONCEPT_FUNCTION_CHECK(playPendingLabelSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_queueDeathLabelSound
		#define GEODE_CONCEPT_CHECK_queueDeathLabelSound
		GEODE_CONCEPT_FUNCTION_CHECK(queueDeathLabelSound) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_resolveBadgeCollisions
		#define GEODE_CONCEPT_CHECK_resolveBadgeCollisions
		GEODE_CONCEPT_FUNCTION_CHECK(resolveBadgeCollisions) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setLabelsVisible
		#define GEODE_CONCEPT_CHECK_setLabelsVisible
		GEODE_CONCEPT_FUNCTION_CHECK(setLabelsVisible) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_tickDeathCountLabel
		#define GEODE_CONCEPT_CHECK_tickDeathCountLabel
		GEODE_CONCEPT_FUNCTION_CHECK(tickDeathCountLabel) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_timescale
		#define GEODE_CONCEPT_CHECK_timescale
		GEODE_CONCEPT_FUNCTION_CHECK(timescale) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_unmountSection
		#define GEODE_CONCEPT_CHECK_unmountSection
		GEODE_CONCEPT_FUNCTION_CHECK(unmountSection) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_updateVisibility
		#define GEODE_CONCEPT_CHECK_updateVisibility
		GEODE_CONCEPT_FUNCTION_CHECK(updateVisibility) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_setFlipped
		#define GEODE_CONCEPT_CHECK_setFlipped
		GEODE_CONCEPT_FUNCTION_CHECK(setFlipped) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, DeathMarkerLayer> : ModifyBase<ModifyDerive<Der, DeathMarkerLayer>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, DeathMarkerLayer>>;
		using ModifyBase<ModifyDerive<Der, DeathMarkerLayer>>::ModifyBase;
		using Base = DeathMarkerLayer;
        using Derived = Der;
		void apply() override {

			GEODE_APPLY_MODIFY_FOR_DESTRUCTOR(base::get() + 0x114d80, Thiscall, DeathMarkerLayer)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, create, std::vector<int> const&, cocos2d::ccColor3B, bool, bool, cocos2d::CCRect const&, int, int, float, float, float, int, int, cocos2d::CCNode*, bool, bool)
			GEODE_APPLY_MODIFY_FOR_FUNCTION(base::get() + 0x114ee0, Thiscall, DeathMarkerLayer, init, std::vector<int> const&, cocos2d::ccColor3B, bool, bool, cocos2d::CCRect const&, int, int, float, float, float, int, int, cocos2d::CCNode*, bool, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, mountSection, unsigned int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, playMarkerSound, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, playPendingLabelSound, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, queueDeathLabelSound, int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, resolveBadgeCollisions, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, setLabelsVisible, bool)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, tickDeathCountLabel, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, timescale, )
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, unmountSection, unsigned int)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, updateVisibility, cocos2d::CCRect const&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(DeathMarkerLayer, setFlipped, bool)
		}
	};
}
