#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAdvFollowRetargetPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowRetargetPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowRetargetPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAdvFollowRetargetPopup();

    /**
     * @note[short] Windows: 0x59f820
     * @note[short] Android
     */
    static SetupAdvFollowRetargetPopup* create(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x28b508
     * @note[short] MacOS (Intel): 0x2f6730
     * @note[short] Windows: 0x59cb00
     * @note[short] iOS: 0x6d66c
     * @note[short] Android
     */
    virtual void updateDefaultTriggerValues();

    /**
     * @note[short] MacOS (ARM): 0x28b6a8
     * @note[short] MacOS (Intel): 0x2f6870
     * @note[short] Windows: 0x5a0040
     * @note[short] iOS: 0x6d7cc
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x59f930
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);
};
