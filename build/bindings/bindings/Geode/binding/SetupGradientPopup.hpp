#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupGradientPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupGradientPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupGradientPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupGradientPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x3e0dd4
     * @note[short] Android: Rebinded
     */
     ~SetupGradientPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupGradientPopup* create(GradientTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5de418
     * @note[short] MacOS (Intel): 0x6c5eb0
     * @note[short] Windows: 0x5b7120
     * @note[short] iOS: 0x3e1e28
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x5de544
     * @note[short] MacOS (Intel): 0x6c5fd0
     * @note[short] Windows: 0x5b7230
     * @note[short] iOS: 0x3e1f38
     * @note[short] Android
     */
    virtual void updateToggleItem(int value, bool toggled);

    /**
     * @note[short] MacOS (ARM): 0x5de6f4
     * @note[short] MacOS (Intel): 0x6c6190
     * @note[short] Windows: 0x5b7650
     * @note[short] iOS: 0x3e1ff0
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x5b5f80
     * @note[short] Android
     */
    bool init(GradientTriggerObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5de16c
     * @note[short] MacOS (Intel): 0x6c5be0
     * @note[short] Windows: 0x5b7500
     * @note[short] Android
     */
    void onBlending(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5de29c
     * @note[short] MacOS (Intel): 0x6c5d00
     * @note[short] Windows: 0x5b73e0
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5de654
     * @note[short] MacOS (Intel): 0x6c60f0
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5de684
     * @note[short] MacOS (Intel): 0x6c6110
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateBlending();

    /**
     * @note[short] MacOS (ARM): 0x5de0b8
     * @note[short] MacOS (Intel): 0x6c5b50
     * @note[short] Windows: 0x5b75c0
     * @note[short] Android
     */
    void updateBlendingLabel();

    /**
     * @note[short] MacOS (ARM): 0x5ddfb8
     * @note[short] MacOS (Intel): 0x6c5a40
     * @note[short] Windows: 0x5b72d0
     * @note[short] Android
     */
    void updateGradientLabels(bool vertex);

    /**
     * @note[short] MacOS (ARM): 0x5de388
     * @note[short] MacOS (Intel): 0x6c5e10
     * @note[short] Windows: 0x5b7470
     * @note[short] Android
     */
    void updateZLayerButtons();
    cocos2d::CCLabelBMFont* m_blendingLabel;
    int m_blendingMode;
    cocos2d::CCArray* m_layerButtons;
    int m_blendingLayer;
    cocos2d::CCArray* m_gradientLabels;
};
