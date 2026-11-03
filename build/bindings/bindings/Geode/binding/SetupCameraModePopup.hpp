#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraModePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraModePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraModePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5ab360
     * @note[short] iOS: 0x4512cc
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraModePopup();

    /**
     * @note[short] Windows: 0x5ab460
     * @note[short] Android
     */
    static SetupCameraModePopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x40a2a8
     * @note[short] MacOS (Intel): 0x4a2aa0
     * @note[short] Windows: 0x5ac040
     * @note[short] iOS: 0x451e78
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x40a554
     * @note[short] MacOS (Intel): 0x4a2de0
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x4520fc
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4095c0
     * @note[short] Windows: 0x5ab580
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x5ac2a0
     * @note[short] Android
     */
    void onEditCameraSettings(cocos2d::CCObject* sender);

    /**
     * @note[short] Android
     */
    void onUnboundMode(cocos2d::CCObject* sender);

    /**
     * @note[short] Windows: 0x5ac420
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x40a46c
     * @note[short] Windows: 0x5ac510
     * @note[short] Android
     */
    void updateCameraEasing();

    /**
     * @note[short] Android
     */
    void updateCameraEasingLabel();

    /**
     * @note[short] MacOS (ARM): 0x40a4e4
     * @note[short] MacOS (Intel): 0x4a2d60
     * @note[short] Windows: 0x5ac600
     * @note[short] Android
     */
    void updateCameraPadding();

    /**
     * @note[short] MacOS (ARM): 0x40a1bc
     * @note[short] Windows: 0x5ac5a0
     * @note[short] Android
     */
    void updateCameraPaddingLabel();

    /**
     * @note[short] MacOS (ARM): 0x40a20c
     * @note[short] MacOS (Intel): 0x4a29f0
     * @note[short] Windows: 0x5ac350
     * @note[short] Android
     */
    void updateItemVisibility();
    cocos2d::CCArray* m_freeModeObjects;
    cocos2d::CCArray* m_cameraSettingsObjects;
    Slider* m_cameraEasingSlider;
    cocos2d::CCLabelBMFont* m_cameraEasingLabel;
    int m_cameraEasing;
    Slider* m_cameraPaddingSlider;
    cocos2d::CCLabelBMFont* m_cameraPaddingLabel;
    float m_cameraPadding;
    bool m_freeMode;
    bool m_cameraSettingsEnabled;
    bool m_cameraModeObjects;
};
