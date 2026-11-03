#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/DashRingObject.hpp>
#include <Geode/mapping/CCNode.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/map.hpp>
#include <Geode/mapping/unordered_set.hpp>
#include <Geode/mapping/vector.hpp>

class PlayerCheckpoint : public cocos2d::CCNode {
public:
    static constexpr auto CLASS_NAME = "PlayerCheckpoint";
    GEODE_CUSTOM_CONSTRUCTOR_CUTOFF(PlayerCheckpoint, cocos2d::CCNode)

    /**
     * @note[short] Windows: 0x520a60
     * @note[short] Android: Out of line
     */
     PlayerCheckpoint();

    /**
     * @note[short] Windows: 0x520ed0
     * @note[short] iOS: 0x19b43c
     * @note[short] Android: Rebinded
     */
    virtual  ~PlayerCheckpoint();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static PlayerCheckpoint* create();

    /**
     * @note[short] MacOS (ARM): 0x522f28
     * @note[short] MacOS (Intel): 0x5d7280
     * @note[short] Windows: 0x52ed00
     * @note[short] iOS: 0x19b4c8
     * @note[short] Android
     */
    virtual bool init();

    /**
     * @note[short] Android
     */
    TodoReturn deserializeFromString(std::string const& p0, GJBaseGameLayer* p1);

    /**
     * @note[short] Android
     */
    TodoReturn serializeToString();

