#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GJGameState.hpp>
#include <Geode/binding/PlayerButtonCommand.hpp>
#include <Geode/binding/RecordButtonCommand.hpp>
#include <Geode/binding/RecordCheckpoint.hpp>
#include <Geode/binding/PlayerTrailState.hpp>
#include <Geode/mapping/CCParticleSystem.hpp>
#include <Geode/mapping/ParticleStruct.hpp>
#include <Geode/mapping/CCLayer.hpp>
#include <Geode/binding/TriggerEffectDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/array.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class GJBaseGameLayer : public cocos2d::CCLayer, public TriggerEffectDelegate {
public:
    static constexpr auto CLASS_NAME = "GJBaseGameLayer";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJBaseGameLayer, cocos2d::CCLayer)

    /**
     * @note[short] MacOS (ARM): 0x839b8
     * @note[short] MacOS (Intel): 0x8e720
     * @note[short] Windows: 0x3eb6f0
     * @note[short] Android: Rebinded
     */
     GJBaseGameLayer();

    /**
     * @note[short] MacOS (ARM): 0xcc67c
     * @note[short] MacOS (Intel): 0xebd40
     * @note[short] Windows: 0x30b850
     * @note[short] Android: Rebinded
     */
     ~GJBaseGameLayer();

    /**
     * @note[short] MacOS (ARM): 0xf0e94
     * @note[short] MacOS (Intel): 0x115da0
     * @note[short] Windows: 0x3373e0
     * @note[short] Android
     */
    static float convertToClosestDirection(float angle, float bound);

    /**
     * @note[short] MacOS (ARM): 0x101e00
     * @note[short] MacOS (Intel): 0x129860
     * @note[short] Windows: 0x33b3d0
     * @note[short] Android
     */
    static std::string gameEventToString(GJGameEvent event);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static GJBaseGameLayer* get();

    /**
     * @note[short] MacOS (ARM): 0x10663c
     * @note[short] MacOS (Intel): 0x12f230
     * @note[short] Windows: 0x3406d0
     * @note[short] iOS: 0x29a70c
     * @note[short] Android
     */
    virtual void update(float dt);

    /**
     * @note[short] MacOS (ARM): 0xcd46c
     * @note[short] MacOS (Intel): 0xebd80
     * @note[short] Windows: 0x30ce90
     * @note[short] iOS: 0x274e84
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x11673c
     * @note[short] MacOS (Intel): 0x142f70
     * @note[short] Windows: 0x351210
     * @note[short] iOS: 0x2a5184
     * @note[short] Android
     */
    virtual void visit();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void checkForEnd();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void testTime();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateAttemptTime(float attemptTime);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void playerTookDamage(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x10643c
     * @note[short] MacOS (Intel): 0x12efe0
     * @note[short] Windows: 0x340290
     * @note[short] iOS: 0x29a52c
     * @note[short] Android
     */
    virtual float opacityForObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void addToSpeedObjects(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe71d8
     * @note[short] MacOS (Intel): 0x109580
     * @note[short] Windows: 0x320700
     * @note[short] iOS: 0x286f28
     * @note[short] Android
     */
    virtual void objectsCollided(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0xf4990
     * @note[short] MacOS (Intel): 0x119d30
     * @note[short] Windows: 0x32b610
     * @note[short] iOS: 0x28d994
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0xf4af8
     * @note[short] MacOS (Intel): 0x119ed0
     * @note[short] Windows: 0x32b7f0
     * @note[short] iOS: 0x28dafc
     * @note[short] Android
     */
    virtual void toggleGroupTriggered(int group, bool activate, std::vector<int> const& remapKeys, int triggerID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xe8018
     * @note[short] MacOS (Intel): 0x10a460
     * @note[short] Windows: 0x322360
     * @note[short] iOS: 0x287b90
     * @note[short] Android
     */
    virtual bool checkSpawnAbuse();

    /**
     * @note[short] MacOS (ARM): 0xe8064
     * @note[short] MacOS (Intel): 0x10a4d0
     * @note[short] Windows: 0x322370
     * @note[short] iOS: 0x287bdc
     * @note[short] Android
     */
    virtual void spawnGroup(int group, bool ordered, double delay, std::vector<int> const& remapKeys, int triggerID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xe8488
     * @note[short] MacOS (Intel): 0x10a900
     * @note[short] Windows: 0x3227a0
     * @note[short] iOS: 0x287eb8
     * @note[short] Android
     */
    virtual void spawnObject(GameObject* object, double delay, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activateEndTrigger(int targetID, bool reverse, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleGlitter(bool visible);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void destroyPlayer(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdcab0
     * @note[short] MacOS (Intel): 0xfdc30
     * @note[short] Windows: 0x3169c0
     * @note[short] iOS: 0x27ee1c
     * @note[short] Android
     */
    virtual void updateDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0xddbe0
     * @note[short] MacOS (Intel): 0xff110
     * @note[short] Windows: 0x317660
     * @note[short] iOS: 0x27fed0
     * @note[short] Android
     */
    virtual bool shouldDrawDebugHitboxes();

    /**
     * @note[short] MacOS (ARM): 0xddc0c
     * @note[short] MacOS (Intel): 0xff130
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x27fef8
     * @note[short] Android
     */
    virtual bool shouldDrawHitboxTrail();

    /**
     * @note[short] MacOS (ARM): 0xddc14
     * @note[short] MacOS (Intel): 0xff140
     * @note[short] Windows: 0x5a3a0
     * @note[short] iOS: 0x27ff00
     * @note[short] Android
     */
    virtual bool shouldRecordHitboxTrail();

    /**
     * @note[short] MacOS (ARM): 0xddc1c
     * @note[short] MacOS (Intel): 0xff150
     * @note[short] Windows: 0x317680
     * @note[short] iOS: 0x27ff08
     * @note[short] Android
     */
    virtual int getHitboxTrailMax();

    /**
     * @note[short] MacOS (ARM): 0xf7654
     * @note[short] MacOS (Intel): 0x11d090
     * @note[short] Windows: 0x32f280
     * @note[short] iOS: 0x28f79c
     * @note[short] Android
     */
    virtual void addToSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf500c
     * @note[short] MacOS (Intel): 0x11a450
     * @note[short] Windows: 0x32bc50
     * @note[short] iOS: 0x28df44
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* object, int groupID, bool triggerGroup);

    /**
     * @note[short] MacOS (ARM): 0xf5268
     * @note[short] MacOS (Intel): 0x11a6a0
     * @note[short] Windows: 0x32bdd0
     * @note[short] iOS: 0x28e0e8
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* object, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xf8bf8
     * @note[short] MacOS (Intel): 0x11ec10
     * @note[short] Windows: 0x330ba0
     * @note[short] iOS: 0x290438
     * @note[short] Android
     */
    virtual void updateObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateDisabledObjectsLastPos(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1045e4
     * @note[short] MacOS (Intel): 0x12c970
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x298fd8
     * @note[short] Android
     */
    virtual void toggleGroundVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1045e8
     * @note[short] MacOS (Intel): 0x12c980
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x298fdc
     * @note[short] Android
     */
    virtual void toggleMGVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x1045ec
     * @note[short] MacOS (Intel): 0x12c990
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x298fe0
     * @note[short] Android
     */
    virtual void toggleHideAttempts(bool hide);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0x10472c
     * @note[short] MacOS (Intel): 0x12cb30
     * @note[short] Windows: 0x33ec40
     * @note[short] iOS: 0x2990c8
     * @note[short] Android
     */
    virtual void updateScreenRotation(float rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xe64e8
     * @note[short] MacOS (Intel): 0x1087c0
     * @note[short] Windows: 0x31f920
     * @note[short] iOS: 0x2864ac
     * @note[short] Android
     */
    virtual void reverseDirection(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe6530
     * @note[short] MacOS (Intel): 0x108800
     * @note[short] Windows: 0x31f980
     * @note[short] iOS: 0x2864f4
     * @note[short] Android
     */
    virtual void rotateGameplay(RotateGameplayGameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void didRotateGameplay();

    /**
     * @note[short] MacOS (ARM): 0x104cec
     * @note[short] MacOS (Intel): 0x12d210
     * @note[short] Windows: 0x33ef60
     * @note[short] iOS: 0x299514
     * @note[short] Android
     */
    virtual void updateTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0x104d30
     * @note[short] MacOS (Intel): 0x12d260
     * @note[short] Windows: 0x33efa0
     * @note[short] iOS: 0x299554
     * @note[short] Android
     */
    virtual void applyTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void playGravityEffect(bool flip);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x111ddc
     * @note[short] MacOS (Intel): 0x13d270
     * @note[short] Windows: 0x34a9f0
     * @note[short] iOS: 0x2a19bc
     * @note[short] Android
     */
    virtual cocos2d::CCParticleSystemQuad* createCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int minimum, bool dontAdd);

    /**
     * @note[short] MacOS (ARM): 0x112164
     * @note[short] MacOS (Intel): 0x13d5e0
     * @note[short] Windows: 0x34ad40
     * @note[short] iOS: 0x2a1be8
     * @note[short] Android
     */
    virtual cocos2d::CCParticleSystemQuad* claimCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd);

    /**
     * @note[short] MacOS (ARM): 0x11256c
     * @note[short] MacOS (Intel): 0x13da50
     * @note[short] Windows: 0x34b2e0
     * @note[short] iOS: 0x2a1fdc
     * @note[short] Android
     */
    virtual void unclaimCustomParticle(std::string const& key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0x113370
     * @note[short] MacOS (Intel): 0x13ea40
     * @note[short] Windows: 0x34cf60
     * @note[short] iOS: 0x2a2bd4
     * @note[short] Android
     */
    virtual void activatedAudioTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x116498
     * @note[short] MacOS (Intel): 0x142c90
     * @note[short] Windows: 0x350df0
     * @note[short] iOS: 0x2a4f80
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x116494
     * @note[short] MacOS (Intel): 0x142c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a4f7c
     * @note[short] Android
     */
    virtual void flipArt(bool flip);

    /**
     * @note[short] MacOS (ARM): 0x101fa4
     * @note[short] MacOS (Intel): 0x129a40
     * @note[short] Windows: 0x33c850
     * @note[short] iOS: 0x297558
     * @note[short] Android
     */
    virtual void addKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void updateTimeLabel(int seconds, int centiseconds, bool decimals);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void checkSnapshot();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleInfoLabel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void toggleMusicInPractice();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void processCheckpoints();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void resetLevel();

    /**
     * @note[short] MacOS (ARM): 0xee728
     * @note[short] MacOS (Intel): 0x113730
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void activateCustomRing(RingObject* object);

    /**
     * @note[short] MacOS (Intel): 0x13ea60
     * @note[short] Windows: 0x34cf80
     * @note[short] Android
     */
    void activatedAudioTrigger(SFXTriggerGameObject* object, float levelTime);

    /**
     * @note[short] MacOS (ARM): 0x1019bc
     * @note[short] MacOS (Intel): 0x129380
     * @note[short] Windows: 0x33ada0
     * @note[short] Android
     */
    void activateEventTrigger(EventLinkTrigger* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x102d10
     * @note[short] MacOS (Intel): 0x12aa70
     * @note[short] Windows: 0x33d310
     * @note[short] Android
     */
    void activateItemCompareTrigger(ItemTriggerGameObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x1026d8
     * @note[short] MacOS (Intel): 0x12a230
     * @note[short] Windows: 0x33cf40
     * @note[short] Android
     */
    void activateItemEditTrigger(ItemTriggerGameObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void activateObjectControlTrigger(ObjectControlGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x103264
     * @note[short] MacOS (Intel): 0x12b160
     * @note[short] Windows: 0x33d730
     * @note[short] Android
     */
    void activatePersistentItemTrigger(ItemTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5748
     * @note[short] MacOS (Intel): 0x1077d0
     * @note[short] Windows: 0x31eac0
     * @note[short] Android
     */
    void activatePlayerControlTrigger(PlayerControlGameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn activateProgressTrigger(ProgressGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x102164
     * @note[short] MacOS (Intel): 0x129c30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void activateResetTrigger(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10f2a0
     * @note[short] MacOS (Intel): 0x139fb0
     * @note[short] Windows: 0x34bf90
     * @note[short] Android
     */
    void activateSFXEditTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10ef60
     * @note[short] Windows: 0x34bd80
     * @note[short] Android
     */
    void activateSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10eddc
     * @note[short] MacOS (Intel): 0x139a60
     * @note[short] Windows: 0x34ba10
     * @note[short] Android
     */
    void activateSongEditTrigger(SongTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10ebd8
     * @note[short] MacOS (Intel): 0x1397f0
     * @note[short] Windows: 0x34b7c0
     * @note[short] Android
     */
    void activateSongTrigger(SongTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1035b8
     * @note[short] MacOS (Intel): 0x12b560
     * @note[short] Windows: 0x33db80
     * @note[short] Android
     */
    void activateTimerTrigger(TimerTriggerGameObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0xf84a0
     * @note[short] MacOS (Intel): 0x11e2c0
     * @note[short] Windows: 0x330110
     * @note[short] Android
     */
    void addAreaEffect(EnterEffectObject* object, std::vector<EnterEffectInstance>* instances, GJAreaActionType type);

    /**
     * @note[short] MacOS (ARM): 0xd9544
     * @note[short] MacOS (Intel): 0xfa8d0
     * @note[short] Windows: 0x314490
     * @note[short] Android
     */
    void addCustomEnterEffect(EnterEffectObject* object, bool enter);

    /**
     * @note[short] Windows: 0x32e900
     * @note[short] Android
     */
    TodoReturn addDeathMarkerLayer(cocos2d::CCNode* p0, bool p1, std::vector<int> const& p2, bool p3, cocos2d::CCRect const& p4, int p5, int p6, float p7, float p8, float p9, int p10);

    /**
     * @note[short] MacOS (ARM): 0x1155c8
     * @note[short] MacOS (Intel): 0x141c40
     * @note[short] Windows: 0x3501e0
     * @note[short] Android
     */
    bool addGuideArt(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x102468
     * @note[short] MacOS (Intel): 0x129f90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addObjectCounter(LabelGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1023a0
     * @note[short] MacOS (Intel): 0x129e80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addPickupTrigger(CountTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10a514
     * @note[short] MacOS (Intel): 0x1343f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addPoints(int points);

    /**
     * @note[short] MacOS (ARM): 0x112a44
     * @note[short] MacOS (Intel): 0x13df40
     * @note[short] Windows: 0x34c580
     * @note[short] Android
     */
    void addProximityVolumeEffect(int channelID, int targetType, SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd3834
     * @note[short] MacOS (Intel): 0xf2e20
     * @note[short] Windows: 0x313c90
     * @note[short] Android
     */
    void addRemapTargets(std::set<int>& targets);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToGroupParents(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf4f98
     * @note[short] MacOS (Intel): 0x11a3e0
     * @note[short] Windows: 0x32bbc0
     * @note[short] Android
     */
    void addToGroups(GameObject* object, bool duplicateTrigger);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void addToObjectsToShow(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf71bc
     * @note[short] MacOS (Intel): 0x11afa0
     * @note[short] Windows: 0x32ec90
     * @note[short] Android
     */
    void addUIObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe0fa0
     * @note[short] MacOS (Intel): 0x102780
     * @note[short] Windows: 0x31a690
     * @note[short] Android
     */
    void animateInDualGroundNew(GameObject* object, float height, bool instant, float duration);

    /**
     * @note[short] MacOS (ARM): 0xe1680
     * @note[short] MacOS (Intel): 0x102fb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animateInGroundNew(bool unk1, float unk2, bool unk3);

    /**
     * @note[short] MacOS (ARM): 0xe1228
     * @note[short] MacOS (Intel): 0x102a70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void animateOutGroundNew(bool instant);

    /**
     * @note[short] MacOS (ARM): 0x1104b4
     * @note[short] MacOS (Intel): 0x13b550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void animatePortalY(float fromY, float toY, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x10da2c
     * @note[short] MacOS (Intel): 0x138240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void applyLevelSettings(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe869c
     * @note[short] MacOS (Intel): 0x10aac0
     * @note[short] Windows: 0x322a40
     * @note[short] Android
     */
    void applyRemap(EffectGameObject* object, std::vector<int> const& remapKeys, std::unordered_map<int, int>& remap);

    /**
     * @note[short] MacOS (ARM): 0x112928
     * @note[short] MacOS (Intel): 0x13de20
     * @note[short] Windows: 0x34c260
     * @note[short] Android
     */
    void applySFXEditTrigger(int channelID, int targetType, SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10f8a8
     * @note[short] MacOS (Intel): 0x13a640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void applyShake(cocos2d::CCPoint& point);

    /**
     * @note[short] MacOS (ARM): 0xf6b38
     * @note[short] MacOS (Intel): 0x11c3f0
     * @note[short] Windows: 0x32d4f0
     * @note[short] Android
     */
    void assignNewStickyGroups(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xd15b0
     * @note[short] MacOS (Intel): 0xf0880
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void asyncBGLoaded(int background);

    /**
     * @note[short] MacOS (ARM): 0xd1870
     * @note[short] MacOS (Intel): 0xf0b90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void asyncGLoaded(int ground);

    /**
     * @note[short] MacOS (ARM): 0xd1b04
     * @note[short] MacOS (Intel): 0xf0e60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void asyncMGLoaded(int middleground);

    /**
     * @note[short] MacOS (ARM): 0xd90e8
     * @note[short] MacOS (Intel): 0xfa300
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int atlasValue(int atlas);

    /**
     * @note[short] MacOS (ARM): 0xe3a80
     * @note[short] MacOS (Intel): 0x1059c0
     * @note[short] Windows: 0x31f080
     * @note[short] Android
     */
    void bumpPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10a8b4
     * @note[short] MacOS (Intel): 0x134820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int buttonIDToButton(int id);

    /**
     * @note[short] MacOS (ARM): 0x101798
     * @note[short] MacOS (Intel): 0x1291a0
     * @note[short] Windows: 0x33ab10
     * @note[short] Android
     */
    bool buttonIsRelevant(PlayerButtonCommand const& button);

    /**
     * @note[short] MacOS (ARM): 0xd8de0
     * @note[short] MacOS (Intel): 0xfa050
     * @note[short] Windows: 0x314130
     * @note[short] Android
     */
    void calculateColorGroups();

    /**
     * @note[short] MacOS (ARM): 0x1101a0
     * @note[short] MacOS (Intel): 0x13b1e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void cameraMoveX(float value, float duration, float rate, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x11023c
     * @note[short] MacOS (Intel): 0x13b290
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void cameraMoveY(float value, float duration, float rate, bool force);

    /**
     * @note[short] MacOS (ARM): 0xe3844
     * @note[short] MacOS (Intel): 0x105760
     * @note[short] Windows: 0x31ef50
     * @note[short] iOS: 0x2846b4
     * @note[short] Android
     */
    bool canBeActivatedByPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x113754
     * @note[short] MacOS (Intel): 0x13ef50
     * @note[short] Windows: 0x34d340
     * @note[short] Android
     */
    bool canProcessSFX(SFXTriggerState& state, std::unordered_map<int, int>& stateIndices, std::unordered_map<int, float>& times, std::vector<SFXTriggerState>& states);

    /**
     * @note[short] MacOS (ARM): 0xe3814
     * @note[short] MacOS (Intel): 0x105730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool canTouchObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdc6a4
     * @note[short] MacOS (Intel): 0xfd7e0
     * @note[short] Windows: 0x3427b0
     * @note[short] iOS: 0x27ebf0
     * @note[short] Android
     */
    void checkCameraLimitAfterTeleport(PlayerObject* player, float yOffset);

    /**
     * @note[short] MacOS (ARM): 0xe71a8
     * @note[short] MacOS (Intel): 0x109550
     * @note[short] Windows: 0x320630
     * @note[short] Android
     */
    bool checkCollision(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0xe6ff4
     * @note[short] MacOS (Intel): 0x1093b0
     * @note[short] Windows: 0x320450
     * @note[short] Android
     */
    void checkCollisionBlocks(EffectGameObject* object, std::vector<EffectGameObject*>* blocks, int blockCount);

    /**
     * @note[short] MacOS (ARM): 0xe18e8
     * @note[short] MacOS (Intel): 0x103270
     * @note[short] Windows: 0x31aae0
     * @note[short] Android
     */
    int checkCollisions(PlayerObject* object, float dt, bool ignoreDamage);

    /**
     * @note[short] MacOS (ARM): 0x108208
     * @note[short] MacOS (Intel): 0x1315f0
     * @note[short] Windows: 0x3424e0
     * @note[short] Android
     */
    void checkRepellPlayer();

    /**
     * @note[short] Windows: 0x322080
     * @note[short] Android
     */
    void checkSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0xfe644
     * @note[short] MacOS (Intel): 0x125510
     * @note[short] Windows: 0x336780
     * @note[short] Android
     */
    cocos2d::CCPoint claimMoveAction(int groupID, bool ignoreStaticGroups);

    /**
     * @note[short] MacOS (ARM): 0x1117ec
     * @note[short] MacOS (Intel): 0x13cc80
     * @note[short] Windows: 0x34a620
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* claimParticle(std::string key, int zLayer);

    /**
     * @note[short] MacOS (ARM): 0xfe4dc
     * @note[short] MacOS (Intel): 0x1253a0
     * @note[short] Windows: 0x336530
     * @note[short] Android
     */
    void claimRotationAction(int targetID, int centerID, float& rotation, float& offset, bool ignoreStaticGroups, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x10e62c
     * @note[short] MacOS (Intel): 0x1390e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void clearActivatedAudioTriggers();

    /**
     * @note[short] Android
     */
    TodoReturn clearHitboxTrail();

    /**
     * @note[short] MacOS (Intel): 0x54ac60
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearPickedUpItems();

    /**
     * @note[short] MacOS (ARM): 0x102348
     * @note[short] MacOS (Intel): 0x129e30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void collectedObject(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe27d4
     * @note[short] MacOS (Intel): 0x104380
     * @note[short] Windows: 0x31bce0
     * @note[short] Android
     */
    void collisionCheckObjects(PlayerObject* object, std::vector<GameObject*>* objects, int objectCount, float dt);

    /**
     * @note[short] MacOS (ARM): 0xeef8c
     * @note[short] MacOS (Intel): 0x114210
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void controlAdvancedFollowCommand(AdvancedFollowTriggerObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xeeeb8
     * @note[short] MacOS (Intel): 0x114160
     * @note[short] Windows: 0x330670
     * @note[short] Android
     */
    void controlAreaEffect(EnterEffectObject* object, std::vector<EnterEffectInstance>* instances, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xef9b8
     * @note[short] MacOS (Intel): 0x114c20
     * @note[short] Windows: 0x330470
     * @note[short] Android
     */
    void controlAreaEffectWithID(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (Intel): 0x116330
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void controlDynamicCommand(EffectGameObject* object, int controlID, std::vector<DynamicObjectAction>& actions, GJActionCommand command);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void controlDynamicMoveCommand(EffectGameObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void controlDynamicRotateCommand(EffectGameObject* object, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xef274
     * @note[short] MacOS (Intel): 0x1144c0
     * @note[short] Windows: 0x33b030
     * @note[short] Android
     */
    void controlEventLink(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xef450
     * @note[short] MacOS (Intel): 0x1146b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void controlGradientTrigger(GradientTriggerObject* object, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xee7dc
     * @note[short] MacOS (Intel): 0x1137f0
     * @note[short] Windows: 0x325a90
     * @note[short] Android
     */
    void controlTriggersInGroup(int group, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xef6fc
     * @note[short] MacOS (Intel): 0x114910
     * @note[short] Windows: 0x326030
     * @note[short] Android
     */
    void controlTriggersWithControlID(int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xe4edc
     * @note[short] MacOS (Intel): 0x106f30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int countCollectedUserCoins();

    /**
     * @note[short] MacOS (ARM): 0xd1364
     * @note[short] MacOS (Intel): 0xf0630
     * @note[short] Windows: 0x3119b0
     * @note[short] Android
     */
    void createBackground(int background);

    /**
     * @note[short] MacOS (ARM): 0xd1898
     * @note[short] MacOS (Intel): 0xf0bb0
     * @note[short] Windows: 0x311df0
     * @note[short] Android
     */
    void createGroundLayer(int ground, int line);

    /**
     * @note[short] MacOS (ARM): 0xdf1d0
     * @note[short] MacOS (Intel): 0x100770
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    StartPosObject* createLiveStartPosObject();

    /**
     * @note[short] MacOS (ARM): 0xd1a7c
     * @note[short] MacOS (Intel): 0xf0dc0
     * @note[short] Windows: 0x311c70
     * @note[short] Android
     */
    void createMiddleground(int middleground);

    /**
     * @note[short] MacOS (ARM): 0x101f50
     * @note[short] MacOS (Intel): 0x1299f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* createNewKeyframeAnim();

    /**
     * @note[short] MacOS (ARM): 0x111314
     * @note[short] MacOS (Intel): 0x13c790
     * @note[short] Windows: 0x34a200
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* createParticle(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] MacOS (ARM): 0xd0fb8
     * @note[short] MacOS (Intel): 0x305780
     * @note[short] Windows: 0x311420
     * @note[short] iOS: 0x277d64
     * @note[short] Android
     */
    void createPlayer();

    /**
     * @note[short] MacOS (ARM): 0xe66bc
     * @note[short] MacOS (Intel): 0x1089e0
     * @note[short] Windows: 0x31fb30
     * @note[short] Android
     */
    void createPlayerCollisionBlock();

    /**
     * @note[short] MacOS (ARM): 0xda598
     * @note[short] MacOS (Intel): 0xfbcb0
     * @note[short] Windows: 0x314df0
     * @note[short] Android
     */
    void createTextLayers();

    /**
     * @note[short] MacOS (ARM): 0xde3dc
     * @note[short] MacOS (Intel): 0xff8d0
     * @note[short] Windows: 0x318510
     * @note[short] Android
     */
    cocos2d::CCArray* damagingObjectsInRect(cocos2d::CCRect rect, bool enabledGroups);

    /**
     * @note[short] MacOS (ARM): 0xe4208
     * @note[short] MacOS (Intel): 0x1061d0
     * @note[short] Windows: 0x31d460
     * @note[short] iOS: 0x284cd4
     * @note[short] Android
     */
    void destroyObject(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn didPickupItem(int p0);

    /**
     * @note[short] Android
     */
    TodoReturn drawHitboxTrail(std::vector<PlayerTrailState>& p0, int p1, cocos2d::CCRect const& p2, float p3);

    /**
     * @note[short] MacOS (ARM): 0xe56dc
     * @note[short] MacOS (Intel): 0x107760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void enterDualMode(GameObject* object, bool unused);

    /**
     * @note[short] MacOS (ARM): 0x110884
     * @note[short] MacOS (Intel): 0x13bae0
     * @note[short] Windows: 0x349410
     * @note[short] Android
     */
    void exitStaticCamera(bool exitX, bool exitY, float time, int easingType, float easingRate, bool smoothVelocity, float smoothVelocityMod, bool exitInstant);

    /**
     * @note[short] MacOS (ARM): 0xdf460
     * @note[short] MacOS (Intel): 0x1009f0
     * @note[short] Windows: 0x3191c0
     * @note[short] Android
     */
    StartPosObject* findStartPosWinnerInArray(cocos2d::CCArray* p0);

    /**
     * @note[short] MacOS (ARM): 0x10a4b0
     * @note[short] MacOS (Intel): 0x134380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void flipFinished();

    /**
     * @note[short] MacOS (ARM): 0xe0b7c
     * @note[short] MacOS (Intel): 0x102310
     * @note[short] Windows: 0x319e20
     * @note[short] iOS: 0x2821b0
     * @note[short] Android
     */
    void flipGravity(PlayerObject* object, bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x1163dc
     * @note[short] MacOS (Intel): 0x142bd0
     * @note[short] Windows: 0x350d30
     * @note[short] Android
     */
    void flipObjects();

    /**
     * @note[short] MacOS (ARM): 0xdc778
     * @note[short] MacOS (Intel): 0xfd8a0
     * @note[short] Windows: 0x33ac80
     * @note[short] iOS: 0x27eca8
     * @note[short] Android
     */
    void gameEventTriggered(GJGameEvent event, int material, int playerID);

    /**
     * @note[short] MacOS (ARM): 0xd9f48
     * @note[short] MacOS (Intel): 0xfb4c0
     * @note[short] Windows: 0x314ac0
     * @note[short] Android
     */
    int generateEnterEasingBuffer(int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0xd9ec0
     * @note[short] MacOS (Intel): 0xfb430
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void generateEnterEasingBuffers(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe49e8
     * @note[short] MacOS (Intel): 0x1069d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void generatePickupAnimRandVal(GameObject* object, float& randomValue1, float& randomValue2);

    /**
     * @note[short] MacOS (ARM): 0xd3fac
     * @note[short] MacOS (Intel): 0xf3710
     * @note[short] Windows: 0x3255b0
     * @note[short] Android
     */
    void generateSpawnRemap();

    /**
     * @note[short] MacOS (Intel): 0xf68f0
     * @note[short] Windows: 0x32d610
     * @note[short] Android
     */
    void generateTargetGroups();

    /**
     * @note[short] MacOS (ARM): 0xd8030
     * @note[short] MacOS (Intel): 0xf8e00
     * @note[short] Windows: 0x33a090
     * @note[short] Android
     */
    void generateVisibilityGroups();

    /**
     * @note[short] MacOS (ARM): 0xe7fec
     * @note[short] MacOS (Intel): 0x10a430
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getActiveOrderSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0xfb7fc
     * @note[short] MacOS (Intel): 0x121e10
     * @note[short] Windows: 0x330cc0
     * @note[short] Android
     */
    float getAreaObjectValue(EnterEffectInstance* instance, GameObject* object, cocos2d::CCPoint& position, bool& show);

    /**
     * @note[short] MacOS (ARM): 0xe5eb0
     * @note[short] MacOS (Intel): 0x1080c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getBumpMod(PlayerObject* player, int type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getCameraEdgeValue(int type);

    /**
     * @note[short] MacOS (ARM): 0xda28c
     * @note[short] MacOS (Intel): 0xfb8a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getCapacityString();

    /**
     * @note[short] MacOS (ARM): 0xf5590
     * @note[short] MacOS (Intel): 0x11a9a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GameObject* getCenterGroupObject(int groupID, int defaultID);

    /**
     * @note[short] MacOS (ARM): 0xd9da4
     * @note[short] MacOS (Intel): 0xfb310
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::vector<EnterEffectInstance>* getCustomEnterEffects(int id, bool enter);

    /**
     * @note[short] MacOS (ARM): 0xfba2c
     * @note[short] MacOS (Intel): 0x122040
     * @note[short] Windows: 0x330eb0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getEasedAreaValue(GameObject* object, EnterEffectInstance* instance, float value, bool show, int index);

    /**
     * @note[short] MacOS (ARM): 0xd9f04
     * @note[short] MacOS (Intel): 0xfb480
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getEnterEasingKey(int easingType, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0xda22c
     * @note[short] MacOS (Intel): 0xfb830
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getEnterEasingValue(float value, int easingType, float easingRate, int easingBuffer);

    /**
     * @note[short] MacOS (ARM): 0xfef2c
     * @note[short] MacOS (Intel): 0x126020
     * @note[short] Windows: 0x337480
     * @note[short] Android
     */
    cocos2d::CCPoint getFollowSpeedVal(GameObject* object, int startSpeedRef, int startDirRef, float startDir, float startSpeed);

    /**
     * @note[short] MacOS (ARM): 0xdeaf4
     * @note[short] MacOS (Intel): 0x100060
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getGroundHeight(PlayerObject* player, int type);

    /**
     * @note[short] MacOS (ARM): 0xdea80
     * @note[short] MacOS (Intel): 0x100000
     * @note[short] Windows: 0x318c30
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getGroundHeightForMode(int type);

    /**
     * @note[short] MacOS (ARM): 0xd9074
     * @note[short] MacOS (Intel): 0xfa290
     * @note[short] Windows: 0x32bf10
     * @note[short] Android
     */
    cocos2d::CCArray* getGroup(int id);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GameObject* getGroupParent(int groupId);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getGroupParentsString(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x1025ac
     * @note[short] MacOS (Intel): 0x12a0f0
     * @note[short] Windows: 0x33ceb0
     * @note[short] Android
     */
    double getItemValue(int type, int id);

    /**
     * @note[short] MacOS (ARM): 0xe1844
     * @note[short] MacOS (Intel): 0x1031c0
     * @note[short] Windows: 0x31aa60
     * @note[short] Android
     */
    float getMaxPortalY();

    /**
     * @note[short] MacOS (ARM): 0x112f88
     * @note[short] MacOS (Intel): 0x13e550
     * @note[short] Windows: 0x34cb10
     * @note[short] Android
     */
    float getMinDistance(cocos2d::CCPoint position, cocos2d::CCArray* objects, float minNear, int mode);

    /**
     * @note[short] MacOS (ARM): 0xe1768
     * @note[short] MacOS (Intel): 0x1030e0
     * @note[short] Windows: 0x31a980
     * @note[short] Android
     */
    float getMinPortalY();

    /**
     * @note[short] MacOS (ARM): 0x1065ac
     * @note[short] MacOS (Intel): 0x12f180
     * @note[short] Windows: 0x340630
     * @note[short] iOS: 0x29a680
     * @note[short] Android
     */
    double getModifiedDelta(float dt);

    /**
     * @note[short] MacOS (ARM): 0xe71e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getMoveTargetDelta(EffectGameObject* object, bool mainObject);

    /**
     * @note[short] MacOS (ARM): 0xf5114
     * @note[short] MacOS (Intel): 0x11a560
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getOptimizedGroup(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xdebfc
     * @note[short] MacOS (Intel): 0x100170
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    PlayerObject* getOtherPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x110ed8
     * @note[short] MacOS (Intel): 0x13c2d0
     * @note[short] Windows: 0x349fd0
     * @note[short] Android
     */
    std::string getParticleKey(int objectType, char const* plistName, int tag, cocos2d::tCCPositionType positionType);

    /**
     * @note[short] MacOS (ARM): 0x111240
     * @note[short] MacOS (Intel): 0x13c6c0
     * @note[short] Windows: 0x34a150
     * @note[short] Android
     */
    std::string getParticleKey2(std::string key);

    /**
     * @note[short] MacOS (ARM): 0x10a884
     * @note[short] MacOS (Intel): 0x1347e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getPlayerButtonID(int button, bool player2);

    /**
     * @note[short] MacOS (ARM): 0x10a508
     * @note[short] MacOS (Intel): 0x1343e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getPlayTimerFullSeconds();

    /**
     * @note[short] MacOS (ARM): 0x10a4ec
     * @note[short] MacOS (Intel): 0x1343c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getPlayTimerMilli();

    /**
     * @note[short] MacOS (ARM): 0xdc36c
     * @note[short] MacOS (Intel): 0xfd4b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    TeleportPortalObject* getPortalTarget(TeleportPortalObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdc488
     * @note[short] MacOS (Intel): 0xfd5c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getPortalTargetPos(TeleportPortalObject* object, GameObject* target, PlayerObject* player);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getRecordExtra();

    /**
     * @note[short] MacOS (Intel): 0x136650
     * @note[short] Windows: 0x4d46e0
     * @note[short] Android
     */
    std::string getRecordString(bool compress);

    /**
     * @note[short] MacOS (ARM): 0xf0a10
     * @note[short] MacOS (Intel): 0x1159a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void getRotateCommandTargets(EnhancedTriggerObject* object, GameObject*& centerObject, GameObject*& targetObject, GameObject*& rotateObject);

    /**
     * @note[short] MacOS (Intel): 0x1096c0
     * @note[short] Windows: 0x320820
     * @note[short] Android
     */
    cocos2d::CCPoint getSavedPosition(int groupID, float delay);

    /**
     * @note[short] MacOS (ARM): 0xe6694
     * @note[short] MacOS (Intel): 0x108990
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getScaledGroundHeight(float height);

    /**
     * @note[short] MacOS (ARM): 0xe03e0
     * @note[short] MacOS (Intel): 0x101b20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* getSingleGroupObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xd9bdc
     * @note[short] MacOS (Intel): 0xfb170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getSpecialKey(int groupID, bool ignoreGroupParent, bool ignoreLinkedObjects);

    /**
     * @note[short] MacOS (ARM): 0xdf3ac
     * @note[short] MacOS (Intel): 0x100940
     * @note[short] Windows: 0x3190f0
     * @note[short] Android
     */
    cocos2d::CCArray* getStartPosObjectsForCurrentMode();

    /**
     * @note[short] MacOS (ARM): 0xf5188
     * @note[short] MacOS (Intel): 0x11a5d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getStaticGroup(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xf696c
     * @note[short] MacOS (Intel): 0x11c1f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getStickyGroup(int group);

    /**
     * @note[short] MacOS (ARM): 0xe1324
     * @note[short] MacOS (Intel): 0x102ba0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float getTargetFlyCameraY(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf6ef0
     * @note[short] MacOS (Intel): 0x11c860
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getTargetGroup(int index, int uniqueID);

    /**
     * @note[short] MacOS (Intel): 0x11c890
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getTargetGroupOrigin(int index, int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0xe3cac
     * @note[short] MacOS (Intel): 0x105c60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void gravBumpPlayer(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf6978
     * @note[short] MacOS (Intel): 0x11c210
     * @note[short] Windows: 0x32d310
     * @note[short] Android
     */
    void groupStickyObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x1014bc
     * @note[short] MacOS (Intel): 0x128ec0
     * @note[short] Windows: 0x33c5b0
     * @note[short] iOS: 0x296dfc
     * @note[short] Android
     */
    void handleButton(bool down, int button, bool isPlayer1);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasItem(int id);

    /**
     * @note[short] MacOS (ARM): 0xe4400
     * @note[short] MacOS (Intel): 0x1063b0
     * @note[short] Windows: 0x31dc20
     * @note[short] Android
     */
    bool hasUniqueCoin(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd22b8
     * @note[short] MacOS (Intel): 0xf16b0
     * @note[short] Windows: 0x312d10
     * @note[short] Android
     */
    void increaseBatchNodeCapacity();

    /**
     * @note[short] MacOS (ARM): 0x10a494
     * @note[short] MacOS (Intel): 0x134350
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isFlipping();

    /**
     * @note[short] Android
     */
    bool isGroupParentOf(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x10a878
     * @note[short] MacOS (Intel): 0x1347d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool isPlayer2Button(int button);

    /**
     * @note[short] MacOS (ARM): 0x1165b0
     * @note[short] MacOS (Intel): 0x142dd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x2a5098
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint to, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0xdc52c
     * @note[short] MacOS (Intel): 0xfd640
     * @note[short] Windows: 0x351030
     * @note[short] iOS: 0x27ea80
     * @note[short] Android
     */
    void lightningFlash(cocos2d::CCPoint from, cocos2d::CCPoint to, cocos2d::ccColor3B color, float lineWidth, float duration, int displacement, bool flash, float opacity);

    /**
     * @note[short] MacOS (ARM): 0xf6578
     * @note[short] Android
     */
    void loadGroupParentsFromString(GameObject* object, std::string groupList);

    /**
     * @note[short] MacOS (ARM): 0x10d8d8
     * @note[short] MacOS (Intel): 0x1380a0
     * @note[short] Windows: 0x344c60
     * @note[short] Android
     */
    void loadLevelSettings();

    /**
     * @note[short] MacOS (ARM): 0x104054
     * @note[short] MacOS (Intel): 0x12c2f0
     * @note[short] Windows: 0x33e460
     * @note[short] Android
     */
    void loadStartPosObject(StartPosObject* p0);

    /**
     * @note[short] MacOS (Intel): 0x12c540
     * @note[short] Windows: 0x33e670
     * @note[short] Android
     */
    void loadUpToPosition(float position, int order, int channel);

    /**
     * @note[short] Android
     */
    TodoReturn lockExistingFirstParents();

    /**
     * @note[short] MacOS (ARM): 0xe42ec
     * @note[short] MacOS (Intel): 0x1062a0
     * @note[short] Android
     */
    void logPickupItem(EffectGameObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xf1e04
     * @note[short] MacOS (Intel): 0x116ec0
     * @note[short] Windows: 0x32b460
     * @note[short] Android
     */
    int maxZOrderForShaderZ(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0xf4810
     * @note[short] MacOS (Intel): 0x119bb0
     * @note[short] Windows: 0x32b3b0
     * @note[short] Android
     */
    int minZOrderForShaderZ(int zLayer);

    /**
     * @note[short] MacOS (ARM): 0xff6bc
     * @note[short] MacOS (Intel): 0x1268a0
     * @note[short] Windows: 0x337920
     * @note[short] Android
     */
    void modifyGroupPhysics(AdvancedFollowEditObject* object, cocos2d::CCArray* group);

    /**
     * @note[short] MacOS (ARM): 0xff7fc
     * @note[short] MacOS (Intel): 0x126ae0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void modifyObjectPhysics(AdvancedFollowEditObject* object, GameObjectPhysics& physics);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x333700
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void moveAreaObject(GameObject* object, float dx, float dy);

    /**
     * @note[short] MacOS (ARM): 0x110078
     * @note[short] MacOS (Intel): 0x13b080
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void moveCameraToPos(cocos2d::CCPoint pos);

    /**
     * @note[short] MacOS (ARM): 0xfeed4
     * @note[short] MacOS (Intel): 0x125fc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void moveObject(GameObject* object, double dx, double dy, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0xfec60
     * @note[short] MacOS (Intel): 0x125ca0
     * @note[short] Windows: 0x3368d0
     * @note[short] Android
     */
    void moveObjects(cocos2d::CCArray* objects, double dx, double dy, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0xf0750
     * @note[short] MacOS (Intel): 0x115660
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void moveObjectsSilent(int groupId, double dx, double dy);

    /**
     * @note[short] MacOS (ARM): 0x100fa0
     * @note[short] MacOS (Intel): 0x128970
     * @note[short] Windows: 0x339f10
     * @note[short] Android
     */
    void moveObjectToStaticGroup(GameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn objectForUniqueID(int p0);

    /**
     * @note[short] MacOS (ARM): 0xded7c
     * @note[short] MacOS (Intel): 0x1002d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool objectIntersectsCircle(GameObject* object, GameObject* circle);

    /**
     * @note[short] MacOS (ARM): 0xe0f7c
     * @note[short] MacOS (Intel): 0x102760
     * @note[short] Windows: 0x33b210
     * @note[short] Android
     */
    GJGameEvent objectTypeToGameEvent(int type);

    /**
     * @note[short] MacOS (ARM): 0xd44ec
     * @note[short] MacOS (Intel): 0x7c3c0
     * @note[short] Windows: 0x339520
     * @note[short] Android
     */
    void optimizeMoveGroups();

    /**
     * @note[short] MacOS (ARM): 0x115530
     * @note[short] MacOS (Intel): 0x141b90
     * @note[short] Windows: 0x350080
     * @note[short] Android
     */
    void orderSpawnObjects();

    /**
     * @note[short] MacOS (ARM): 0xda980
     * @note[short] MacOS (Intel): 0xfc0f0
     * @note[short] Windows: 0x3152d0
     * @note[short] Android
     */
    cocos2d::CCNode* parentForZLayer(int zLayer, bool blending, int parentMode, int uiObject);

    /**
     * @note[short] Android
     */
    void parseRecording(std::string record, bool restore);

    /**
     * @note[short] MacOS (ARM): 0x1064dc
     * @note[short] MacOS (Intel): 0x12f080
     * @note[short] Windows: 0x340330
     * @note[short] Android
     */
    void pauseAudio();

    /**
     * @note[short] MacOS (ARM): 0x102634
     * @note[short] MacOS (Intel): 0x12a160
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double performMathOperation(double operand1, double operand2, int operation);

    /**
     * @note[short] MacOS (ARM): 0x102684
     * @note[short] MacOS (Intel): 0x12a1c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    double performMathRounding(double value, int type);

    /**
     * @note[short] MacOS (ARM): 0xe4534
     * @note[short] MacOS (Intel): 0x1064b0
     * @note[short] Windows: 0x31d580
     * @note[short] iOS: 0x284f3c
     * @note[short] Android
     */
    void pickupItem(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5fa0
     * @note[short] MacOS (Intel): 0x108190
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void playAnimationCommand(int id, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xdec20
     * @note[short] MacOS (Intel): 0x1001a0
     * @note[short] Windows: 0x318cd0
     * @note[short] Android
     */
    bool playerCircleCollision(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdecd8
     * @note[short] MacOS (Intel): 0x100240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool playerIntersectsCircle(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5dc0
     * @note[short] MacOS (Intel): 0x107fd0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playerTouchedObject(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe3ed4
     * @note[short] MacOS (Intel): 0x105e90
     * @note[short] Windows: 0x31f5a0
     * @note[short] iOS: 0x284a60
     * @note[short] Android
     */
    void playerTouchedRing(PlayerObject* player, RingObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe3f98
     * @note[short] MacOS (Intel): 0x105f40
     * @note[short] Windows: 0x31f6b0
     * @note[short] iOS: 0x284b24
     * @note[short] Android
     */
    void playerTouchedTrigger(PlayerObject* player, EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5d68
     * @note[short] MacOS (Intel): 0x107f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool playerWasTouchingObject(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe0cec
     * @note[short] MacOS (Intel): 0x102490
     * @note[short] Windows: 0x31a210
     * @note[short] iOS: 0x282320
     * @note[short] Android
     */
    void playerWillSwitchMode(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5200
     * @note[short] MacOS (Intel): 0x107290
     * @note[short] Windows: 0x31e430
     * @note[short] Android
     */
    void playExitDualEffect(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x11669c
     * @note[short] MacOS (Intel): 0x142ed0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void playFlashEffect(float duration, int flashes, float unknown);

    /**
     * @note[short] MacOS (Intel): 0x6d6ff0
     * @note[short] Windows: 0x31f270
     * @note[short] Android
     */
    void playKeyframeAnimation(KeyframeAnimTriggerObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x110d48
     * @note[short] MacOS (Intel): 0x13c150
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void playSpeedParticle(float timeMod);

    /**
     * @note[short] MacOS (ARM): 0xf458c
     * @note[short] Windows: 0x32b1f0
     * @note[short] Android
     */
    cocos2d::CCPoint positionForShaderTarget(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xd7bc8
     * @note[short] Windows: 0x32edb0
     * @note[short] Android
     */
    void positionUIObjects();

    /**
     * @note[short] MacOS (ARM): 0xd4d20
     * @note[short] Windows: 0x320d40
     * @note[short] Android
     */
    void prepareSavePositionObjects();

    /**
     * @note[short] MacOS (ARM): 0xfc020
     * @note[short] MacOS (Intel): 0x1226d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void prepareTransformParent(bool rotateNode);

    /**
     * @note[short] MacOS (ARM): 0x1064d0
     * @note[short] MacOS (Intel): 0x12f070
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preResumeGame();

    /**
     * @note[short] MacOS (ARM): 0x104df8
     * @note[short] MacOS (Intel): 0x12d340
     * @note[short] Windows: 0x33f0f0
     * @note[short] Android
     */
    void preUpdateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): 0x114024
     * @note[short] MacOS (Intel): 0x13fb40
     * @note[short] Windows: 0x34da60
     * @note[short] Android
     */
    void processActivatedAudioTriggers(float levelTime);

    /**
     * @note[short] MacOS (ARM): 0xff8e4
     * @note[short] Windows: 0x337e60
     * @note[short] Android
     */
    void processAdvancedFollowAction(AdvancedFollowInstance& instance, bool started, float dt);

    /**
     * @note[short] MacOS (ARM): 0xfdfe8
     * @note[short] MacOS (Intel): 0x124dc0
     * @note[short] Windows: 0x337c40
     * @note[short] Android
     */
    void processAdvancedFollowActions(float dt);

    /**
     * @note[short] Windows: 0x331c00
     * @note[short] Android
     */
    void processAreaActions(float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0xf8d7c
     * @note[short] Windows: 0x331030
     * @note[short] Android
     */
    void processAreaEffects(std::vector<EnterEffectInstance>* effects, GJAreaActionType type, float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0xfa910
     * @note[short] MacOS (Intel): 0x120de0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void processAreaFadeGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups);

    /**
     * @note[short] MacOS (ARM): 0xfa334
     * @note[short] MacOS (Intel): 0x1205c0
     * @note[short] Windows: 0x333120
     * @note[short] Android
     */
    void processAreaMoveGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xfa050
     * @note[short] MacOS (Intel): 0x120290
     * @note[short] Windows: 0x3329d0
     * @note[short] Android
     */
    void processAreaRotateGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xfaafc
     * @note[short] MacOS (Intel): 0x121030
     * @note[short] Windows: 0x3337f0
     * @note[short] Android
     */
    void processAreaTintGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, bool targetGroups);

    /**
     * @note[short] MacOS (ARM): 0xf9c4c
     * @note[short] MacOS (Intel): 0x11fe50
     * @note[short] Windows: 0x331e60
     * @note[short] Android
     */
    void processAreaTransformGroupAction(cocos2d::CCArray* objects, EnterEffectInstance* instance, cocos2d::CCPoint position, int outerMin, int outerMax, int middleMin, int middleMax, int startIndex, bool targetGroups, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xfb7b0
     * @note[short] MacOS (Intel): 0x121dc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void processAreaVisualActions(float dt);

    /**
     * @note[short] MacOS (ARM): 0xdeedc
     * @note[short] MacOS (Intel): 0x100450
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* processCameraObject(GameObject* object, PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x107f44
     * @note[short] MacOS (Intel): 0x1312d0
     * @note[short] Windows: 0x342870
     * @note[short] iOS: 0x29b644
     * @note[short] Android
     */
    void processCommands(float dt, bool isHalfTick, bool isLastTick);

    /**
     * @note[short] MacOS (ARM): 0xfc588
     * @note[short] MacOS (Intel): 0x122ca0
     * @note[short] Windows: 0x336e00
     * @note[short] Android
     */
    void processDynamicObjectActions(int type, float dt);

    /**
     * @note[short] MacOS (ARM): 0xfe1b0
     * @note[short] Windows: 0x339100
     * @note[short] Android
     */
    void processFollowActions();

    /**
     * @note[short] MacOS (ARM): 0xe4f44
     * @note[short] MacOS (Intel): 0x106f80
     * @note[short] Windows: 0x31d760
     * @note[short] Android
     */
    void processItems();

    /**
     * @note[short] MacOS (ARM): 0xfdc20
     * @note[short] MacOS (Intel): 0x124900
     * @note[short] Windows: 0x336170
     * @note[short] Android
     */
    void processMoveActions();

    /**
     * @note[short] MacOS (Intel): 0x122b70
     * @note[short] Windows: 0x334220
     * @note[short] Android
     */
    void processMoveActionsStep(float dt, bool visibleFrame);

    /**
     * @note[short] MacOS (ARM): 0xf4d10
     * @note[short] MacOS (Intel): 0x11a0f0
     * @note[short] Windows: 0x32b9d0
     * @note[short] Android
     */
    void processOptionsTrigger(GameOptionsTrigger* object);

    /**
     * @note[short] MacOS (ARM): 0xfddac
     * @note[short] MacOS (Intel): 0x124af0
     * @note[short] Windows: 0x336a50
     * @note[short] Android
     */
    void processPlayerFollowActions(float dt);

    /**
     * @note[short] MacOS (Intel): 0x139730
     * @note[short] Windows: 0x345a70
     * @note[short] Android
     */
    void processQueuedAudioTriggers();

    /**
     * @note[short] MacOS (ARM): 0x101390
     * @note[short] MacOS (Intel): 0x128da0
     * @note[short] Windows: 0x33a9a0
     * @note[short] iOS: 0x296d40
     * @note[short] Android
     */
    void processQueuedButtons(float dt, bool clearInputQueue);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void processReplayCheckpoint(int id);

    /**
     * @note[short] MacOS (ARM): 0xfd4f8
     * @note[short] MacOS (Intel): 0x1240c0
     * @note[short] Windows: 0x334450
     * @note[short] Android
     */
    void processRotationActions();

    /**
     * @note[short] MacOS (ARM): 0xd8bc0
     * @note[short] MacOS (Intel): 0xf9e20
     * @note[short] Windows: 0x34bab0
     * @note[short] Android
     */
    void processSFXObjects();

    /**
     * @note[short] MacOS (ARM): 0x113ac0
     * @note[short] MacOS (Intel): 0x13f3b0
     * @note[short] Windows: 0x34f1b0
     * @note[short] Android
     */
    void processSFXState(SFXTriggerState* state1, SFXTriggerState* state2, int type, float levelTime);

    /**
     * @note[short] MacOS (ARM): 0x115134
     * @note[short] MacOS (Intel): 0x1415a0
     * @note[short] Windows: 0x34f640
     * @note[short] Android
     */
    bool processSongState(int musicID, float spawnDelay, float levelTime, int songOffset, float volume, float speed, std::vector<SongTriggerState>* states, SongTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xdf654
     * @note[short] MacOS (Intel): 0x100c10
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void processStartPosObjects();

    /**
     * @note[short] MacOS (ARM): 0xe6450
     * @note[short] MacOS (Intel): 0x108710
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void processStateObjects();

    /**
     * @note[short] MacOS (ARM): 0xfca58
     * @note[short] MacOS (Intel): 0x123290
     * @note[short] Windows: 0x335280
     * @note[short] Android
     */
    void processTransformActions(bool visibleFrame);

    /**
     * @note[short] Android
     */
    TodoReturn promoteGroupParent(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x10121c
     * @note[short] MacOS (Intel): 0x128c20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void queueButton(int button, bool push, bool isPlayer2, double timestamp);

    /**
     * @note[short] MacOS (ARM): 0x104ce4
     * @note[short] MacOS (Intel): 0x12d200
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void queueTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0xf6ccc
     * @note[short] MacOS (Intel): 0x11c590
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reAddToStickyGroup(GameObject* object);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void recordAction(int button, bool down, bool player2);

    /**
     * @note[short] Android
     */
    TodoReturn recordHitboxTrail();

    /**
     * @note[short] Android
     */
    TodoReturn recordHitboxTrailState(PlayerObject* p0, std::vector<PlayerTrailState>& p1, int& p2);

    /**
     * @note[short] MacOS (ARM): 0xde8ec
     * @note[short] MacOS (Intel): 0xffe50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool rectIntersectsCircle(cocos2d::CCRect rect, cocos2d::CCPoint center, float radius);

    /**
     * @note[short] MacOS (ARM): 0x103c0c
     * @note[short] MacOS (Intel): 0x12bda0
     * @note[short] Windows: 0x33e280
     * @note[short] Android
     */
    void refreshCounterLabels();

    /**
     * @note[short] MacOS (ARM): 0xd89f0
     * @note[short] MacOS (Intel): 0xf9c30
     * @note[short] Windows: 0x33c9b0
     * @note[short] Android
     */
    void refreshKeyframeAnims();

    /**
     * @note[short] MacOS (ARM): 0xd410c
     * @note[short] MacOS (Intel): 0xf38a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void regenerateEnterEasingBuffers();

    /**
     * @note[short] MacOS (ARM): 0xee5fc
     * @note[short] MacOS (Intel): 0x1135f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int registerSpawnRemap(std::vector<ChanceObject>& spawnRemap);

    /**
     * @note[short] MacOS (ARM): 0xe63fc
     * @note[short] MacOS (Intel): 0x1086c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void registerStateObject(EffectGameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn remapGroupParent(GameObject* p0, int p1, int p2);

    /**
     * @note[short] MacOS (ARM): 0xd150c
     * @note[short] MacOS (Intel): 0xf07f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeBackground();

    /**
     * @note[short] MacOS (ARM): 0xd988c
     * @note[short] MacOS (Intel): 0xfad00
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeCustomEnterEffects(int id, bool enter);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeFromGroupParents(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf51fc
     * @note[short] MacOS (Intel): 0x11a640
     * @note[short] Windows: 0x32bd40
     * @note[short] Android
     */
    void removeFromGroups(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf6c40
     * @note[short] MacOS (Intel): 0x11c500
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeFromStickyGroup(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd1bbc
     * @note[short] MacOS (Intel): 0xf0f20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeGroundLayer();

    /**
     * @note[short] Android
     */
    TodoReturn removeGroupParent(GameObject* p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x102114
     * @note[short] MacOS (Intel): 0x129be0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd1b88
     * @note[short] MacOS (Intel): 0xf0ef0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeMiddleground();

    /**
     * @note[short] MacOS (ARM): 0xf7378
     * @note[short] MacOS (Intel): 0x11cd20
     * @note[short] Windows: 0x32f9f0
     * @note[short] Android
     */
    void removeObjectFromSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe5680
     * @note[short] MacOS (Intel): 0x107700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removePlayer2();

    /**
     * @note[short] MacOS (ARM): 0x1010d0
     * @note[short] MacOS (Intel): 0x128ac0
     * @note[short] Windows: 0x33a810
     * @note[short] iOS: 0x296ac8
     * @note[short] Android
     */
    void removeReleasedButtons();

    /**
     * @note[short] MacOS (ARM): 0x10e6e8
     * @note[short] MacOS (Intel): 0x1391f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeTemporaryParticles();

    /**
     * @note[short] MacOS (ARM): 0xe6ad0
     * @note[short] MacOS (Intel): 0x108e50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reorderObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf4764
     * @note[short] MacOS (Intel): 0x119b30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reparentObject(cocos2d::CCNode* node, cocos2d::CCNode* parent);

    /**
     * @note[short] MacOS (ARM): 0xd9124
     * @note[short] MacOS (Intel): 0xfa330
     * @note[short] Windows: 0x314420
     * @note[short] iOS: 0x27cb1c
     * @note[short] Android
     */
    void resetActiveEnterEffects();

    /**
     * @note[short] MacOS (ARM): 0xf992c
     * @note[short] MacOS (Intel): 0x11fa00
     * @note[short] Windows: 0x3308a0
     * @note[short] Android
     */
    bool resetAreaObjectValues(GameObject* object, bool update);

    /**
     * @note[short] MacOS (ARM): 0x106530
     * @note[short] MacOS (Intel): 0x12f0f0
     * @note[short] Windows: 0x340590
     * @note[short] Android
     */
    void resetAudio();

    /**
     * @note[short] MacOS (ARM): 0x10e7a0
     * @note[short] MacOS (Intel): 0x1392c0
     * @note[short] Windows: 0x349720
     * @note[short] Android
     */
    void resetCamera();

    /**
     * @note[short] MacOS (ARM): 0xf1c58
     * @note[short] MacOS (Intel): 0x116cb0
     * @note[short] Windows: 0x328d10
     * @note[short] Android
     */
    void resetGradientLayers();

    /**
     * @note[short] MacOS (ARM): 0x103e9c
     * @note[short] MacOS (Intel): 0x12c0f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetGroupCounters(bool reset);

    /**
     * @note[short] MacOS (ARM): 0x10dd14
     * @note[short] MacOS (Intel): 0x1384f0
     * @note[short] Windows: 0x344fa0
     * @note[short] Android
     */
    void resetLevelVariables();

    /**
     * @note[short] MacOS (ARM): 0x100f60
     * @note[short] MacOS (Intel): 0x128910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetMoveOptimizedValue();

    /**
     * @note[short] MacOS (ARM): 0xdef64
     * @note[short] MacOS (Intel): 0x1004e0
     * @note[short] Windows: 0x318f90
     * @note[short] Android
     */
    void resetPlayer();

    /**
     * @note[short] MacOS (Intel): 0x134ba0
     * @note[short] Windows: 0x342ad0
     * @note[short] Android
     */
    void resetRecord(int steps, bool loadedSave);

    /**
     * @note[short] MacOS (ARM): 0x10aa4c
     * @note[short] MacOS (Intel): 0x134ae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetRecordFull();

    /**
     * @note[short] MacOS (ARM): 0x104560
     * @note[short] MacOS (Intel): 0x12c8e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetSongTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x10ea58
     * @note[short] MacOS (Intel): 0x684c0
     * @note[short] Windows: 0x350130
     * @note[short] Android
     */
    void resetSpawnChannelIndex();

    /**
     * @note[short] MacOS (ARM): 0xe1684
     * @note[short] MacOS (Intel): 0x102fc0
     * @note[short] Windows: 0x349a00
     * @note[short] Android
     */
    void resetStaticCamera(bool resetX, bool resetY);

    /**
     * @note[short] MacOS (ARM): 0xfb6f4
     * @note[short] MacOS (Intel): 0x121d20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetStoppedAreaObjects();

    /**
     * @note[short] MacOS (ARM): 0xf74f8
     * @note[short] MacOS (Intel): 0x11cee0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void restoreAllUIObjects();

    /**
     * @note[short] MacOS (ARM): 0x104bdc
     * @note[short] MacOS (Intel): 0x12d080
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restoreDefaultGameplayOffsetX();

    /**
     * @note[short] MacOS (ARM): 0x104bf8
     * @note[short] MacOS (Intel): 0x12d0c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void restoreDefaultGameplayOffsetY();

    /**
     * @note[short] Android
     */
    void restoreRecording(std::string record);

    /**
     * @note[short] MacOS (ARM): 0xeca30
     * @note[short] MacOS (Intel): 0x1111b0
     * @note[short] Android
     */
    void restoreRemap(EffectGameObject* object, std::unordered_map<int, int>& remap);

    /**
     * @note[short] MacOS (ARM): 0x106508
     * @note[short] MacOS (Intel): 0x12f0c0
     * @note[short] Windows: 0x340480
     * @note[short] Android
     */
    void resumeAudio();

    /**
     * @note[short] MacOS (ARM): 0xfc084
     * @note[short] MacOS (Intel): 0x122740
     * @note[short] Windows: 0x332d40
     * @note[short] Android
     */
    void rotateAreaObjects(GameObject* object, cocos2d::CCArray* objects, float rotation, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xfe7a4
     * @note[short] MacOS (Intel): 0x125760
     * @note[short] Windows: 0x334d00
     * @note[short] Android
     */
    void rotateObject(GameObject* object, float rotation);

    /**
     * @note[short] MacOS (ARM): 0xfe820
     * @note[short] MacOS (Intel): 0x1257e0
     * @note[short] Windows: 0x334da0
     * @note[short] Android
     */
    void rotateObjects(cocos2d::CCArray* objects, float rotation, cocos2d::CCPoint position, cocos2d::CCPoint offset, bool finished, bool unused);

    /**
     * @note[short] MacOS (ARM): 0xdf178
     * @note[short] MacOS (Intel): 0x100720
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setActiveStartPosObject(StartPosObject* p0);

    /**
     * @note[short] MacOS (ARM): 0xad80
     * @note[short] MacOS (Intel): 0x11ad00
     * @note[short] Windows: 0x32c3a0
     * @note[short] Android
     */
    void setGroupParent(GameObject* object, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xce858
     * @note[short] MacOS (Intel): 0xed8b0
     * @note[short] Windows: 0x30eb00
     * @note[short] iOS: 0x275c10
     * @note[short] Android
     */
    void setupLayers();

    /**
     * @note[short] MacOS (Intel): 0x100da0
     * @note[short] Windows: 0x3193a0
     * @note[short] Android
     */
    void setupLevelStart(LevelSettingsObject* settings);

    /**
     * @note[short] MacOS (ARM): 0x325600
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void setupReplay(std::string inputs);

    /**
     * @note[short] MacOS (ARM): 0x10f6b4
     * @note[short] MacOS (Intel): 0x13a410
     * @note[short] Windows: 0x345bc0
     * @note[short] Android
     */
    void shakeCamera(float duration, float strength, float interval);

    /**
     * @note[short] MacOS (ARM): 0xd0d6c
     * @note[short] MacOS (Intel): 0xf0080
     * @note[short] Windows: 0x311160
     * @note[short] Android
     */
    bool shouldExitHackedLevel();

    /**
     * @note[short] MacOS (ARM): 0x1016cc
     * @note[short] MacOS (Intel): 0x1290d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool shouldUseSubstepForButton(float dt);

    /**
     * @note[short] MacOS (ARM): 0xf5520
     * @note[short] MacOS (Intel): 0x11a940
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void sortAllGroupsX();

    /**
     * @note[short] MacOS (ARM): 0xd41e8
     * @note[short] MacOS (Intel): 0xf39e0
     * @note[short] Windows: 0x32bf80
     * @note[short] Android
     */
    void sortGroups();

    /**
     * @note[short] MacOS (ARM): 0xf8180
     * @note[short] MacOS (Intel): 0x11dea0
     * @note[short] Windows: 0x32fc30
     * @note[short] Android
     */
    void sortSectionVector();

    /**
     * @note[short] MacOS (ARM): 0xdf740
     * @note[short] MacOS (Intel): 0x100d20
     * @note[short] Windows: 0x3192b0
     * @note[short] Android
     */
    void sortStartPosObjects();

    /**
     * @note[short] MacOS (ARM): 0xd63b0
     * @note[short] MacOS (Intel): 0xf67a0
     * @note[short] Windows: 0x32d1b0
     * @note[short] Android
     */
    void sortStickyGroups();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void spawnGroupTriggered(int targetID, float delay, bool spawnOrdered, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xe8320
     * @note[short] MacOS (Intel): 0x10a770
     * @note[short] Windows: 0x322560
     * @note[short] Android
     */
    void spawnObjectsInOrder(cocos2d::CCArray* objects, double delay, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x110c70
     * @note[short] MacOS (Intel): 0x13c0a0
     * @note[short] Windows: 0x349ef0
     * @note[short] Android
     */
    cocos2d::CCParticleSystemQuad* spawnParticle(char const* plist, int zOrder, cocos2d::tCCPositionType positionType, cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x110b0c
     * @note[short] MacOS (Intel): 0x13bec0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void spawnParticleTrigger(SpawnParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xe4648
     * @note[short] MacOS (Intel): 0x1065c0
     * @note[short] Windows: 0x349ad0
     * @note[short] Android
     */
    void spawnParticleTrigger(int particleID, cocos2d::CCPoint position, float rotation, float scale);

    /**
     * @note[short] MacOS (ARM): 0xe5184
     * @note[short] MacOS (Intel): 0x107210
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void spawnPlayer2();

    /**
     * @note[short] MacOS (ARM): 0xf4654
     * @note[short] Windows: 0x32b2a0
     * @note[short] Android
     */
    cocos2d::CCPoint speedForShaderTarget(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xddebc
     * @note[short] MacOS (Intel): 0xff3e0
     * @note[short] Windows: 0x318160
     * @note[short] Android
     */
    cocos2d::CCArray* staticObjectsInRect(cocos2d::CCRect rect, bool enabledGroups);

    /**
     * @note[short] MacOS (ARM): 0xe1740
     * @note[short] MacOS (Intel): 0x84220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopAllGroundActions();

    /**
     * @note[short] MacOS (ARM): 0x10f738
     * @note[short] MacOS (Intel): 0xc55f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopCameraShake();

    /**
     * @note[short] MacOS (ARM): 0xd9c10
     * @note[short] MacOS (Intel): 0xfb1a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopCustomEnterEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xd9c64
     * @note[short] MacOS (Intel): 0xfb1f0
     * @note[short] Windows: 0x3147c0
     * @note[short] Android
     */
    void stopCustomEnterEffect(EnterEffectObject* object, bool enter);

    /**
     * @note[short] MacOS (ARM): 0xef0bc
     * @note[short] MacOS (Intel): 0x114310
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopSFXTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (Intel): 0xf0820
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void swapBackground(int background);

    /**
     * @note[short] MacOS (ARM): 0xd1820
     * @note[short] MacOS (Intel): 0xf0b50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void swapGround(int ground);

    /**
     * @note[short] MacOS (Intel): 0xf0ca0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void swapMiddleground(int middleground);

    /**
     * @note[short] MacOS (ARM): 0xe0474
     * @note[short] MacOS (Intel): 0x101bb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void switchToFlyMode(PlayerObject* player, GameObject* object, bool noPortal, int type);

    /**
     * @note[short] MacOS (ARM): 0xe066c
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void switchToRobotMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0xe05c0
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void switchToRollMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0xe0718
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void switchToSpiderMode(PlayerObject* player, GameObject* object, bool noPortal);

    /**
     * @note[short] MacOS (ARM): 0x10dbfc
     * @note[short] MacOS (Intel): 0x1383e0
     * @note[short] Windows: 0x344f00
     * @note[short] Android
     */
    void syncBGTextures();

    /**
     * @note[short] MacOS (ARM): 0xdbcc0
     * @note[short] MacOS (Intel): 0xfcdd0
     * @note[short] Windows: 0x315f20
     * @note[short] iOS: 0x27e3d8
     * @note[short] Android
     */
    void teleportPlayer(TeleportPortalObject* object, PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x102288
     * @note[short] MacOS (Intel): 0x129d90
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void testInstantCountTrigger(int itemID, int compareCount, int groupID, bool activateGroup, int triggerMode, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xce6f4
     * @note[short] MacOS (Intel): 0xed740
     * @note[short] Windows: 0x352dd0
     * @note[short] Android
     */
    void toggleAudioVisualizer(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xe00b8
     * @note[short] MacOS (Intel): 0x1017a0
     * @note[short] Windows: 0x31de10
     * @note[short] iOS: 0x281a5c
     * @note[short] Android
     */
    void toggleDualMode(GameObject* object, bool dual, PlayerObject* player, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0xe07c4
     * @note[short] MacOS (Intel): 0x101f00
     * @note[short] Windows: 0x350b00
     * @note[short] iOS: 0x281f24
     * @note[short] Android
     */
    void toggleFlipped(bool flip, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0xf4b78
     * @note[short] MacOS (Intel): 0x119f40
     * @note[short] Windows: 0x32b860
     * @note[short] Android
     */
    void toggleGroup(int id, bool activate);

    /**
     * @note[short] MacOS (ARM): 0xf4f6c
     * @note[short] MacOS (Intel): 0x11a390
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleLockPlayer(bool disable, bool player2);

    /**
     * @note[short] MacOS (ARM): 0xf4ef4
     * @note[short] MacOS (Intel): 0x11a310
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void togglePlayerStreakBlend(bool blend, bool force);

    /**
     * @note[short] MacOS (ARM): 0x10459c
     * @note[short] MacOS (Intel): 0x12c930
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xf4f40
     * @note[short] MacOS (Intel): 0x11a360
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void togglePlayerVisibility(bool visible, bool player1);

    /**
     * @note[short] MacOS (ARM): 0xfbb34
     * @note[short] MacOS (Intel): 0x122150
     * @note[short] Windows: 0x332360
     * @note[short] Android
     */
    void transformAreaObjects(GameObject* object, cocos2d::CCArray* objects, float scaleX, float scaleY, bool reset);

    /**
     * @note[short] MacOS (ARM): 0xf1584
     * @note[short] MacOS (Intel): 0x116570
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerAdvancedFollowCommand(AdvancedFollowTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0xff0b0
     * @note[short] MacOS (Intel): 0x126190
     * @note[short] Windows: 0x3375f0
     * @note[short] Android
     */
    void triggerAdvancedFollowEditCommand(AdvancedFollowEditObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf841c
     * @note[short] MacOS (Intel): 0x11e210
     * @note[short] Windows: 0x32fe50
     * @note[short] Android
     */
    void triggerAreaEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf87f0
     * @note[short] MacOS (Intel): 0x11e720
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerAreaEffectAnimation(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf066c
     * @note[short] MacOS (Intel): 0x1155a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerDynamicMoveCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf10c4
     * @note[short] MacOS (Intel): 0x116010
     * @note[short] Windows: 0x327000
     * @note[short] Android
     */
    void triggerDynamicRotateCommand(EnhancedTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf1794
     * @note[short] MacOS (Intel): 0x1167d0
     * @note[short] Windows: 0x3274b0
     * @note[short] Android
     */
    void triggerGradientCommand(GradientTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf492c
     * @note[short] MacOS (Intel): 0x119cc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerGravityChange(EffectGameObject* object, int playerID);

    /**
     * @note[short] MacOS (ARM): 0xf039c
     * @note[short] MacOS (Intel): 0x115280
     * @note[short] Windows: 0x3264c0
     * @note[short] Android
     */
    void triggerMoveCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf0ef0
     * @note[short] MacOS (Intel): 0x115e20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerRotateCommand(EnhancedTriggerObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf2cfc
     * @note[short] MacOS (Intel): 0x117f40
     * @note[short] Windows: 0x328da0
     * @note[short] Android
     */
    void triggerShaderCommand(ShaderGameObject* object);

    /**
     * @note[short] Windows: 0x327220
     * @note[short] Android
     */
    void triggerTransformCommand(TransformTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xf5690
     * @note[short] MacOS (Intel): 0x11aab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    GameObject* tryGetGroupParent(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xe6328
     * @note[short] MacOS (Intel): 0x1085f0
     * @note[short] Windows: 0x481b80
     * @note[short] Android
     */
    GameObject* tryGetMainObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0xdf090
     * @note[short] MacOS (Intel): 0x100640
     * @note[short] Windows: 0x32c2b0
     * @note[short] Android
     */
    GameObject* tryGetObject(int groupID);

    /**
     * @note[short] MacOS (ARM): 0x106550
     * @note[short] MacOS (Intel): 0x12f120
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void tryResumeAudio();

    /**
     * @note[short] MacOS (ARM): 0x111b04
     * @note[short] MacOS (Intel): 0x13cf80
     * @note[short] Windows: 0x34a840
     * @note[short] Android
     */
    void unclaimParticle(char const* key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0xf6a90
     * @note[short] MacOS (Intel): 0x11c330
     * @note[short] Windows: 0x32d430
     * @note[short] Android
     */
    void ungroupStickyObjects(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x101dc8
     * @note[short] MacOS (Intel): 0x129820
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void unlinkAllEvents();

    /**
     * @note[short] Android
     */
    TodoReturn unlockExistingFirstParents();

    /**
     * @note[short] MacOS (ARM): 0xd918c
     * @note[short] MacOS (Intel): 0xfa3a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateActiveEnterEffect(EnterEffectObject* object);

    /**
     * @note[short] MacOS (ARM): 0x10db94
     * @note[short] MacOS (Intel): 0x138380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateAllObjectSection();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x330b00
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void updateAreaObjectLastValues(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x107e30
     * @note[short] MacOS (Intel): 0x131160
     * @note[short] Windows: 0x352b60
     * @note[short] iOS: 0x29b530
     * @note[short] Android
     */
    void updateAudioVisualizer();

    /**
     * @note[short] MacOS (ARM): 0x10e5c8
     * @note[short] MacOS (Intel): 0x139060
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBGArtSpeed(float modX, float modY);

    /**
     * @note[short] MacOS (ARM): 0x1083f8
     * @note[short] MacOS (Intel): 0x131810
     * @note[short] Windows: 0x345c60
     * @note[short] Android
     */
    void updateCamera(float dt);

    /**
     * @note[short] MacOS (ARM): 0x10f978
     * @note[short] MacOS (Intel): 0x13a760
     * @note[short] Windows: 0x348360
     * @note[short] Android
     */
    void updateCameraBGArt(cocos2d::CCPoint position, float zoom);

    /**
     * @note[short] MacOS (ARM): 0x104a94
     * @note[short] MacOS (Intel): 0x12cf60
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCameraEdge(int direction, int value);

    /**
     * @note[short] MacOS (ARM): 0xe0c78
     * @note[short] MacOS (Intel): 0x102410
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateCameraMode(EffectGameObject* obj, bool updateDual);

    /**
     * @note[short] MacOS (ARM): 0x1048fc
     * @note[short] Windows: 0x33ed80
     * @note[short] Android
     */
    void updateCameraOffsetX(float offsetX, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x1049c8
     * @note[short] Windows: 0x33ee20
     * @note[short] Android
     */
    void updateCameraOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] Windows: 0x31ff10
     * @note[short] Android
     */
    void updateCollisionBlocks();

    /**
     * @note[short] MacOS (ARM): 0xe59d4
     * @note[short] MacOS (Intel): 0x107ad0
     * @note[short] Windows: 0x33cb90
     * @note[short] Android
     */
    void updateCounters(int itemId, int value);

    /**
     * @note[short] MacOS (ARM): 0xe096c
     * @note[short] MacOS (Intel): 0x1020f0
     * @note[short] Windows: 0x31a4a0
     * @note[short] Android
     */
    void updateDualGround(PlayerObject* object, int mode, bool instant, float duration);

    /**
     * @note[short] MacOS (ARM): 0xd9e18
     * @note[short] MacOS (Intel): 0xfb370
     * @note[short] Windows: 0x3149e0
     * @note[short] Android
     */
    void updateEnterEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0xf812c
     * @note[short] MacOS (Intel): 0x11de50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateExtendedCollision(GameObject* object, bool extendedCollision);

    /**
     * @note[short] MacOS (ARM): 0xf4834
     * @note[short] MacOS (Intel): 0x119bd0
     * @note[short] Windows: 0x32b500
     * @note[short] Android
     */
    void updateExtraGameLayers();

    /**
     * @note[short] MacOS (ARM): 0x104bec
     * @note[short] MacOS (Intel): 0x12d0a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGameplayOffsetX(int offsetX, bool staticOffset);

    /**
     * @note[short] MacOS (ARM): 0x104c08
     * @note[short] MacOS (Intel): 0x12d0e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGameplayOffsetY(int offsetY, bool staticOffset);

    /**
     * @note[short] MacOS (ARM): 0xf1e28
     * @note[short] MacOS (Intel): 0x116ee0
     * @note[short] Windows: 0x327940
     * @note[short] iOS: 0x28b844
     * @note[short] Android
     */
    void updateGradientLayers();

    /**
     * @note[short] MacOS (ARM): 0xd1c04
     * @note[short] MacOS (Intel): 0xf0f70
     * @note[short] Windows: 0x311ef0
     * @note[short] Android
     */
    void updateGroundShadows();

    /**
     * @note[short] MacOS (ARM): 0x107d58
     * @note[short] MacOS (Intel): 0x131090
     * @note[short] Windows: 0x3509f0
     * @note[short] iOS: 0x29b45c
     * @note[short] Android
     */
    void updateGuideArt();

    /**
     * @note[short] MacOS (ARM): 0x1102fc
     * @note[short] MacOS (Intel): 0x13b370
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateInternalCamOffsetX(float offsetX, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x1103d8
     * @note[short] MacOS (Intel): 0x13b460
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateInternalCamOffsetY(float offsetY, float duration, float easingRate);

    /**
     * @note[short] MacOS (ARM): 0x102044
     * @note[short] MacOS (Intel): 0x129ad0
     * @note[short] Windows: 0x33c8e0
     * @note[short] Android
     */
    void updateKeyframeOrder(int keyframeGroup);

    /**
     * @note[short] Windows: 0x312df0
     * @note[short] Android
     */
    void updateLayerCapacity(std::string capacityString);

    /**
     * @note[short] MacOS (ARM): 0xd2354
     * @note[short] MacOS (Intel): 0xf1750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateLegacyLayerCapacity(int front, int frontBlend, int back, int backBlend);

    /**
     * @note[short] MacOS (ARM): 0xd15d4
     * @note[short] MacOS (Intel): 0xf08a0
     * @note[short] Windows: 0x312620
     * @note[short] Android
     */
    void updateLevelColors();

    /**
     * @note[short] MacOS (ARM): 0x10da98
     * @note[short] MacOS (Intel): 0x138290
     * @note[short] Windows: 0x344e20
     * @note[short] Android
     */
    void updateMaxGameplayY();

    /**
     * @note[short] MacOS (ARM): 0x10e5fc
     * @note[short] MacOS (Intel): 0x1390a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMGArtSpeed(float modX, float modY);

    /**
     * @note[short] MacOS (ARM): 0x104c14
     * @note[short] MacOS (Intel): 0x12d100
     * @note[short] Windows: 0x33eec0
     * @note[short] Android
     */
    void updateMGOffsetY(float offsetY, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xde888
     * @note[short] MacOS (Intel): 0xffdd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateOBB2(cocos2d::CCRect rect);

    /**
     * @note[short] MacOS (ARM): 0x25d73c
     * @note[short] MacOS (Intel): 0x13db00
     * @note[short] Windows: 0x34b3a0
     * @note[short] Android
     */
    void updateParticles(float dt);

    /**
     * @note[short] MacOS (ARM): 0x10a52c
     * @note[short] MacOS (Intel): 0x134410
     * @note[short] Windows: 0x3422c0
     * @note[short] Android
     */
    void updatePlatformerTime();

    /**
     * @note[short] MacOS (ARM): 0xe6968
     * @note[short] MacOS (Intel): 0x108cb0
     * @note[short] Windows: 0x31fd50
     * @note[short] Android
     */
    void updatePlayerCollisionBlocks();

    /**
     * @note[short] MacOS (ARM): 0x10a3d0
     * @note[short] MacOS (Intel): 0x134290
     * @note[short] Windows: 0x34c460
     * @note[short] iOS: 0x29d1d8
     * @note[short] Android
     */
    void updateProximityVolumeEffects();

    /**
     * @note[short] MacOS (ARM): 0x103b70
     * @note[short] MacOS (Intel): 0x12bce0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateQueuedLabels();

    /**
     * @note[short] MacOS (ARM): 0x10a944
     * @note[short] MacOS (Intel): 0x1349f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateReplay();

    /**
     * @note[short] MacOS (ARM): 0xe7644
     * @note[short] MacOS (Intel): 0x109aa0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateSavePositionObjects();

    /**
     * @note[short] MacOS (ARM): 0xf3448
     * @note[short] MacOS (Intel): 0x118950
     * @note[short] Windows: 0x32a030
     * @note[short] iOS: 0x28cd60
     * @note[short] Android
     */
    void updateShaderLayer(float dt);

    /**
     * @note[short] MacOS (ARM): 0xd3f40
     * @note[short] MacOS (Intel): 0xf36a0
     * @note[short] Windows: 0x313fb0
     * @note[short] Android
     */
    void updateSpecialGroupData();

    /**
     * @note[short] MacOS (ARM): 0x109fac
     * @note[short] MacOS (Intel): 0x133d40
     * @note[short] Windows: 0x341fe0
     * @note[short] Android
     */
    void updateSpecialLabels();

    /**
     * @note[short] MacOS (ARM): 0xe13d0
     * @note[short] MacOS (Intel): 0x102c20
     * @note[short] Windows: 0x3490a0
     * @note[short] Android
     */
    void updateStaticCameraPos(cocos2d::CCPoint pos, bool staticX, bool staticY, bool followOrSmoothEase, float time, int easingType, float easingRate);

    /**
     * @note[short] MacOS (Intel): 0x13b630
     * @note[short] Windows: 0x348d60
     * @note[short] Android
     */
    void updateStaticCameraPosToGroup(int centerID, bool updateX, bool updateY, bool followObject, float followEase, float duration, int easingType, float easingRate, bool smoothVelocity, float velocityMod);

    /**
     * @note[short] MacOS (ARM): 0xe0b08
     * @note[short] MacOS (Intel): 0x102290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTimeMod(float speed, bool players, bool noEffects);

    /**
     * @note[short] MacOS (ARM): 0x103688
     * @note[short] MacOS (Intel): 0x12b690
     * @note[short] Windows: 0x33df60
     * @note[short] Android
     */
    void updateTimerLabels();

    /**
     * @note[short] MacOS (ARM): 0x1045f0
     * @note[short] MacOS (Intel): 0x12c9a0
     * @note[short] Windows: 0x33eac0
     * @note[short] Android
     */
    void updateZoom(float zoom, float duration, int easing, float rate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x117978
     * @note[short] MacOS (Intel): 0x1444d0
     * @note[short] Windows: 0x352590
     * @note[short] Android
     */
    void visitWithColorFlash();

    /**
     * @note[short] MacOS (ARM): 0x112c60
     * @note[short] MacOS (Intel): 0x13e170
     * @note[short] Windows: 0x34c740
     * @note[short] Android
     */
    float volumeForProximityEffect(SFXTriggerInstance& instance);

    /**
     * @note[short] Android
     */
    void syncDeathMarkerFlip();
    GEODE_PAD(8);
    GJGameState m_gameState;
    GJGameLevel* m_level;
    void* m_unk798;
    void* m_unk7a0;
    void* m_unk7a8;
    int m_unk7b0;
    PlaybackMode m_playbackMode;
    bool m_lowDetailMode;
    bool m_extraLDM;
    bool m_ignoreDamage;
    bool m_enable22Changes;
    bool m_allowStaticRotate;
    bool m_fixNegativeScale;
    bool m_unk7be;
    bool m_startingFromBeginning;
    std::vector<SFXTriggerGameObject*> m_activeSfxTriggers;
    std::vector<void*> m_unk8a0;
    cocos2d::CCNode* m_hoverNode;
    cocos2d::CCNode* m_areaTransformNode;
    cocos2d::CCNode* m_areaSkewNode;
    cocos2d::CCNode* m_areaScaleNode;
    cocos2d::CCNode* m_areaRotateNode;
    cocos2d::CCNode* m_areaTransformNode2;
    OBB2D* m_obb2;
    std::vector<std::unordered_map<int,int>> m_spawnRemapTriggers;
    std::unordered_map<int, cocos2d::CCPoint> m_uiObjectPositions;
    GJEffectManager* m_effectManager;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT5;
    cocos2d::CCSpriteBatchNode* m_gameLayerT4;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_glowLayerT4;
    CCNodeContainer* m_specialLayerT4;
    cocos2d::CCSpriteBatchNode* m_textLayerT4;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_fireLayerT4;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT4;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_particleLayerT4;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_game2LayerT4;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT4;
    cocos2d::CCSpriteBatchNode* m_gameLayerT3;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_glowLayerT3;
    CCNodeContainer* m_specialLayerT3;
    cocos2d::CCSpriteBatchNode* m_textLayerT3;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_fireLayerT3;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT3;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_particleLayerT3;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_game2LayerT3;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT3;
    cocos2d::CCSpriteBatchNode* m_gameLayerT2;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_glowLayerT2;
    CCNodeContainer* m_specialLayerT2;
    cocos2d::CCSpriteBatchNode* m_textLayerT2;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_fireLayerT2;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT2;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_particleLayerT2;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_game2LayerT2;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT2;
    cocos2d::CCSpriteBatchNode* m_gameLayerT1;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_glowLayerT1;
    CCNodeContainer* m_specialLayerT1;
    cocos2d::CCSpriteBatchNode* m_textLayerT1;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_fireLayerT1;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_pixelLayerT1;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_particleLayerT1;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_game2LayerT1;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerT1;
    cocos2d::CCSpriteBatchNode* m_game2LayerB0;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB0;
    cocos2d::CCSpriteBatchNode* m_gameLayerB1;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_glowLayerB1;
    CCNodeContainer* m_specialLayerB1;
    cocos2d::CCSpriteBatchNode* m_textLayerB1;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_fireLayerB1;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB1;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_particleLayerB1;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_game2LayerB1;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB1;
    cocos2d::CCSpriteBatchNode* m_gameLayerB2;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_glowLayerB2;
    CCNodeContainer* m_specialLayerB2;
    cocos2d::CCSpriteBatchNode* m_textLayerB2;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_fireLayerB2;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB2;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_particleLayerB2;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_game2LayerB2;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB2;
    cocos2d::CCSpriteBatchNode* m_gameLayerB3;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_glowLayerB3;
    CCNodeContainer* m_specialLayerB3;
    cocos2d::CCSpriteBatchNode* m_textLayerB3;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_fireLayerB3;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB3;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_particleLayerB3;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_game2LayerB3;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB3;
    cocos2d::CCSpriteBatchNode* m_gameLayerB4;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_glowLayerB4;
    CCNodeContainer* m_specialLayerB4;
    cocos2d::CCSpriteBatchNode* m_textLayerB4;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_fireLayerB4;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB4;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_particleLayerB4;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_game2LayerB4;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB4;
    cocos2d::CCSpriteBatchNode* m_gameLayerB5;
    cocos2d::CCSpriteBatchNode* m_gameBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_glowLayerB5;
    CCNodeContainer* m_specialLayerB5;
    cocos2d::CCSpriteBatchNode* m_textLayerB5;
    cocos2d::CCSpriteBatchNode* m_textBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_fireLayerB5;
    cocos2d::CCSpriteBatchNode* m_fireBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_pixelLayerB5;
    cocos2d::CCSpriteBatchNode* m_pixelBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_particleLayerB5;
    cocos2d::CCSpriteBatchNode* m_particleBlendingLayerB5;
    cocos2d::CCSpriteBatchNode* m_game2LayerB5;
    cocos2d::CCSpriteBatchNode* m_game2BlendingLayerB5;
    PlayerObject* m_player1;
    PlayerObject* m_player2;
    LevelSettingsObject* m_levelSettings;
    cocos2d::CCArray* m_objects;
    cocos2d::CCArray* m_collisionBlocks;
    int m_unkObjId;
    cocos2d::CCArray* m_spawnObjectsArray;
    cocos2d::CCDictionary* m_spawnObjects;
    cocos2d::CCNode* m_unkdd0;
    std::vector<GameObject*> m_unkdd8;
    std::vector<GameObject*> m_disabledObjects;
    std::vector<GameObject*> m_unke08;
    std::vector<GameObject*> m_areaObjects;
    std::vector<GameObject*> m_processedAreaObjects;
    std::unordered_map<int, std::vector<GameObject*>> m_visibilityGroups;
    std::vector<GameObject*> m_visibleObjects;
    int m_visibleObjectsCount;
    int m_visibleObjectsIndex;
    std::vector<GameObject*> m_visibleObjects2;
    int m_visibleObjects2Count;
    int m_visibleObjects2Index;
    int m_unked0;
    int m_disabledObjectsCount;
    int m_unked8;
    int m_areaObjectsCount;
    int m_processedAreaObjectsCount;
    int m_unkee4;
    int m_disabledObjectsIndex;
    int m_unkeec;
    int m_areaObjectsIndex;
    int m_processedAreaObjectsIndex;
    cocos2d::CCDictionary* m_groupDict;
    cocos2d::CCDictionary* m_staticGroupDict;
    cocos2d::CCDictionary* m_optimizedGroupDict;
    std::vector<cocos2d::CCArray*> m_groups;
    std::vector<cocos2d::CCArray*> m_staticGroups;
    std::vector<cocos2d::CCArray*> m_optimizedGroups;
    cocos2d::CCDictionary* m_parentGroupsDict;
    cocos2d::CCDictionary* m_parentGroupIDs;
    cocos2d::CCDictionary* m_removedParentGroupIDs;
    std::unordered_set<int> m_groupParents;
    std::unordered_map<int, std::unordered_set<int>> m_unkIntToUsetIntUmap;
    std::unordered_set<int> m_unkUsetGroupParent;
    cocos2d::CCArray* m_targetGroupsArray;
    std::unordered_map<int, std::pair<int, int>> m_targetGroups;
    cocos2d::CCDictionary* m_linkedGroupDict;
    int m_lastUsedLinkedID;
    cocos2d::CCNode* m_objectParent;
    cocos2d::CCNode* m_inShaderParent;
    cocos2d::CCNode* m_aboveShaderParent;
    cocos2d::CCLayer* m_objectLayer;
    cocos2d::CCLayer* m_inShaderObjectLayer;
    cocos2d::CCLayer* m_aboveShaderObjectLayer;
    cocos2d::CCSprite* m_background;
    void* m_unk1000;
    GJGroundLayer* m_groundLayer;
    GJGroundLayer* m_groundLayer2;
    GJMGLayer* m_middleground;
    cocos2d::CCArray* m_batchNodes;
    cocos2d::CCDictionary* m_objectsToDeactivate;
    std::unordered_map<int, std::vector<LabelGameObject*>> m_labelObjects;
    std::unordered_map<int, std::vector<LabelGameObject*>> m_timeLabelObjects;
    std::set<std::tuple<int, int, int>> m_spawnTuples;
    bool m_increasedLayerCapacity;
    std::array<float, 2000> m_varianceValues;
    std::map<std::pair<int, int>, std::pair<float, float>> m_destroyObjectValues;
    std::vector<float> m_enterEasingValues;
    std::unordered_map<int, int> m_enterEasingIndices;
    int m_enterEasingValuesIndex;
    bool m_dualTouchTrigger;
    int m_clicks;
    int m_attempts;
    bool m_jumping;
    int m_leftSectionIndex;
    int m_rightSectionIndex;
    int m_bottomSectionIndex;
    int m_topSectionIndex;
    bool m_isEditor;
    bool m_blending;
    bool m_isPlatformer;
    GameObject* m_player1CollisionBlock;
    GameObject* m_player2CollisionBlock;
    int m_particleCount;
    bool m_disableCustomParticles;
    int m_unk2fe8;
    int m_customParticleCount;
    int m_particleSystemLimit;
    cocos2d::CCDictionary* m_particlesDict;
    cocos2d::CCDictionary* m_customParticles;
    cocos2d::CCArray* m_unclaimedParticles;
    std::unordered_map<int, std::string> m_particleCountToParticleString;
    cocos2d::CCDictionary* m_claimedParticles;
    cocos2d::CCArray* m_temporaryParticles;
    std::unordered_set<int> m_customParticlesUIDs;
    cocos2d::CCDictionary* m_gradientLayers;
    int m_activeGradients;
    ShaderLayer* m_shaderLayer;
    bool m_objectsDeactivated;
    bool m_areaObjectsUpdated;
    StartPosObject* m_startPosObject;
    cocos2d::CCArray* m_startPosObjects;
    bool m_useReplay;
    bool m_unk3189;
    int m_solidCollisionObjectsCount;
    int m_solidCollisionObjectsIndex;
    std::vector<GameObject*> m_solidCollisionObjects;
    int m_hazardCollisionObjectsCount;
    int m_hazardCollisionObjectsIndex;
    std::vector<GameObject*> m_hazardCollisionObjects;
    std::vector<SequenceTriggerGameObject*> m_sequenceTriggers;
    bool m_isPracticeMode;
    bool m_practiceMusicSync;
    float m_loadingProgress;
    cocos2d::CCNode* m_flashNode;
    float m_unk31f8;
    float m_cameraFlip;
    float m_cameraWidthOffset;
    float m_cameraHeightOffset;
    bool m_updateGroundShadows;
    cocos2d::CCDictionary* m_collectedItems;
    cocos2d::CCDictionary* m_collectibleLog;
    float m_levelLength;
    bool m_resetActiveObjects;
    bool m_skipArtReload;
    EndPortalObject* m_endPortal;
    bool m_isTestMode;
    bool m_freezeStartCamera;
    bool m_unk322a;
    int m_unk314c;
    int m_unk3150;
    float m_cameraUnzoomedHeightOffset;
    float m_targetCameraHeightOffset;
    bool m_calculateTargetHeightOffset;
    cocos2d::CCParticleSystemQuad* m_glitterParticles;
    bool m_staticCameraShake;
    bool m_skipCameraShake;
    bool m_playerDied;
    double m_extraDelta;
    bool m_started;
    bool m_unk3251;
    float m_cameraWidth;
    float m_cameraHeight;
    float m_cameraUnzoomedX;
    float m_halfCameraWidth;
    AudioEffectsLayer* m_audioEffectsLayer;
    OBB2D* m_cameraObb2;
    std::vector<GameObject*> m_activeObjects;
    int m_activeObjectsCount;
    int m_activeObjectsIndex;
    cocos2d::ccColor3B m_lightBGColor;
    int m_resumeTimer;
    bool m_recordInputs;
    bool m_unk32a1;
    bool m_unk32a2;
    bool m_unk32a3;
    bool m_unk32a4;
    std::string m_recordString;
    cocos2d::CCObject* m_unk32c8;
    int m_unk32d0;
    bool m_unk32d4;
    uint64_t m_randomSeed;
    union {
        uint64_t m_recordSeed{};
        uint64_t m_unk32e0;
    };
    uint64_t m_replayRandSeed;
    int m_unk32ec;
    int m_currentStep;
    std::vector<PlayerButtonCommand> m_queuedButtons;
    std::vector<RecordButtonCommand> m_queuedRecordedButtons;
    std::unordered_map<int, RecordCheckpoint> m_recordedCheckpoints;
    int m_replayParseCounter;
    std::vector<RecordButtonCommand> m_queuedReplayButtons;
    std::unordered_map<int, RecordCheckpoint> m_recordedCheckpoints2;
    std::vector<void*> m_unk3340;
    std::vector<void*> m_unk3358;
    int m_queuedRecordedButtonsSize;
    std::string m_persistentStateString;
    std::string m_savedPersistentStateString;
    int m_savedAttempts;
    int m_spawnCount;
    bool m_spawnAbuse;
    bool m_portalIndicators;
    bool m_orbIndicators;
    cocos2d::CCArray* m_indicatorSprites;
    float m_unk3380;
    std::vector<int> m_unk3388;
    std::vector<int> m_unk33a0;
    bool m_hideGround;
    cocos2d::CCArray* m_unk33c0;
    cocos2d::CCArray* m_objectsToMove;
    std::unordered_map<int, GameObject*> m_savePositionObjects;
    std::unordered_map<int, int> m_savePositionValues;
    cocos2d::CCDictionary* m_keyframeGroups;
    int m_keyframeGroup;
    UILayer* m_uiLayer;
    cocos2d::CCArray* m_uiObjects;
    cocos2d::CCDictionary* m_uiObjectLayers;
    cocos2d::CCNode* m_uiTriggerUI;
    double m_timePlayed;
    int m_tickIndex;
    int m_clickIndex;
    bool m_levelEndAnimationStarted;
    int m_points;
    std::string m_pointsString;
    std::vector<std::vector<std::vector<GameObject*>*>*> m_sections;
    std::vector<std::vector<std::vector<GameObject*>*>*> m_nonEffectObjects;
    std::vector<std::vector<GameObject*>*> m_collisionBlockSections;
    std::vector<GameObject*> m_calcNonEffectObjects;
    int m_calcNonEffectObjectsSize;
    std::vector<GameObject*> m_calcCollisionBlockObjects;
    int m_calcCollisionBlockObjectsSize;
    std::vector<GameObject*> m_calcCollisionBlockObjects2;
    int m_calcCollisionBlockObjects2Size;
    std::vector<std::vector<int>*> m_sectionSizes;
    std::vector<std::vector<int>*> m_nonEffectObjectsSizes;
    std::vector<std::vector<int>*> m_collisionBlockSectionSizes;
    std::vector<std::vector<bool>*> m_nonEffectObjectsFlags;
    float m_sectionXFactor;
    float m_sectionYFactor;
    float m_maxGameplayY;
    float m_songTriggerInterval;
    std::unordered_map<int, int> m_stickyGroups;
    FMODLevelVisualizer* m_audioVisualizerBG;
    FMODLevelVisualizer* m_audioVisualizerSFX;
    bool m_showAudioVisualizer;
    int m_areaMovedCount;
    int m_areaScaledCount;
    int m_areaRotatedCount;
    int m_areaColorCount;
    int m_areaMovedCountTotal;
    int m_areaScaledCountTotal;
    int m_areaRotatedCountTotal;
    int m_areaColorCountTotal;
    int m_movedCount;
    int m_scaledCount;
    int m_rotatedCount;
    int m_followedCount;
    int m_areaMovedCountDisplay;
    int m_areaScaledCountDisplay;
    int m_areaRotatedCountDisplay;
    int m_areaColorCountDisplay;
    int m_areaMovedCountTotalDisplay;
    int m_areaScaledCountTotalDisplay;
    int m_areaRotatedCountTotalDisplay;
    int m_areaColorCountTotalDisplay;
    int m_movedCountDisplay;
    int m_scaledCountDisplay;
    int m_rotatedCountDisplay;
    int m_followedCountDisplay;
    bool m_loadingStartPosition;
    bool m_processingAudioTriggers;
    bool m_audioPaused;
    bool m_startOptimization;
    GJGameLoadingLayer* m_loadingLayer;
    cocos2d::CCDrawNode* m_debugDrawNode;
    cocos2d::CCDrawNode* m_debugDrawNode2;
    std::array<cocos2d::CCPoint, 400>* m_debugDrawPoints;
    bool m_isDebugDrawEnabled;
    bool m_disablePlayerHitbox;
    bool m_hitboxesOnDeath;
    bool m_hitboxTrailInPractice;
    bool m_hitboxTrailOnDeath;
    bool m_hitboxTrailHighlight;
    std::vector<PlayerTrailState> m_player1HitboxTrail;
    std::vector<PlayerTrailState> m_player2HitboxTrail;
    int m_player1HitboxTrailLimit;
    int m_player2HitboxTrailLimit;
    bool m_hitboxTrailDirty;
    bool m_unk3651;
    cocos2d::CCRect m_hitboxTrailDrawArea;
    bool m_lastHitboxTrailHighlight;
    bool m_lastHitboxTrailDied;
    GameObject* m_anticheatSpike;
    double m_timestamp;
    bool m_isBetweenSteps;
    bool m_clickBetweenSteps;
    bool m_clickOnSteps;
    std::unordered_map<int, GameObject*> m_unk3680;
};
