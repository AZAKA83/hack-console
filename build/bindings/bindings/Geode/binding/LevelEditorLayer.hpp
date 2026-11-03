#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/mapping/ParticleStruct.hpp>
#include <Geode/binding/EditorBuildStats.hpp>
#include <Geode/binding/TraceDrawObject.hpp>
#include <Geode/binding/TraceGroupOutline.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
#include <Geode/binding/LevelSettingsDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/SeedValue.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class LevelEditorLayer : public GJBaseGameLayer, public LevelSettingsDelegate {
public:
    static constexpr auto CLASS_NAME = "LevelEditorLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(LevelEditorLayer, GJBaseGameLayer)

    /**
     * @note[short] MacOS (ARM): 0xc4258
     * @note[short] MacOS (Intel): 0xde790
     * @note[short] Windows: 0x3ec2f0
     * @note[short] Android: Rebinded
     */
     LevelEditorLayer();

    /**
     * @note[short] MacOS (ARM): 0x9836c
     * @note[short] MacOS (Intel): 0xa92f0
     * @note[short] Windows: 0x3ecff0
     * @note[short] iOS: 0x3f65a4
     * @note[short] Android: Rebinded
     */
    virtual  ~LevelEditorLayer();

    /**
     * @note[short] MacOS (Intel): 0xa9ce0
     * @note[short] Windows: 0x3ed850
     * @note[short] Android
     */
    static LevelEditorLayer* create(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static LevelEditorLayer* get();

    /**
     * @note[short] MacOS (Intel): 0xa9c40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (ARM): 0xa8ad4
     * @note[short] MacOS (Intel): 0xbc880
     * @note[short] Windows: 0x3f4650
     * @note[short] Android
     */
    static void updateObjectLabel(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xbc048
     * @note[short] MacOS (Intel): 0xd5090
     * @note[short] Windows: 0x4089e0
     * @note[short] iOS: 0x40b33c
     * @note[short] Android
     */
    virtual void draw();

    /**
     * @note[short] MacOS (ARM): 0xb2110
     * @note[short] MacOS (Intel): 0xc7310
     * @note[short] Windows: 0x4008c0
     * @note[short] iOS: 0x4056ec
     * @note[short] Android
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): 0xa9aec
     * @note[short] MacOS (Intel): 0xbdae0
     * @note[short] Windows: 0x3f63b0
     * @note[short] iOS: 0x3ffe14
     * @note[short] Android
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): 0xb20fc
     * @note[short] MacOS (Intel): 0xc72f0
     * @note[short] Windows: 0x4008b0
     * @note[short] iOS: 0x4056d8
     * @note[short] Android
     */
    virtual void playerTookDamage(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0xaee80
     * @note[short] MacOS (Intel): 0xc3b50
     * @note[short] Windows: 0x3fc4a0
     * @note[short] iOS: 0x403294
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0xba678
     * @note[short] MacOS (Intel): 0xd2d20
     * @note[short] Windows: 0x406bd0
     * @note[short] iOS: 0x409cfc
     * @note[short] Android
     */
    virtual void updateDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0xba62c
     * @note[short] MacOS (Intel): 0xd2cd0
     * @note[short] Windows: 0x406b80
     * @note[short] iOS: 0x409cb0
     * @note[short] Android
     */
    virtual bool shouldDrawDebugHitboxes();

    /**
     * @note[short] MacOS (ARM): 0xba638
     * @note[short] MacOS (Intel): 0xd2ce0
     * @note[short] Windows: 0x406b90
     * @note[short] iOS: 0x409cbc
     * @note[short] Android
     */
    virtual bool shouldDrawHitboxTrail();

    /**
     * @note[short] MacOS (ARM): 0xba644
     * @note[short] MacOS (Intel): 0xd2cf0
     * @note[short] Windows: 0x406ba0
     * @note[short] iOS: 0x409cc8
     * @note[short] Android
     */
    virtual bool shouldRecordHitboxTrail();

    /**
     * @note[short] MacOS (ARM): 0xba66c
     * @note[short] MacOS (Intel): 0xd2d10
     * @note[short] Windows: 0x406bc0
     * @note[short] iOS: 0x409cf0
     * @note[short] Android
     */
    virtual int getHitboxTrailMax();

    /**
     * @note[short] MacOS (ARM): 0xaf628
     * @note[short] MacOS (Intel): 0xc43d0
     * @note[short] Windows: 0x3fd340
     * @note[short] iOS: 0x40367c
     * @note[short] Android
     */
    virtual void addToGroup(GameObject* object, int groupID, bool triggerGroup);

    /**
     * @note[short] MacOS (ARM): 0xaf6e0
     * @note[short] MacOS (Intel): 0xc4480
     * @note[short] Windows: 0x3fd4a0
     * @note[short] iOS: 0x403704
     * @note[short] Android
     */
    virtual void removeFromGroup(GameObject* object, int groupID);

    /**
     * @note[short] MacOS (ARM): 0xb0794
     * @note[short] MacOS (Intel): 0xc56a0
     * @note[short] Windows: 0x3fe460
     * @note[short] iOS: 0x404414
     * @note[short] Android
     */
    virtual void updateObjectSection(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb08a0
     * @note[short] MacOS (Intel): 0xc57e0
     * @note[short] Windows: 0x3fe710
     * @note[short] iOS: 0x404514
     * @note[short] Android
     */
    virtual void updateDisabledObjectsLastPos(cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xaf120
     * @note[short] MacOS (Intel): 0xc3e50
     * @note[short] Windows: 0x3fd120
     * @note[short] iOS: 0x4034a0
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): 0xaf1ac
     * @note[short] MacOS (Intel): 0xc3ee0
     * @note[short] Windows: 0x3fd1d0
     * @note[short] iOS: 0x403510
     * @note[short] Android
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0xaf1ec
     * @note[short] MacOS (Intel): 0xc3f80
     * @note[short] Windows: 0x3fd240
     * @note[short] iOS: 0x403530
     * @note[short] Android
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0xb05f8
     * @note[short] MacOS (Intel): 0xc5500
     * @note[short] Windows: 0x3fe3f0
     * @note[short] iOS: 0x404328
     * @note[short] Android
     */
    virtual void didRotateGameplay();

    /**
     * @note[short] MacOS (ARM): 0xaa688
     * @note[short] MacOS (Intel): 0xbe6b0
     * @note[short] Windows: 0x3f7420
     * @note[short] iOS: 0x4007d0
     * @note[short] Android
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb3054
     * @note[short] MacOS (Intel): 0xc8320
     * @note[short] Windows: 0x401230
     * @note[short] iOS: 0x406228
     * @note[short] Android
     */
    virtual cocos2d::CCParticleSystemQuad* claimCustomParticle(std::string const& key, cocos2d::ParticleStruct const& particleStruct, int zLayer, int zOrder, int uiObject, bool dontAdd);

    /**
     * @note[short] MacOS (ARM): 0xb3124
     * @note[short] MacOS (Intel): 0xc83d0
     * @note[short] Windows: 0x401300
     * @note[short] iOS: 0x4062f8
     * @note[short] Android
     */
    virtual void unclaimCustomParticle(std::string const& key, cocos2d::CCParticleSystemQuad* particle);

    /**
     * @note[short] MacOS (ARM): 0xb1fec
     * @note[short] MacOS (Intel): 0xc71c0
     * @note[short] Windows: 0x4006f0
     * @note[short] iOS: 0x4055c8
     * @note[short] Android
     */
    virtual void activatedAudioTrigger(SFXTriggerGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb2004
     * @note[short] MacOS (Intel): 0xc71f0
     * @note[short] Windows: 0x400720
     * @note[short] iOS: 0x4055e0
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb3164
     * @note[short] MacOS (Intel): 0xc8410
     * @note[short] Windows: 0x401340
     * @note[short] iOS: 0x406338
     * @note[short] Android
     */
    virtual void addKeyframe(KeyframeGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9caec
     * @note[short] MacOS (Intel): 0xae660
     * @note[short] Windows: 0x3ef860
     * @note[short] iOS: 0x3f91ec
     * @note[short] Android
     */
    virtual void levelSettingsUpdated();

    /**
     * @note[short] MacOS (ARM): 0xae18c
     * @note[short] MacOS (Intel): 0xc2ac0
     * @note[short] Windows: 0x3fb900
     * @note[short] Android
     */
    bool activateTriggerEffect(EffectGameObject* object, float currentTime, float playTime, float boundTime, bool active);

    /**
     * @note[short] Windows: 0x3fc210
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addDelayedSpawn(EffectGameObject* object, float delay);

    /**
     * @note[short] MacOS (ARM): 0xaaf18
     * @note[short] MacOS (Intel): 0xbef50
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addExclusionList(const std::unordered_set<int>& excludes, std::unordered_set<int>& groups);

    /**
     * @note[short] MacOS (ARM): 0x9ceb8
     * @note[short] MacOS (Intel): 0xaea80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* addObjectFromVector(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x9f6a0
     * @note[short] MacOS (Intel): 0xb14c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectsAtPosition(cocos2d::CCPoint position, cocos2d::CCArray* objects, cocos2d::CCArray* result);

    /**
     * @note[short] MacOS (ARM): 0x9f850
     * @note[short] MacOS (Intel): 0xb16c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addObjectsInRect(cocos2d::CCRect rect, bool ignoreGroups, cocos2d::CCArray* objects, cocos2d::CCArray* result);

    /**
     * @note[short] MacOS (ARM): 0xaf5b8
     * @note[short] MacOS (Intel): 0xc4380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addObjectToGroup(GameObject* object, int group);

    /**
     * @note[short] MacOS (ARM): 0xb2498
     * @note[short] MacOS (Intel): 0xc76d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addPlayer2Point(cocos2d::CCPoint point, bool newGroup);

    /**
     * @note[short] MacOS (Intel): 0xc5370
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPlayerCollisionBlock();

    /**
     * @note[short] MacOS (Intel): 0xc7670
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addPlayerPoint(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x9d840
     * @note[short] MacOS (Intel): 0xaf4d0
     * @note[short] Windows: 0x3f4b80
     * @note[short] Android
     */
    void addSpecial(GameObject* object);

    /**
     * @note[short] MacOS (Intel): 0xb2380
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToRedoList(UndoObject* object);

    /**
     * @note[short] MacOS (Intel): 0xc5590
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addTouchPoint(cocos2d::CCPoint point);

    /**
     * @note[short] MacOS (ARM): 0x9d6ec
     * @note[short] MacOS (Intel): 0xaf350
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addToUndoList(UndoObject* object, bool keepRedo);

    /**
     * @note[short] MacOS (ARM): 0xad3f4
     * @note[short] MacOS (Intel): 0xc19d0
     * @note[short] Android
     */
    void addTriggersWithGroupID(std::unordered_set<int>& sourceIDs, cocos2d::CCArray* triggers, std::unordered_map<int, int>& remap, int objectID);

    /**
     * @note[short] MacOS (ARM): 0xad078
     * @note[short] MacOS (Intel): 0xc1490
     * @note[short] Android
     */
    void addTriggersWithTargetGroupID(std::unordered_set<int>& sourceIDs, std::unordered_set<int>& targetIDs, cocos2d::CCArray* triggers, std::unordered_map<int, int>& remap, int objectID);

    /**
     * @note[short] MacOS (ARM): 0xb2a60
     * @note[short] MacOS (Intel): 0xc7cb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void applyAttributeState(GameObject* dest, GameObject* src);

    /**
     * @note[short] MacOS (ARM): 0xb2838
     * @note[short] MacOS (Intel): 0xc7ab0
     * @note[short] Windows: 0x400db0
     * @note[short] Android
     */
    void applyGroupState(GameObject* dest, GameObject* src);

    /**
     * @note[short] MacOS (ARM): 0x460310
     * @note[short] Windows: 0x3fdf10
     * @note[short] Android
     */
    void breakApartTextObject(TextGameObject* object);

    /**
     * @note[short] Android
     */
    TodoReturn canAutoSave();

    /**
     * @note[short] MacOS (ARM): 0xb2624
     * @note[short] MacOS (Intel): 0xc7890
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canPasteState();

    /**
     * @note[short] Windows: 0x408b10
     * @note[short] Android
     */
    TodoReturn checkAutoSave(float p0);

    /**
     * @note[short] MacOS (ARM): 0xb1174
     * @note[short] MacOS (Intel): 0xc61c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearPlayerPoints();

    /**
     * @note[short] MacOS (Intel): 0xc6220
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void clearTouchPoints();

    /**
     * @note[short] MacOS (ARM): 0xb2634
     * @note[short] MacOS (Intel): 0xc78b0
     * @note[short] Windows: 0x400c10
     * @note[short] Android
     */
    void copyObjectState(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb2c24
     * @note[short] MacOS (Intel): 0xc7e80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void copyParticleState(ParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9ddfc
     * @note[short] MacOS (Intel): 0xafac0
     * @note[short] Windows: 0x3f0820
     * @note[short] Android
     */
    GameObject* createObject(int key, cocos2d::CCPoint position, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0x9a7e8
     * @note[short] MacOS (Intel): 0xabbb0
     * @note[short] Windows: 0x3ef940
     * @note[short] Android
     */
    void createObjectsFromSetup(std::string& setup);

    /**
     * @note[short] MacOS (ARM): 0x9cf6c
     * @note[short] MacOS (Intel): 0xaeb00
     * @note[short] Windows: 0x3f0150
     * @note[short] Android
     */
    cocos2d::CCArray* createObjectsFromString(std::string const& str, bool noUndo, bool noLimit);

    /**
     * @note[short] MacOS (ARM): 0xb06f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void dirtifyTriggers();

    /**
     * @note[short] Android
     */
    TodoReturn doAutoBackup();

    /**
     * @note[short] Android
     */
    TodoReturn doAutoSave();

    /**
     * @note[short] MacOS (ARM): 0xb3178
     * @note[short] MacOS (Intel): 0xc8430
     * @note[short] Android
     */
    cocos2d::CCArray* duplicateKeyframeAnimation(int keyframeGroup);

    /**
     * @note[short] MacOS (ARM): 0xaf10c
     * @note[short] MacOS (Intel): 0xc3e20
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fastUpdateDisabledGroups();

    /**
     * @note[short] MacOS (ARM): 0x9fa54
     * @note[short] MacOS (Intel): 0xb1930
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    GameObject* findGameObject(int uniqueID);

    /**
     * @note[short] MacOS (ARM): 0xb0708
     * @note[short] MacOS (Intel): 0xc5610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    StartPosObject* findStartPosObject();

    /**
     * @note[short] MacOS (ARM): 0xa9a3c
     * @note[short] MacOS (Intel): 0xbda00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void forceShowSelectedObjects(bool show);

    /**
     * @note[short] MacOS (ARM): 0xaf108
     * @note[short] MacOS (Intel): 0xc3e10
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void fullUpdateDisabledGroups();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveTraceInObject();

    /**
     * @note[short] Android
     */
    TodoReturn getActiveTraceOutObject();

    /**
     * @note[short] MacOS (ARM): 0x9fa4c
     * @note[short] MacOS (Intel): 0xb1920
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllObjects();

    /**
     * @note[short] MacOS (ARM): 0xaed5c
     * @note[short] MacOS (Intel): 0xc39d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    DelayedSpawnNode* getDelayedSpawnNode();

    /**
     * @note[short] MacOS (ARM): 0x9e4c8
     * @note[short] MacOS (Intel): 0xb01e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getGridPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xaf22c
     * @note[short] MacOS (Intel): 0xc3fd0
     * @note[short] Windows: 0x3fd290
     * @note[short] Android
     */
    float getLastObjectX();

    /**
     * @note[short] Windows: 0x3f30a0
     * @note[short] Android
     */
    std::string getLevelString();

    /**
     * @note[short] MacOS (ARM): 0xa74a8
     * @note[short] MacOS (Intel): 0xbade0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getLockedLayers();

    /**
     * @note[short] MacOS (Intel): 0xc0e00
     * @note[short] Windows: 0x3f98e0
     * @note[short] Android
     */
    int getNextColorChannel();

    /**
     * @note[short] MacOS (Intel): 0xc06a0
     * @note[short] Windows: 0x3f8f50
     * @note[short] Android
     */
    int getNextFreeAreaEffectID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xac434
     * @note[short] MacOS (Intel): 0xc06a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getNextFreeBlockID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeControlID(std::unordered_set<int> const& p0);

    /**
     * @note[short] MacOS (ARM): 0xabcf8
     * @note[short] MacOS (Intel): 0xbfed0
     * @note[short] Windows: 0x3f8ac0
     * @note[short] Android
     */
    int getNextFreeEditorLayer(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xaba98
     * @note[short] MacOS (Intel): 0xbfed0
     * @note[short] Windows: 0x3f8d20
     * @note[short] Android
     */
    int getNextFreeEnterChannel(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (Intel): 0xc06a0
     * @note[short] Windows: 0x3f96c0
     * @note[short] Android
     */
    int getNextFreeGradientID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xaabc0
     * @note[short] Windows: 0x3f7d10
     * @note[short] Android
     */
    int getNextFreeGroupID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (Intel): 0xbfc40
     * @note[short] Windows: 0x3f7f90
     * @note[short] Android
     */
    int getNextFreeItemID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xaba98
     * @note[short] MacOS (Intel): 0xbfc40
     * @note[short] Windows: 0x3f8850
     * @note[short] Android
     */
    int getNextFreeOrderChannel(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xac65c
     * @note[short] MacOS (Intel): 0xc0910
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getNextFreeSFXGroupID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] MacOS (ARM): 0xac434
     * @note[short] MacOS (Intel): 0xc06a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getNextFreeSFXID(const std::unordered_set<int>& exclude);

    /**
     * @note[short] Android
     */
    TodoReturn getNextFreeTimerID(std::unordered_set<int> const& p0);

    /**
     * @note[short] MacOS (ARM): 0x9efa8
     * @note[short] MacOS (Intel): 0xb0d30
     * @note[short] Windows: 0x3f1960
     * @note[short] Android
     */
    cocos2d::CCRect getObjectRect(GameObject* object, bool forceSize, bool dontCalculate);

    /**
     * @note[short] MacOS (ARM): 0x9f80c
     * @note[short] MacOS (Intel): 0xb1680
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getRelativeOffset(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa8324
     * @note[short] MacOS (Intel): 0xbbef0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getSavedEditorPosition(int index);

    /**
     * @note[short] MacOS (ARM): 0xa834c
     * @note[short] MacOS (Intel): 0xbbf30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getSavedEditorPositions();

    /**
     * @note[short] MacOS (ARM): 0xa8698
     * @note[short] MacOS (Intel): 0xbc370
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getSectionCount();

    /**
     * @note[short] MacOS (ARM): 0xadb18
     * @note[short] MacOS (Intel): 0xc2320
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getSelectedEditorOrder();

    /**
     * @note[short] MacOS (ARM): 0xadb50
     * @note[short] MacOS (Intel): 0xc2360
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getSelectedEffectPos();

    /**
     * @note[short] MacOS (ARM): 0xadae0
     * @note[short] MacOS (Intel): 0xc22e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getSelectedOrderChannel();

    /**
     * @note[short] MacOS (ARM): 0xa7f54
     * @note[short] MacOS (Intel): 0xbba30
     * @note[short] Windows: 0x3f4040
     * @note[short] Android
     */
    std::string getSFXIDs();

    /**
     * @note[short] Android
     */
    TodoReturn getSFXUsagePairs(std::vector<std::pair<int, int>>& p0);

    /**
     * @note[short] MacOS (ARM): 0xa770c
     * @note[short] MacOS (Intel): 0xbb0b0
     * @note[short] Windows: 0x3f3600
     * @note[short] Android
     */
    std::string getSongIDs(bool& multipleSongs);

    /**
     * @note[short] MacOS (ARM): 0xaef74
     * @note[short] MacOS (Intel): 0xc3c50
     * @note[short] Windows: 0x3fd600
     * @note[short] Android
     */
    cocos2d::CCArray* getTriggerGroup(int id);

    /**
     * @note[short] MacOS (ARM): 0x597c24
     * @note[short] Windows: 0x3f2580
     * @note[short] Android
     */
    void handleAction(bool undo, cocos2d::CCArray* undoObjects);

    /**
     * @note[short] MacOS (ARM): 0xa0420
     * @note[short] MacOS (Intel): 0xb23f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasAction(bool undo);

    /**
     * @note[short] MacOS (ARM): 0x98be0
     * @note[short] MacOS (Intel): 0xa9d50
     * @note[short] Windows: 0x3ed8e0
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool noUI);

    /**
     * @note[short] MacOS (ARM): 0xa8718
     * @note[short] MacOS (Intel): 0xbc400
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isLayerLocked(int layer);

    /**
     * @note[short] Android
     */
    TodoReturn lockedLayerForObject(int p0, int p1);

    /**
     * @note[short] Android
     */
    TodoReturn lockedLayerForObjectString(std::string const& p0);

    /**
     * @note[short] MacOS (ARM): 0x9ec9c
     * @note[short] MacOS (Intel): 0xb09f0
     * @note[short] Windows: 0x3f11f0
     * @note[short] Android
     */
    GameObject* objectAtPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0xa9180
     * @note[short] MacOS (Intel): 0xbced0
     * @note[short] Android
     */
    void objectMoved(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9f388
     * @note[short] MacOS (Intel): 0xb1170
     * @note[short] Windows: 0x3f15a0
     * @note[short] Android
     */
    cocos2d::CCArray* objectsAtPosition(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x9e728
     * @note[short] MacOS (Intel): 0xb0470
     * @note[short] Windows: 0x3f1db0
     * @note[short] Android
     */
    cocos2d::CCArray* objectsInRect(cocos2d::CCRect rect, bool ignoreGroups);

    /**
     * @note[short] MacOS (ARM): 0xb17d4
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onPausePlaytest();

    /**
     * @note[short] MacOS (ARM): 0xb0a30
     * @note[short] MacOS (Intel): 0xc5a00
     * @note[short] Windows: 0x3fe7e0
     * @note[short] Android
     */
    void onPlaytest();

    /**
     * @note[short] MacOS (ARM): 0xb1980
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void onResumePlaytest();

    /**
     * @note[short] MacOS (ARM): 0xb1ab4
     * @note[short] MacOS (Intel): 0xc6bf0
     * @note[short] Windows: 0x3ffeb0
     * @note[short] Android
     */
    void onStopPlaytest();

    /**
     * @note[short] MacOS (ARM): 0xb2988
     * @note[short] MacOS (Intel): 0xc7be0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pasteAttributeState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xb28f0
     * @note[short] MacOS (Intel): 0xc7b50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pasteColorState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xb2a90
     * @note[short] MacOS (Intel): 0xc7ce0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pasteGroupState(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xb2df4
     * @note[short] MacOS (Intel): 0xc8060
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pasteParticleState(ParticleGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    TodoReturn prepareSaveData(std::string& p0);

    /**
     * @note[short] MacOS (ARM): 0xaf2cc
     * @note[short] MacOS (Intel): 0xc4070
     * @note[short] Android
     */
    void processLoadedMoveActions();

    /**
     * @note[short] MacOS (ARM): 0xb07b8
     * @note[short] MacOS (Intel): 0xc56d0
     * @note[short] Windows: 0x3fe590
     * @note[short] Android
     */
    void quickUpdateAllPositions();

    /**
     * @note[short] Android
     */
    TodoReturn rebuildDeathOverlay();

    /**
     * @note[short] MacOS (ARM): 0xaf768
     * @note[short] MacOS (Intel): 0xc4500
     * @note[short] Windows: 0x3fd660
     * @note[short] Android
     */
    void recreateGroups();

    /**
     * @note[short] MacOS (ARM): 0x7e690
     * @note[short] MacOS (Intel): 0x40a9e0
     * @note[short] Windows: 0x3f2fa0
     * @note[short] Android
     */
    void redoLastAction();

    /**
     * @note[short] MacOS (ARM): 0xa9390
     * @note[short] MacOS (Intel): 0xbd3d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void refreshSpecial(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9ffec
     * @note[short] MacOS (Intel): 0xb1f40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeAllObjects();

    /**
     * @note[short] MacOS (ARM): 0xa00ec
     * @note[short] MacOS (Intel): 0xb2060
     * @note[short] Windows: 0x3f22f0
     * @note[short] Android
     */
    void removeAllObjectsOfType(int objectID);

    /**
     * @note[short] MacOS (ARM): 0x9fa9c
     * @note[short] MacOS (Intel): 0xb1980
     * @note[short] Windows: 0x3f21b0
     * @note[short] Android
     */
    void removeObject(GameObject* object, bool noUndo);

    /**
     * @note[short] MacOS (ARM): 0x9a7a4
     * @note[short] MacOS (Intel): 0xabb70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removePlayerCollisionBlock();

    /**
     * @note[short] MacOS (ARM): 0x9fb78
     * @note[short] MacOS (Intel): 0xb1a50
     * @note[short] Windows: 0x3f5290
     * @note[short] Android
     */
    void removeSpecial(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xadcf8
     * @note[short] MacOS (Intel): 0xc2500
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetDelayedSpawnNodes();

    /**
     * @note[short] MacOS (ARM): 0xb0414
     * @note[short] MacOS (Intel): 0xc52a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetEffectTriggerOptim(GameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0xaf9bc
     * @note[short] MacOS (Intel): 0xc47f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetMovingObjects();

    /**
     * @note[short] MacOS (ARM): 0xaf110
     * @note[short] MacOS (Intel): 0xc3e30
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetObjectVector();

    /**
     * @note[short] MacOS (ARM): 0xadb8c
     * @note[short] MacOS (Intel): 0xc23b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetPlayback();

    /**
     * @note[short] MacOS (ARM): 0xad77c
     * @note[short] MacOS (Intel): 0xc1ec0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0xaefdc
     * @note[short] MacOS (Intel): 0xc3cb0
     * @note[short] Windows: 0x3fcf50
     * @note[short] Android
     */
    void resetToggledGroupsAndObjects();

    /**
     * @note[short] MacOS (ARM): 0xacdc4
     * @note[short] MacOS (Intel): 0xc1150
     * @note[short] Windows: 0x3f9cb0
     * @note[short] Android
     */
    void resetUnusedColorChannels();

    /**
     * @note[short] MacOS (ARM): 0xb3258
     * @note[short] MacOS (Intel): 0xc8510
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reverseKeyframeAnimationOrder(int keyframeGroup);

    /**
     * @note[short] MacOS (ARM): 0xaf074
     * @note[short] MacOS (Intel): 0xc3d70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void reverseObjectChanged(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x9e594
     * @note[short] MacOS (Intel): 0xb02f0
     * @note[short] Windows: 0x3f1050
     * @note[short] Android
     */
    float rotationForSlopeNearObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xae894
     * @note[short] MacOS (Intel): 0xc3440
     * @note[short] Windows: 0x3fc300
     * @note[short] Android
     */
    ColorAction* runColorEffect(EffectGameObject* object, int colorID, float delay, float interval, bool instant);

    /**
     * @note[short] MacOS (ARM): 0xa830c
     * @note[short] MacOS (Intel): 0xbbec0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveEditorPosition(cocos2d::CCPoint& position, int index);

    /**
     * @note[short] MacOS (ARM): 0xb11f0
     * @note[short] MacOS (Intel): 0xc6250
     * @note[short] Windows: 0x3ff1f0
     * @note[short] Android
     */
    bool saveLevel();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    void setObjectCount(int count);

    /**
     * @note[short] MacOS (ARM): 0x9caa8
     * @note[short] MacOS (Intel): 0xae620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool shouldBlend(int colorID);

    /**
     * @note[short] MacOS (ARM): 0xa9500
     * @note[short] MacOS (Intel): 0xbd550
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void sortBatchnodeChildren(float unused);

    /**
     * @note[short] MacOS (Intel): 0xc2690
     * @note[short] Windows: 0x3fc9d0
     * @note[short] Android
     */
    void spawnGroupPreview(int groupID, float xPos, float delay, float currentTime, float playTime, float boundTime, bool ordered, bool active);

    /**
     * @note[short] MacOS (ARM): 0xb04bc
     * @note[short] MacOS (Intel): 0xc5340
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopPlayback();

    /**
     * @note[short] MacOS (ARM): 0xaeb28
     * @note[short] MacOS (Intel): 0xc3710
     * @note[short] Windows: 0x3fc610
     * @note[short] Android
     */
    void stopTriggersInGroup(int id, float delay);

    /**
     * @note[short] MacOS (ARM): 0xaf0f8
     * @note[short] MacOS (Intel): 0xc3e00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void timeObjectChanged();

    /**
     * @note[short] MacOS (ARM): 0xad8e8
     * @note[short] MacOS (Intel): 0xc2050
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleBackground(bool visible);

    /**
     * @note[short] Android
     */
    TodoReturn toggleDeathLabels();

    /**
     * @note[short] Android
     */
    TodoReturn toggleGlobalDeaths();

    /**
     * @note[short] MacOS (ARM): 0xad900
     * @note[short] MacOS (Intel): 0xc2080
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void toggleGrid(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x9c384
     * @note[short] MacOS (Intel): 0xadd80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleGround(bool enable);

    /**
     * @note[short] MacOS (ARM): 0xae99c
     * @note[short] MacOS (Intel): 0xc3580
     * @note[short] Windows: 0x3fcdd0
     * @note[short] Android
     */
    void toggleGroupPreview(int id, bool enable);

    /**
     * @note[short] Android
     */
    TodoReturn toggleLocalDeaths();

    /**
     * @note[short] MacOS (ARM): 0xa86ac
     * @note[short] MacOS (Intel): 0xbc390
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleLockActiveLayer();

    /**
     * @note[short] MacOS (ARM): 0xad910
     * @note[short] MacOS (Intel): 0xc20a0
     * @note[short] Windows: 0x3fa630
     * @note[short] Android
     */
    void transferDefaultColors(GJEffectManager* src, GJEffectManager* dest);

    /**
     * @note[short] MacOS (ARM): 0xb059c
     * @note[short] MacOS (Intel): 0xc5450
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerFollowCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb05c8
     * @note[short] MacOS (Intel): 0xc54a0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerPlayerFollowCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xb0530
     * @note[short] MacOS (Intel): 0xc53c0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void triggerRotateCommand(EffectGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xa8fb4
     * @note[short] MacOS (Intel): 0xbcd40
     * @note[short] Windows: 0x3f5820
     * @note[short] Android
     */
    bool tryUpdateSpeedObject(EffectGameObject* object, bool noPreview);

    /**
     * @note[short] MacOS (ARM): 0x9e0e8
     * @note[short] MacOS (Intel): 0xafdc0
     * @note[short] Windows: 0x3f0bf0
     * @note[short] Android
     */
    bool typeExistsAtPosition(int objectID, cocos2d::CCPoint position, bool flipX, bool flipY, float rotation);

    /**
     * @note[short] Windows: 0x3f3020
     * @note[short] Android
     */
    void undoLastAction();

    /**
     * @note[short] MacOS (ARM): 0xa875c
     * @note[short] MacOS (Intel): 0xbc440
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void unlockAllLayers();

    /**
     * @note[short] MacOS (ARM): 0x9c2fc
     * @note[short] MacOS (Intel): 0xadd00
     * @note[short] Windows: 0x401000
     * @note[short] Android
     */
    void updateAnimateOnTriggerObjects(bool animate);

    /**
     * @note[short] MacOS (Intel): 0xae430
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateArt(float dt);

    /**
     * @note[short] MacOS (ARM): 0xae78c
     * @note[short] MacOS (Intel): 0xc3390
     * @note[short] Windows: 0x3fcff0
     * @note[short] Android
     */
    void updateBlendValues();

    /**
     * @note[short] Windows: 0x3f3c30
     * @note[short] Android
     */
    TodoReturn updateCustomSFXMappings();

    /**
     * @note[short] MacOS (ARM): 0x9af90
     * @note[short] MacOS (Intel): 0xac550
     * @note[short] Windows: 0x3f5f00
     * @note[short] Android
     */
    void updateEditor(float dt);

    /**
     * @note[short] MacOS (ARM): 0x9bfd0
     * @note[short] MacOS (Intel): 0xad9b0
     * @note[short] Windows: 0x3fa010
     * @note[short] Android
     */
    void updateEditorMode();

    /**
     * @note[short] MacOS (ARM): 0x9b4c0
     * @note[short] MacOS (Intel): 0xacab0
     * @note[short] Windows: 0x3fa960
     * @note[short] Android
     */
    void updateGameObjects();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateGridLayer();

    /**
     * @note[short] MacOS (ARM): 0x9c9f0
     * @note[short] MacOS (Intel): 0xae570
     * @note[short] Windows: 0x3ef7a0
     * @note[short] Android
     */
    void updateGridLayerParent();

    /**
     * @note[short] MacOS (ARM): 0xaa60c
     * @note[short] MacOS (Intel): 0xbe630
     * @note[short] Windows: 0x4013f0
     * @note[short] Android
     */
    void updateKeyframeObjects();

    /**
     * @note[short] MacOS (ARM): 0xb3290
     * @note[short] MacOS (Intel): 0xc8550
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateKeyframeVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0xafa60
     * @note[short] MacOS (Intel): 0xc4890
     * @note[short] Windows: 0x3fd9c0
     * @note[short] Android
     */
    void updateLevelFont(int index);

    /**
     * @note[short] Windows: 0x3ff620
     * @note[short] Android
     */
    TodoReturn updateLevelSaveInfo();

    /**
     * @note[short] MacOS (ARM): 0xaa6c0
     * @note[short] MacOS (Intel): 0xbe6e0
     * @note[short] Windows: 0x3f7460
     * @note[short] Android
     */
    void updateObjectColors(cocos2d::CCArray* gameObjects);

    /**
     * @note[short] MacOS (ARM): 0x99e64
     * @note[short] MacOS (Intel): 0xab1d0
     * @note[short] Windows: 0x3eef70
     * @note[short] Android
     */
    void updateOptions();

    /**
     * @note[short] Android
     */
    TodoReturn updatePlayerState(GJPlayerState p0);

    /**
     * @note[short] MacOS (ARM): 0xb2f70
     * @note[short] MacOS (Intel): 0xc8240
     * @note[short] Windows: 0x400e80
     * @note[short] Android
     */
    void updatePreviewAnim();

    /**
     * @note[short] MacOS (ARM): 0xa8eb0
     * @note[short] MacOS (Intel): 0xbcc70
     * @note[short] Windows: 0x4011a0
     * @note[short] Android
     */
    void updatePreviewParticle(ParticleGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xad7bc
     * @note[short] MacOS (Intel): 0xc1f30
     * @note[short] Windows: 0x401090
     * @note[short] Android
     */
    void updatePreviewParticles();

    /**
     * @note[short] MacOS (ARM): 0xae674
     * @note[short] MacOS (Intel): 0xc3250
     * @note[short] Android
     */
    void updateToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0x9e4e0
     * @note[short] MacOS (Intel): 0xb0220
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool validGroup(GameObject* object, bool checkLockedLayers);

    /**
     * @note[short] Android
     */
    TodoReturn waitForAutoSave();
    bool m_drawTriggerBoxes;
    bool m_showGrid;
    bool m_hideGridOnPlay;
    bool m_hideCenterCross;
    bool m_drawEffectLines;
    bool m_showGround;
    bool m_showDurationLines;
    bool m_increaseMaxUndoRedo;
    bool m_hideBackground;
    bool m_gv0120;
    bool m_layerLockingEnabled;
    bool m_playtestOrderChanged;
    bool m_previewParticles;
    bool m_previewAnimations;
    bool m_previewShaders;
    bool m_hideParticleIcons;
    bool m_alwaysHideParticleIcons;
    bool m_playTestSmoothFix;
    bool m_hasHighDetail;
    bool m_unk36ca;
    int m_unk36cc;
    bool m_collisionBlocksAdded;
    int m_unk36d4;
    cocos2d::CCArray* m_durationObjects;
    cocos2d::CCArray* m_pulseTriggers;
    cocos2d::CCArray* m_colorTriggers;
    cocos2d::CCArray* m_alphaTriggers;
    cocos2d::CCArray* m_spawnTriggers;
    cocos2d::CCArray* m_moveTriggers;
    cocos2d::CCArray* m_cameraGuideTriggers;
    cocos2d::CCArray* m_particleObjects;
    cocos2d::CCArray* m_keyframeObjects;
    cocos2d::CCDictionary* m_spawnOrderTriggers;
    cocos2d::CCArray* m_playtestTriggers;
    GameObject* m_copyStateObject;
    ParticleGameObject* m_particleObject;
    cocos2d::CCDictionary* m_unk3740;
    cocos2d::CCArray* m_unk3748;
    bool m_keepEditorLayer;
    bool m_unk3751;
    geode::SeedValueRSV m_coinCount;
    bool m_triggersChanged;
    bool m_colorTriggersChanged;
    bool m_pulseTriggersChanged;
    bool m_alphaTriggersChanged;
    bool m_spawnTriggersChanged;
    cocos2d::CCArray* m_spawnOrderObjects;
    bool m_spawnOrderObjectsChanged;
    bool m_sortSpawnNodes;
    cocos2d::CCDictionary* m_unk3778;
    cocos2d::CCDictionary* m_unk3780;
    bool m_initializing;
    short m_currentLayer;
    float m_playtestZoom;
    OBB2D* m_currentOBB2D;
    float m_playtestTimeWarp;
    float m_playtestCameraZoom;
    cocos2d::CCSprite* m_playtestDeathSprite;
    float m_trailTimer;
    bool m_soloMode;
    bool m_nonSquareRotation;
    EditorUI* m_editorUI;
    cocos2d::CCArray* m_undoObjects;
    cocos2d::CCArray* m_redoObjects;
    geode::SeedValueRSV m_objectCount;
    DrawGridLayer* m_drawGridLayer;
    bool m_updateColorSprites;
    bool m_previewMode;
    bool m_alwaysPreviewMode;
    std::string m_levelString;
    std::vector<GameObject*> m_objectVector;
    std::vector<GameObject*> m_loadedMoveObjects;
    cocos2d::CCDictionary* m_triggerGroupsDict;
    std::vector<cocos2d::CCArray*> m_triggerGroups;
    std::vector<cocos2d::CCPoint> m_playerPoints;
    std::vector<std::vector<cocos2d::CCPoint>> m_player2Points;
    std::vector<cocos2d::CCPoint> m_touchPoints;
    std::vector<bool> m_sortedGroups;
    std::vector<bool> m_toggledGroups;
    std::vector<bool> m_lockedLayers;
    int m_lockedLayerCount;
    std::vector<cocos2d::CCPoint> m_savedPositions;
    cocos2d::CCPoint m_previewPosition;
    std::vector<bool> m_blendingColors;
    std::vector<bool> m_blendingColors2;
    std::vector<unsigned char> m_toggledGroupStates;
    std::vector<float> m_spawnGroupDelays;
    double m_sessionTime;
    int m_lastFrameCount;
    EditorBuildStats m_buildStats;
    bool m_removingAll;
    EffectGameObject* m_playbackObject;
    EffectGameObject* m_traceInObject;
    EffectGameObject* m_traceOutObject;
    int m_playbackOrder;
    int m_duplicateKeyframeGroup;
    std::vector<DelayedSpawnNode*> m_delayedSpawnNodes;
    std::vector<DelayedSpawnNode*> m_delayedSpawnNodes2;
    std::unordered_map<int, int> m_lastGroupRemap;
    bool m_playbackActive;
    bool m_activateAudioTriggers;
    bool m_groupsChanged;
    int m_groupsVersion;
    int m_traceInVersion;
    int m_traceOutVersion;
    EffectGameObject* m_lastTraceInObject;
    EffectGameObject* m_lastTraceOutObject;
    std::vector<TraceDrawObject> m_traceInLines;
    std::vector<TraceDrawObject> m_traceOutLines;
    std::unordered_map<int, TraceGroupOutline> m_traceGroupOutlines;
    float m_autoSaveTimer;
    std::string m_lastAutoSaveString;
    std::string m_lastBackupString;
};
