#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/EnhancedGameObject.hpp>
#include <Geode/mapping/CCPoint.hpp>
#include <Geode/mapping/ccTypes.hpp>
#include <Geode/mapping/vector.hpp>

class EffectGameObject : public EnhancedGameObject {
public:
    static constexpr auto CLASS_NAME = "EffectGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EffectGameObject, EnhancedGameObject)

    /**
     * @note[short] MacOS (ARM): 0x18adc0
     * @note[short] MacOS (Intel): 0x1d64d0
     * @note[short] Windows: 0x637740
     * @note[short] Android: Rebinded
     */
     EffectGameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a63ac
     * @note[short] MacOS (Intel): 0x66ea30
     * @note[short] Windows: 0x6379e0
     * @note[short] iOS: 0x42b2e8
     * @note[short] Android: Rebinded
     */
    virtual  ~EffectGameObject();

    /**
     * @note[short] MacOS (ARM): 0x159544
     * @note[short] MacOS (Intel): 0x199690
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EffectGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x159924
     * @note[short] MacOS (Intel): 0x199b40
     * @note[short] Windows: 0x647bb0
     * @note[short] iOS: 0x42b5cc
     * @note[short] Android
     */
    virtual void setOpacity(unsigned char opacity);

    /**
     * @note[short] MacOS (ARM): 0x15aea4
     * @note[short] MacOS (Intel): 0x19b8d0
     * @note[short] Windows: 0x64a2f0
     * @note[short] iOS: 0x42cb50
     * @note[short] Android
     */
    virtual void firstSetup();

    /**
     * @note[short] MacOS (ARM): 0x13c544
     * @note[short] MacOS (Intel): 0x175ee0
     * @note[short] Windows: 0x64a320
     * @note[short] iOS: 0x41c074
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x1599a8
     * @note[short] MacOS (Intel): 0x199bc0
     * @note[short] Windows: 0x647bf0
     * @note[short] iOS: 0x42b650
     * @note[short] Android
     */
    virtual void triggerObject(GJBaseGameLayer* layer, int uniqueID, std::vector<int> const* remapKeys);

    /**
     * @note[short] MacOS (ARM): 0x13dbd8
     * @note[short] MacOS (Intel): 0x177460
     * @note[short] Windows: 0x64a610
     * @note[short] iOS: 0x41d2c8
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x13475c
     * @note[short] MacOS (Intel): 0x16b890
     * @note[short] Windows: 0x64df00
     * @note[short] iOS: 0x417328
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1595e8
     * @note[short] MacOS (Intel): 0x199720
     * @note[short] Windows: 0x6476c0
     * @note[short] iOS: 0x42b398
     * @note[short] Android
     */
    virtual void setRScaleX(float scaleX);

    /**
     * @note[short] MacOS (ARM): 0x1595f8
     * @note[short] MacOS (Intel): 0x199740
     * @note[short] Windows: 0x647710
     * @note[short] iOS: 0x42b3a8
     * @note[short] Android
     */
    virtual void setRScaleY(float scaleY);

    /**
     * @note[short] MacOS (ARM): 0x15ae30
     * @note[short] MacOS (Intel): 0x19b860
     * @note[short] Windows: 0x64a2d0
     * @note[short] iOS: 0x42cadc
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x15abec
     * @note[short] MacOS (Intel): 0x19b620
     * @note[short] Windows: 0x64a0c0
     * @note[short] iOS: 0x42c8a4
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x15adec
     * @note[short] MacOS (Intel): 0x19b820
     * @note[short] Windows: 0x64a290
     * @note[short] iOS: 0x42caa0
     * @note[short] Android
     */
    virtual float spawnXPosition();

    /**
     * @note[short] MacOS (ARM): 0x15b0fc
     * @note[short] MacOS (Intel): 0x19ba70
     * @note[short] Windows: 0x64dd20
     * @note[short] iOS: 0x42cd18
     * @note[short] Android
     */
    virtual bool canReverse();

