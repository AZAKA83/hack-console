#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupOpacityPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupOpacityPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupOpacityPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5bfae0
     * @note[short] iOS: 0x26690
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupOpacityPopup();

    /**
     * @note[short] Windows: 0x5bfbb0
     * @note[short] Android
     */
    static SetupOpacityPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x19600
     * @note[short] MacOS (Intel): 0x1d720
     * @note[short] Windows: 0x5c07b0
     * @note[short] iOS: 0x2720c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x19ad0
     * @note[short] MacOS (Intel): 0x1dd20
     * @note[short] Windows: 0x5a1740
     * @note[short] iOS: 0x27618
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x19830
     * @note[short] MacOS (Intel): 0x1d9e0
     * @note[short] Windows: 0x1265d0
     * @note[short] iOS: 0x27414
     * @note[short] Android
     */
    virtual void textInputClosed(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1984c
     * @note[short] MacOS (Intel): 0x1da20
     * @note[short] Windows: 0x5c0b50
     * @note[short] iOS: 0x27430
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] MacOS (ARM): 0x1890c
     * @note[short] MacOS (Intel): 0x1c850
     * @note[short] Windows: 0x5bfce0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x19270
     * @note[short] MacOS (Intel): 0x1d360
     * @note[short] Windows: 0x5c0940
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x197c4
     * @note[short] MacOS (Intel): 0x1d950
     * @note[short] Windows: 0x5c0f80
     * @note[short] Android
     */
    void updateDuration();

    /**
     * @note[short] Windows: 0x5c0e50
     * @note[short] Android
     */
    void updateDurLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x19758
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateOpacity();

    /**
     * @note[short] MacOS (ARM): 0x195b0
     * @note[short] MacOS (Intel): 0x1d6d0
     * @note[short] Windows: 0x5c0f20
     * @note[short] Android
     */
    void updateOpacityLabel();

    /**
     * @note[short] MacOS (ARM): 0x19a44
     * @note[short] MacOS (Intel): 0x1dc60
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_groupIDInput;
    CCTextInputNode* m_fadeTimeInput;
    cocos2d::CCLabelBMFont* m_opacityLabel;
    Slider* m_fadeTimeSlider;
    Slider* m_opacitySlider;
    float m_opacity;
    float m_fadeTime;
    int m_groupID;
};
