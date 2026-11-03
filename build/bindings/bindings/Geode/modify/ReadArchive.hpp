#pragma once
#include <Geode/modify/Modify.hpp>
#include <Geode/modify/Field.hpp>
#include <Geode/binding/ReadArchive.hpp>
using namespace geode::modifier;
namespace geode::modifier {
    
	#ifndef GEODE_STATICS_process
		#define GEODE_STATICS_process
		GEODE_AS_STATIC_FUNCTION(process) 
	#endif

	#ifndef GEODE_STATICS_processGOArr
		#define GEODE_STATICS_processGOArr
		GEODE_AS_STATIC_FUNCTION(processGOArr) 
	#endif

	#ifndef GEODE_STATICS_processString
		#define GEODE_STATICS_processString
		GEODE_AS_STATIC_FUNCTION(processString) 
	#endif

	#ifndef GEODE_STATICS_valid
		#define GEODE_STATICS_valid
		GEODE_AS_STATIC_FUNCTION(valid) 
	#endif

    
	#ifndef GEODE_CONCEPT_CHECK_process
		#define GEODE_CONCEPT_CHECK_process
		GEODE_CONCEPT_FUNCTION_CHECK(process) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processGOArr
		#define GEODE_CONCEPT_CHECK_processGOArr
		GEODE_CONCEPT_FUNCTION_CHECK(processGOArr) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_processString
		#define GEODE_CONCEPT_CHECK_processString
		GEODE_CONCEPT_FUNCTION_CHECK(processString) 
	#endif

	#ifndef GEODE_CONCEPT_CHECK_valid
		#define GEODE_CONCEPT_CHECK_valid
		GEODE_CONCEPT_FUNCTION_CHECK(valid) 
	#endif


	template<class Der>
	struct ModifyDerive<Der, ReadArchive> : ModifyBase<ModifyDerive<Der, ReadArchive>> {
        using BaseModify = ModifyBase<ModifyDerive<Der, ReadArchive>>;
		using ModifyBase<ModifyDerive<Der, ReadArchive>>::ModifyBase;
		using Base = ReadArchive;
        using Derived = Der;
		void apply() override {

            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, GameObject*&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, bool&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, cocos2d::CCPoint&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, cocos2d::ccColor3B&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, cocos2d::ccHSVValue&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, double&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, float&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::map<int, EnterEffectAnimValue>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::map<int, bool>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::map<std::pair<GJGameEvent, int>, int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::map<std::pair<GJGameEvent, int>, std::vector<EventTriggerInstance>>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::map<std::pair<int, int>, FMODSoundTween>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::map<std::pair<int, int>, SFXTriggerInstance>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::map<std::pair<int, int>, int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, EnhancedGameObject*>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, FMODQueuedMusic>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, FMODSoundState>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, GJValueTween>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, GameObjectPhysics>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, OpacityEffectAction>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, SequenceTriggerState>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, SongChannelState>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, TimerItem>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, bool>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, double>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, float>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, std::pair<double, double>>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, std::vector<CountTriggerAction>>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, std::vector<EnterEffectInstance>>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, std::vector<PulseEffectAction>>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, std::vector<SongTriggerState>>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, std::vector<TimerTriggerAction>>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_map<int, std::vector<int>>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::unordered_set<int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<AdvancedFollowInstance>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<CAState>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<CollisionTriggerAction>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<DynamicObjectAction>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<EnterEffectInstance>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<GroupCommandObject2>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<PulseEffectAction>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<SFXTriggerState>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<SpawnTriggerAction>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<ToggleTriggerAction>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<TouchToggleAction>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<float>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, std::vector<int>&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, uint64_t&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, process, unsigned int&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, processGOArr, cocos2d::CCArray*&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, processString, std::string&)
            GEODE_APPLY_MODIFY_FOR_FUNCTION_ERROR_DEFINED(ReadArchive, valid, )
		}
	};
}
