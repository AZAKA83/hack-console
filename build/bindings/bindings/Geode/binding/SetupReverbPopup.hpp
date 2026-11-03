#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupReverbPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupReverbPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupReverbPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupReverbPopup();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupReverbPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupReverbPopup* create(SFXTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x416748
     * @note[short] MacOS (Intel): 0x4b1560
     * @note[short] Windows: 0x5dc530
     * @note[short] iOS: 0x21276c
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x415fec
     * @note[short] Windows: 0x5dbc60
     * @note[short] Android
     */
    bool init(SFXTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4166f8
     * @note[short] MacOS (Intel): 0x4b1500
     * @note[short] Windows: 0x5dc240
     * @note[short] Android
     */
    void onPlay(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4165a8
     * @note[short] MacOS (Intel): 0x4b13d0
     * @note[short] Windows: 0x5dc340
     * @note[short] Android
     */
    void onReverb(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x416624
     * @note[short] MacOS (Intel): 0x4b1450
     * @note[short] Windows: 0x5dc3c0
     * @note[short] Android
     */
    void updateReverbLabel();
    cocos2d::CCLabelBMFont* m_reverbLabel;
};
