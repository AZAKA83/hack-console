#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraOffsetTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraOffsetTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraOffsetTrigger, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5ac690
     * @note[short] iOS: 0x221e60
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraOffsetTrigger();

    /**
     * @note[short] MacOS (ARM): 0x18814
     * @note[short] Windows: 0x5ac760
     * @note[short] Android
     */
    static SetupCameraOffsetTrigger* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x64fd40
     * @note[short] MacOS (Intel): 0x7427f0
     * @note[short] Windows: 0x5adb30
     * @note[short] iOS: 0x223748
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x650778
     * @note[short] MacOS (Intel): 0x7433b0
     * @note[short] Windows: 0x5af060
     * @note[short] iOS: 0x223ff0
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x650510
     * @note[short] MacOS (Intel): 0x743080
     * @note[short] Windows: 0x5aea20
     * @note[short] iOS: 0x223dc8
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x650154
     * @note[short] MacOS (Intel): 0x742c50
     * @note[short] Windows: 0x5adf40
     * @note[short] iOS: 0x223a98
     * @note[short] Android
     */
    virtual void valuePopupClosed(ConfigureValuePopup* popup, float value);

    /**
     * @note[short] MacOS (ARM): 0x64e150
     * @note[short] Windows: 0x5ac890
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

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
     * @note[short] MacOS (ARM): 0x64f918
     * @note[short] MacOS (Intel): 0x7423d0
     * @note[short] Windows: 0x5ae940
     * @note[short] Android
     */
    void onTargetMode(cocos2d::CCObject* sender);

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
     * @note[short] MacOS (ARM): 0x64f8c4
     * @note[short] MacOS (Intel): 0x742360
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    float sliderValueFromPos(int pos);

    /**
     * @note[short] MacOS (ARM): 0x64f814
     * @note[short] MacOS (Intel): 0x7422c0
     * @note[short] Windows: 0x5ae740
     * @note[short] Android
     */
    void sliderXChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x64f86c
     * @note[short] MacOS (Intel): 0x742310
     * @note[short] Windows: 0x5ae790
     * @note[short] Android
     */
    void sliderYChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void toggleEasingRateVisibility();

    /**
     * @note[short] MacOS (ARM): 0x6502f0
     * @note[short] MacOS (Intel): 0x742e20
     * @note[short] Windows: 0x5aefe0
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x64fc50
     * @note[short] MacOS (Intel): 0x742730
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
     * @note[short] MacOS (ARM): 0x650360
     * @note[short] MacOS (Intel): 0x742ea0
     * @note[short] Windows: 0x5aee00
     * @note[short] Android
     */
    void updateMoveCommandPosX();

    /**
     * @note[short] Windows: 0x5aeef0
     * @note[short] Android
     */
    void updateMoveCommandPosY();

    /**
     * @note[short] Windows: 0x5ae7e0
     * @note[short] Android
     */
    void updateValueXLabel();

    /**
     * @note[short] Windows: 0x5ae890
     * @note[short] Android
     */
    void updateValueYLabel();
    CCTextInputNode* m_moveTimeInput;
    Slider* m_moveTimeSlider;
    float m_moveTime;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    EasingType m_cameraEasingType;
    float m_cameraEasingRate;
    CCMenuItemSpriteExtra* m_cameraEasingRateButton;
    cocos2d::CCLabelBMFont* m_cameraEasingRateLabel;
    CCTextInputNode* m_offsetXInput;
    CCTextInputNode* m_offsetYInput;
    Slider* m_offsetXSlider;
    Slider* m_offsetYSlider;
    int m_offsetX;
    int m_offsetY;
    int m_targetMode;
    CCMenuItemToggler* m_xOnlyToggler;
    CCMenuItemToggler* m_yOnlyToggler;
};