    /**
     * @note[short] MacOS (ARM): 0x15b188
     * @note[short] MacOS (Intel): 0x19bae0
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x42cda4
     * @note[short] Android
     */
    virtual bool isSpecialSpawnObject();

    /**
     * @note[short] MacOS (ARM): 0x15b334
     * @note[short] MacOS (Intel): 0x19bc80
     * @note[short] Windows: 0x64de90
     * @note[short] iOS: 0x42cdac
     * @note[short] Android
     */
    virtual bool canBeOrdered();

    /**
     * @note[short] MacOS (ARM): 0x18ab48
     * @note[short] MacOS (Intel): 0x1d61c0
     * @note[short] Windows: 0x6379c0
     * @note[short] iOS: 0x440b38
     * @note[short] Android
     */
    virtual cocos2d::CCLabelBMFont* getObjectLabel();

    /**
     * @note[short] MacOS (ARM): 0x18ab50
     * @note[short] MacOS (Intel): 0x1d61d0
     * @note[short] Windows: 0x6379d0
     * @note[short] iOS: 0x440b40
     * @note[short] Android
     */
    virtual void setObjectLabel(cocos2d::CCLabelBMFont* label);

    /**
     * @note[short] MacOS (ARM): 0x15ab60
     * @note[short] MacOS (Intel): 0x19b590
     * @note[short] Windows: 0x649ff0
     * @note[short] iOS: 0x42c818
     * @note[short] Android
     */
    virtual void stateSensitiveOff(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x15aed0
     * @note[short] MacOS (Intel): 0x19b900
     * @note[short] Windows: 0x64de00
     * @note[short] Android
     */
    bool canSpawnTriggers();

    /**
     * @note[short] MacOS (ARM): 0x15ac00
     * @note[short] MacOS (Intel): 0x19b640
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    int getTargetColorIndex();

    /**
     * @note[short] MacOS (ARM): 0x15b190
     * @note[short] MacOS (Intel): 0x19baf0
     * @note[short] Android
     */
    bool hasSpawnTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x12eab4
     * @note[short] MacOS (Intel): 0x163ce0
     * @note[short] Windows: 0x647650
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x159608
     * @note[short] MacOS (Intel): 0x199760
     * @note[short] Windows: 0x647760
     * @note[short] iOS: 0x42b3b8
     * @note[short] Android
     */
    void playTriggerEffect();

    /**
     * @note[short] MacOS (ARM): 0x15ae70
     * @note[short] MacOS (Intel): 0x19b8a0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetSpawnTrigger();

    /**
     * @note[short] MacOS (ARM): 0x146a0c
     * @note[short] MacOS (Intel): 0x182b20
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setTargetID(int id);

    /**
     * @note[short] MacOS (ARM): 0x146a24
     * @note[short] MacOS (Intel): 0x182b40
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void setTargetID2(int id);

    /**
     * @note[short] MacOS (ARM): 0x15991c
     * @note[short] MacOS (Intel): 0x199b30
     * @note[short] Windows: 0x647ba0
     * @note[short] Android
     */
    void triggerEffectFinished();

    /**
     * @note[short] MacOS (ARM): 0x15acec
     * @note[short] MacOS (Intel): 0x19b710
     * @note[short] Windows: 0x64a170
     * @note[short] Android
     */
    void updateInteractiveHover(float offset);

    /**
     * @note[short] MacOS (ARM): 0x15ac74
     * @note[short] MacOS (Intel): 0x19b6b0
     * @note[short] Windows: 0x64a0f0
     * @note[short] Android
     */
    void updateSpecialColor();

    /**
     * @note[short] MacOS (ARM): 0x15af98
     * @note[short] MacOS (Intel): 0x19b9b0
     * @note[short] Windows: 0x64dbd0
     * @note[short] Android
     */
    void updateSpeedModType();
    bool m_unknownBool;
    cocos2d::ccColor3B m_triggerTargetColor;
    float m_duration;
    float m_opacity;
    bool m_triggerEffectPlaying;
    int m_targetGroupID;
    int m_centerGroupID;
    bool m_isTouchTriggered;
    bool m_isSpawnTriggered;
    bool m_hasCenterEffect;
    float m_shakeStrength;
    float m_shakeInterval;
    bool m_tintGround;
    bool m_usesPlayerColor1;
    bool m_usesPlayerColor2;
    bool m_usesBlending;
    cocos2d::CCPoint m_moveOffset;
    EasingType m_easingType;
    float m_easingRate;
    bool m_lockToPlayerX;
    bool m_lockToPlayerY;
    bool m_lockToCameraX;
    bool m_lockToCameraY;
    bool m_useMoveTarget;
    MoveTargetType m_moveTargetMode;
    float m_moveModX;
    float m_moveModY;
    bool m_smallStep;
    bool m_isDirectionFollowSnap360;
    int m_targetModCenterID;
    float m_directionModeDistance;
    bool m_isDynamicMode;
    bool m_isSilent;
    int m_specialTarget;
    float m_rotationDegrees;
    int m_times360;
    bool m_lockObjectRotation;
    int m_rotationTargetID;
    float m_rotationOffset;
    int m_dynamicModeEasing;
    float m_followXMod;
    float m_followYMod;
    float m_followYSpeed;
    float m_followYDelay;
    int m_followYOffset;
    float m_followYMaxSpeed;
    float m_fadeInDuration;
    float m_holdDuration;
    float m_fadeOutDuration;
    int m_pulseMode;
    int m_pulseTargetType;
    cocos2d::ccHSVValue m_hsvValue;
    int m_copyColorID;
    bool m_copyOpacity;
    bool m_pulseMainOnly;
    bool m_pulseDetailOnly;
    bool m_pulseExclusive;
    bool m_legacyHSV;
    bool m_activateGroup;
    bool m_touchHoldMode;
    TouchTriggerType m_touchToggleMode;
    TouchTriggerControl m_touchPlayerMode;
    bool m_isDualMode;
    int m_animationID;
    float m_spawnXPosition;
    int m_spawnOrder;
    bool m_isMultiTriggered;
    bool m_previewDisable;
    bool m_spawnOrdered;
    bool m_triggerOnExit;
    int m_itemID2;
    int m_controlID;
    bool m_targetControlID;
    bool m_isDynamicBlock;
    int m_itemID;
    bool m_targetPlayer1;
    bool m_targetPlayer2;
    bool m_followCPP;
    bool m_subtractCount;
    bool m_collectibleIsPickupItem;
    bool m_collectibleIsToggleTrigger;
    int m_collectibleParticleID;
    int m_collectiblePoints;
    bool m_hasNoAnimation;
    void* m_unk698;
    int m_forceModID;
    bool m_rotateFollowP1;
    bool m_rotateFollowP2;
    float m_unk6a8;
    float m_unk6ac;
    float m_unk6b0;
    bool m_unk6b4;
    float m_gravityValue;
    bool m_isSinglePTouch;
    float m_zoomValue;
    bool m_cameraIsFreeMode;
    bool m_cameraEditCameraSettings;
    float m_cameraEasingValue;
    float m_cameraPaddingValue;
    bool m_cameraDisableGridSnap;
    bool m_endReversed;
    float m_timeWarpTimeMod;
    bool m_shouldPreview;
    int m_ordValue;
    int m_channelValue;
    bool m_isReverse;
    short m_speedModType;
    cocos2d::CCPoint m_speedStart;
    int m_secretCoinID;
    bool m_unk6f4;
    bool m_unk6f5;
    bool m_isPost2208Remap;
    cocos2d::CCPoint m_endPosition;
    float m_spawnTriggerDelay;
    float m_gravityMod;
    bool m_unk708;
    cocos2d::CCLabelBMFont* m_objectLabel;
    bool m_ignoreGroupParent;
    bool m_ignoreLinkedObjects;
    bool m_channelChanged;
    bool m_canSpawnTriggers;
    int m_collisionUpdateID;
};
