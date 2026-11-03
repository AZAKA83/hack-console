#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupShaderEffectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupShaderEffectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupShaderEffectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupShaderEffectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] iOS: 0x214c54
     * @note[short] Android: Rebinded
     */
     ~SetupShaderEffectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupShaderEffectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x25da6c
     * @note[short] MacOS (Intel): 0x2bd650
     * @note[short] Windows: 0x5ea290
     * @note[short] iOS: 0x21cff0
     * @note[short] Android
     */
    virtual void toggleGroup(int group, bool visible);

    /**
     * @note[short] MacOS (ARM): 0x25daac
     * @note[short] MacOS (Intel): 0x2bd690
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x21d030
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25d14c
     * @note[short] MacOS (Intel): 0x2bcde0
     * @note[short] Windows: 0x5dfcc0
     * @note[short] iOS: 0x21c9d4
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x25d73c
     * @note[short] MacOS (Intel): 0x2bd320
     * @note[short] Windows: 0x5e9e60
     * @note[short] iOS: 0x21cd58
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x253ef4
     * @note[short] MacOS (Intel): 0x2b2de0
     * @note[short] Windows: 0x5df9d0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x72a8
     * @note[short] MacOS (Intel): 0x2bd2a0
     * @note[short] Windows: 0x5e97c0
     * @note[short] Android
     */
    void onResetColors(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x25d48c
     * @note[short] MacOS (Intel): 0x2bd050
     * @note[short] Windows: 0x5e07b0
     * @note[short] Android
     */
    void onZLayer(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x259a90
     * @note[short] Windows: 0x5e69f0
     * @note[short] Android
     */
    void setupBulge();

    /**
     * @note[short] MacOS (ARM): 0x256a1c
     * @note[short] Windows: 0x5e34e0
     * @note[short] Android
     */
    void setupChromatic();

    /**
     * @note[short] MacOS (ARM): 0x256f78
     * @note[short] MacOS (Intel): 0x2b6440
     * @note[short] Windows: 0x5e3a60
     * @note[short] Android
     */
    void setupChromaticGlitch();

    /**
     * @note[short] MacOS (ARM): 0x25be10
     * @note[short] MacOS (Intel): 0x2bba00
     * @note[short] Windows: 0x5e90e0
     * @note[short] Android
     */
    void setupColorChange();

    /**
     * @note[short] MacOS (ARM): 0x2563bc
     * @note[short] MacOS (Intel): 0x2b5850
     * @note[short] Windows: 0x5e2e60
     * @note[short] Android
     */
    void setupGlitch();

    /**
     * @note[short] MacOS (ARM): 0x25ad70
     * @note[short] MacOS (Intel): 0x2ba900
     * @note[short] Windows: 0x5e7f00
     * @note[short] Android
     */
    void setupGrayscale();

    /**
     * @note[short] MacOS (ARM): 0x25bb08
     * @note[short] MacOS (Intel): 0x2bb6f0
     * @note[short] Windows: 0x5e8d90
     * @note[short] Android
     */
    void setupHueShift();

    /**
     * @note[short] MacOS (ARM): 0x25b4ec
     * @note[short] MacOS (Intel): 0x2bb0a0
     * @note[short] Windows: 0x5e8730
     * @note[short] Android
     */
    void setupInvertColor();

    /**
     * @note[short] MacOS (ARM): 0x257da4
     * @note[short] Windows: 0x5e49b0
     * @note[short] Android
     */
    void setupLensCircle();

    /**
     * @note[short] MacOS (ARM): 0x258f9c
     * @note[short] Windows: 0x5e5e30
     * @note[short] Android
     */
    void setupMotionBlur();

    /**
     * @note[short] MacOS (ARM): 0x25a2b8
     * @note[short] Windows: 0x5e7320
     * @note[short] Android
     */
    void setupPinch();

    /**
     * @note[short] MacOS (ARM): 0x257724
     * @note[short] Windows: 0x5e4310
     * @note[short] Android
     */
    void setupPixelate();

    /**
     * @note[short] MacOS (ARM): 0x25864c
     * @note[short] Windows: 0x5e5390
     * @note[short] Android
     */
    void setupRadialBlur();

    /**
     * @note[short] MacOS (ARM): 0x25b200
     * @note[short] MacOS (Intel): 0x2bade0
     * @note[short] Windows: 0x5e8400
     * @note[short] Android
     */
    void setupSepia();

    /**
     * @note[short] MacOS (ARM): 0x25c908
     * @note[short] MacOS (Intel): 0x2bc530
     * @note[short] Windows: 0x5dfdb0
     * @note[short] Android
     */
    void setupShaderTrigger();

    /**
     * @note[short] MacOS (ARM): 0x2552ec
     * @note[short] Windows: 0x5e1c50
     * @note[short] Android
     */
    void setupShockLine();

    /**
     * @note[short] MacOS (ARM): 0x25415c
     * @note[short] Windows: 0x5e0930
     * @note[short] Android
     */
    void setupShockWave();

    /**
     * @note[short] MacOS (ARM): 0x25c458
     * @note[short] MacOS (Intel): 0x2bc090
     * @note[short] Windows: 0x5e9980
     * @note[short] Android
     */
    void setupSplitScreen();

    /**
     * @note[short] MacOS (ARM): 0x25d610
     * @note[short] MacOS (Intel): 0x2bd1e0
     * @note[short] Windows: 0x5e0880
     * @note[short] Android
     */
    void updateZLayerButtons();

    /**
     * @note[short] MacOS (ARM): 0x25d2ec
     * @note[short] MacOS (Intel): 0x2bcf20
     * @note[short] Windows: 0x5e04c0
     * @note[short] Android
     */
    std::string zLayerToString(int zLayer);
    cocos2d::CCArray* m_zLayerSprites;
    int m_zLayerMin;
    int m_zLayerMax;
    bool m_changeMin;
    int m_objectID;
};