    /**
     * @note[short] Android
     */
    TodoReturn verifyMatch(PlayerCheckpoint* p0);
    cocos2d::CCPoint m_position;
    cocos2d::CCPoint m_lastPosition;
    double m_yVelocityUnrounded;
    bool m_isUpsideDown;
    bool m_isSideways;
    bool m_isShip;
    bool m_isBall;
    bool m_isBird;
    bool m_isSwing;
    bool m_isDart;
    bool m_isRobot;
    bool m_isSpider;
    bool m_isOnGround;
    GhostType m_ghostType;
    bool m_isMini;
    float m_playerSpeed;
    bool m_isHidden;
    bool m_isGoingLeft;
    double m_maybeReverseSpeed;
    bool m_jumpBuffered;
    bool m_isDashing;
    float m_dashStartTimeold;
    double m_dashX;
    double m_dashY;
    double m_dashAngle;
    double m_dashStartTime;
    DashRingObject* m_dashRing;
    bool m_platformerCheckpoint;
    double m_lastFlipTime;
    float m_gravityMod;
    GameObject* m_objectSnappedTo;
    double m_snapDistance;
    double m_accelerationOrSpeed;
    bool m_decreaseBoostSlide;
    int m_followRelated;
    std::vector<float> m_playerFollowFloats;
    union {
        float m_followSampleTimer{};
        float m_unk838;
    };
    bool m_isOnSlope;
    bool m_wasOnSlope;
    float m_slopeVelocity;
    float m_rotation;
    bool m_wasTeleported;
    bool m_fixGravityBug;
    bool m_reverseSync;
    double m_yVelocityBeforeSlope;
    double m_slopeStartTime;
    bool m_justPlacedStreak;
    int m_lastCollisionBottom;
    int m_lastCollisionTop;
    int m_lastCollisionLeft;
    int m_lastCollisionRight;
    union {
        int m_prevCollisionBottom{};
        int m_unk50C;
    };
    union {
        int m_prevCollisionTop{};
        int m_unk510;
    };
    GameObject* m_currentSlope2;
    GameObject* m_preLastGroundObject;
    float m_slopeAngle;
    bool m_slopeSlidingMaybeRotated;
    bool m_quickCheckpointMode;
    GameObject* m_collidedObject;
    GameObject* m_lastGroundObject;
    GameObject* m_collidingWithLeft;
    GameObject* m_collidingWithRight;
    double m_scaleXRelated2;
    double m_groundYVelocity;
    double m_yVelocityRelated;
    double m_scaleXRelated3;
    bool m_collidingBetweenSteps;
    double m_scaleXRelated4;
    double m_scaleXRelated5;
    bool m_isCollidingWithSlope;
    bool m_isBallRotating;
    union {
        bool m_noPotentialSlope{};
        bool m_unk669;
    };
    GameObject* m_currentPotentialSlope;
    GameObject* m_currentSlope;
    double m_slopeCenterOffset;
    int m_collidingWithSlopeId;
    bool m_slopeIsDownhill;
    float m_slopeAngleRadians;
    float m_rotationSpeed;
    float m_rotateSpeed;
    bool m_isRotating;
    bool m_ballSpinning;
    double m_speedMultiplier;
    double m_yStart;
    double m_gravity;
    float m_trailingParticleLife;
    double m_gameModeChangedTime;
    bool m_ringJumpedSincePress;
    bool m_hasStartedFalling;
    bool m_shouldTryPlacingCheckpoint;
    bool m_playEffects;
    bool m_landedSinceFlip;
    double m_lastSpiderFlipTime;
    bool m_unkBool5;
    bool m_usedRingThisStep;
    std::unordered_set<int> m_usedRings;
    bool m_specialGroundHit;
    float m_landParticlesAngle;
    float m_landParticlesGravityY;
    double m_slopeRotation;
    double m_currentSlopeYVelocity;
    union {
        double m_lastSlopeSnapY{};
        double m_blackOrbRelated;
    };
    double m_lastSlopeSnapOffset;
    bool m_lastSlopeSnapAtFarEdge;
    bool m_lastSlopeSnapAtNearEdge;
    bool m_isAccelerating;
    bool m_isCurrentSlopeTop;
    double m_collidedTopMinY;
    double m_collidedBottomMaxY;
    double m_collidedLeftMaxX;
    double m_collidedRightMinX;
    bool m_wasJumpBuffered;
    bool m_wasRobotJump;
    bool m_stateJumpBuffered;
    bool m_statePreJump;
    bool m_touchedRing;
    bool m_touchedCustomRing;
    bool m_touchedGravityPortal;
    bool m_brokeBlockSincePress;
    bool m_touchedPad;
    double m_yVelocity;
    double m_fallSpeed;
    bool m_slopeResnapped;
    int m_reverseCooldown;
    double m_reverseSyncStep;
    float m_ballRollSpeed;
    cocos2d::CCPoint m_shipRotation;
    cocos2d::CCPoint m_lastPortalPos;
    float m_unkUnused3;
    bool m_touchingGround;
    double m_lastLandTime;
    float m_decelerationRamp;
    bool m_isRising;
    double m_lastGroundXDeltaTime;
    bool m_isLocked;
    bool m_controlsDisabled;
    cocos2d::CCPoint m_lastGroundedPos;
    cocos2d::CCArray* m_touchingRings;
    std::unordered_set<int> m_touchedRings;
    GameObject* m_lastActivatedPortal;
    double m_totalTime;
    float m_diagonalYStep;
    bool m_defaultMiniIcon;
    bool m_swapColors;
    bool m_switchDashFireColor;
    int m_stateOnGround;
    float m_unusedFloatA80;
    int m_stateBoostX;
    int m_stateBoostY;
    int m_stateNoWallPush;
    int m_stateScale;
    double m_platformerXVelocity;
    bool m_holdingRight;
    bool m_holdingLeft;
    bool m_leftPressedFirst;
    double m_platformXMove;
    union {
        bool m_hasPlatformMomentum{};
        bool m_maybeGoingCorrectSlopeDirection;
    };
    float m_platformMomentum;
    bool m_forcedSlopeSlide;
    bool m_isSliding;
    double m_slopeSpeedBonus;
    bool m_isOnIce;
    double m_platformRideTime;
    bool m_wasTouchingGround;
    int m_slopeJumpCount;
    double m_slopeJumpResetTime;
    double m_changedDirectionsTime;
    double m_slopeEndTime;
    bool m_isMoving;
    bool m_forcedSlideLeft;
    bool m_forcedSlideRight;
    bool m_lastSlideLeft;
    double m_slideSlopeAngle;
    double m_unkUnused2;
    int m_stateNoAutoJump;
    int m_stateDartSlide;
    int m_stateHitHead;
    int m_stateFlipGravity;
    int m_stateForce;
    cocos2d::CCPoint m_stateForceVector;
    bool m_affectedByForces;
    std::map<int, bool> m_touchedForceIds;
    float m_fallStartY;
};
