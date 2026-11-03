#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EventTriggerInstance.hpp>
#include <Geode/binding/SongChannelState.hpp>
#include <Geode/binding/DynamicObjectAction.hpp>
#include <Geode/binding/AdvancedFollowInstance.hpp>
#include <Geode/binding/EnterEffectInstance.hpp>
#include <Geode/binding/GameObjectPhysics.hpp>
#include <Geode/binding/GJValueTween.hpp>
#include <Geode/binding/SFXTriggerInstance.hpp>
#include <Geode/binding/SFXTriggerState.hpp>
#include <Geode/binding/SongTriggerState.hpp>
#include <Geode/binding/EnterEffectAnimValue.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class GJGameState {
public:
    static constexpr auto CLASS_NAME = "GJGameState";

    /**
     * @note[short] MacOS (ARM): 0xcbf08
     * @note[short] MacOS (Intel): 0xea1a0
     * @note[short] Windows: 0x30b370
     * @note[short] Android
     */
    void controlTweenAction(int uniqueID, int controlID, GJActionCommand command);

    /**
     * @note[short] MacOS (ARM): 0xcc438
     * @note[short] MacOS (Intel): 0xea840
     * @note[short] Windows: 0x30b710
     * @note[short] Android
     */
    GameObjectPhysics& getGameObjectPhysics(GameObject* object);

    /**
     * @note[short] MacOS (ARM): 0xcc324
     * @note[short] MacOS (Intel): 0xea710
     * @note[short] Windows: 0x30b5b0
     * @note[short] Android
     */
    void processStateTriggers();

    /**
     * @note[short] MacOS (ARM): 0xcbee0
     * @note[short] MacOS (Intel): 0xea170
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void stopTweenAction(int action);

    /**
     * @note[short] MacOS (ARM): 0xcbe44
     * @note[short] MacOS (Intel): 0xea0c0
     * @note[short] Windows: 0x30b2b0
     * @note[short] Android
     */
    void tweenValue(float from, float to, int action, float duration, int easing, float rate, int uniqueID, int controlID);

    /**
     * @note[short] MacOS (ARM): 0xcc270
     * @note[short] MacOS (Intel): 0xea5f0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTweenAction(float value, int action);

    /**
     * @note[short] MacOS (ARM): 0xcc078
     * @note[short] MacOS (Intel): 0xea310
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTweenActions(float tweenValue);
    float m_cameraZoom;
    float m_targetCameraZoom;
    cocos2d::CCPoint m_cameraOffset;
    cocos2d::CCPoint m_cameraOffsetTarget;
    cocos2d::CCPoint m_lastCameraTarget;
    cocos2d::CCPoint m_lastCameraOffset;
    cocos2d::CCPoint m_cameraDeltaPosition;
    cocos2d::CCPoint m_staticCameraStart;
    cocos2d::CCPoint m_staticCameraPosition;
    cocos2d::CCPoint m_staticCameraTarget;
    cocos2d::CCPoint m_staticExitOffset;
    cocos2d::CCPoint m_appliedStaticExitOffset;
    cocos2d::CCPoint m_staticStartVelocity;
    cocos2d::CCPoint m_staticCameraDuration;
    cocos2d::CCPoint m_staticTransitionProgress;
    cocos2d::CCPoint m_lastStaticTransitionProgress;
    cocos2d::CCPoint m_staticFollowEasing;
    cocos2d::CCPoint m_staticFollow;
    cocos2d::CCPoint m_staticFollowGroup;
    cocos2d::CCPoint m_staticCameraActive;
    cocos2d::CCPoint m_staticExitPending;
    cocos2d::CCPoint m_staticExitDuration;
    cocos2d::CCPoint m_staticExitEasingRate;
    cocos2d::CCPoint m_staticExitEasing;
    cocos2d::CCPoint m_staticSmoothVelocity;
    cocos2d::CCPoint m_staticSmoothVelocityMod;
    cocos2d::CCPoint m_staticExitStartOffset;
    cocos2d::CCPoint m_unkPoint25;
    cocos2d::CCPoint m_internalCameraOffset;
    cocos2d::CCPoint m_internalCameraOffsetTarget;
    cocos2d::CCPoint m_lastInternalCameraOffsetTarget;
    cocos2d::CCPoint m_unkPoint29;
    union {
        bool m_dualStaticCamera{};
        bool m_unkBool1;
    };
    union {
        int m_gameplayOffsetX{};
        int m_unkInt1;
    };
    union {
        bool m_gameplayOffsetXDontZoom{};
        bool m_unkBool2;
    };
    union {
        int m_gameplayOffsetY{};
        int m_unkInt2;
    };
    union {
        bool m_gameplayOffsetYDontZoom{};
        bool m_unkBool3;
    };
    cocos2d::CCPoint m_snapInternalCameraOffset;
    float m_middleGroundOffsetY;
    union {
        float m_middleGroundOffsetYTarget{};
        float m_unkInt3;
    };
    union {
        float m_middleGroundOffsetYDuration{};
        float m_unkInt4;
    };
    union {
        bool m_cameraMoveXActive{};
        bool m_unkBool4;
    };
    union {
        bool m_cameraMoveYActive{};
        bool m_unkBool5;
    };
    union {
        float m_cameraPadding{};
        float m_unkFloat2;
    };
    union {
        float m_cameraEasing{};
        float m_unkFloat3;
    };
    int m_unkInt5;
    int m_unkInt6;
    int m_unkInt7;
    int m_unkInt8;
    int m_unkInt9;
    union {
        float m_flyCameraY{};
        float m_unkInt10;
    };
    union {
        float m_lastModeHeight{};
        float m_unkInt11;
    };
    union {
        float m_lastCameraZoom{};
        float m_unkFloat4;
    };
    union {
        float m_zoomDuration{};
        float m_unkUint1;
    };
    float m_portalY;
    union {
        bool m_portalYDuringZoom{};
        bool m_unkBool6;
    };
    bool m_gravityRelated;
    union {
        float m_cameraCenterY{};
        float m_unkInt12;
    };
    union {
        float m_cameraMoveYTarget{};
        float m_unkInt13;
    };
    union {
        float m_flyCameraTargetY{};
        float m_unkInt14;
    };
    float m_unkInt15;
    union {
        bool m_flyGroundActive{};
        bool m_unkBool7;
    };
    union {
        bool m_isFreeMode{};
        bool m_unkBool8;
    };
    union {
        bool m_disableCameraGridSnap{};
        bool m_unkBool9;
    };
    union {
        float m_backgroundSpeedX{};
        float m_unkFloat5;
    };
    union {
        float m_backgroundSpeedY{};
        float m_unkFloat6;
    };
    union {
        float m_middlegroundSpeedX{};
        float m_unkFloat7;
    };
    union {
        float m_middlegroundSpeedY{};
        float m_unkFloat8;
    };
    float m_cameraAngle;
    float m_targetCameraAngle;
    bool m_playerStreakBlend;
    float m_timeWarp;
    float m_queuedTimeWarp;
    float m_timeWarpRelated;
    int m_currentChannel;
    int m_rotateChannel;
    std::unordered_map<int, int> m_spawnChannelRelated0;
    std::unordered_map<int, bool> m_spawnChannelRelated1;
    double m_totalTime;
    double m_levelTime;
    double m_bestTime;
    unsigned int m_commandIndex;
    float m_unkUint3;
    unsigned int m_currentProgress;
    union {
        int m_stepCommandIndex{};
        int m_unkUint4;
    };
    union {
        unsigned int m_positionHistoryTime{};
        unsigned int m_unkUint5;
    };
    union {
        unsigned int m_positionHistoryClock{};
        unsigned int m_unkUint6;
    };
    union {
        unsigned int m_areaEffectCounter{};
        unsigned int m_unkUint7;
    };
    union {
        unsigned int m_advancedFollowCounter{};
        unsigned int m_unkUint8;
    };
    GameObject* m_lastActivatedPortal1;
    GameObject* m_lastActivatedPortal2;
    cocos2d::CCPoint m_cameraPosition;
    union {
        bool m_isFlipped{};
        bool m_unkBool10;
    };
    union {
        float m_levelFlipProgress{};
        float m_levelFlipping;
    };
    union {
        bool m_inSecondHalfOfFlipAnimation{};
        bool m_unkBool11;
    };
    union {
        bool m_isFlipping{};
        bool m_unkBool12;
    };
    bool m_isDualMode;
    union {
        float m_dualAnimationProgress{};
        float m_unkFloat9;
    };
    std::unordered_map<int, GJValueTween> m_tweenActions;
    int m_cameraEdgeValue0;
    int m_cameraEdgeValue1;
    int m_cameraEdgeValue2;
    int m_cameraEdgeValue3;
    std::unordered_map<int, GameObjectPhysics> m_gameObjectPhysics;
    std::vector<float> m_positionHistory;
    int m_unkUint10;
    union {
        int m_positionHistoryIndex{};
        int m_unkUint11;
    };
    union {
        int m_cameraHistorySlot{};
        int m_unkUint12;
    };
    cocos2d::CCPoint m_cameraStepDiff;
    union {
        float m_backgroundWidth{};
        float m_unkFloat10;
    };
    float m_timeModRelated;
    bool m_timeModRelated2;
    std::map<std::pair<int, int>, int> m_activatedObjectIDs;
    union {
        float m_teleportCameraEaseTimer{};
        float m_unkUint13;
    };
    cocos2d::CCPoint m_lastCameraEase;
    cocos2d::CCPoint m_cameraLastPosition;
    union {
        bool m_player1GoingSideways{};
        bool m_unkBool20;
    };
    union {
        bool m_player1GoingLeft{};
        bool m_unkBool21;
    };
    union {
        bool m_audioOnDeath{};
        bool m_unkBool22;
    };
    union {
        float m_respawnTime{};
        float m_unkUint14;
    };
    union {
        bool m_noDeathSFX{};
        bool m_unkBool26;
    };
    bool m_cameraShakeEnabled;
    union {
        float m_cameraShakeDuration{};
        float m_cameraShakeFactor;
    };
    union {
        float m_cameraShakeStrength{};
        float m_unkUint15;
    };
    union {
        float m_cameraShakeInterval{};
        float m_unkUint16;
    };
    union {
        double m_lastShakeTime{};
        double m_unkUint64_1;
    };
    cocos2d::CCPoint m_cameraShakeOffset;
    unsigned int m_dualRelated;
    std::unordered_map<int, EnhancedGameObject*> m_stateObjects;
    std::map<std::pair<GJGameEvent, int>, std::vector<EventTriggerInstance>> m_gameEventTriggers;
    std::map<std::pair<GJGameEvent, int>, int> m_gameEventCounts;
    std::unordered_map<int, std::vector<EnterEffectInstance>> m_enterEffectInstanceVectors;
    std::unordered_map<int, std::vector<EnterEffectInstance>> m_exitEffectInstanceVectors;
    std::vector<int> m_enterChannelMap;
    std::vector<int> m_exitChannelMap;
    std::vector<EnterEffectInstance> m_moveEffectInstances;
    std::vector<EnterEffectInstance> m_rotateEffectInstances;
    std::vector<EnterEffectInstance> m_scaleEffectInstances;
    std::vector<EnterEffectInstance> m_fadeEffectInstances;
    std::vector<EnterEffectInstance> m_tintEffectInstances;
    std::unordered_set<int> m_unsortedAreaEffects;
    union {
        bool m_advancedFollowNeedsSort{};
        bool m_unkBool27;
    };
    std::vector<AdvancedFollowInstance> m_advanceFollowInstances;
    std::vector<DynamicObjectAction> m_dynamicMoveActions;
    std::vector<DynamicObjectAction> m_dynamicRotateActions;
    union {
        bool m_instantExitStaticCameraX{};
        bool m_unkBool28;
    };
    union {
        bool m_instantExitStaticCameraY{};
        bool m_unkBool29;
    };
    union {
        float m_maxPortalY{};
        float m_unkUint17;
    };
    std::unordered_map<int, std::vector<int>> m_sfxTriggerChannels;
    std::map<std::pair<int,int>, SFXTriggerInstance> m_proximityVolumeRelated;
    std::unordered_map<int, SongChannelState> m_songChannelStates;
    std::unordered_map<int, std::vector<SongTriggerState>> m_songTriggerStateVectors;
    std::vector<SFXTriggerState> m_sfxTriggerStates;
    union {
        bool m_mainSongStopped{};
        bool m_unkBool30;
    };
    int m_background;
    int m_ground;
    int m_middleground;
    union {
        bool m_unlinkDualGravity{};
        bool m_unkBool31;
    };
    int m_points;
    union {
        bool m_hasObtainedPoints{};
        bool m_unkBool32;
    };
    unsigned int m_pauseCounter;
    unsigned int m_pauseBufferTimer;
};
