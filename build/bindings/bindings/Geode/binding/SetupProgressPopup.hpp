#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupProgressPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupProgressPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupProgressPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupProgressPopup();

    /**
     * @note[short] Android
     */
    static SetupProgressPopup* create(ProgressGameObject* p0, cocos2d::CCArray* p1);

    /**
     * @note[short] MacOS (ARM): 0x500c74
     * @note[short] MacOS (Intel): 0x5b33e0
     * @note[short] Windows: 0x60a510
     * @note[short] iOS: 0x492dc8
     * @note[short] Android
     */
    virtual void valueDidChange(int p0, float p1);

    /**
     * @note[short] Android
     */
    bool init(ProgressGameObject* p0, cocos2d::CCArray* p1);
};
