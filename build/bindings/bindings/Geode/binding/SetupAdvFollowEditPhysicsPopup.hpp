#pragma once
#include <Geode/platform/platform.hpp>
#include <Geode/GeneratedPredeclare.hpp>
#include <Geode/Enums.hpp>

#include <Geode/binding/SetupTriggerPopup.hpp>

class SetupAdvFollowEditPhysicsPopup : public SetupTriggerPopup {
public:
    static constexpr auto CLASS_NAME = "SetupAdvFollowEditPhysicsPopup";
    GEODE_CUSTOM_CONSTRUCTOR_GD(SetupAdvFollowEditPhysicsPopup, SetupTriggerPopup)

    /**
     * @note[short] Windows: 0x60ac50
     * @note[short] Android: Rebinded
     */
    virtual  ~SetupAdvFollowEditPhysicsPopup();

    /**
     * @note[short] Android
     */
    static SetupAdvFollowEditPhysicsPopup* create(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);

    /**
     * @note[short] MacOS (ARM): 0x28ae10
     * @note[short] MacOS (Intel): 0x2f5f80
     * @note[short] Windows: 0x59f6f0
     * @note[short] iOS: 0x6d03c
     * @note[short] Android
     */
    virtual void valueDidChange(int tag, float value);

    /**
     * @note[short] Windows: 0x59e890
     * @note[short] Android
     */
    bool init(AdvancedFollowEditObject* object, cocos2d::CCArray* objects);
};
