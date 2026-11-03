#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupCameraGuidePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupCameraGuidePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupCameraGuidePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupCameraGuidePopup();

    /**
     * @note[short] Windows: 0x6071e0
     * @note[short] Android
     */
    static SetupCameraGuidePopup* create(CameraTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x6072f0
     * @note[short] Android
     */
    bool init(CameraTriggerGameObject* object, cocos2d::CCArray* objects);
};
