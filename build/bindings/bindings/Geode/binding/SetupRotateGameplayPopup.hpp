#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRotateGameplayPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotateGameplayPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotateGameplayPopup, SetupTriggerPopup)

    /**
     * @note[short] MacOS (ARM): Out of line
     * @note[short] MacOS (Intel): Out of line
     * @note[short] Windows: Out of line
     * @note[short] iOS: Out of line
     * @note[short] Android: Out of line
     */
     SetupRotateGameplayPopup();

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRotateGameplayPopup();

    /**
     * @note[short] Windows: Out of line
     * @note[short] Android
     */
    static SetupRotateGameplayPopup* create(RotateGameplayGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x76e92c
     * @note[short] MacOS (Intel): 0x878d60
     * @note[short] Windows: 0x5d6f70
     * @note[short] iOS: 0x233c58
     * @note[short] Android
     */
    virtual void onPlusButton(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x76e9c8
     * @note[short] MacOS (Intel): 0x878e10
     * @note[short] Windows: 0x5d70f0
     * @note[short] iOS: 0x233ccc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] MacOS (ARM): 0x76e04c
     * @note[short] Windows: 0x5d65a0
     * @note[short] Android
     */
    bool init(RotateGameplayGameObject* object, cocos2d::CCArray* objects);
};
