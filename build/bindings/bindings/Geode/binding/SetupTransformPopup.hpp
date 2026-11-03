#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupTransformPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupTransformPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupTransformPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupTransformPopup();

    /**
     * @note[short] Windows: 0x5faf20
     * @note[short] Android
     */
    static SetupTransformPopup* create(TransformTriggerGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x30fe94
     * @note[short] Windows: 0x5fb030
     * @note[short] Android
     */
    bool init(TransformTriggerGameObject* object, cocos2d::CCArray* objects);
};
