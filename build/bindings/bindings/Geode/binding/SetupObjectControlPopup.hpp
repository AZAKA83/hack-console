#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupObjectControlPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupObjectControlPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupObjectControlPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupObjectControlPopup();

    /**
     * @note[short] Windows: 0x609970
     * @note[short] Android
     */
    static SetupObjectControlPopup* create(ObjectControlGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] Windows: 0x609a80
     * @note[short] Android
     */
    bool init(ObjectControlGameObject* object, cocos2d::CCArray* objects);
};
