#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRandTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRandTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRandTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5d4cc0
     * @note[short] iOS: 0x261cb0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRandTriggerPopup();

    /**
     * @note[short] Windows: 0x5d4d90
     * @note[short] Android
     */
    static SetupRandTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d30e4
     * @note[short] MacOS (Intel): 0x6b9c80
     * @note[short] Windows: 0x5d59c0
     * @note[short] iOS: 0x2628b0
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5d35e0
     * @note[short] MacOS (Intel): 0x6ba260
     * @note[short] Windows: 0x5d63e0
     * @note[short] iOS: 0x262cac
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d3264
     * @note[short] MacOS (Intel): 0x6b9e30
     * @note[short] Windows: 0x5d5c20
     * @note[short] iOS: 0x262a20
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5d4ed0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5d2ee8
     * @note[short] MacOS (Intel): 0x6b9a70
     * @note[short] Windows: 0x5d5b10
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5aefe0
     * @note[short] Android
     */
    void updateChance();

    /**
     * @note[short] Windows: 0x5d5b50
     * @note[short] Android
     */
    void updateChanceLabel(bool decimals);

    /**
     * @note[short] MacOS (ARM): 0x5d34d0
     * @note[short] MacOS (Intel): 0x6ba100
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] MacOS (ARM): 0x5d3554
     * @note[short] MacOS (Intel): 0x6ba1a0
     * @note[short] Android
     */
    void updateTargetID2();

    /**
     * @note[short] Windows: 0x5d6060
     * @note[short] Android
     */
    void updateTextInputLabel();

    /**
     * @note[short] Windows: 0x5d6220
     * @note[short] Android
     */
    void updateTextInputLabel2();
    CCTextInputNode* m_chanceInput;
    Slider* m_chanceSlider;
    float m_chancePercent;
    CCTextInputNode* m_groupID1Input;
    CCTextInputNode* m_groupID2Input;
    int m_groupID1;
    int m_groupID2;
};
