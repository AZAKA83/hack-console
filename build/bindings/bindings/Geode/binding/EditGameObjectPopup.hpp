#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class EditGameObjectPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditGameObjectPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditGameObjectPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     EditGameObjectPopup();

    /**
     * @note[short] Windows: 0x399750
     * @note[short] iOS: 0x37aa80
     * @note[short] Android: Rebinded
     */
    virtual  ~EditGameObjectPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static EditGameObjectPopup* create(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);

    /**
     * @note[short] MacOS (ARM): 0x23b490
     * @note[short] MacOS (Intel): 0x297810
     * @note[short] Windows: 0x3a5100
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects, bool platformer);
};
