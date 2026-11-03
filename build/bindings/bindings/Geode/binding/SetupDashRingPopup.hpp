#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupDashRingPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupDashRingPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupDashRingPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupDashRingPopup();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupDashRingPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupDashRingPopup* create(DashRingObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x500db4
     * @note[short] Windows: 0x60a580
     * @note[short] Android
     */
    bool init(DashRingObject* object, cocos2d::CCArray* objects);
};
