#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class EditTriggersPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "EditTriggersPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(EditTriggersPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x398df0
     * @note[short] iOS: 0x370ca0
     * @note[short] Android: Rebinded
     */
    virtual  ~EditTriggersPopup();

    /**
     * @note[short] Windows: 0x399f00
     * @note[short] Android
     */
    static EditTriggersPopup* create(EffectGameObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x22ad3c
     * @note[short] MacOS (Intel): 0x285cd0
     * @note[short] Windows: 0x39a380
     * @note[short] iOS: 0x371014
     * @note[short] Android
     */
    virtual void determineStartValues();

    /**
     * @note[short] MacOS (ARM): 0x22ad40
     * @note[short] MacOS (Intel): 0x285ce0
     * @note[short] Windows: 0x39a390
     * @note[short] iOS: 0x371018
     * @note[short] Android
     */
    virtual void onClose(cocos2d::CCObject* sender);

    /**
     * @note[short] MacOS (ARM): 0x22aa58
     * @note[short] Windows: 0x39a010
     * @note[short] Android
     */
    bool init(EffectGameObject* object, cocos2d::CCArray* objects);
};
