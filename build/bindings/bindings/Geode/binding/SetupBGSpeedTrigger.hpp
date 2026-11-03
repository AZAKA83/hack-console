#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupBGSpeedTrigger : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupBGSpeedTrigger";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupBGSpeedTrigger, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5bc690
     * @note[short] iOS: 0x38f6f4
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupBGSpeedTrigger();

    /**
     * @note[short] Windows: 0x5be000
     * @note[short] Android
     */
    static SetupBGSpeedTrigger* create(EffectGameObject* object, cocos2d::CCArray* objects, int id);

    /**
     * @note[short] MacOS (ARM): 0x467814
     * @note[short] Windows: 0x5be120
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, int id);
};
