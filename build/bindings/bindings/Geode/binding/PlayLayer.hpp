#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/DynamicBitset.hpp>
#include <Geode/binding/SavedActiveObjectState.hpp>
#include <Geode/binding/SavedObjectStateRef.hpp>
#include <Geode/binding/SavedSpecialObjectState.hpp>
#include <Geode/binding/GJBaseGameLayer.hpp>
#include <Geode/binding/CCCircleWaveDelegate.hpp>
#include <Geode/binding/CurrencyRewardDelegate.hpp>
#include <Geode/binding/DialogDelegate.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class PlayLayer : public GJBaseGameLayer, public CCCircleWaveDelegate, public CurrencyRewardDelegate, public DialogDelegate {
public:
    static constexpr auto CLASS_NAME = "PlayLayer";
    GEODE_CUSTOM_CONSTRUCTOR_GD(PlayLayer, GJBaseGameLayer)

    /**
     * @note[short] Windows: 0x502f50
     * @note[short] iOS: 0x14ca9c
     * @note[short] Android: Rebinded
     */
     PlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x70bec
     * @note[short] MacOS (Intel): 0x79130
     * @note[short] Windows: 0x503640
     * @note[short] iOS: 0x13e1fc
     * @note[short] Android: Rebinded
     */
     ~PlayLayer();

    /**
     * @note[short] MacOS (ARM): 0x70f44
     * @note[short] MacOS (Intel): 0x795d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x13e298
     * @note[short] Android
     */
    static PlayLayer* create(GJGameLevel* level, bool dontCreateObjects);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    static PlayLayer* get();

    /**
     * @note[short] MacOS (ARM): 0x70e94
     * @note[short] MacOS (Intel): 0x79530
     * @note[short] Windows: 0x503930
     * @note[short] Android
     */
    static cocos2d::CCScene* scene(GJGameLevel* p0, bool p1);

    /**
     * @note[short] MacOS (ARM): 0x832e8
     * @note[short] MacOS (Intel): 0x8de00
     * @note[short] Windows: 0x51b510
     * @note[short] iOS: 0x14c808
     * @note[short] Android
     */
    virtual void onEnterTransitionDidFinish();

    /**
     * @note[short] MacOS (ARM): 0x83324
     * @note[short] MacOS (Intel): 0x8de40
     * @note[short] Windows: 0x51b550
     * @note[short] iOS: 0x14c844
     * @note[short] Android
     */
    virtual void onExit();

    /**
     * @note[short] MacOS (ARM): 0x7eb3c
     * @note[short] MacOS (Intel): 0x88b50
     * @note[short] Windows: 0x513ca0
     * @note[short] iOS: 0x1489d0
     * @note[short] Android
     */
    virtual void postUpdate(float dt);

    /**
     * @note[short] MacOS (ARM): 0x7ec0c
     * @note[short] MacOS (Intel): 0x88c20
     * @note[short] Windows: 0x513e60
     * @note[short] iOS: 0x148aa4
     * @note[short] Android
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
     * @note[short] MacOS (ARM): 0x7ed00
     * @note[short] MacOS (Intel): 0x88d10
     * @note[short] Windows: 0x514020
     * @note[short] iOS: 0x148b88
     * @note[short] Android
     */
    virtual void updateVerifyDamage();

    /**
     * @note[short] MacOS (ARM): 0x7edb0
     * @note[short] MacOS (Intel): 0x88dc0
     * @note[short] Windows: 0x5140f0
     * @note[short] iOS: 0x148c34
     * @note[short] Android
     */
    virtual void updateAttemptTime(float attemptTime);

    /**
     * @note[short] MacOS (ARM): 0x7ae88
     * @note[short] MacOS (Intel): 0x84910
     * @note[short] Windows: 0x50de00
     * @note[short] iOS: 0x145494
     * @note[short] Android
     */
    virtual void updateVisibility(float dt);

    /**
     * @note[short] MacOS (ARM): 0x7cd0c
     * @note[short] MacOS (Intel): 0x86b20
     * @note[short] Windows: 0x50ede0
     * @note[short] iOS: 0x146f9c
     * @note[short] Android
     */
    virtual float opacityForObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7cdd0
     * @note[short] MacOS (Intel): 0x86c00
     * @note[short] Windows: 0x510a20
     * @note[short] iOS: 0x14700c
     * @note[short] Android
     */
    virtual void updateColor(cocos2d::ccColor3B& color, float fadeTime, int colorID, bool blending, float opacity, cocos2d::ccHSVValue& copyHSV, int colorIDToCopy, bool copyOpacity, EffectGameObject* callerObject, int unk1, int unk2);

    /**
     * @note[short] MacOS (ARM): 0x79eb4
     * @note[short] MacOS (Intel): 0x83800
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x1448bc
     * @note[short] Android
     */
    virtual void activateEndTrigger(int targetID, bool reverse, bool lockPlayerY);

    /**
     * @note[short] MacOS (ARM): 0x7a2ec
     * @note[short] MacOS (Intel): 0x83cf0
     * @note[short] Windows: 0x50abd0
     * @note[short] iOS: 0x144be0
     * @note[short] Android
     */
    virtual void activatePlatformerEndTrigger(EndTriggerGameObject* object, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x7d860
     * @note[short] MacOS (Intel): 0x87710
     * @note[short] Windows: 0x512260
     * @note[short] iOS: 0x1479b4
     * @note[short] Android
     */
    virtual void toggleGlitter(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x7d960
     * @note[short] MacOS (Intel): 0x877f0
     * @note[short] Windows: 0x512390
     * @note[short] iOS: 0x147a28
     * @note[short] Android
     */
    virtual void destroyPlayer(PlayerObject* player, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x772f8
     * @note[short] MacOS (Intel): 0x80830
     * @note[short] Windows: 0x505bc0
     * @note[short] iOS: 0x142534
     * @note[short] Android
     */
    virtual bool shouldDrawDebugHitboxes();

    /**
     * @note[short] MacOS (ARM): 0x7733c
     * @note[short] MacOS (Intel): 0x80860
     * @note[short] Windows: 0x505bf0
     * @note[short] iOS: 0x142574
     * @note[short] Android
     */
    virtual bool shouldDrawHitboxTrail();

    /**
     * @note[short] MacOS (ARM): 0x77380
     * @note[short] MacOS (Intel): 0x80890
     * @note[short] Windows: 0x505c20
     * @note[short] iOS: 0x1425b4
     * @note[short] Android
     */
    virtual bool shouldRecordHitboxTrail();

    /**
     * @note[short] MacOS (ARM): 0x773a4
     * @note[short] MacOS (Intel): 0x808b0
     * @note[short] Windows: 0x317680
     * @note[short] iOS: 0x1425d4
     * @note[short] Android
     */
    virtual int getHitboxTrailMax();

    /**
     * @note[short] MacOS (ARM): 0x7d758
     * @note[short] MacOS (Intel): 0x87620
     * @note[short] Windows: 0x5120a0
     * @note[short] iOS: 0x1478dc
     * @note[short] Android
     */
    virtual void toggleGroundVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x7d788
     * @note[short] MacOS (Intel): 0x87650
     * @note[short] Windows: 0x512120
     * @note[short] iOS: 0x14790c
     * @note[short] Android
     */
    virtual void toggleMGVisibility(bool visible);

    /**
     * @note[short] MacOS (ARM): 0x7d798
     * @note[short] MacOS (Intel): 0x87670
     * @note[short] Windows: 0x512160
     * @note[short] iOS: 0x14791c
     * @note[short] Android
     */
    virtual void toggleHideAttempts(bool hide);

    /**
     * @note[short] MacOS (ARM): 0x7d688
     * @note[short] MacOS (Intel): 0x87500
     * @note[short] Windows: 0x511f60
     * @note[short] iOS: 0x14780c
     * @note[short] Android
     */
    virtual float timeForPos(cocos2d::CCPoint position, int order, int channel, bool songTriggers, int id);

    /**
     * @note[short] MacOS (ARM): 0x7d6fc
     * @note[short] MacOS (Intel): 0x87580
     * @note[short] Windows: 0x512000
     * @note[short] iOS: 0x147880
     * @note[short] Android
     */
    virtual cocos2d::CCPoint posForTime(float time);

    /**
     * @note[short] MacOS (ARM): 0x7d71c
     * @note[short] MacOS (Intel): 0x875d0
     * @note[short] Windows: 0x512060
     * @note[short] iOS: 0x1478a0
     * @note[short] Android
     */
    virtual void resetSPTriggered();

    /**
     * @note[short] MacOS (ARM): 0x79dcc
     * @note[short] MacOS (Intel): 0x836f0
     * @note[short] Windows: 0x50a250
     * @note[short] iOS: 0x1448a4
     * @note[short] Android
     */
    virtual void updateTimeWarp(float timeWarp);

    /**
     * @note[short] MacOS (ARM): 0x7ce34
     * @note[short] MacOS (Intel): 0x86c70
     * @note[short] Windows: 0x510ae0
     * @note[short] iOS: 0x147078
     * @note[short] Android
     */
    virtual void playGravityEffect(bool flip);

    /**
     * @note[short] MacOS (ARM): 0x7cd14
     * @note[short] MacOS (Intel): 0x86b30
     * @note[short] Windows: 0x50edf0
     * @note[short] iOS: 0x146fa4
     * @note[short] Android
     */
    virtual void manualUpdateObjectColors(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7ee20
     * @note[short] MacOS (Intel): 0x88e30
     * @note[short] Windows: 0x514180
     * @note[short] iOS: 0x148ca0
     * @note[short] Android
     */
    virtual void checkpointActivated(CheckpointGameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7d624
     * @note[short] MacOS (Intel): 0x87480
     * @note[short] Windows: 0x5114f0
     * @note[short] iOS: 0x1477a8
     * @note[short] Android
     */
    virtual void flipArt(bool flip);

    /**
     * @note[short] MacOS (ARM): 0x7d250
     * @note[short] MacOS (Intel): 0x870d0
     * @note[short] Windows: 0x510fe0
     * @note[short] iOS: 0x147424
     * @note[short] Android
     */
    virtual void updateTimeLabel(int seconds, int centiseconds, bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x81658
     * @note[short] MacOS (Intel): 0x8c060
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x14afc0
     * @note[short] Android
     */
    virtual void checkSnapshot();

    /**
     * @note[short] MacOS (ARM): 0x7d42c
     * @note[short] MacOS (Intel): 0x872a0
     * @note[short] Windows: 0x511200
     * @note[short] iOS: 0x1475d0
     * @note[short] Android
     */
    virtual void toggleProgressbar();

    /**
     * @note[short] MacOS (ARM): 0x7d644
     * @note[short] MacOS (Intel): 0x874c0
     * @note[short] Windows: 0x511ee0
     * @note[short] iOS: 0x1477c8
     * @note[short] Android
     */
    virtual void toggleInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x80ee8
     * @note[short] MacOS (Intel): 0x8b810
     * @note[short] Windows: 0x517210
     * @note[short] iOS: 0x14a914
     * @note[short] Android
     */
    virtual void removeAllCheckpoints();

    /**
     * @note[short] MacOS (ARM): 0x7d598
     * @note[short] MacOS (Intel): 0x87420
     * @note[short] Windows: 0x5113b0
     * @note[short] iOS: 0x14773c
     * @note[short] Android
     */
    virtual void toggleMusicInPractice();

    /**
     * @note[short] MacOS (ARM): 0x7e75c
     * @note[short] MacOS (Intel): 0x88740
     * @note[short] Windows: 0x513890
     * @note[short] iOS: 0x148674
     * @note[short] Android
     */
    virtual void processCheckpoints();

    /**
     * @note[short] MacOS (ARM): 0x81d7c
     * @note[short] MacOS (Intel): 0x8c6f0
     * @note[short] Windows: 0x518c00
     * @note[short] iOS: 0x14b4f4
     * @note[short] Android
     */
    virtual void resetLevel();

    /**
     * @note[short] MacOS (ARM): 0x7e600
     * @note[short] MacOS (Intel): 0x88570
     * @note[short] Windows: 0x5136a0
     * @note[short] iOS: 0x148518
     * @note[short] Android
     */
    virtual void currencyWillExit(CurrencyRewardLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x7e690
     * @note[short] MacOS (Intel): 0x88630
     * @note[short] Windows: 0x513870
     * @note[short] iOS: 0x1485a8
     * @note[short] Android
     */
    virtual void circleWaveWillBeRemoved(CCCircleWave* circleWave);

    /**
     * @note[short] MacOS (ARM): 0x7e644
     * @note[short] MacOS (Intel): 0x885c0
     * @note[short] Windows: 0x5136c0
     * @note[short] iOS: 0x14855c
     * @note[short] Android
     */
    virtual void dialogClosed(DialogLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x7e688
     * @note[short] MacOS (Intel): 0x88610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addCircle(CCCircleWave* cw);

    /**
     * @note[short] MacOS (ARM): 0x81794
     * @note[short] MacOS (Intel): 0x8c1a0
     * @note[short] Windows: 0x518730
     * @note[short] Android
     */
    void addLiveStartPosObject(StartPosObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x76298
     * @note[short] MacOS (Intel): 0x7f4f0
     * @note[short] Windows: 0x50c690
     * @note[short] Android
     */
    void addObject(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7ab6c
     * @note[short] MacOS (Intel): 0x84620
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addToGroupOld(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x7bdd0
     * @note[short] MacOS (Intel): 0x859e0
     * @note[short] Windows: 0x50f410
     * @note[short] Android
     */
    void applyCustomEnterEffect(GameObject* object, bool isRight);

    /**
     * @note[short] MacOS (ARM): 0x7c570
     * @note[short] MacOS (Intel): 0x86390
     * @note[short] Windows: 0x5100f0
     * @note[short] Android
     */
    void applyEnterEffect(GameObject* object, int enterType, bool isRight);

    /**
     * @note[short] MacOS (ARM): 0x77380
     * @note[short] MacOS (Intel): 0x8d940
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool canPauseGame();

    /**
     * @note[short] MacOS (ARM): 0x80b48
     * @note[short] MacOS (Intel): 0x8b4e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    CheckpointObject* checkpointWithID(int id);

    /**
     * @note[short] MacOS (ARM): 0x7acb4
     * @note[short] MacOS (Intel): 0x84750
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void colorObject(int id, cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x782cc
     * @note[short] MacOS (Intel): 0x819a0
     * @note[short] Windows: 0x519f80
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void commitJumps();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void compareStateSnapshot();

    /**
     * @note[short] MacOS (ARM): 0x7ee38
     * @note[short] MacOS (Intel): 0x88e50
     * @note[short] Windows: 0x5141a0
     * @note[short] iOS: 0x148cb8
     * @note[short] Android
     */
    CheckpointObject* createCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x7a860
     * @note[short] MacOS (Intel): 0x842f0
     * @note[short] Windows: 0x50c1f0
     * @note[short] Android
     */
    void createObjectsFromSetupFinished();

    /**
     * @note[short] MacOS (Intel): 0x8c400
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void delayedFullReset();

    /**
     * @note[short] MacOS (ARM): 0x7e5e0
     * @note[short] MacOS (Intel): 0x88550
     * @note[short] Windows: 0x518a30
     * @note[short] Android
     */
    void delayedResetLevel();

    /**
     * @note[short] Android
     */
    TodoReturn dtBumpCell(int p0, int p1, int p2);

    /**
     * @note[short] Android
     */
    TodoReturn dtCellKnown(int p0, int p1);

    /**
     * @note[short] MacOS (ARM): 0x83e0c0
     * @note[short] MacOS (Intel): 0x9603b0
     * @note[short] Windows: 0x51e8e0
     * @note[short] Android
     */
    void dtCommitPlaytime();

    /**
     * @note[short] Android
     */
    TodoReturn dtDeathIsBarren(int p0, int p1, bool p2, bool p3);

    /**
     * @note[short] MacOS (ARM): 0x83e178
     * @note[short] MacOS (Intel): 0x960490
     * @note[short] Windows: 0x517f10
     * @note[short] Android
     */
    void dtFlushCells();

    /**
     * @note[short] Android
     */
    TodoReturn dtLiveMarkersChanged();

    /**
     * @note[short] Android
     */
    TodoReturn dtLoadCells();

    /**
     * @note[short] Android
     */
    TodoReturn dtLocalCellTriples(std::vector<int>& p0);

    /**
     * @note[short] Android
     */
    TodoReturn dtMarkerVisibleRect();

    /**
     * @note[short] Android
     */
    TodoReturn dtRebuildLiveMarkers();

    /**
     * @note[short] Android
     */
    TodoReturn dtUpdateLiveMarkers();

    /**
     * @note[short] MacOS (ARM): 0x81a80
     * @note[short] MacOS (Intel): 0x8c460
     * @note[short] Windows: 0x518920
     * @note[short] Android
     */
    void fullReset();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x512300
     * @note[short] iOS: 0x147390
     * @note[short] Android
     */
    float getCurrentPercent();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int getCurrentPercentInt();

    /**
     * @note[short] MacOS (ARM): 0x775c0
     * @note[short] MacOS (Intel): 0x80ac0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::CCPoint getEndPosition();

    /**
     * @note[short] MacOS (ARM): 0x7fd9c
     * @note[short] MacOS (Intel): 0x8a4c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CheckpointObject* getLastCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x7cd7c
     * @note[short] MacOS (Intel): 0x86b90
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getRelativeMod(cocos2d::CCPoint position, float right, float left, float offset);

    /**
     * @note[short] MacOS (ARM): 0x7bb04
     * @note[short] MacOS (Intel): 0x85730
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float getRelativeModNew(cocos2d::CCPoint position, float mod, float offset, bool unused, bool isRight);

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    double getTempMilliTime();

    /**
     * @note[short] MacOS (ARM): 0x7d19c
     * @note[short] MacOS (Intel): 0x87020
     * @note[short] Windows: 0x510e30
     * @note[short] Android
     */
    void gravityEffectFinished();

    /**
     * @note[short] MacOS (ARM): 0x82d58
     * @note[short] MacOS (Intel): 0x8d850
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void incrementJumps();

    /**
     * @note[short] MacOS (ARM): 0x70fd8
     * @note[short] MacOS (Intel): 0x79640
     * @note[short] Windows: 0x5039e0
     * @note[short] iOS: 0x13e31c
     * @note[short] Android
     */
    bool init(GJGameLevel* level, bool dontCreateObjects);

    /**
     * @note[short] MacOS (ARM): 0x832b4
     * @note[short] MacOS (Intel): 0x8ddd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isGameplayActive();

    /**
     * @note[short] Android
     */
    bool isJumpHeldForPlayer(bool p0);

    /**
     * @note[short] MacOS (ARM): 0x77624
     * @note[short] MacOS (Intel): 0x80b10
     * @note[short] Windows: 0x5061b0
     * @note[short] iOS: 0x142810
     * @note[short] Android
     */
    void levelComplete();

    /**
     * @note[short] MacOS (ARM): 0x80e00
     * @note[short] MacOS (Intel): 0x8b760
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadActiveSaveObjects(std::vector<SavedActiveObjectState>& activeObjects, std::vector<SavedSpecialObjectState>& specialObjects);

    /**
     * @note[short] MacOS (ARM): 0x75f30
     * @note[short] MacOS (Intel): 0x7f140
     * @note[short] Windows: 0x5106a0
     * @note[short] Android
     */
    void loadDefaultColors();

    /**
     * @note[short] MacOS (ARM): 0x80cc0
     * @note[short] MacOS (Intel): 0x8b610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void loadDynamicSaveObjects(std::vector<SavedObjectStateRef>& dynamicObjects);

    /**
     * @note[short] MacOS (ARM): 0x80570
     * @note[short] MacOS (Intel): 0x8ae80
     * @note[short] Windows: 0x516820
     * @note[short] Android
     */
    void loadFromCheckpoint(CheckpointObject* object);

    /**
     * @note[short] MacOS (ARM): 0x80518
     * @note[short] MacOS (Intel): 0x8ae30
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CheckpointObject* loadLastCheckpoint();

    /**
     * @note[short] Windows: 0x5182b0
     * @note[short] Android
     */
    void loadPersistentCheckpoint(std::string& save);

    /**
     * @note[short] MacOS (ARM): 0x7e9e0
     * @note[short] MacOS (Intel): 0x88a00
     * @note[short] Windows: 0x516630
     * @note[short] Android
     */
    CheckpointObject* markCheckpoint();

    /**
     * @note[short] MacOS (ARM): 0x76f2c
     * @note[short] MacOS (Intel): 0x80440
     * @note[short] Windows: 0x51b0b0
     * @note[short] iOS: 0x1421b8
     * @note[short] Android
     */
    void onQuit();

    /**
     * @note[short] Android
     */
    void optimizeColorGroups();

    /**
     * @note[short] Windows: 0x50d850
     * @note[short] Android
     */
    void optimizeOpacityGroups();

    /**
     * @note[short] MacOS (ARM): 0x82e88
     * @note[short] MacOS (Intel): 0x8d960
     * @note[short] Windows: 0x51a370
     * @note[short] iOS: 0x14c3d0
     * @note[short] Android
     */
    void pauseGame(bool unfocused);

    /**
     * @note[short] MacOS (ARM): 0x79eb8
     * @note[short] MacOS (Intel): 0x83810
     * @note[short] Windows: 0x50a2a0
     * @note[short] Android
     */
    void playEndAnimationToPos(cocos2d::CCPoint position);

    /**
     * @note[short] MacOS (ARM): 0x7a3dc
     * @note[short] MacOS (Intel): 0x83de0
     * @note[short] Windows: 0x50ace0
     * @note[short] Android
     */
    void playPlatformerEndAnimationToPos(cocos2d::CCPoint position, bool instant);

    /**
     * @note[short] Android
     */
    TodoReturn playPracticeMusic();

    /**
     * @note[short] MacOS (ARM): 0x71ba0
     * @note[short] MacOS (Intel): 0x7a380
     * @note[short] Windows: 0x50b770
     * @note[short] iOS: 0x13ed00
     * @note[short] Android
     */
    void prepareCreateObjectsFromSetup(std::string& levelString);

    /**
     * @note[short] MacOS (Intel): 0x802b0
     * @note[short] Windows: 0x51ad50
     * @note[short] Android
     */
    void prepareMusic(bool dontWait);

    /**
     * @note[short] MacOS (ARM): 0x72024
     * @note[short] MacOS (Intel): 0x7a7b0
     * @note[short] Windows: 0x50ba30
     * @note[short] iOS: 0x13ef98
     * @note[short] Android
     */
    void processCreateObjectsFromSetup();

    /**
     * @note[short] MacOS (ARM): 0x7ace0
     * @note[short] MacOS (Intel): 0x84780
     * @note[short] Windows: 0x50dbd0
     * @note[short] Android
     */
    void processLoadedMoveActions();

    /**
     * @note[short] MacOS (Intel): 0x8ae20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void queueCheckpoint();

    /**
     * @note[short] Android
     */
    TodoReturn releaseAllPlayerButtons();

    /**
     * @note[short] MacOS (Intel): 0x806d0
     * @note[short] Windows: 0x51b330
     * @note[short] Android
     */
    void removeAllObjects();

    /**
     * @note[short] MacOS (ARM): 0x80420
     * @note[short] MacOS (Intel): 0x8ad30
     * @note[short] Windows: 0x5170d0
     * @note[short] iOS: 0x14a134
     * @note[short] Android
     */
    void removeCheckpoint(bool first);

    /**
     * @note[short] MacOS (ARM): 0x7ac48
     * @note[short] MacOS (Intel): 0x846f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void removeFromGroupOld(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x816e8
     * @note[short] MacOS (Intel): 0x8c0f0
     * @note[short] Windows: 0x518a50
     * @note[short] Android
     */
    void resetLevelFromStart();

    /**
     * @note[short] MacOS (ARM): 0x8313c
     * @note[short] MacOS (Intel): 0x8dc30
     * @note[short] Windows: 0x51aa00
     * @note[short] Android
     */
    void resume();

    /**
     * @note[short] MacOS (ARM): 0x82fec
     * @note[short] MacOS (Intel): 0x8dae0
     * @note[short] Windows: 0x51a750
     * @note[short] Android
     */
    void resumeAndRestart(bool fromStart);

    /**
     * @note[short] MacOS (ARM): 0x7ffb0
     * @note[short] MacOS (Intel): 0x8a760
     * @note[short] Windows: 0x517b60
     * @note[short] Android
     */
    void saveActiveSaveObjects(std::vector<SavedActiveObjectState>& activeObjects, std::vector<SavedSpecialObjectState>& specialObjects);

    /**
     * @note[short] MacOS (ARM): 0x7fdd8
     * @note[short] MacOS (Intel): 0x8a500
     * @note[short] Windows: 0x517870
     * @note[short] Android
     */
    void saveDynamicSaveObjects(std::vector<SavedObjectStateRef>& dynamicObjects);

    /**
     * @note[short] Android
     */
    void savePersistentCheckpoint(CheckpointObject* checkpoint);

    /**
     * @note[short] MacOS (ARM): 0x74244
     * @note[short] MacOS (Intel): 0x7cd40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void scanActiveSaveObjects();

    /**
     * @note[short] MacOS (ARM): 0x73980
     * @note[short] MacOS (Intel): 0x7c3c0
     * @note[short] Windows: 0x517270
     * @note[short] iOS: 0x1403b0
     * @note[short] Android
     */
    void scanDynamicSaveObjects();

    /**
     * @note[short] MacOS (ARM): 0x7caec
     * @note[short] MacOS (Intel): 0x868d0
     * @note[short] Windows: 0x50f1f0
     * @note[short] Android
     */
    void screenFlipObject(GameObject* object);

    /**
     * @note[short] Android
     */
    void setLastSavedCheckpoint(CheckpointObject* p0);

    /**
     * @note[short] MacOS (ARM): 0x72824
     * @note[short] MacOS (Intel): 0x7b210
     * @note[short] Windows: 0x504710
     * @note[short] iOS: 0x13f4bc
     * @note[short] Android
     */
    void setupHasCompleted();

    /**
     * @note[short] MacOS (ARM): 0x7a858
     * @note[short] MacOS (Intel): 0x842d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool shouldBlend(int colorID);

    /**
     * @note[short] MacOS (ARM): 0x772f8
     * @note[short] MacOS (Intel): 0x80830
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool shouldDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0x783d4
     * @note[short] MacOS (Intel): 0x81ad0
     * @note[short] Windows: 0x507800
     * @note[short] Android
     */
    void showCompleteEffect();

    /**
     * @note[short] MacOS (ARM): 0x78784
     * @note[short] MacOS (Intel): 0x81f20
     * @note[short] Windows: 0x5071d0
     * @note[short] iOS: 0x1436a8
     * @note[short] Android
     */
    void showCompleteText();

    /**
     * @note[short] MacOS (ARM): 0x7928c
     * @note[short] MacOS (Intel): 0x82b00
     * @note[short] Windows: 0x50b000
     * @note[short] iOS: 0x143dd8
     * @note[short] Android
     */
    void showEndLayer();

    /**
     * @note[short] MacOS (ARM): 0x7e470
     * @note[short] MacOS (Intel): 0x883e0
     * @note[short] Windows: 0x5136e0
     * @note[short] Android
     */
    void showHint();

    /**
     * @note[short] MacOS (ARM): 0x79314
     * @note[short] MacOS (Intel): 0x82b90
     * @note[short] Windows: 0x507e20
     * @note[short] iOS: 0x143e54
     * @note[short] Android
     */
    void showNewBest(bool newReward, int orbs, int diamonds, bool demonKey, bool noRetry, bool noTitle);

    /**
     * @note[short] Windows: 0x50b210
     * @note[short] Android
     */
    void showRetryLayer();

    /**
     * @note[short] MacOS (ARM): 0x759c4
     * @note[short] MacOS (Intel): 0x7ec00
     * @note[short] Windows: 0x50b3c0
     * @note[short] Android
     */
    void showTwoPlayerGuide();

    /**
     * @note[short] MacOS (ARM): 0x78300
     * @note[short] MacOS (Intel): 0x819e0
     * @note[short] Windows: 0x50a7b0
     * @note[short] iOS: 0x1432b4
     * @note[short] Android
     */
    void spawnCircle();

    /**
     * @note[short] MacOS (ARM): 0x79084
     * @note[short] MacOS (Intel): 0x828b0
     * @note[short] Windows: 0x50a8a0
     * @note[short] iOS: 0x143bd0
     * @note[short] Android
     */
    void spawnFirework();

    /**
     * @note[short] MacOS (ARM): 0x76ec0
     * @note[short] MacOS (Intel): 0x803d0
     * @note[short] Windows: 0x506140
     * @note[short] Android
     */
    void startGame();

    /**
     * @note[short] MacOS (ARM): 0x775b0
     * @note[short] MacOS (Intel): 0x80aa0
     * @note[short] Windows: 0x5061a0
     * @note[short] Android
     */
    void startGameDelayed();

    /**
     * @note[short] MacOS (ARM): 0x7745c
     * @note[short] MacOS (Intel): 0x80940
     * @note[short] Windows: 0x51aed0
     * @note[short] Android
     */
    void startMusic();

    /**
     * @note[short] MacOS (Intel): 0x8d7d0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void startRecording();

    /**
     * @note[short] MacOS (ARM): 0x82ce4
     * @note[short] MacOS (Intel): 0x8d7e0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void startRecordingDelayed();

    /**
     * @note[short] MacOS (ARM): 0x719a4
     * @note[short] MacOS (Intel): 0x7a180
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void stopRecording();

    /**
     * @note[short] MacOS (ARM): 0x80348
     * @note[short] MacOS (Intel): 0x8ac50
     * @note[short] Windows: 0x516510
     * @note[short] iOS: 0x14a0a4
     * @note[short] Android
     */
    void storeCheckpoint(CheckpointObject* checkpoint);

    /**
     * @note[short] MacOS (ARM): 0x81664
     * @note[short] MacOS (Intel): 0x8c090
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void switchToStartPosObject(StartPosObject* p0);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void takeStateSnapshot();

    /**
     * @note[short] MacOS (ARM): 0x82ca8
     * @note[short] MacOS (Intel): 0x8d790
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleBGEffectVisibility(bool enabled);

    /**
     * @note[short] Windows: 0x505e40
     * @note[short] Android
     */
    void toggleDebugDraw();

    /**
     * @note[short] MacOS (ARM): 0x82c60
     * @note[short] MacOS (Intel): 0x8d750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleGhostEffect(int type);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleIgnoreDamage(bool value);

    /**
     * @note[short] MacOS (ARM): 0x81b64
     * @note[short] MacOS (Intel): 0x8c560
     * @note[short] Windows: 0x519ff0
     * @note[short] Android
     */
    void togglePracticeMode(bool practiceMode);

    /**
     * @note[short] MacOS (ARM): 0x782a0
     * @note[short] MacOS (Intel): 0x81980
     * @note[short] Android
     */
    bool tracksPercent();

    /**
     * @note[short] Windows: 0x51f770
     * @note[short] Android
     */
    TodoReturn tryShowDeathMarkers(cocos2d::CCPoint const& p0, int p1, bool p2);

    /**
     * @note[short] MacOS (Intel): 0x8d720
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void tryStartRecord();

    /**
     * @note[short] MacOS (ARM): 0x82a98
     * @note[short] MacOS (Intel): 0x8d590
     * @note[short] Windows: 0x519d30
     * @note[short] Android
     */
    void updateAttempts();

    /**
     * @note[short] MacOS (Intel): 0x7a220
     * @note[short] Windows: 0x505c40
     * @note[short] iOS: 0x13ec40
     * @note[short] Android
     */
    void updateDebugDrawSettings();

    /**
     * @note[short] MacOS (ARM): 0x7e6a8
     * @note[short] MacOS (Intel): 0x88670
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateEffectPositions();

    /**
     * @note[short] iOS: 0x13eac4
     * @note[short] Android
     */
    TodoReturn updateGameSettings();

    /**
     * @note[short] MacOS (ARM): 0x74460
     * @note[short] Windows: 0x511520
     * @note[short] Android
     */
    void updateInfoLabel();

    /**
     * @note[short] MacOS (ARM): 0x7bb50
     * @note[short] MacOS (Intel): 0x85780
     * @note[short] Windows: 0x50ee60
     * @note[short] Android
     */
    void updateInvisibleBlock(GameObject* object, float rightFadeBound, float leftFadeBound, float rightFadeWidth, float leftFadeWidth, cocos2d::ccColor3B const& lbgColor);

    /**
     * @note[short] MacOS (ARM): 0x75d74
     * @note[short] MacOS (Intel): 0x7ef90
     * @note[short] Windows: 0x510e50
     * @note[short] iOS: 0x1411f8
     * @note[short] Android
     */
    void updateProgressbar();

    /**
     * @note[short] MacOS (ARM): 0x79de4
     * @note[short] MacOS (Intel): 0x83710
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateScreenRotation(int rotation, bool add, bool convert, float duration, int easingType, float easingRate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x76ffc
     * @note[short] MacOS (Intel): 0x80540
     * @note[short] Windows: 0x505ed0
     * @note[short] iOS: 0x142288
     * @note[short] Android
     */
    void updateTestModeLabel();

    /**
     * @note[short] MacOS (ARM): 0x80f3c
     * @note[short] MacOS (Intel): 0x8b870
     * @note[short] Android
     */
    void writePersistentSave();
    int m_unk36c8;
    bool m_unk36cc;
    bool m_unk36cd;
    bool m_unk36ce;
    bool m_unk36cf;
    bool m_damageVerified;
    std::vector<std::string> m_objectStrings;
    cocos2d::CCArray* m_coinArray;
    bool m_passedIntegrity;
    int m_objectsCreated;
    std::vector<GameObject*> m_dynamicSaveObjects;
    std::vector<GameObject*> m_activeSaveObjects1;
    std::vector<GameObject*> m_activeSaveObjects2;
    std::vector<SavedObjectStateRef> m_dynamicSaveObjects2;
    int m_unk3768;
    bool m_platformerRestart;
    bool m_unk376d;
    bool m_isIgnoreDamageEnabled;
    CheckpointObject* m_lastSavedCheckpoint;
    bool m_unk3768n;
    bool m_unk3769;
    bool m_unk376a;
    int m_unk376c;
    bool m_unk3770;
    cocos2d::CCLabelBMFont* m_statusLabel;
    float m_unk3778;
    int m_unk377c;
    float m_unk3780;
    float m_unk3784;
    int m_unk3788;
    int m_unk378c;
    bool m_endChecked;
    float m_endXPosition;
    cocos2d::CCDictionary* m_checkpointsDict;
    cocos2d::CCArray* m_checkpointArray;
    cocos2d::CCArray* m_speedObjects;
    bool m_unk37b0;
    bool m_unk37b1;
    cocos2d::CCPoint m_enterEffectPosition;
    cocos2d::CCArray* m_unk37c0;
    bool m_isSilent;
    int m_unk37cc;
    cocos2d::CCArray* m_circleWaveArray;
    cocos2d::CCArray* m_collectibles;
    bool m_unk37e0;
    int m_pulseRodIndex;
    float m_maxObjectX;
    cocos2d::CCLabelBMFont* m_attemptLabel;
    cocos2d::CCLabelBMFont* m_percentageLabel;
    bool m_decimalPercentage;
    bool m_hintShown;
    cocos2d::CCSprite* m_progressBar;
    cocos2d::CCSprite* m_progressFill;
    float m_progressWidth;
    float m_progressHeight;
    int m_totalGravityEffects;
    int m_activeGravityEffects;
    int m_gravityEffectIndex;
    cocos2d::CCArray* m_gravityEffects;
    bool m_doNot;
    float m_unk383c;
    bool m_skipAudioStep;
    std::vector<int> m_unkDtDeath;
    std::vector<int> m_unkDtBump;
    bool m_unkDtBumpBool;
    float m_unkAttemptTime;
    double m_lastAttemptTime;
    int m_lastDeathCellX;
    int m_lastDeathCellY;
    int m_deathMarkerAmount;
    float m_unkDeathPercent;
    std::vector<int> m_unkDeathMarkers4;
    int m_unkDeathMarkers2;
    bool m_unkLiveMarkers;
    std::vector<int> m_unkDeathMarkers3;
    std::vector<int> m_unkDeathMarkers;
    bool m_tracksPresent;
    std::unordered_set<int> m_blendingColors;
    int m_jumps;
    bool m_hasJumped;
    int m_uncommittedJumps;
    bool m_showLeaderboardPercentage;
    bool m_hasCompletedLevel;
    bool m_inResetDelay;
    int m_lastAttemptPercent;
    bool m_endLayerStars;
    int m_orbs;
    int m_diamonds;
    bool m_secretKey;
    bool m_recordingStopped;
    double m_unk38b0;
    double m_unk38b8;
    double m_unk38c0;
    bool m_unk38c8;
    float m_unk38cc;
    int m_unk38d0;
    double m_attemptTime;
    double m_bestAttemptTime;
    double m_pauseTime;
    double m_currentTime;
    double m_pauseDelta;
    float m_unk3900;
    bool m_glitterEnabled;
    bool m_bgEffectDisabled;
    bool m_unk3906;
    bool m_isPaused;
    bool m_disableGravityEffect;
    cocos2d::CCLabelBMFont* m_infoLabel;
    cocos2d::CCPoint m_unk3918;
    cocos2d::CCPoint m_unk3920;
    cocos2d::CCDictionary* m_colorKeyDict;
    std::vector<cocos2d::ccColor3B> m_keyColors;
    std::vector<float> m_keyOpacities;
    DynamicBitset m_keyPulses;
    int m_nextColorKey;
    bool m_tryPlaceCheckpoint;
    CheckpointGameObject* m_activatedCheckpoint;
    bool m_musicPrepared;
    cocos2d::CCPoint m_endPosition;
    EndTriggerGameObject* m_platformerEndTrigger;
};
