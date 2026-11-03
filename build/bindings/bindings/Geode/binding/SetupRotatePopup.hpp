#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupRotatePopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupRotatePopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupRotatePopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupRotatePopup();

    /**
     * @note[short] Windows: 0x5d7ab0
     * @note[short] Android
     */
    static SetupRotatePopup* create(EnhancedGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x5a6200
     * @note[short] MacOS (Intel): 0x66e890
     * @note[short] Windows: 0x5d8120
     * @note[short] iOS: 0x305f30
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x5a627c
     * @note[short] MacOS (Intel): 0x66e910
     * @note[short] Windows: 0x5d81c0
     * @note[short] iOS: 0x305fac
     * @note[short] Android
     */
    virtual void onCustomToggleTriggerValue(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x4d46e4
     * @note[short] Windows: 0x5d7bc0
     * @note[short] Android
     */
    bool init(EnhancedGameObject* object, cocos2d::CCArray* objects);
};
