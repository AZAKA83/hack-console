#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupMGTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupMGTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupMGTrigger, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5bc5c0
     * @note[short] iOS: 0x38db8c
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupMGTrigger();

    /**
     * @note[short] Android
     */
    static SetupMGTrigger* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x466f18
     * @note[short] MacOS (Intel): 0x50b660
     * @note[short] Windows: 0x5bd880
     * @note[short] iOS: 0x38f02c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x467690
     * @note[short] MacOS (Intel): 0x50bf30
     * @note[short] Windows: 0x5bdf90
     * @note[short] iOS: 0x38f69c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x467490
     * @note[short] MacOS (Intel): 0x50bcd0
     * @note[short] Windows: 0x5bdbe0
     * @note[short] iOS: 0x38f4dc
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x4671ac
     * @note[short] MacOS (Intel): 0x50b990
     * @note[short] Windows: 0x5adf40
     * @note[short] iOS: 0x38f274
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] Windows: 0x5bc890
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x5ae320
     * @note[short] Android
     */
    void onEasing(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5ade70
     * @note[short] Android
     */
    void onEasingRate(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    int posFromSliderValue(float value);

    /**
     * @note[short] Windows: 0x5ae5b0
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x466ca4
     * @note[short] MacOS (Intel): 0x50b3f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float sliderValueFromPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x466c4c
     * @note[short] MacOS (Intel): 0x50b3a0
     * @note[short] Windows: 0x5bdae0
     * @note[short] Android
     */
    void sliderYChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x467348
     * @note[short] MacOS (Intel): 0x50bb60
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
     * @note[short] MacOS (Intel): 0x50b5a0
     * @note[short] Windows: 0x5ae3e0
     * @note[short] Android
     */
    void updateEasingLabel();

    /**
     * @note[short] Windows: 0x5ae010
     * @note[short] Android
     */
    void updateEasingRateLabel();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMoveCommandEasing();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateMoveCommandEasingRate();

    /**
     * @note[short] Windows: 0x5bdea0
     * @note[short] Android
     */
    void updateMoveCommandPosY();

    /**
     * @note[short] Windows: 0x5bdb30
     * @note[short] Android
     */
    void updateValueYLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_mgEasingLabel;
    EasingType m_mgEasingType;
    float m_mgEasingRate;
    CCMenuItemSpriteExtra* m_mgEasingRateButton;
    cocos2d::CCLabelBMFont* m_mgEasingRateLabel;
    CCTextInputNode* m_offsetYInput;
    Slider* m_offsetYSlider;
    int m_offsetY;
};
