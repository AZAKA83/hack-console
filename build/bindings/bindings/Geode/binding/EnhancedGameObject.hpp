#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/GameObject.hpp>
#include <Geode/mapping/vector.hpp>

class EnhancedGameObject : public GameObject {
public:
    static constexpr auto CLASS_NAME = "EnhancedGameObject";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EnhancedGameObject, GameObject)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: 0x288660
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EnhancedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a63ac
     * @note[short] MacOS (Intel): 0x66ea30
     * @note[short] Windows: 0x288810
     * @note[short] Android: Rebinded
     */
    virtual  ~EnhancedGameObject();

    /**
     * @note[short] MacOS (ARM): 0x5a6854
     * @note[short] MacOS (Intel): 0x673590
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EnhancedGameObject* create(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x5bb8dc
     * @note[short] MacOS (Intel): 0x69dfb0
     * @note[short] Windows: 0x2a1f80
     * @note[short] iOS: 0x300854
     * @note[short] Android
     */
    virtual void customSetup();

    /**
     * @note[short] MacOS (ARM): 0x5bb1d8
     * @note[short] MacOS (Intel): 0x69d7b0
     * @note[short] Windows: 0x2a18d0
     * @note[short] iOS: 0x300250
     * @note[short] Android
     */
    virtual void resetObject();

    /**
     * @note[short] MacOS (ARM): 0x5bcb18
     * @note[short] MacOS (Intel): 0x6a0ed0
     * @note[short] Windows: 0x2a3b00
     * @note[short] iOS: 0x301a20
     * @note[short] Android
     */
    virtual void deactivateObject(bool deactivate);

    /**
     * @note[short] MacOS (ARM): 0x5bb490
     * @note[short] MacOS (Intel): 0x69da80
     * @note[short] Windows: 0x2a1be0
     * @note[short] iOS: 0x3004d8
     * @note[short] Android
     */
    virtual void customObjectSetup(std::vector<std::string>& values, std::vector<void*>& exists);

    /**
     * @note[short] MacOS (ARM): 0x5bcc64
     * @note[short] MacOS (Intel): 0x6a1010
     * @note[short] Windows: 0x2a3c60
     * @note[short] iOS: 0x301a94
     * @note[short] Android
     */
    virtual std::string getSaveString(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x5bb304
     * @note[short] MacOS (Intel): 0x69d910
     * @note[short] Windows: 0x2a1a20
     * @note[short] iOS: 0x300378
     * @note[short] Android
     */
    virtual void triggerActivated(float xPosition);

    /**
     * @note[short] MacOS (ARM): 0x5bb254
     * @note[short] MacOS (Intel): 0x69d840
     * @note[short] Windows: 0x2a1980
     * @note[short] iOS: 0x3002cc
     * @note[short] Android
     */
    virtual void restoreObject();

    /**
     * @note[short] MacOS (ARM): 0x5bb400
     * @note[short] MacOS (Intel): 0x69d9e0
     * @note[short] Windows: 0x2a1b10
     * @note[short] iOS: 0x300450
     * @note[short] Android
     */
    virtual void animationTriggered();

    /**
     * @note[short] MacOS (ARM): 0x5bb310
     * @note[short] MacOS (Intel): 0x69d920
     * @note[short] Windows: 0x2a1a30
     * @note[short] iOS: 0x300384
     * @note[short] Android
     */
    virtual void activatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x5bb370
     * @note[short] MacOS (Intel): 0x69d970
     * @note[short] Windows: 0x2a1a90
     * @note[short] iOS: 0x3003dc
     * @note[short] Android
     */
    virtual bool hasBeenActivatedByPlayer(PlayerObject* player);

    /**
     * @note[short] MacOS (ARM): 0x5bb3e0
     * @note[short] MacOS (Intel): 0x69d9c0
     * @note[short] Windows: 0x2a1af0
     * @note[short] iOS: 0x300434
     * @note[short] Android
     */
    virtual bool hasBeenActivated();

    /**
     * @note[short] MacOS (ARM): 0x5bb414
     * @note[short] MacOS (Intel): 0x69da00
     * @note[short] Windows: 0x2a1b70
     * @note[short] iOS: 0x300464
     * @note[short] Android
     */
    virtual void saveActiveColors();

    /**
     * @note[short] MacOS (ARM): 0x5bb0a4
     * @note[short] MacOS (Intel): 0x69d4b0
     * @note[short] Windows: 0x2a1770
     * @note[short] iOS: 0x30011c
     * @note[short] Android
     */
    virtual bool canAllowMultiActivate();

    /**
     * @note[short] MacOS (ARM): 0x18ab20
     * @note[short] MacOS (Intel): 0x1d6170
     * @note[short] Windows: 0x288740
     * @note[short] iOS: 0x302904
     * @note[short] Android
     */
    virtual bool getHasSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x18ab28
     * @note[short] MacOS (Intel): 0x1d6180
     * @note[short] Windows: 0x288750
     * @note[short] iOS: 0x30290c
     * @note[short] Android
     */
    virtual bool getHasRotateAction();

    /**
     * @note[short] MacOS (ARM): 0x5bb2e4
     * @note[short] MacOS (Intel): 0x69d8f0
     * @note[short] Windows: 0x2a1a00
     * @note[short] iOS: 0x30035c
     * @note[short] Android
     */
    virtual bool canMultiActivate(bool multiActivate);

    /**
     * @note[short] MacOS (ARM): 0x5bb28c
     * @note[short] MacOS (Intel): 0x69d880
     * @note[short] Windows: 0x2a19c0
     * @note[short] iOS: 0x300304
     * @note[short] Android
     */
    virtual void powerOnObject(int state);

    /**
     * @note[short] MacOS (ARM): 0x5bb2a0
     * @note[short] MacOS (Intel): 0x69d8a0
     * @note[short] Windows: 0x2a19e0
     * @note[short] iOS: 0x300318
     * @note[short] Android
     */
    virtual void powerOffObject();

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
    virtual void stateSensitiveOff(GJBaseGameLayer* layer);

    /**
     * @note[short] MacOS (ARM): 0x1efde4
     * @note[short] MacOS (Intel): 0x245940
     * @note[short] Windows: 0x2a50b0
     * @note[short] iOS: 0x3e60e8
     * @note[short] Android
     */
    virtual void updateSyncedAnimation(float totalTime, int frameIndex);

    /**
     * @note[short] MacOS (ARM): 0x1f122c
     * @note[short] MacOS (Intel): 0x247890
     * @note[short] Windows: 0x2a6e00
     * @note[short] iOS: 0x3e7468
     * @note[short] Android
     */
    virtual void updateAnimateOnTrigger(bool animate);

    /**
     * @note[short] MacOS (ARM): 0x5bb86c
     * @note[short] MacOS (Intel): 0x69df10
     * @note[short] Windows: 0x2a4210
     * @note[short] Android
     */
    void createRotateAction(float angle, int clockwiseDirection);

    /**
     * @note[short] MacOS (ARM): 0x5bb064
     * @note[short] MacOS (Intel): 0x69d470
     * @note[short] Windows: 0x2a1720
     * @note[short] Android
     */
    bool init(char const* frame);

    /**
     * @note[short] MacOS (ARM): 0x1f1324
     * @note[short] MacOS (Intel): 0x247980
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void previewAnimateOnTrigger();

    /**
     * @note[short] MacOS (ARM): 0x5be254
     * @note[short] MacOS (Intel): 0x6a2cd0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void refreshRotateAction();

    /**
     * @note[short] MacOS (ARM): 0x1f1364
     * @note[short] MacOS (Intel): 0x2479c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void resetSyncedAnimation();

    /**
     * @note[short] MacOS (ARM): 0x1f1394
     * @note[short] MacOS (Intel): 0x247a10
     * @note[short] Windows: 0x2a6f00
     * @note[short] Android
     */
    void setupAnimationVariables();

    /**
     * @note[short] MacOS (ARM): 0x1f11c8
     * @note[short] MacOS (Intel): 0x247830
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void triggerAnimation();

    /**
     * @note[short] MacOS (ARM): 0x5be2c8
     * @note[short] MacOS (Intel): 0x6a2d50
     * @note[short] Windows: 0x2a42a0
     * @note[short] Android
     */
    void updateRotateAction(float dt);

    /**
     * @note[short] MacOS (ARM): 0x5bb2b8
     * @note[short] MacOS (Intel): 0x69d8c0
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateState(int state);

    /**
     * @note[short] MacOS (ARM): 0x5b2cb8
     * @note[short] MacOS (Intel): 0x6931f0
     * @note[short] Windows: 0x2a3970
     * @note[short] Android
     */
    void updateUserCoin();

    /**
     * @note[short] MacOS (ARM): 0x1f106c
     * @note[short] MacOS (Intel): 0x247700
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void waitForAnimationTrigger();
    bool m_poweredOn;
    int m_state;
    int m_animationRandomizedStartValue;
    float m_animationStart;
    float m_unk540;
    float m_unk544;
    bool m_unk548;
    float m_randomFrameTime;
    bool m_visible;
    bool m_shouldNotHideAnimFreeze;
    bool m_usesSpecialAnimation;
    float m_frameTime;
    short m_frames;
    bool m_hasCustomAnimation;
    bool m_hasCustomRotation;
    bool m_disableRotation;
    float m_rotationSpeed;
    float m_rotationAngle;
    float m_rotationDelta;
    float m_rotationAnimationSpeed;
    bool m_animationRandomizedStart;
    float m_animationSpeed;
    bool m_animationShouldUseSpeed;
    bool m_animateOnTrigger;
    bool m_disableDelayedLoop;
    bool m_disableAnimShine;
    int m_singleFrame;
    bool m_animationOffset;
    bool m_animationTriggered;
    int m_unkAnimationInt;
    int m_maybeAnimationVariableXInt;
    int m_maybeAnimationVariableYInt;
    bool m_animateOnlyWhenActive;
    bool m_isNoMultiActivate;
    bool m_isMultiActivate;
    bool m_activated;
    bool m_activatedByPlayer1;
    bool m_activatedByPlayer2;
    bool m_hasUniqueCoin;
};
