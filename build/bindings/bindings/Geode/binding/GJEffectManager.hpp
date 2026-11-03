#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/DynamicMoveCalculation.hpp>
#include <Geode/binding/PulseEffectAction.hpp>
#include <Geode/binding/TouchToggleAction.hpp>
#include <Geode/binding/CollisionTriggerAction.hpp>
#include <Geode/binding/ToggleTriggerAction.hpp>
#include <Geode/binding/SpawnTriggerAction.hpp>
#include <Geode/binding/GroupCommandObject2.hpp>
#include <Geode/binding/OpacityEffectAction.hpp>
#include <Geode/binding/CountTriggerAction.hpp>
#include <Geode/binding/TimerItem.hpp>
#include <Geode/binding/TimerTriggerAction.hpp>
#include <Geode/binding/EffectManagerState.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/set.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class GJEffectManager : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "GJEffectManager";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(GJEffectManager, cocos2d::CCNode)

    /**
     * @note[short] MacOS (ARM): 0x2668d4
     * @note[short] MacOS (Intel): 0x2c6d00
     * @note[short] Windows: 0x364750
     * @note[short] iOS: 0xef30
     * @note[short] Android: Rebinded
     */
    virtual  ~GJEffectManager();

    /**
     * @note[short] MacOS (ARM): 0x26732c
     * @note[short] MacOS (Intel): 0x2c7bd0
     * @note[short] Windows: 0x364ef0
     * @note[short] Android
     */
    static GJEffectManager* create();

    /**
     * @note[short] MacOS (ARM): 0x274848
     * @note[short] MacOS (Intel): 0x2d89b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static cocos2d::ccColor3B getMixedColor(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2, float ratio);

    /**
     * @note[short] MacOS (ARM): 0x267520
     * @note[short] MacOS (Intel): 0x2c7f40
     * @note[short] Windows: 0x364f50
     * @note[short] iOS: 0xefbc
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] MacOS (ARM): 0x26808c
     * @note[short] MacOS (Intel): 0x2c8ec0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B activeColorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x2681f4
     * @note[short] MacOS (Intel): 0x2c9020
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    float activeOpacityForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x268b08
     * @note[short] MacOS (Intel): 0x2c9ab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void addAllInheritedColorActions(cocos2d::CCArray* actions);

    /**
     * @note[short] MacOS (ARM): 0x271b40
     * @note[short] MacOS (Intel): 0x2d4cc0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addCountToItem(int itemId, int value);

    /**
     * @note[short] MacOS (ARM): 0x26f598
     * @note[short] MacOS (Intel): 0x2d1fb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void addMoveCalculation(CCMoveCNode* node, cocos2d::CCPoint offset, GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0x2683a4
     * @note[short] MacOS (Intel): 0x2c9210
     * @note[short] Windows: 0x365760
     * @note[short] Android
     */
    void calculateBaseActiveColors();

    /**
     * @note[short] MacOS (Intel): 0x2c9bf0
     * @note[short] Windows: 0x365b40
     * @note[short] Android
     */
    void calculateInheritedColor(int id, ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x2746b4
     * @note[short] MacOS (Intel): 0x2d8820
     * @note[short] Windows: 0x36e270
     * @note[short] Android
     */
    void calculateLightBGColor(cocos2d::ccColor3B color);

    /**
     * @note[short] MacOS (ARM): 0x269a1c
     * @note[short] MacOS (Intel): 0x2cab80
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool checkCollision(int const& blockAID, int const& blockBID);

    /**
     * @note[short] MacOS (ARM): 0x269118
     * @note[short] MacOS (Intel): 0x2ca0e0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void colorActionChanged(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x2690f4
     * @note[short] MacOS (Intel): 0x2ca0b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool colorExists(int col);

    /**
     * @note[short] MacOS (ARM): 0x269988
     * @note[short] MacOS (Intel): 0x2caaf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForEffect(cocos2d::ccColor3B color, cocos2d::ccHSVValue hsv);

    /**
     * @note[short] MacOS (ARM): 0x270a78
     * @note[short] MacOS (Intel): 0x2d3960
     * @note[short] Windows: 0x36c350
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForGroupID(int id, cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x267f28
     * @note[short] MacOS (Intel): 0x2c8d40
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x268e84
     * @note[short] MacOS (Intel): 0x2c9e70
     * @note[short] Windows: 0x36bfb0
     * @note[short] Android
     */
    cocos2d::ccColor3B colorForPulseEffect(cocos2d::ccColor3B const& color, PulseEffectAction* action);

    /**
     * @note[short] MacOS (ARM): 0x26b830
     * @note[short] MacOS (Intel): 0x2cd150
     * @note[short] Windows: 0x368280
     * @note[short] Android
     */
    void controlActionsForControlID(int id, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x26c488
     * @note[short] MacOS (Intel): 0x2ce0d0
     * @note[short] Windows: 0x368bc0
     * @note[short] Android
     */
    void controlActionsForTrigger(EffectGameObject* object, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0x271a48
     * @note[short] MacOS (Intel): 0x2d4b60
     * @note[short] Windows: 0x36cb70
     * @note[short] Android
     */
    int countForItem(int id);

    /**
     * @note[short] MacOS (ARM): 0x26a45c
     * @note[short] MacOS (Intel): 0x2cb760
     * @note[short] Windows: 0x366da0
     * @note[short] Android
     */
    void createFollowCommand(float xMod, float yMod, float duration, int targetID, int centerID, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26a6fc
     * @note[short] MacOS (Intel): 0x2cba20
     * @note[short] Windows: 0x366fd0
     * @note[short] Android
     */
    GroupCommandObject2* createKeyframeCommand(int targetID, cocos2d::CCArray* group, GameObject* object, int uniqueID, int controlID, bool temporary, float posXMod, float posYMod, float rotMod, float scaleXMod, float scaleYMod, float timeMod, std::vector<int> const& remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x26a100
     * @note[short] MacOS (Intel): 0x2cb3b0
     * @note[short] Windows: 0x3669e0
     * @note[short] Android
     */
    void createMoveCommand(cocos2d::CCPoint pt, int groupID, float duration, int easingType, float easingRate, bool lockPlayerX, bool lockPlayerY, bool lockCameraX, bool lockCameraY, float moveModX, float moveModY, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26a520
     * @note[short] MacOS (Intel): 0x2cb840
     * @note[short] Windows: 0x366eb0
     * @note[short] Android
     */
    void createPlayerFollowCommand(float delay, float speed, int offset, float maxSpeed, float duration, int targetID, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26a254
     * @note[short] MacOS (Intel): 0x2cb510
     * @note[short] Windows: 0x366c70
     * @note[short] Android
     */
    void createRotateCommand(float offset, float duration, int targetID, int centerID, int easingType, float easingRate, bool lockRotation, bool player1, bool player2, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26a348
     * @note[short] MacOS (Intel): 0x2cb620
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void createTransformCommand(double scaleX, double scaleY, double property450, double property451, bool onlyMove, float duration, int targetID, int centerID, int easingType, float easingRate, bool p10, bool relativeRotation, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x267e3c
     * @note[short] MacOS (Intel): 0x2c8c20
     * @note[short] Windows: 0x3655d0
     * @note[short] Android
     */
    cocos2d::CCArray* getAllColorActions();

    /**
     * @note[short] MacOS (ARM): 0x267e8c
     * @note[short] MacOS (Intel): 0x2c8c80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    cocos2d::CCArray* getAllColorSprites();

    /**
     * @note[short] MacOS (ARM): 0x267f48
     * @note[short] MacOS (Intel): 0x2c8d60
     * @note[short] Windows: 0x365ef0
     * @note[short] Android
     */
    ColorAction* getColorAction(int index);

    /**
     * @note[short] MacOS (ARM): 0x2680e8
     * @note[short] MacOS (Intel): 0x2c8f10
     * @note[short] Windows: 0x365fb0
     * @note[short] Android
     */
    ColorActionSprite* getColorSprite(int index);

    /**
     * @note[short] MacOS (ARM): 0x26fbc8
     * @note[short] MacOS (Intel): 0x2d2740
     * @note[short] Windows: 0x36b090
     * @note[short] Android
     */
    void getLoadedMoveOffset(std::unordered_map<int, std::pair<double, double>>& offsets);

    /**
     * @note[short] MacOS (ARM): 0x26b620
     * @note[short] MacOS (Intel): 0x2ccf00
     * @note[short] Windows: 0x3697c0
     * @note[short] Android
     */
    CCMoveCNode* getMoveCommandNode(GroupCommandObject2* command);

    /**
     * @note[short] MacOS (ARM): 0x26d26c
     * @note[short] MacOS (Intel): 0x2cf180
     * @note[short] Windows: 0x3696c0
     * @note[short] Android
     */
    CCMoveCNode* getMoveCommandObject();

    /**
     * @note[short] MacOS (ARM): 0x26fd2c
     * @note[short] MacOS (Intel): 0x2d28b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    OpacityEffectAction* getOpacityActionForGroup(int id);

    /**
     * @note[short] Android
     */
    void getPersistentState(std::unordered_map<int, int>& counts, std::unordered_set<int>& p1, std::unordered_map<int, TimerItem>& items);

    /**
     * @note[short] MacOS (ARM): 0x2721ac
     * @note[short] MacOS (Intel): 0x2d5550
     * @note[short] Windows: 0x36d060
     * @note[short] Android
     */
    std::string getPersistentStateString();

    /**
     * @note[short] MacOS (ARM): 0x274a24
     * @note[short] MacOS (Intel): 0x2d8c00
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    std::string getSaveString();

    /**
     * @note[short] MacOS (ARM): 0x26d3d4
     * @note[short] MacOS (Intel): 0x2cf330
     * @note[short] Android
     */
    GroupCommandObject2* getTempGroupCommand();

    /**
     * @note[short] MacOS (ARM): 0x269c08
     * @note[short] MacOS (Intel): 0x2cade0
     * @note[short] Windows: 0x366820
     * @note[short] Android
     */
    void handleObjectCollision(bool triggerOnExit, int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0x271378
     * @note[short] MacOS (Intel): 0x2d43a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasActiveDualTouch();

    /**
     * @note[short] MacOS (ARM): 0x27120c
     * @note[short] MacOS (Intel): 0x2d4200
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool hasBeenTriggered(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x270990
     * @note[short] MacOS (Intel): 0x2d3800
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool hasPulseEffectForGroupID(int id);

    /**
     * @note[short] MacOS (ARM): 0x271250
     * @note[short] MacOS (Intel): 0x2d4250
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool isGroupEnabled(int id);

    /**
     * @note[short] MacOS (ARM): 0x2734b4
     * @note[short] MacOS (Intel): 0x2d6f70
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void itemWasUsed(int id);

    /**
     * @note[short] MacOS (ARM): 0x27074c
     * @note[short] MacOS (Intel): 0x2d3540
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    const char* keyForGroupIDColor(int id, cocos2d::ccColor3B const& color, bool mainColor);

    /**
     * @note[short] MacOS (ARM): 0x27582c
     * @note[short] MacOS (Intel): 0x2d9b00
     * @note[short] Windows: 0x36ebc0
     * @note[short] Android
     */
    void loadFromState(EffectManagerState& state);

    /**
     * @note[short] MacOS (ARM): 0x272c48
     * @note[short] MacOS (Intel): 0x2d64a0
     * @note[short] Android
     */
    void loadPersistentStateString(std::string state);

    /**
     * @note[short] MacOS (ARM): 0x269e00
     * @note[short] MacOS (Intel): 0x2caff0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void objectsCollided(int blockAID, int blockBID);

    /**
     * @note[short] MacOS (ARM): 0x268074
     * @note[short] MacOS (Intel): 0x2c8eb0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float opacityForIndex(int index);

    /**
     * @note[short] MacOS (ARM): 0x26ffd4
     * @note[short] MacOS (Intel): 0x2d2c50
     * @note[short] Windows: 0x36b2c0
     * @note[short] Android
     */
    float opacityModForGroup(int id);

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void pauseTimer(int id);

    /**
     * @note[short] MacOS (ARM): 0x2713b4
     * @note[short] MacOS (Intel): 0x2d43e0
     * @note[short] Windows: 0x36c910
     * @note[short] Android
     */
    void playerButton(bool down, bool player1);

    /**
     * @note[short] MacOS (ARM): 0x2716c4
     * @note[short] MacOS (Intel): 0x2d4750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void playerDied();

    /**
     * @note[short] MacOS (ARM): 0x269b50
     * @note[short] MacOS (Intel): 0x2cad10
     * @note[short] Windows: 0x3665c0
     * @note[short] Android
     */
    void postCollisionCheck();

    /**
     * @note[short] MacOS (ARM): 0x26f754
     * @note[short] MacOS (Intel): 0x2d2170
     * @note[short] Windows: 0x36af30
     * @note[short] Android
     */
    void postMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x269b38
     * @note[short] MacOS (Intel): 0x2cacf0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void preCollisionCheck();

    /**
     * @note[short] MacOS (ARM): 0x26dd8c
     * @note[short] MacOS (Intel): 0x2d0070
     * @note[short] Windows: 0x369ae0
     * @note[short] Android
     */
    void prepareMoveActions(float dt, bool intermediate);

    /**
     * @note[short] MacOS (ARM): 0x268250
     * @note[short] MacOS (Intel): 0x2c9080
     * @note[short] Windows: 0x365640
     * @note[short] Android
     */
    void processColors();

    /**
     * @note[short] MacOS (ARM): 0x2687d8
     * @note[short] MacOS (Intel): 0x2c9740
     * @note[short] Windows: 0x36bc50
     * @note[short] Android
     */
    void processCopyColorPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x268500
     * @note[short] MacOS (Intel): 0x2c93a0
     * @note[short] Windows: 0x365820
     * @note[short] Android
     */
    void processInheritedColors();

    /**
     * @note[short] MacOS (ARM): 0x26fab4
     * @note[short] MacOS (Intel): 0x2d2610
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void processMoveCalculations();

    /**
     * @note[short] MacOS (ARM): 0x26843c
     * @note[short] MacOS (Intel): 0x2c92d0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void processPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x269f68
     * @note[short] MacOS (Intel): 0x2cb1f0
     * @note[short] Windows: 0x366710
     * @note[short] Android
     */
    void registerCollisionTrigger(int targetID, int blockAID, int blockBID, bool triggerOnExit, bool activateGroup, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26d820
     * @note[short] MacOS (Intel): 0x2cf990
     * @note[short] Windows: 0x369920
     * @note[short] Android
     */
    void registerRotationCommand(GroupCommandObject2* object, bool clear);

    /**
     * @note[short] MacOS (ARM): 0x26975c
     * @note[short] MacOS (Intel): 0x2ca860
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeAllPulseActions();

    /**
     * @note[short] MacOS (ARM): 0x2690ac
     * @note[short] MacOS (Intel): 0x2ca050
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removeColorAction(int id);

    /**
     * @note[short] MacOS (ARM): 0x273638
     * @note[short] MacOS (Intel): 0x2d7190
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removePersistentFromAllItems();

    /**
     * @note[short] MacOS (ARM): 0x2736d0
     * @note[short] MacOS (Intel): 0x2d7240
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void removePersistentFromAllTimers();

    /**
     * @note[short] MacOS (ARM): 0x271114
     * @note[short] MacOS (Intel): 0x2d4120
     * @note[short] Windows: 0x36c850
     * @note[short] Android
     */
    void removeTriggeredID(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x267730
     * @note[short] MacOS (Intel): 0x2c81c0
     * @note[short] Windows: 0x3653a0
     * @note[short] Android
     */
    void reset();

    /**
     * @note[short] MacOS (ARM): 0x267800
     * @note[short] MacOS (Intel): 0x2c82e0
     * @note[short] Windows: 0x366300
     * @note[short] Android
     */
    void resetEffects();

    /**
     * @note[short] MacOS (ARM): 0x267d94
     * @note[short] MacOS (Intel): 0x2c8b20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetMoveActions();

    /**
     * @note[short] MacOS (ARM): 0x26db48
     * @note[short] MacOS (Intel): 0x2cfd50
     * @note[short] Windows: 0x3699f0
     * @note[short] Android
     */
    void resetTempGroupCommands(bool noRemove);

    /**
     * @note[short] MacOS (ARM): 0x269810
     * @note[short] MacOS (Intel): 0x2ca940
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetToggledGroups();

    /**
     * @note[short] MacOS (ARM): 0x269950
     * @note[short] MacOS (Intel): 0x2caab0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void resetTriggeredIDs();

    /**
     * @note[short] MacOS (ARM): 0x273420
     * @note[short] MacOS (Intel): 0x2d6ea0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetUsedItemState();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resumeTimer(int id);

    /**
     * @note[short] MacOS (ARM): 0x2717f4
     * @note[short] MacOS (Intel): 0x2d48b0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void runCountTrigger(int id, int targetCount, bool multiActivate, int targetID, bool activateGroup, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x2715e8
     * @note[short] MacOS (Intel): 0x2d4670
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void runDeathTrigger(int targetID, bool activateGroup, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26fe0c
     * @note[short] MacOS (Intel): 0x2d2a10
     * @note[short] Windows: 0x36b1b0
     * @note[short] Android
     */
    OpacityEffectAction* runOpacityActionOnGroup(int targetID, float duration, float opacity, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x270198
     * @note[short] MacOS (Intel): 0x2d2e80
     * @note[short] Windows: 0x36b380
     * @note[short] Android
     */
    PulseEffectAction* runPulseEffect(int targetID, bool targetGroup, float fadeInDuration, float holdDuration, float fadeOutDuration, PulseEffectType effectType, cocos2d::ccColor3B targetColor, cocos2d::ccHSVValue targetHSV, int copyID, bool mainOnly, bool detailOnly, bool exclusive, bool legacyHSV, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x273c90
     * @note[short] MacOS (Intel): 0x2d7a40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void runTimerTrigger(int id, double targetTime, bool multiActivate, int targetID, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x27127c
     * @note[short] MacOS (Intel): 0x2d4290
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void runTouchTriggerCommand(int targetID, bool holdMode, TouchTriggerType touchType, TouchTriggerControl touchControl, bool dualMode, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x26fa18
     * @note[short] MacOS (Intel): 0x2d2580
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void saveCompletedMove(int groupId, double dx, double dy);

    /**
     * @note[short] MacOS (ARM): 0x27544c
     * @note[short] MacOS (Intel): 0x2d9620
     * @note[short] Windows: 0x36e720
     * @note[short] Android
     */
    void saveToState(EffectManagerState& state);

    /**
     * @note[short] MacOS (ARM): 0x269048
     * @note[short] MacOS (Intel): 0x2c9fe0
     * @note[short] Windows: 0x366100
     * @note[short] Android
     */
    void setColorAction(ColorAction* action, int id);

    /**
     * @note[short] MacOS (ARM): 0x2748f0
     * @note[short] MacOS (Intel): 0x2d8a70
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setFollowing(int targetID, int targetPosID, bool following);

    /**
     * @note[short] Android
     */
    void setPlatformerProgress(int p0);

    /**
     * @note[short] MacOS (ARM): 0x274cd0
     * @note[short] MacOS (Intel): 0x2d8f30
     * @note[short] Windows: 0x36e470
     * @note[short] Android
     */
    void setupFromString(std::string str);

    /**
     * @note[short] MacOS (ARM): 0x268228
     * @note[short] MacOS (Intel): 0x2c9050
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool shouldBlend(int id);

    /**
     * @note[short] MacOS (ARM): 0x26f64c
     * @note[short] MacOS (Intel): 0x29ccc0
     * @note[short] Windows: 0x36c4f0
     * @note[short] Android
     */
    void spawnGroup(int targetID, float delay, bool spawnOrdered, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x270c54
     * @note[short] MacOS (Intel): 0x2d3bb0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void spawnObject(GameObject* object, float delay, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x273728
     * @note[short] MacOS (Intel): 0x2d72b0
     * @note[short] Windows: 0x36d730
     * @note[short] Android
     */
    void startTimer(int id, double startTime, double targetTime, bool stopTime, bool active, bool dontOverride, float timeMod, bool ignoreTimewarp, int targetID, std::vector<int> const& remapKeys, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0x271048
     * @note[short] MacOS (Intel): 0x2d4060
     * @note[short] Windows: 0x36c850
     * @note[short] Android
     */
    void storeTriggeredID(int objectUniqueID, int playerUniqueID);

    /**
     * @note[short] MacOS (ARM): 0x2745bc
     * @note[short] MacOS (Intel): 0x2d86d0
     * @note[short] Windows: 0x36e1b0
     * @note[short] Android
     */
    double timeForItem(int id);

    /**
     * @note[short] MacOS (ARM): 0x273968
     * @note[short] Windows: 0x36d900
     * @note[short] Android
     */
    bool timerExists(int id);

    /**
     * @note[short] MacOS (ARM): 0x2734b8
     * @note[short] MacOS (Intel): 0x2d6f80
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void timerWasUsed(int id);

    /**
     * @note[short] MacOS (ARM): 0x26a080
     * @note[short] MacOS (Intel): 0x2cb330
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleGroup(int id, bool activate);

    /**
     * @note[short] MacOS (ARM): 0x2734bc
     * @note[short] MacOS (Intel): 0xb780
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleItemPersistent(int id, bool persistent);

    /**
     * @note[short] MacOS (ARM): 0x273690
     * @note[short] MacOS (Intel): 0x2d7200
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void toggleTimerPersistent(int id, bool persistent);

    /**
     * @note[short] MacOS (ARM): 0x2698bc
     * @note[short] MacOS (Intel): 0x2caa10
     * @note[short] Windows: 0x36d6b0
     * @note[short] Android
     */
    void transferPersistentItems();

    /**
     * @note[short] MacOS (ARM): 0x268ba4
     * @note[short] MacOS (Intel): 0x2c9b50
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void traverseInheritanceChain(InheritanceNode* node);

    /**
     * @note[short] MacOS (Intel): 0x2cf830
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    CCMoveCNode* tryGetMoveCommandNode(int id);

    /**
     * @note[short] MacOS (ARM): 0x270114
     * @note[short] MacOS (Intel): 0x2d2de0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void updateActiveOpacityEffects();

    /**
     * @note[short] MacOS (ARM): 0x26fcf4
     * @note[short] MacOS (Intel): 0x2d2870
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColorAction(ColorAction* action);

    /**
     * @note[short] MacOS (ARM): 0x269234
     * @note[short] MacOS (Intel): 0x2ca230
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColorEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x267edc
     * @note[short] MacOS (Intel): 0x2c8ce0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateColors(cocos2d::ccColor3B color1, cocos2d::ccColor3B color2);

    /**
     * @note[short] MacOS (ARM): 0x271bb4
     * @note[short] MacOS (Intel): 0x2d4d30
     * @note[short] Windows: 0x36cc30
     * @note[short] Android
     */
    void updateCountForItem(int id, int count);

    /**
     * @note[short] MacOS (ARM): 0x269138
     * @note[short] MacOS (Intel): 0x2ca110
     * @note[short] Windows: 0x366180
     * @note[short] iOS: 0x10094
     * @note[short] Android
     */
    void updateEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x2700cc
     * @note[short] MacOS (Intel): 0x2d2da0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateOpacityAction(OpacityEffectAction* action);

    /**
     * @note[short] MacOS (ARM): 0x269674
     * @note[short] MacOS (Intel): 0x2ca750
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateOpacityEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x269394
     * @note[short] MacOS (Intel): 0x2ca410
     * @note[short] Windows: 0x36b900
     * @note[short] Android
     */
    void updatePulseEffects(float dt);

    /**
     * @note[short] MacOS (ARM): 0x270d4c
     * @note[short] MacOS (Intel): 0x2d3cd0
     * @note[short] Windows: 0x36c5e0
     * @note[short] Android
     */
    void updateSpawnTriggers(float dt);

    /**
     * @note[short] MacOS (ARM): 0x273dcc
     * @note[short] MacOS (Intel): 0x2d7b90
     * @note[short] Windows: 0x36d9a0
     * @note[short] Android
     */
    void updateTimer(int id, double time);

    /**
     * @note[short] Windows: 0x36db30
     * @note[short] Android
     */
    void updateTimers(float dt, float timeWarp);

    /**
     * @note[short] MacOS (Intel): 0x2d8ab0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    bool wasFollowing(int targetID, int targetPosID);

    /**
     * @note[short] MacOS (ARM): 0x268b74
     * @note[short] MacOS (Intel): 0x2c9b20
     * @note[short] Windows: 0x365ec0
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool wouldCreateLoop(InheritanceNode* node, int id);

    /**
     * @note[short] Android
     */
    void loadPersistentState(std::unordered_map<int, int> const& p0, std::unordered_set<int> const& p1, std::unordered_map<int, TimerItem> const& p2);
    TriggerEffectDelegate* m_triggerEffectDelegate;
    cocos2d::CCDictionary* m_unkObject148;
    cocos2d::CCDictionary* m_unkDict150;
    std::vector<PulseEffectAction> m_pulseEffectVector;
    std::unordered_map<int, std::vector<PulseEffectAction>> m_pulseEffectMap;
    std::unordered_map<int, OpacityEffectAction> m_opacityEffectMap;
    std::vector<TouchToggleAction> m_unkVector1e0;
    std::unordered_map<int, std::vector<CountTriggerAction>> m_countTriggerActions;
    std::vector<CollisionTriggerAction> m_unkVector230;
    std::vector<ToggleTriggerAction> m_unkVector248;
    cocos2d::CCDictionary* m_colorActionDict;
    cocos2d::CCDictionary* m_unkDict268;
    std::vector<InheritanceNode*> m_unkVector270;
    std::unordered_map<int, bool> m_unkMap288;
    std::vector<ColorAction*> m_colorActionVector;
    std::vector<ColorActionSprite*> m_colorActionSpriteVector;
    std::vector<bool> m_unkVector2f0;
    std::unordered_map<int, int> m_itemCountMap;
    std::unordered_map<int, int> m_persistentItemCountMap;
    std::unordered_set<int> m_persistentTimerItemSet;
    int m_platformerProgress;
    std::unordered_set<int> m_unk3f0;
    std::unordered_set<int> m_unk430;
    std::unordered_map<int, TimerItem> m_timerItemMap;
    std::unordered_map<int, std::vector<TimerTriggerAction>> m_unkMap3f8;
    cocos2d::CCArray* m_unkArray430;
    std::vector<bool> m_unkVector438;
    std::unordered_set<int> m_unkMap460;
    std::set<std::pair<int, int>> m_unkMap498;
    std::unordered_set<int> m_unkMap4c8;
    std::vector<SpawnTriggerAction> m_spawnTriggerActions;
    std::vector<GroupCommandObject2*> m_unkVector518;
    std::vector<GroupCommandObject2*> m_unkVector530;
    std::vector<cocos2d::CCObject*> m_unkVector548;
    std::vector<GroupCommandObject2> m_unkVector560;
    std::unordered_map<int, std::pair<double, double>> m_unkMap578;
    std::vector<GroupCommandObject2*> m_unkVector5b0;
    std::unordered_map<int, std::vector<GroupCommandObject2*>> m_unkMap5c8;
    std::vector<GroupCommandObject2*> m_unkVector600;
    std::unordered_map<int, CCMoveCNode*> m_unkMap618;
    std::unordered_map<int, CCMoveCNode*> m_unkMap650;
    std::unordered_map<int, CCMoveCNode*> m_unkMap688;
    std::vector<CCMoveCNode*> m_unkVector6c0;
    std::vector<CCMoveCNode*> m_unkVector6d8;
    std::vector<CCMoveCNode*> m_unkVector6f0;
    std::vector<DynamicMoveCalculation> m_unkVector708;
    std::map<std::pair<int, int>, std::vector<GroupCommandObject2*>> m_unkMap770;
    float m_unk780;
    float m_unk784;
    float m_unk788;
    float m_unk78C;
    float m_unk790;
    float m_unk794;
    bool m_unk798;
};
