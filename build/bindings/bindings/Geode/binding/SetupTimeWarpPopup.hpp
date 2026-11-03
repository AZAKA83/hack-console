#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTimeWarpPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTimeWarpPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTimeWarpPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5f93d0
     * @note[short] iOS: 0x1c6648
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTimeWarpPopup();

    /**
     * @note[short] Windows: 0x5f94a0
     * @note[short] Android
     */
    static SetupTimeWarpPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x45dedc
     * @note[short] MacOS (Intel): 0x501f40
     * @note[short] Windows: 0x5f9a70
     * @note[short] iOS: 0x1c6b8c
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x45e02c
     * @note[short] MacOS (Intel): 0x5020d0
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x1c6cc8
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45d990
     * @note[short] Windows: 0x5f95c0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x45ddb0
     * @note[short] MacOS (Intel): 0x501de0
     * @note[short] Windows: 0x5f9b80
     * @note[short] Android
     */
    void sliderChanged(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x45dfc0
     * @note[short] MacOS (Intel): 0x502040
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    void updateTimeWarp();

    /**
     * @note[short] MacOS (ARM): 0x45de8c
     * @note[short] MacOS (Intel): 0x501ef0
     * @note[short] Windows: 0x5f9c50
     * @note[short] Android
     */
    void updateTimeWarpLabel();
    cocos2d::CCLabelBMFont* m_timeWarpLabel;
    Slider* m_timeWarpSlider;
    float m_timeWarpMod;
};
