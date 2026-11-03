#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupShakePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShakePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShakePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5ea3c0
     * @note[short] iOS: 0x44ffa0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupShakePopup();

    /**
     * @note[short] Windows: 0x5ea490
     * @note[short] Android
     */
    static SetupShakePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x65182c
     * @note[short] MacOS (Intel): 0x744510
     * @note[short] Windows: 0x5eb340
     * @note[short] iOS: 0x450c40
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x651e6c
     * @note[short] MacOS (Intel): 0x744c80
     * @note[short] Windows: 0x5ebdb0
     * @note[short] iOS: 0x451168
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x651b60
     * @note[short] MacOS (Intel): 0x7448f0
     * @note[short] Windows: 0x5eb9d0
     * @note[short] iOS: 0x450f30
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x65097c
     * @note[short] Windows: 0x5ea5d0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x651228
     * @note[short] MacOS (Intel): 0x743f30
     * @note[short] Windows: 0x5eb510
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5aefe0
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Windows: 0x5ae670
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x651a80
     * @note[short] Windows: 0x5eb950
     * @note[short] Android
     */
    void updateInterval();

    /**
     * @note[short] Windows: 0x5eb880
     * @note[short] Android
     */
    void updateIntervalLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x651af0
     * @note[short] MacOS (Intel): 0x6b9db0
     * @note[short] Windows: 0x5eb800
     * @note[short] Android
     */
    void updateShake();

    /**
     * @note[short] Windows: 0x5eb730
     * @note[short] Android
     */
    void updateShakeLabel(bool decimals);
    CCTextInputNode* m_durationInput;
    Slider* m_durationSlider;
    float m_duration;
    CCTextInputNode* m_strengthInput;
    Slider* m_strengthSlider;
    float m_strength;
    CCTextInputNode* m_intervalInput;
    Slider* m_intervalSlider;
    float m_interval;
};
