#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraRotatePopup2 : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraRotatePopup2";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraRotatePopup2, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraRotatePopup2();

    /**
     * @note[short] Windows: 0x5af100
     * @note[short] Android
     */
    static SetupCameraRotatePopup2* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
