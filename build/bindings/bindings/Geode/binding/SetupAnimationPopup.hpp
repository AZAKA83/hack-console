#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAnimationPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAnimationPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAnimationPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5a0310
     * @note[short] iOS: 0x46caa0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAnimationPopup();

    /**
     * @note[short] Windows: 0x5a03e0
     * @note[short] Android
     */
    static SetupAnimationPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x343ea0
     * @note[short] MacOS (Intel): 0x3bec80
     * @note[short] Windows: 0x5a1260
     * @note[short] iOS: 0x46d6dc
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x34420c
     * @note[short] MacOS (Intel): 0x3bf0a0
     * @note[short] Windows: 0x5a1740
     * @note[short] iOS: 0x46d990
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x343ffc
     * @note[short] MacOS (Intel): 0x3bee10
     * @note[short] Windows: 0x5a13a0
     * @note[short] iOS: 0x46d830
     * @note[short] Android
     */
    virtual void textChanged(CCTextInputNode* node);

    /**
     * @note[short] Windows: 0x5a0510
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x343bf8
     * @note[short] Windows: 0x5a1360
     * @note[short] Android
     */
    void onAnimationIDArrow(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5d6328
     * @note[short] Windows: 0x5a16a0
     * @note[short] Android
     */
    void updateAnimationID();

    /**
     * @note[short] Android
     */
    void updateAnimationTextInputLabel();

    /**
     * @note[short] MacOS (Intel): 0x649260
     * @note[short] Android
     */
    void updateTargetID();

    /**
     * @note[short] Android
     */
    void updateTextInputLabel();
    CCTextInputNode* m_targetIDInput;
    CCTextInputNode* m_animationIDInput;
    int m_targetID;
    int m_animationID;
};
