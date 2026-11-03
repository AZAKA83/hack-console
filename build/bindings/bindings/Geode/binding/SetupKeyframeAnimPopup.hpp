#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupKeyframeAnimPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupKeyframeAnimPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupKeyframeAnimPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x5b99a0
     * @note[short] iOS: 0x248ac0
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupKeyframeAnimPopup();

    /**
     * @note[short] Windows: 0x5b9b60
     * @note[short] Android
     */
    static SetupKeyframeAnimPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x434a24
     * @note[short] Windows: 0x5b9c70
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
