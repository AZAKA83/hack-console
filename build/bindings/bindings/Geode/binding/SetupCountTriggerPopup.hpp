#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCountTriggerPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCountTriggerPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCountTriggerPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b1500
     * @note[short] iOS: 0x119120
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCountTriggerPopup();

    /**
     * @note[short] Windows: 0x5b15d0
     * @note[short] Android
     */
    static SetupCountTriggerPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x24b154
     * @note[short] MacOS (Intel): 0x2a9970
     * @note[short] Windows: 0x5b1d30
     * @note[short] iOS: 0x11967c
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] MacOS (ARM): 0x850824
     * @note[short] Windows: 0x5b16e0
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
