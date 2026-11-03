#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class ReadArchive {
public:
    static constexpr auto CLASS_NAME = "ReadArchive";

    /**
     * @note[short] Android: Rebinded
     */
     ReadArchive(std::string const& p0, char const* p1, GJBaseGameLayer* p2);

    /**
     * @note[short] Android
     */
    TodoReturn process(GameObject*& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(bool& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(cocos2d::CCPoint& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(cocos2d::ccColor3B& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(cocos2d::ccHSVValue& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(double& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(float& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(int& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::map<int, EnterEffectAnimValue>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::map<int, bool>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::map<std::pair<GJGameEvent, int>, int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::map<std::pair<GJGameEvent, int>, std::vector<EventTriggerInstance>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::map<std::pair<int, int>, FMODSoundTween>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::map<std::pair<int, int>, SFXTriggerInstance>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::map<std::pair<int, int>, int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, EnhancedGameObject*>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, FMODQueuedMusic>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, FMODSoundState>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, GJValueTween>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, GameObjectPhysics>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, OpacityEffectAction>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, SequenceTriggerState>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, SongChannelState>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, TimerItem>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, bool>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, double>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, float>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, std::pair<double, double>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, std::vector<CountTriggerAction>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, std::vector<EnterEffectInstance>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, std::vector<PulseEffectAction>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, std::vector<SongTriggerState>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, std::vector<TimerTriggerAction>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_map<int, std::vector<int>>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::unordered_set<int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<AdvancedFollowInstance>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<CAState>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<CollisionTriggerAction>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<DynamicObjectAction>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<EnterEffectInstance>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<GroupCommandObject2>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<PulseEffectAction>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<SFXTriggerState>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<SpawnTriggerAction>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<ToggleTriggerAction>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<TouchToggleAction>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<float>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(std::vector<int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(uint64_t& p0);

    /**
     * @note[short] Android
     */
    TodoReturn process(unsigned int& p0);

    /**
     * @note[short] Android
     */
    TodoReturn processGOArr(cocos2d::CCArray*& p0);

    /**
     * @note[short] Android
     */
    TodoReturn processString(std::string& p0);

    /**
     * @note[short] Android
     */
    bool valid();
};
