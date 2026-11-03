#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupForceBlockPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupForceBlockPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupForceBlockPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupForceBlockPopup();

    /**
     * @note[short] Windows: 0x6078c0
     * @note[short] Android
     */
    static SetupForceBlockPopup* create(ForceBlockGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x4ff2fc
     * @note[short] MacOS (Intel): 0x5b1850
     * @note[short] Windows: 0x6080f0
     * @note[short] iOS: 0x4916c8
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x19c78
     * @note[short] Windows: 0x6079d0
     * @note[short] Android
     */
    bool init(ForceBlockGameObject* object, cocos2d::CCArray* objects);
};
